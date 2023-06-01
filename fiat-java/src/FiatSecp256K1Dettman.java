/* Autogenerated: 'src/ExtractionOCaml/dettman_multiplication' --lang Java --cmovznz-by-mul --widen-carry --widen-bytes --internal-static --package-name fiat_crypto --class-case UpperCamelCase --no-field-element-typedefs Secp256K1Dettman 32 10 22 '2^256 - 4294968273' mul32 square32 */
/* curve description: Secp256K1Dettman */
/* machine_wordsize = 32 (from "32") */
/* requested operations: mul32, square32 */
/* n = 10 (from "10") */
/* last_limb_width = 22 (from "22") */
/* s-c = 2^256 - [(1, 4294968273)] (from "2^256 - 4294968273") */
/* inbounds_multiplier: None (from "") */
/*  */
/* Computed values: */
/*  */
/*  */

package fiat_crypto;

public final class FiatSecp256K1Dettman {

static class Box<T> {
  private T value;
  public Box(T value) { this.value = value; }
  public void set(T value) { this.value = value; }
  public T get() { return this.value; }
}



/**
 * The function fiat_Secp256K1Dettman_mul32 multiplies two field elements. <p>
 * <p>
 * Postconditions: <p>
 *   eval out1 mod 115792089237316195423570985008687907853269984665640564039457584007908834671663 = (eval arg1 * eval arg2) mod 115792089237316195423570985008687907853269984665640564039457584007908834671663 <p>
 * <p>
 * Input Bounds: <p>
 *   arg1: [[0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7ffffe]] <p>
 *   arg2: [[0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7ffffe]] <p>
 * Output Bounds: <p>
 *   out1: [[0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x5fffff]] <p>
 */
public static void fiat_Secp256K1Dettman_mul32(int[] out1, final int[] arg1, final int[] arg2) {
  long x1 = (((long) Integer.toUnsignedLong(((Number) ((arg1[8]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[9]))).intValue())) + ((long) Integer.toUnsignedLong(((Number) ((arg1[9]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[8]))).intValue())));
  int x2 = (int) Integer.toUnsignedLong(((Number) ((x1 >>> 26))).intValue());
  int x3 = ((int) Integer.toUnsignedLong(((Number) (x1)).intValue()) & 0x3ffffff);
  long x4 = ((((long) Integer.toUnsignedLong(((Number) ((arg1[0]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[7]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[1]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[6]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[2]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[5]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[3]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[4]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[4]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[3]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[5]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[2]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[6]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[1]))).intValue())) + ((long) Integer.toUnsignedLong(((Number) ((arg1[7]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[0]))).intValue()))))))))) + ((long) Integer.toUnsignedLong(((Number) (x3)).intValue()) * (long) Integer.toUnsignedLong(((Number) (0x3d10)).intValue())));
  int x5 = (int) Integer.toUnsignedLong(((Number) ((x4 >>> 26))).intValue());
  int x6 = ((int) Integer.toUnsignedLong(((Number) (x4)).intValue()) & 0x3ffffff);
  long x7 = ((long) Integer.toUnsignedLong(((Number) (x2)).intValue()) + ((long) Integer.toUnsignedLong(((Number) ((arg1[9]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[9]))).intValue())));
  int x8 = (int) Integer.toUnsignedLong(((Number) ((x7 >>> 32))).intValue());
  long x9 = (((long) Integer.toUnsignedLong(((Number) (x5)).intValue()) + ((((long) Integer.toUnsignedLong(((Number) ((arg1[0]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[8]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[1]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[7]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[2]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[6]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[3]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[5]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[4]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[4]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[5]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[3]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[6]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[2]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[7]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[1]))).intValue())) + ((long) Integer.toUnsignedLong(((Number) ((arg1[8]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[0]))).intValue())))))))))) + ((long) Integer.toUnsignedLong(((Number) (x3)).intValue()) << 10))) + ((long) Integer.toUnsignedLong(((Number) ((int) Integer.toUnsignedLong(((Number) (x7)).intValue()))).intValue()) * (long) Integer.toUnsignedLong(((Number) (0x3d10)).intValue())));
  int x10 = (int) Integer.toUnsignedLong(((Number) ((x9 >>> 26))).intValue());
  int x11 = ((int) Integer.toUnsignedLong(((Number) (x9)).intValue()) & 0x3ffffff);
  long x12 = (((long) Integer.toUnsignedLong(((Number) (x10)).intValue()) + ((((long) Integer.toUnsignedLong(((Number) ((arg1[0]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[9]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[1]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[8]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[2]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[7]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[3]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[6]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[4]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[5]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[5]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[4]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[6]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[3]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[7]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[2]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[8]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[1]))).intValue())) + ((long) Integer.toUnsignedLong(((Number) ((arg1[9]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[0]))).intValue()))))))))))) + ((long) Integer.toUnsignedLong(((Number) ((int) Integer.toUnsignedLong(((Number) (x7)).intValue()))).intValue()) << 10))) + ((long) Integer.toUnsignedLong(((Number) (x8)).intValue()) * (long) Integer.toUnsignedLong(((Number) (0xf4400)).intValue())));
  int x13 = (int) Integer.toUnsignedLong(((Number) ((x12 >>> 26))).intValue());
  int x14 = ((int) Integer.toUnsignedLong(((Number) (x12)).intValue()) & 0x3ffffff);
  int x15 = (x14 >>> 22);
  int x16 = (x14 & 0x3fffff);
  long x17 = ((long) Integer.toUnsignedLong(((Number) (x13)).intValue()) + ((((long) Integer.toUnsignedLong(((Number) ((arg1[1]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[9]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[2]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[8]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[3]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[7]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[4]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[6]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[5]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[5]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[6]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[4]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[7]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[3]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[8]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[2]))).intValue())) + ((long) Integer.toUnsignedLong(((Number) ((arg1[9]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[1]))).intValue())))))))))) + (long) Integer.toUnsignedLong(((Number) ((x8 << 16))).intValue())));
  int x18 = (int) Integer.toUnsignedLong(((Number) ((x17 >>> 26))).intValue());
  int x19 = ((int) Integer.toUnsignedLong(((Number) (x17)).intValue()) & 0x3ffffff);
  long x20 = (((long) Integer.toUnsignedLong(((Number) ((arg1[0]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[0]))).intValue())) + ((long) Integer.toUnsignedLong(((Number) ((x15 + (x19 << 4)))).intValue()) * (long) Integer.toUnsignedLong(((Number) (0x3d1)).intValue())));
  int x21 = (int) Integer.toUnsignedLong(((Number) ((x20 >>> 26))).intValue());
  int x22 = ((int) Integer.toUnsignedLong(((Number) (x20)).intValue()) & 0x3ffffff);
  long x23 = ((long) Integer.toUnsignedLong(((Number) (x18)).intValue()) + (((long) Integer.toUnsignedLong(((Number) ((arg1[2]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[9]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[3]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[8]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[4]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[7]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[5]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[6]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[6]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[5]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[7]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[4]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[8]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[3]))).intValue())) + ((long) Integer.toUnsignedLong(((Number) ((arg1[9]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[2]))).intValue()))))))))));
  int x24 = (int) Integer.toUnsignedLong(((Number) ((x23 >>> 26))).intValue());
  int x25 = ((int) Integer.toUnsignedLong(((Number) (x23)).intValue()) & 0x3ffffff);
  long x26 = (((long) Integer.toUnsignedLong(((Number) (x21)).intValue()) + ((((long) Integer.toUnsignedLong(((Number) ((arg1[0]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[1]))).intValue())) + ((long) Integer.toUnsignedLong(((Number) ((arg1[1]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[0]))).intValue()))) + ((long) Integer.toUnsignedLong(((Number) ((x15 + (x19 << 4)))).intValue()) << 6))) + ((long) Integer.toUnsignedLong(((Number) (x25)).intValue()) * (long) Integer.toUnsignedLong(((Number) (0x3d10)).intValue())));
  int x27 = (int) Integer.toUnsignedLong(((Number) ((x26 >>> 26))).intValue());
  int x28 = ((int) Integer.toUnsignedLong(((Number) (x26)).intValue()) & 0x3ffffff);
  long x29 = ((long) Integer.toUnsignedLong(((Number) (x24)).intValue()) + (((long) Integer.toUnsignedLong(((Number) ((arg1[3]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[9]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[4]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[8]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[5]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[7]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[6]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[6]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[7]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[5]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[8]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[4]))).intValue())) + ((long) Integer.toUnsignedLong(((Number) ((arg1[9]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[3]))).intValue())))))))));
  int x30 = (int) Integer.toUnsignedLong(((Number) ((x29 >>> 26))).intValue());
  int x31 = ((int) Integer.toUnsignedLong(((Number) (x29)).intValue()) & 0x3ffffff);
  long x32 = (((long) Integer.toUnsignedLong(((Number) (x27)).intValue()) + ((((long) Integer.toUnsignedLong(((Number) ((arg1[0]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[2]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[1]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[1]))).intValue())) + ((long) Integer.toUnsignedLong(((Number) ((arg1[2]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[0]))).intValue())))) + ((long) Integer.toUnsignedLong(((Number) (x25)).intValue()) << 10))) + ((long) Integer.toUnsignedLong(((Number) (x31)).intValue()) * (long) Integer.toUnsignedLong(((Number) (0x3d10)).intValue())));
  int x33 = (int) Integer.toUnsignedLong(((Number) ((x32 >>> 26))).intValue());
  int x34 = ((int) Integer.toUnsignedLong(((Number) (x32)).intValue()) & 0x3ffffff);
  long x35 = ((long) Integer.toUnsignedLong(((Number) (x30)).intValue()) + (((long) Integer.toUnsignedLong(((Number) ((arg1[4]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[9]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[5]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[8]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[6]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[7]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[7]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[6]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[8]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[5]))).intValue())) + ((long) Integer.toUnsignedLong(((Number) ((arg1[9]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[4]))).intValue()))))))));
  int x36 = (int) Integer.toUnsignedLong(((Number) ((x35 >>> 26))).intValue());
  int x37 = ((int) Integer.toUnsignedLong(((Number) (x35)).intValue()) & 0x3ffffff);
  long x38 = (((long) Integer.toUnsignedLong(((Number) (x33)).intValue()) + ((((long) Integer.toUnsignedLong(((Number) ((arg1[0]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[3]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[1]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[2]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[2]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[1]))).intValue())) + ((long) Integer.toUnsignedLong(((Number) ((arg1[3]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[0]))).intValue()))))) + ((long) Integer.toUnsignedLong(((Number) (x31)).intValue()) << 10))) + ((long) Integer.toUnsignedLong(((Number) (x37)).intValue()) * (long) Integer.toUnsignedLong(((Number) (0x3d10)).intValue())));
  int x39 = (int) Integer.toUnsignedLong(((Number) ((x38 >>> 26))).intValue());
  int x40 = ((int) Integer.toUnsignedLong(((Number) (x38)).intValue()) & 0x3ffffff);
  long x41 = ((long) Integer.toUnsignedLong(((Number) (x36)).intValue()) + (((long) Integer.toUnsignedLong(((Number) ((arg1[5]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[9]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[6]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[8]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[7]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[7]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[8]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[6]))).intValue())) + ((long) Integer.toUnsignedLong(((Number) ((arg1[9]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[5]))).intValue())))))));
  int x42 = (int) Integer.toUnsignedLong(((Number) ((x41 >>> 26))).intValue());
  int x43 = ((int) Integer.toUnsignedLong(((Number) (x41)).intValue()) & 0x3ffffff);
  long x44 = (((long) Integer.toUnsignedLong(((Number) (x39)).intValue()) + ((((long) Integer.toUnsignedLong(((Number) ((arg1[0]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[4]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[1]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[3]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[2]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[2]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[3]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[1]))).intValue())) + ((long) Integer.toUnsignedLong(((Number) ((arg1[4]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[0]))).intValue())))))) + ((long) Integer.toUnsignedLong(((Number) (x37)).intValue()) << 10))) + ((long) Integer.toUnsignedLong(((Number) (x43)).intValue()) * (long) Integer.toUnsignedLong(((Number) (0x3d10)).intValue())));
  int x45 = (int) Integer.toUnsignedLong(((Number) ((x44 >>> 26))).intValue());
  int x46 = ((int) Integer.toUnsignedLong(((Number) (x44)).intValue()) & 0x3ffffff);
  long x47 = ((long) Integer.toUnsignedLong(((Number) (x42)).intValue()) + (((long) Integer.toUnsignedLong(((Number) ((arg1[6]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[9]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[7]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[8]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[8]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[7]))).intValue())) + ((long) Integer.toUnsignedLong(((Number) ((arg1[9]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[6]))).intValue()))))));
  int x48 = (int) Integer.toUnsignedLong(((Number) ((x47 >>> 26))).intValue());
  int x49 = ((int) Integer.toUnsignedLong(((Number) (x47)).intValue()) & 0x3ffffff);
  long x50 = (((long) Integer.toUnsignedLong(((Number) (x45)).intValue()) + ((((long) Integer.toUnsignedLong(((Number) ((arg1[0]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[5]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[1]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[4]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[2]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[3]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[3]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[2]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[4]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[1]))).intValue())) + ((long) Integer.toUnsignedLong(((Number) ((arg1[5]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[0]))).intValue()))))))) + ((long) Integer.toUnsignedLong(((Number) (x43)).intValue()) << 10))) + ((long) Integer.toUnsignedLong(((Number) (x49)).intValue()) * (long) Integer.toUnsignedLong(((Number) (0x3d10)).intValue())));
  int x51 = (int) Integer.toUnsignedLong(((Number) ((x50 >>> 26))).intValue());
  int x52 = ((int) Integer.toUnsignedLong(((Number) (x50)).intValue()) & 0x3ffffff);
  long x53 = ((long) Integer.toUnsignedLong(((Number) (x48)).intValue()) + (((long) Integer.toUnsignedLong(((Number) ((arg1[7]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[9]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[8]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[8]))).intValue())) + ((long) Integer.toUnsignedLong(((Number) ((arg1[9]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[7]))).intValue())))));
  int x54 = (int) Integer.toUnsignedLong(((Number) ((x53 >>> 32))).intValue());
  long x55 = (((long) Integer.toUnsignedLong(((Number) (x51)).intValue()) + ((((long) Integer.toUnsignedLong(((Number) ((arg1[0]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[6]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[1]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[5]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[2]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[4]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[3]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[3]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[4]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[2]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) ((arg1[5]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[1]))).intValue())) + ((long) Integer.toUnsignedLong(((Number) ((arg1[6]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg2[0]))).intValue())))))))) + ((long) Integer.toUnsignedLong(((Number) (x49)).intValue()) << 10))) + ((long) Integer.toUnsignedLong(((Number) ((int) Integer.toUnsignedLong(((Number) (x53)).intValue()))).intValue()) * (long) Integer.toUnsignedLong(((Number) (0x3d10)).intValue())));
  int x56 = (int) Integer.toUnsignedLong(((Number) ((x55 >>> 26))).intValue());
  int x57 = ((int) Integer.toUnsignedLong(((Number) (x55)).intValue()) & 0x3ffffff);
  long x58 = (((long) Integer.toUnsignedLong(((Number) (x56)).intValue()) + ((long) Integer.toUnsignedLong(((Number) (x6)).intValue()) + ((long) Integer.toUnsignedLong(((Number) ((int) Integer.toUnsignedLong(((Number) (x53)).intValue()))).intValue()) << 10))) + ((long) Integer.toUnsignedLong(((Number) (x54)).intValue()) * (long) Integer.toUnsignedLong(((Number) (0xf4400)).intValue())));
  int x59 = (int) Integer.toUnsignedLong(((Number) ((x58 >>> 26))).intValue());
  int x60 = ((int) Integer.toUnsignedLong(((Number) (x58)).intValue()) & 0x3ffffff);
  long x61 = ((long) Integer.toUnsignedLong(((Number) (x59)).intValue()) + ((long) Integer.toUnsignedLong(((Number) (x11)).intValue()) + ((long) Integer.toUnsignedLong(((Number) (x54)).intValue()) << 16)));
  int x62 = (int) Integer.toUnsignedLong(((Number) ((x61 >>> 26))).intValue());
  int x63 = ((int) Integer.toUnsignedLong(((Number) (x61)).intValue()) & 0x3ffffff);
  int x64 = (x62 + x16);
  out1[0] = x22;
  out1[1] = x28;
  out1[2] = x34;
  out1[3] = x40;
  out1[4] = x46;
  out1[5] = x52;
  out1[6] = x57;
  out1[7] = x60;
  out1[8] = x63;
  out1[9] = x64;
}

/**
 * The function fiat_Secp256K1Dettman_square32 squares a field element. <p>
 * <p>
 * Postconditions: <p>
 *   eval out1 mod 115792089237316195423570985008687907853269984665640564039457584007908834671663 = (eval arg1 * eval arg1) mod 115792089237316195423570985008687907853269984665640564039457584007908834671663 <p>
 * <p>
 * Input Bounds: <p>
 *   arg1: [[0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7ffffe]] <p>
 * Output Bounds: <p>
 *   out1: [[0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x7fffffe], [0x0 ~&gt; 0x5fffff]] <p>
 */
public static void fiat_Secp256K1Dettman_square32(int[] out1, final int[] arg1) {
  int x1 = ((arg1[8]) * 0x2);
  int x2 = ((arg1[7]) * 0x2);
  int x3 = ((arg1[6]) * 0x2);
  int x4 = ((arg1[5]) * 0x2);
  int x5 = ((arg1[4]) * 0x2);
  int x6 = ((arg1[3]) * 0x2);
  int x7 = ((arg1[2]) * 0x2);
  int x8 = ((arg1[1]) * 0x2);
  int x9 = ((arg1[0]) * 0x2);
  long x10 = ((long) Integer.toUnsignedLong(((Number) (x1)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[9]))).intValue()));
  int x11 = (int) Integer.toUnsignedLong(((Number) ((x10 >>> 26))).intValue());
  int x12 = ((int) Integer.toUnsignedLong(((Number) (x10)).intValue()) & 0x3ffffff);
  long x13 = ((((long) Integer.toUnsignedLong(((Number) (x9)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[7]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) (x8)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[6]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) (x7)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[5]))).intValue())) + ((long) Integer.toUnsignedLong(((Number) (x6)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[4]))).intValue()))))) + ((long) Integer.toUnsignedLong(((Number) (x12)).intValue()) * (long) Integer.toUnsignedLong(((Number) (0x3d10)).intValue())));
  int x14 = (int) Integer.toUnsignedLong(((Number) ((x13 >>> 26))).intValue());
  int x15 = ((int) Integer.toUnsignedLong(((Number) (x13)).intValue()) & 0x3ffffff);
  long x16 = ((long) Integer.toUnsignedLong(((Number) (x11)).intValue()) + ((long) Integer.toUnsignedLong(((Number) ((arg1[9]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[9]))).intValue())));
  int x17 = (int) Integer.toUnsignedLong(((Number) ((x16 >>> 32))).intValue());
  long x18 = (((long) Integer.toUnsignedLong(((Number) (x14)).intValue()) + ((((long) Integer.toUnsignedLong(((Number) (x9)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[8]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) (x8)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[7]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) (x7)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[6]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) (x6)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[5]))).intValue())) + ((long) Integer.toUnsignedLong(((Number) ((arg1[4]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[4]))).intValue())))))) + ((long) Integer.toUnsignedLong(((Number) (x12)).intValue()) << 10))) + ((long) Integer.toUnsignedLong(((Number) ((int) Integer.toUnsignedLong(((Number) (x16)).intValue()))).intValue()) * (long) Integer.toUnsignedLong(((Number) (0x3d10)).intValue())));
  int x19 = (int) Integer.toUnsignedLong(((Number) ((x18 >>> 26))).intValue());
  int x20 = ((int) Integer.toUnsignedLong(((Number) (x18)).intValue()) & 0x3ffffff);
  long x21 = (((long) Integer.toUnsignedLong(((Number) (x19)).intValue()) + ((((long) Integer.toUnsignedLong(((Number) (x9)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[9]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) (x8)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[8]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) (x7)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[7]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) (x6)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[6]))).intValue())) + ((long) Integer.toUnsignedLong(((Number) (x5)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[5]))).intValue())))))) + ((long) Integer.toUnsignedLong(((Number) ((int) Integer.toUnsignedLong(((Number) (x16)).intValue()))).intValue()) << 10))) + ((long) Integer.toUnsignedLong(((Number) (x17)).intValue()) * (long) Integer.toUnsignedLong(((Number) (0xf4400)).intValue())));
  int x22 = (int) Integer.toUnsignedLong(((Number) ((x21 >>> 26))).intValue());
  int x23 = ((int) Integer.toUnsignedLong(((Number) (x21)).intValue()) & 0x3ffffff);
  int x24 = (x23 >>> 22);
  int x25 = (x23 & 0x3fffff);
  long x26 = ((long) Integer.toUnsignedLong(((Number) (x22)).intValue()) + ((((long) Integer.toUnsignedLong(((Number) (x8)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[9]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) (x7)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[8]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) (x6)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[7]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) (x5)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[6]))).intValue())) + ((long) Integer.toUnsignedLong(((Number) ((arg1[5]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[5]))).intValue())))))) + (long) Integer.toUnsignedLong(((Number) ((x17 << 16))).intValue())));
  int x27 = (int) Integer.toUnsignedLong(((Number) ((x26 >>> 26))).intValue());
  int x28 = ((int) Integer.toUnsignedLong(((Number) (x26)).intValue()) & 0x3ffffff);
  long x29 = (((long) Integer.toUnsignedLong(((Number) ((arg1[0]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[0]))).intValue())) + ((long) Integer.toUnsignedLong(((Number) ((x24 + (x28 << 4)))).intValue()) * (long) Integer.toUnsignedLong(((Number) (0x3d1)).intValue())));
  int x30 = (int) Integer.toUnsignedLong(((Number) ((x29 >>> 26))).intValue());
  int x31 = ((int) Integer.toUnsignedLong(((Number) (x29)).intValue()) & 0x3ffffff);
  long x32 = ((long) Integer.toUnsignedLong(((Number) (x27)).intValue()) + (((long) Integer.toUnsignedLong(((Number) (x7)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[9]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) (x6)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[8]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) (x5)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[7]))).intValue())) + ((long) Integer.toUnsignedLong(((Number) (x4)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[6]))).intValue()))))));
  int x33 = (int) Integer.toUnsignedLong(((Number) ((x32 >>> 26))).intValue());
  int x34 = ((int) Integer.toUnsignedLong(((Number) (x32)).intValue()) & 0x3ffffff);
  long x35 = (((long) Integer.toUnsignedLong(((Number) (x30)).intValue()) + (((long) Integer.toUnsignedLong(((Number) (x9)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[1]))).intValue())) + ((long) Integer.toUnsignedLong(((Number) ((x24 + (x28 << 4)))).intValue()) << 6))) + ((long) Integer.toUnsignedLong(((Number) (x34)).intValue()) * (long) Integer.toUnsignedLong(((Number) (0x3d10)).intValue())));
  int x36 = (int) Integer.toUnsignedLong(((Number) ((x35 >>> 26))).intValue());
  int x37 = ((int) Integer.toUnsignedLong(((Number) (x35)).intValue()) & 0x3ffffff);
  long x38 = ((long) Integer.toUnsignedLong(((Number) (x33)).intValue()) + (((long) Integer.toUnsignedLong(((Number) (x6)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[9]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) (x5)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[8]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) (x4)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[7]))).intValue())) + ((long) Integer.toUnsignedLong(((Number) ((arg1[6]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[6]))).intValue()))))));
  int x39 = (int) Integer.toUnsignedLong(((Number) ((x38 >>> 26))).intValue());
  int x40 = ((int) Integer.toUnsignedLong(((Number) (x38)).intValue()) & 0x3ffffff);
  long x41 = (((long) Integer.toUnsignedLong(((Number) (x36)).intValue()) + ((((long) Integer.toUnsignedLong(((Number) (x9)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[2]))).intValue())) + ((long) Integer.toUnsignedLong(((Number) ((arg1[1]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[1]))).intValue()))) + ((long) Integer.toUnsignedLong(((Number) (x34)).intValue()) << 10))) + ((long) Integer.toUnsignedLong(((Number) (x40)).intValue()) * (long) Integer.toUnsignedLong(((Number) (0x3d10)).intValue())));
  int x42 = (int) Integer.toUnsignedLong(((Number) ((x41 >>> 26))).intValue());
  int x43 = ((int) Integer.toUnsignedLong(((Number) (x41)).intValue()) & 0x3ffffff);
  long x44 = ((long) Integer.toUnsignedLong(((Number) (x39)).intValue()) + (((long) Integer.toUnsignedLong(((Number) (x5)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[9]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) (x4)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[8]))).intValue())) + ((long) Integer.toUnsignedLong(((Number) (x3)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[7]))).intValue())))));
  int x45 = (int) Integer.toUnsignedLong(((Number) ((x44 >>> 26))).intValue());
  int x46 = ((int) Integer.toUnsignedLong(((Number) (x44)).intValue()) & 0x3ffffff);
  long x47 = (((long) Integer.toUnsignedLong(((Number) (x42)).intValue()) + ((((long) Integer.toUnsignedLong(((Number) (x9)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[3]))).intValue())) + ((long) Integer.toUnsignedLong(((Number) (x8)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[2]))).intValue()))) + ((long) Integer.toUnsignedLong(((Number) (x40)).intValue()) << 10))) + ((long) Integer.toUnsignedLong(((Number) (x46)).intValue()) * (long) Integer.toUnsignedLong(((Number) (0x3d10)).intValue())));
  int x48 = (int) Integer.toUnsignedLong(((Number) ((x47 >>> 26))).intValue());
  int x49 = ((int) Integer.toUnsignedLong(((Number) (x47)).intValue()) & 0x3ffffff);
  long x50 = ((long) Integer.toUnsignedLong(((Number) (x45)).intValue()) + (((long) Integer.toUnsignedLong(((Number) (x4)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[9]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) (x3)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[8]))).intValue())) + ((long) Integer.toUnsignedLong(((Number) ((arg1[7]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[7]))).intValue())))));
  int x51 = (int) Integer.toUnsignedLong(((Number) ((x50 >>> 26))).intValue());
  int x52 = ((int) Integer.toUnsignedLong(((Number) (x50)).intValue()) & 0x3ffffff);
  long x53 = (((long) Integer.toUnsignedLong(((Number) (x48)).intValue()) + ((((long) Integer.toUnsignedLong(((Number) (x9)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[4]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) (x8)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[3]))).intValue())) + ((long) Integer.toUnsignedLong(((Number) ((arg1[2]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[2]))).intValue())))) + ((long) Integer.toUnsignedLong(((Number) (x46)).intValue()) << 10))) + ((long) Integer.toUnsignedLong(((Number) (x52)).intValue()) * (long) Integer.toUnsignedLong(((Number) (0x3d10)).intValue())));
  int x54 = (int) Integer.toUnsignedLong(((Number) ((x53 >>> 26))).intValue());
  int x55 = ((int) Integer.toUnsignedLong(((Number) (x53)).intValue()) & 0x3ffffff);
  long x56 = ((long) Integer.toUnsignedLong(((Number) (x51)).intValue()) + (((long) Integer.toUnsignedLong(((Number) (x3)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[9]))).intValue())) + ((long) Integer.toUnsignedLong(((Number) (x2)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[8]))).intValue()))));
  int x57 = (int) Integer.toUnsignedLong(((Number) ((x56 >>> 26))).intValue());
  int x58 = ((int) Integer.toUnsignedLong(((Number) (x56)).intValue()) & 0x3ffffff);
  long x59 = (((long) Integer.toUnsignedLong(((Number) (x54)).intValue()) + ((((long) Integer.toUnsignedLong(((Number) (x9)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[5]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) (x8)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[4]))).intValue())) + ((long) Integer.toUnsignedLong(((Number) (x7)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[3]))).intValue())))) + ((long) Integer.toUnsignedLong(((Number) (x52)).intValue()) << 10))) + ((long) Integer.toUnsignedLong(((Number) (x58)).intValue()) * (long) Integer.toUnsignedLong(((Number) (0x3d10)).intValue())));
  int x60 = (int) Integer.toUnsignedLong(((Number) ((x59 >>> 26))).intValue());
  int x61 = ((int) Integer.toUnsignedLong(((Number) (x59)).intValue()) & 0x3ffffff);
  long x62 = ((long) Integer.toUnsignedLong(((Number) (x57)).intValue()) + (((long) Integer.toUnsignedLong(((Number) (x2)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[9]))).intValue())) + ((long) Integer.toUnsignedLong(((Number) ((arg1[8]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[8]))).intValue()))));
  int x63 = (int) Integer.toUnsignedLong(((Number) ((x62 >>> 32))).intValue());
  long x64 = (((long) Integer.toUnsignedLong(((Number) (x60)).intValue()) + ((((long) Integer.toUnsignedLong(((Number) (x9)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[6]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) (x8)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[5]))).intValue())) + (((long) Integer.toUnsignedLong(((Number) (x7)).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[4]))).intValue())) + ((long) Integer.toUnsignedLong(((Number) ((arg1[3]))).intValue()) * (long) Integer.toUnsignedLong(((Number) ((arg1[3]))).intValue()))))) + ((long) Integer.toUnsignedLong(((Number) (x58)).intValue()) << 10))) + ((long) Integer.toUnsignedLong(((Number) ((int) Integer.toUnsignedLong(((Number) (x62)).intValue()))).intValue()) * (long) Integer.toUnsignedLong(((Number) (0x3d10)).intValue())));
  int x65 = (int) Integer.toUnsignedLong(((Number) ((x64 >>> 26))).intValue());
  int x66 = ((int) Integer.toUnsignedLong(((Number) (x64)).intValue()) & 0x3ffffff);
  long x67 = (((long) Integer.toUnsignedLong(((Number) (x65)).intValue()) + ((long) Integer.toUnsignedLong(((Number) (x15)).intValue()) + ((long) Integer.toUnsignedLong(((Number) ((int) Integer.toUnsignedLong(((Number) (x62)).intValue()))).intValue()) << 10))) + ((long) Integer.toUnsignedLong(((Number) (x63)).intValue()) * (long) Integer.toUnsignedLong(((Number) (0xf4400)).intValue())));
  int x68 = (int) Integer.toUnsignedLong(((Number) ((x67 >>> 26))).intValue());
  int x69 = ((int) Integer.toUnsignedLong(((Number) (x67)).intValue()) & 0x3ffffff);
  long x70 = ((long) Integer.toUnsignedLong(((Number) (x68)).intValue()) + ((long) Integer.toUnsignedLong(((Number) (x20)).intValue()) + ((long) Integer.toUnsignedLong(((Number) (x63)).intValue()) << 16)));
  int x71 = (int) Integer.toUnsignedLong(((Number) ((x70 >>> 26))).intValue());
  int x72 = ((int) Integer.toUnsignedLong(((Number) (x70)).intValue()) & 0x3ffffff);
  int x73 = (x71 + x25);
  out1[0] = x31;
  out1[1] = x37;
  out1[2] = x43;
  out1[3] = x49;
  out1[4] = x55;
  out1[5] = x61;
  out1[6] = x66;
  out1[7] = x69;
  out1[8] = x72;
  out1[9] = x73;
}

}
