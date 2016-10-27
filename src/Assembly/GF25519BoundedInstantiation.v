Require Import Coq.ZArith.ZArith.
Require Import Crypto.Assembly.PhoasCommon.
Require Import Crypto.Assembly.QhasmCommon.
Require Import Crypto.Assembly.Compile.
Require Import Crypto.Assembly.LL.
Require Import Crypto.Assembly.GF25519.
Require Import Crypto.Specific.GF25519.
Require Import Crypto.Specific.GF25519BoundedCommonWord.
Require Import Crypto.Util.Tactics.
Require Import Crypto.Util.LetIn.
Require Import Crypto.Util.Tuple.

(* Totally fine to edit these definitions; DO NOT change the type signatures at all *)
Section Operations.
  Import Assembly.GF25519.GF25519.
  Definition wfe: Type := @interp_type (word bits) FE.

  Definition ExprBinOp : Type := GF25519.Binary.
  Definition ExprUnOp : Type := GF25519.Unary.
  Axiom ExprUnOpFEToZ : Type.
  Axiom ExprUnOpWireToFE : Type.
  Axiom ExprUnOpFEToWire : Type.

  Local Existing Instance WordEvaluable.

  Definition interp_bexpr' (op: ExprBinOp) (x y: tuple (word bits) 10): tuple (word bits) 10 :=
    let '(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9) := x in
    let '(y0, y1, y2, y3, y4, y5, y6, y7, y8, y9) := y in
    op x0 x1 x2 x3 x4 x5 x6 x7 x8 x9 y0 y1 y2 y3 y4 y5 y6 y7 y8 y9.

  Definition interp_uexpr' (op: ExprUnOp) (x: tuple (word bits) 10): tuple (word bits) 10 :=
    let '(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9) := x in
    op x0 x1 x2 x3 x4 x5 x6 x7 x8 x9.

  Definition radd : ExprBinOp := GF25519.add.
  Definition rsub : ExprBinOp := GF25519.sub.
  Definition rmul : ExprBinOp := GF25519.mul.
  Definition ropp : ExprUnOp := GF25519.opp.
End Operations.

Definition interp_bexpr : ExprBinOp -> Specific.GF25519BoundedCommonWord.fe25519W -> Specific.GF25519BoundedCommonWord.fe25519W -> Specific.GF25519BoundedCommonWord.fe25519W
  := interp_bexpr'.
Definition interp_uexpr : ExprUnOp -> Specific.GF25519BoundedCommonWord.fe25519W -> Specific.GF25519BoundedCommonWord.fe25519W
  := interp_uexpr'.
Axiom interp_uexpr_FEToZ : ExprUnOpFEToZ -> Specific.GF25519BoundedCommonWord.fe25519W -> Specific.GF25519BoundedCommonWord.word64.
Axiom interp_uexpr_FEToWire : ExprUnOpFEToWire -> Specific.GF25519BoundedCommonWord.fe25519W -> Specific.GF25519BoundedCommonWord.wire_digitsW.
Axiom interp_uexpr_WireToFE : ExprUnOpWireToFE -> Specific.GF25519BoundedCommonWord.wire_digitsW -> Specific.GF25519BoundedCommonWord.fe25519W.
Axiom rfreeze : ExprUnOp.
Axiom rge_modulus : ExprUnOpFEToZ.
Axiom rpack : ExprUnOpFEToWire.
Axiom runpack : ExprUnOpWireToFE.

Declare Reduction asm_interp
  := cbv [id
            interp_bexpr interp_uexpr interp_bexpr' interp_uexpr'
            radd rsub rmul ropp (*rfreeze rge_modulus rpack runpack*)
            GF25519.GF25519.add GF25519.GF25519.sub GF25519.GF25519.mul GF25519.GF25519.opp (* GF25519.GF25519.freeze *)
            GF25519.GF25519.bits GF25519.GF25519.FE
            QhasmCommon.liftN QhasmCommon.NArgMap Compile.CompileHL.compile LL.LL.under_lets LL.LL.interp LL.LL.interp_arg LL.LL.match_arg_Prod Conversions.LLConversions.convertExpr Conversions.LLConversions.convertArg Conversions.LLConversions.convertVar PhoasCommon.type_rect PhoasCommon.type_rec PhoasCommon.type_ind PhoasCommon.interp_binop LL.LL.uninterp_arg
            Evaluables.ezero Evaluables.toT Evaluables.fromT Evaluables.eadd Evaluables.esub Evaluables.emul Evaluables.eshiftr Evaluables.eand Evaluables.eltb Evaluables.eeqb
            Evaluables.WordEvaluable Evaluables.ZEvaluable].

Definition interp_radd : Specific.GF25519BoundedCommonWord.fe25519W -> Specific.GF25519BoundedCommonWord.fe25519W -> Specific.GF25519BoundedCommonWord.fe25519W
  := Eval asm_interp in interp_bexpr radd.
Print interp_radd.
Definition interp_radd_correct : interp_radd = interp_bexpr radd := eq_refl.
Definition interp_rsub : Specific.GF25519BoundedCommonWord.fe25519W -> Specific.GF25519BoundedCommonWord.fe25519W -> Specific.GF25519BoundedCommonWord.fe25519W
  := Eval asm_interp in interp_bexpr rsub.
Print interp_rsub.
Definition interp_rsub_correct : interp_rsub = interp_bexpr rsub := eq_refl.
Definition interp_rmul : Specific.GF25519BoundedCommonWord.fe25519W -> Specific.GF25519BoundedCommonWord.fe25519W -> Specific.GF25519BoundedCommonWord.fe25519W
  := Eval asm_interp in interp_bexpr rmul.
Print interp_rmul.
Definition interp_rmul_correct : interp_rmul = interp_bexpr rmul := eq_refl.
Definition interp_ropp : Specific.GF25519BoundedCommonWord.fe25519W -> Specific.GF25519BoundedCommonWord.fe25519W
  := Eval asm_interp in interp_uexpr ropp.
Print interp_ropp.
Definition interp_ropp_correct : interp_ropp = interp_uexpr ropp := eq_refl.
Definition interp_rfreeze : Specific.GF25519BoundedCommonWord.fe25519W -> Specific.GF25519BoundedCommonWord.fe25519W
  := Eval asm_interp in interp_uexpr rfreeze.
Print interp_rfreeze.
Definition interp_rfreeze_correct : interp_rfreeze = interp_uexpr rfreeze := eq_refl.

Definition interp_rge_modulus : Specific.GF25519BoundedCommonWord.fe25519W -> Specific.GF25519BoundedCommonWord.word64
  := Eval asm_interp in interp_uexpr_FEToZ rge_modulus.
Definition interp_rge_modulus_correct : interp_rge_modulus = interp_uexpr_FEToZ rge_modulus := eq_refl.

Definition interp_rpack : Specific.GF25519BoundedCommonWord.fe25519W -> Specific.GF25519BoundedCommonWord.wire_digitsW
  := Eval asm_interp in interp_uexpr_FEToWire rpack.
Definition interp_rpack_correct : interp_rpack = interp_uexpr_FEToWire rpack := eq_refl.

Definition interp_runpack : Specific.GF25519BoundedCommonWord.wire_digitsW -> Specific.GF25519BoundedCommonWord.fe25519W
  := Eval asm_interp in interp_uexpr_WireToFE runpack.
Definition interp_runpack_correct : interp_runpack = interp_uexpr_WireToFE runpack := eq_refl.

Local Notation binop_correct_and_bounded rop op
  := (ibinop_correct_and_bounded (interp_bexpr rop) op) (only parsing).
Local Notation unop_correct_and_bounded rop op
  := (iunop_correct_and_bounded (interp_uexpr rop) op) (only parsing).
Local Notation unop_FEToZ_correct rop op
  := (iunop_FEToZ_correct (interp_uexpr_FEToZ rop) op) (only parsing).
Local Notation unop_FEToWire_correct_and_bounded rop op
  := (iunop_FEToWire_correct_and_bounded (interp_uexpr_FEToWire rop) op) (only parsing).
Local Notation unop_WireToFE_correct_and_bounded rop op
  := (iunop_WireToFE_correct_and_bounded (interp_uexpr_WireToFE rop) op) (only parsing).

Local Ltac start_correct_and_bounded_t op op_expr lem :=
  intros; hnf in *; destruct_head' prod; simpl in * |- ;
  repeat match goal with H : is_bounded _ = true |- _ => unfold_is_bounded_in H end;
  repeat match goal with H : wire_digits_is_bounded _ = true |- _ => unfold_is_bounded_in H end;
  change op with op_expr;
  rewrite <- lem.

Lemma radd_correct_and_bounded : binop_correct_and_bounded radd carry_add.
Proof.
  intros; hnf in *; destruct_head' prod; simpl in * |- .
  repeat match goal with H : is_bounded _ = true |- _ => unfold_is_bounded_in H end.
Admitted.
Lemma rsub_correct_and_bounded : binop_correct_and_bounded rsub carry_sub.
Proof.
Admitted.
Lemma rmul_correct_and_bounded : binop_correct_and_bounded rmul mul.
Proof.
Admitted.
Lemma ropp_correct_and_bounded : unop_correct_and_bounded ropp carry_opp.
Proof.
Admitted.
Lemma rfreeze_correct_and_bounded : unop_correct_and_bounded rfreeze freeze.
Proof.
Admitted.
Lemma rge_modulus_correct_and_bounded : unop_FEToZ_correct rge_modulus ge_modulus.
Proof.
Admitted.
Lemma rpack_correct_and_bounded : unop_FEToWire_correct_and_bounded rpack pack.
Proof.
Admitted.
Lemma runpack_correct_and_bounded : unop_WireToFE_correct_and_bounded runpack unpack.
Proof.
Admitted.
