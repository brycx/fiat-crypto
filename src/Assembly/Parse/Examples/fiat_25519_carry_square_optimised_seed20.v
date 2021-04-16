Require Import Coq.Strings.String Coq.Lists.List.
Import ListNotations.
Local Open Scope string_scope.
Local Open Scope list_scope.
Example example : list string := [
"SECTION .text";
"	GLOBAL fiat_25519_carry_square_optimised";
"";
"fiat_25519_carry_square_optimised:";
"	sub rsp, 0x38 ";
"	mov [rsp + 0x08 * 0 ], rbx; saving to stack";
"	mov [rsp + 0x08 * 1 ], rbp; saving to stack";
"	mov [rsp + 0x08 * 2 ], r12; saving to stack";
"	mov [rsp + 0x08 * 3 ], r13; saving to stack";
"	mov [rsp + 0x08 * 4 ], r14; saving to stack";
"	mov [rsp + 0x08 * 5 ], r15; saving to stack";
"	; rdi contains out1";
"	; rsi contains arg1";
"	; fr:rax,r10,r11,rbx,rbp,r12,r13,r14,r15,rdx,rcx,r8,r9";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi""]";
"	;chose >>RANDOMLY<< r10 from candidates :rax, r10, r11, rbx, rbp, r12, r13, r14, r15, rdx, rcx, r8, r9[1].";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10""]";
"	imul r10, [rsi + 0x08 * 4 ], 0x13; x1 <- arg1[4] * 0x13";
"	;CF: KILLED,OF: KILLED";
"	; fr:rax,r11,rbx,rbp,r12,r13,r14,r15,rdx,rcx,r8,r9";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10""]";
"	;chose >>RANDOMLY<< rbx from candidates :rax, r11, rbx, rbp, r12, r13, r14, r15, rdx, rcx, r8, r9[2].";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:rbx""]";
"	imul rbx, r10, 0x2; x2 <- x1 * 0x2";
"	;CF: KILLED,OF: KILLED";
"	;chose >>saved<< x2 from:arg1[1], x2[1] and candidates: arg1[1], x2";
"	mov rdx, rbx; x2 to rdx";
"	; fr:rax,r11,rbx,rbp,r12,r13,r14,r15,rcx,r8,r9";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:rdx""]";
"	;chose >>RANDOMLY<< r14 from candidates :rax, r11, rbx, rbp, r12, r13, r14, r15, rcx, r8, r9[6].";
"	; fr:rax,r11,rbx,rbp,r12,r13,r15,rcx,r8,r9";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:rdx"",""x22:r14""]";
"	;chose >>RANDOMLY<< r15 from candidates :rax, r11, rbx, rbp, r12, r13, r15, rcx, r8, r9[6].";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:rdx"",""x22:r14"",""x21:r15""]";
"	mulx r14, r15, [rsi + 0x08 * 1 ]; x22, x21<- arg1[1] * x2";
"	;chose >>saved<< arg1[0] from:arg1[0], arg1[0][1] and candidates: arg1[0], arg1[0]";
"	; fr:rax,r11,rbx,rbp,r12,r13,rcx,r8,r9";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:rdx"",""x22:r14"",""x21:r15"",""arg1[0]:rdx""]";
"	;chose >>RANDOMLY<< rbp from candidates :rax, r11, rbx, rbp, r12, r13, rcx, r8, r9[3].";
"	mov rbp, rdx; preserving value of x2 into a new reg";
"	mov rdx, [rsi + 0x08 * 0 ]; saving arg1[0] in rdx.";
"	; fr:rax,r11,rbx,r12,r13,rcx,r8,r9";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:rbp"",""x22:r14"",""x21:r15"",""arg1[0]:rdx""]";
"	;chose >>RANDOMLY<< r9 from candidates :rax, r11, rbx, r12, r13, rcx, r8, r9[7].";
"	; fr:rax,r11,rbx,r12,r13,rcx,r8";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:rbp"",""x22:r14"",""x21:r15"",""arg1[0]:rdx"",""x38:r9""]";
"	;chose >>RANDOMLY<< r12 from candidates :rax, r11, rbx, r12, r13, rcx, r8[3].";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:rbp"",""x22:r14"",""x21:r15"",""arg1[0]:rdx"",""x38:r9"",""x37:r12""]";
"	mulx r9, r12, [rsi + 0x08 * 0 ]; x38, x37<- arg1[0] * arg1[0]";
"	; fr:rax,r11,rbx,r13,rcx,r8";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:rbp"",""x22:r14"",""x21:r15"",""arg1[0]:rdx"",""x38:r9"",""x37:r12""]";
"	;chose >>RANDOMLY<< rbx from candidates :rax, r11, rbx, r13, rcx, r8[2].";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:rbp"",""x22:r14"",""x21:r15"",""arg1[0]:rdx"",""x38:r9"",""x37:r12"",""x4:rbx""]";
"	imul rbx, [rsi + 0x08 * 3 ], 0x13; x4 <- arg1[3] * 0x13";
"	;CF: KILLED,OF: KILLED";
"	; fr:rax,r11,r13,rcx,r8";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:rbp"",""x22:r14"",""x21:r15"",""arg1[0]:rdx"",""x38:r9"",""x37:r12"",""x4:rbx""]";
"	;chose >>RANDOMLY<< r11 from candidates :rax, r11, r13, rcx, r8[1].";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:rbp"",""x22:r14"",""x21:r15"",""arg1[0]:rdx"",""x38:r9"",""x37:r12"",""x4:rbx"",""x5:r11""]";
"	imul r11, rbx, 0x2; x5 <- x4 * 0x2";
"	;CF: KILLED,OF: KILLED";
"	;chose >>saved<< x5 from:arg1[2], x5[1] and candidates: arg1[2], x5";
"	mov rdx, r11; x5 to rdx";
"	; fr:rax,r11,r13,rcx,r8";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:rbp"",""x22:r14"",""x21:r15"",""x38:r9"",""x37:r12"",""x4:rbx"",""x18:rdx""]";
"	;chose >>RANDOMLY<< rax from candidates :rax, r11, r13, rcx, r8[0].";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:rbp"",""x22:r14"",""x21:r15"",""x38:r9"",""x37:r12"",""x4:rbx"",""x18:rdx"",""x17:rax""]";
"	mulx rdx, rax, [rsi + 0x08 * 2 ]; x18, x17<- arg1[2] * x5";
"	";
"";
"	; add:";
"	; r:x39,f:x40<-add(0x0,x21,x17)";
"	; CF: KILLED,OF: KILLED";
"	;chose >>saved<< c_xor_adx from:c_add, c_xor_adx, c_test_adx[1] and candidates: c_add, c_xor_adx, c_test_adx";
"	; fr:r11,r13,rcx,r8";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:rbp"",""x22:r14"",""x38:r9"",""x37:r12"",""x4:rbx"",""x18:rdx"",""x17:rax"",""x39:r15""]";
"	;chose >>RANDOMLY<< r13 from candidates :r11, r13, rcx, r8[1].";
"	xor r13, r13";
"	;chose >>saved<< OF from:CF, OF[1] and candidates: CF, OF";
"	adox r15, rax";
"	";
"";
"	; add:";
"	; r:x41,f:_<-add(x40,x22,x18)";
"	; CF: ZERO,OF: ALIVE";
"	adox r14, rdx";
"	";
"";
"	; add:";
"	; r:x43,f:x44<-add(0x0,x37,x39)";
"	; CF: ZERO,OF: KILLED";
"	adcx r12, r15";
"	";
"";
"	; add:";
"	; r:x45,f:_<-add(x44,x38,x41)";
"	; CF: ALIVE,OF: KILLED";
"	adcx r9, r14";
"	; fr:r11,rcx,r8";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:rbp"",""x4:rbx"",""x18:rdx"",""x17:rax"",""x39:r15"",""0x0:r13"",""x40:OF"",""x41:r14"",""x43:r12"",""x44:CF"",""x45:r9""]";
"	;chose >>RANDOMLY<< rcx from candidates :r11, rcx, r8[1].";
"	mov rcx,  r12; x47, copying x43 here, cause x43 is needed in a reg for other than x47, namely all: , x47, x48, size: 2";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:rbp"",""x4:rbx"",""x18:rdx"",""x17:rax"",""x39:r15"",""0x0:r13"",""x40:OF"",""x41:r14"",""x43:r12"",""x44:CF"",""x45:r9"",""x47:rcx""]";
"	shrd rcx, r9, 51; x47 <- x45||x43 >> 51";
"	; fr:r11,r8";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:rbp"",""x4:rbx"",""x18:rdx"",""x17:rax"",""x39:r15"",""0x0:r13"",""x40:OF"",""x41:r14"",""x43:r12"",""x44:CF"",""x45:r9"",""x47:rcx""]";
"	;chose >>RANDOMLY<< r8 from candidates :r11, r8[1].";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:rbp"",""x4:rbx"",""x18:rdx"",""x17:rax"",""x39:r15"",""0x0:r13"",""x40:OF"",""x41:r14"",""x43:r12"",""x44:CF"",""x45:r9"",""x47:rcx"",""x8:r8""]";
"	imul r8, [rsi + 0x08 * 1 ], 0x2; x8 <- arg1[1] * 0x2";
"	;CF: KILLED,OF: KILLED";
"	;chose >>saved<< arg1[0] from:arg1[0], x8[0] and candidates: arg1[0], x8";
"	mov rdx, [rsi + 0x08 * 0 ]; arg1[0] to rdx";
"	; fr:r11";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:rbp"",""x4:rbx"",""x17:rax"",""x39:r15"",""0x0:r13"",""x40:OF"",""x41:r14"",""x43:r12"",""x44:CF"",""x45:r9"",""x47:rcx"",""arg1[0]:rdx"",""x36:r8""]";
"	;chose >>RANDOMLY<< r11 from candidates :r11[0].";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:rbp"",""x4:rbx"",""x17:rax"",""x39:r15"",""0x0:r13"",""x40:OF"",""x41:r14"",""x43:r12"",""x44:CF"",""x45:r9"",""x47:rcx"",""arg1[0]:rdx"",""x36:r8"",""x35:r11""]";
"	mulx r8, r11, r8; x36, x35<- arg1[0] * x8";
"	;chose >>saved<< x2 from:arg1[2], x2[1] and candidates: arg1[2], x2";
"	mov rdx, rbp; x2 to rdx";
"	; fr:rbp";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:rdx"",""x4:rbx"",""x17:rax"",""x39:r15"",""0x0:r13"",""x40:OF"",""x41:r14"",""x43:r12"",""x44:CF"",""x45:r9"",""x47:rcx"",""x36:r8"",""x35:r11""]";
"	;chose >>RANDOMLY<< rbp from candidates :rbp[0].";
"	; fr:";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:rdx"",""x4:rbx"",""x17:rax"",""x39:r15"",""0x0:r13"",""x40:OF"",""x41:r14"",""x43:r12"",""x44:CF"",""x45:r9"",""x47:rcx"",""x36:r8"",""x35:r11"",""x16:rbp""]";
"	; freeing x17 (rax) no dependants anymore";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:rdx"",""x4:rbx"",""x39:r15"",""0x0:r13"",""x40:OF"",""x41:r14"",""x43:r12"",""x44:CF"",""x45:r9"",""x47:rcx"",""x36:r8"",""x35:r11"",""x16:rbp"",""x15:rax""]";
"	mulx rbp, rax, [rsi + 0x08 * 2 ]; x16, x15<- arg1[2] * x2";
"	;chose >>saved<< arg1[3] from:arg1[3], x4[0] and candidates: arg1[3], x4";
"	; fr:";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:rdx"",""x4:rbx"",""x39:r15"",""0x0:r13"",""x40:OF"",""x41:r14"",""x43:r12"",""x44:CF"",""x45:r9"",""x47:rcx"",""x36:r8"",""x35:r11"",""x16:rbp"",""x15:rax"",""arg1[3]:rdx""]";
"	; freeing x39 (r15) no dependants anymore";
"	mov r15, rdx; preserving value of x2 into a new reg";
"	mov rdx, [rsi + 0x08 * 3 ]; saving arg1[3] in rdx.";
"	; fr:";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:r15"",""0x0:r13"",""x40:OF"",""x41:r14"",""x43:r12"",""x44:CF"",""x45:r9"",""x47:rcx"",""x36:r8"",""x35:r11"",""x16:rbp"",""x15:rax"",""arg1[3]:rdx"",""x14:rbx""]";
"	; freeing x41 (r14) no dependants anymore";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:r15"",""0x0:r13"",""x40:OF"",""x43:r12"",""x44:CF"",""x45:r9"",""x47:rcx"",""x36:r8"",""x35:r11"",""x16:rbp"",""x15:rax"",""arg1[3]:rdx"",""x14:rbx"",""x13:r14""]";
"	mulx rbx, r14, rbx; x14, x13<- arg1[3] * x4";
"	";
"";
"	; add:";
"	; r:x73,f:x74<-add(0x0,x15,x13)";
"	; CF: KILLED,OF: KILLED";
"	;chose >>saved<< c_add from:c_add, c_xor_adx, c_test_adx[0] and candidates: c_add, c_xor_adx, c_test_adx";
"	add rax, r14; could be done better, if r0 has been u8 as well";
"	";
"";
"	; add:";
"	; r:x77,f:x78<-add(0x0,x35,x73)";
"	; CF: ALIVE,OF: KILLED";
"	dec r13; OF<-0x0, preserve CF 3";
"	adox r11, rax";
"	";
"";
"	; add:";
"	; r:x75,f:_<-add(x74,x16,x14)";
"	; CF: ALIVE,OF: ALIVE";
"	adcx rbp, rbx";
"	";
"";
"	; add:";
"	; r:x79,f:_<-add(x78,x36,x75)";
"	; CF: KILLED,OF: ALIVE";
"	adox r8, rbp";
"	";
"";
"	; add:";
"	; r:x81,f:x82<-add(0x0,x47,x77)";
"	; CF: KILLED,OF: KILLED";
"	;chose >>saved<< c_add from:c_add, c_xor_adx, c_test_adx[0] and candidates: c_add, c_xor_adx, c_test_adx";
"	add rcx, r11; could be done better, if r0 has been u8 as well";
"	";
"";
"	; add:";
"	; r:x83,f:_<-add(x82,x79)";
"	; CF: ALIVE,OF: KILLED";
"	adc r8, 0x0";
"	; fr:";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:r15"",""x43:r12"",""x45:r9"",""arg1[3]:rdx"",""x14:rbx"",""x13:r14"",""x73:rax"",""x77:r11"",""-0x1:r13"",""x78:OF"",""x75:rbp"",""x81:rcx"",""x82:CF"",""x83:r8""]";
"	; freeing x45 (r9) no dependants anymore";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:r15"",""x43:r12"",""arg1[3]:rdx"",""x14:rbx"",""x13:r14"",""x73:rax"",""x77:r11"",""-0x1:r13"",""x78:OF"",""x75:rbp"",""x81:rcx"",""x82:CF"",""x83:r8"",""x7:r9""]";
"	imul r9, [rsi + 0x08 * 2 ], 0x2; x7 <- arg1[2] * 0x2";
"	;CF: KILLED,OF: KILLED";
"	;chose >>saved<< arg1[0] from:arg1[0], x7[0] and candidates: arg1[0], x7";
"	mov rdx, [rsi + 0x08 * 0 ]; arg1[0] to rdx";
"	; fr:";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:r15"",""x43:r12"",""x14:rbx"",""x13:r14"",""x73:rax"",""x77:r11"",""-0x1:r13"",""x78:OF"",""x75:rbp"",""x81:rcx"",""x82:CF"",""x83:r8"",""x7:r9"",""arg1[0]:rdx""]";
"	; freeing x14 (rbx) no dependants anymore";
"	; fr:";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:r15"",""x43:r12"",""x13:r14"",""x73:rax"",""x77:r11"",""-0x1:r13"",""x78:OF"",""x75:rbp"",""x81:rcx"",""x82:CF"",""x83:r8"",""x7:r9"",""arg1[0]:rdx"",""x34:rbx""]";
"	; freeing x13 (r14) no dependants anymore";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:r15"",""x43:r12"",""x73:rax"",""x77:r11"",""-0x1:r13"",""x78:OF"",""x75:rbp"",""x81:rcx"",""x82:CF"",""x83:r8"",""x7:r9"",""arg1[0]:rdx"",""x34:rbx"",""x33:r14""]";
"	mulx rbx, r14, r9; x34, x33<- arg1[0] * x7";
"	; fr:";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:r15"",""x43:r12"",""x73:rax"",""x77:r11"",""-0x1:r13"",""x78:OF"",""x75:rbp"",""x81:rcx"",""x82:CF"",""x83:r8"",""x7:r9"",""arg1[0]:rdx"",""x34:rbx"",""x33:r14""]";
"	; freeing x73 (rax) no dependants anymore";
"	mov rax,  rcx; x84, copying x81 here, cause x81 is needed in a reg for other than x84, namely all: , x84, x85, size: 2";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:r15"",""x43:r12"",""x77:r11"",""-0x1:r13"",""x78:OF"",""x75:rbp"",""x81:rcx"",""x82:CF"",""x83:r8"",""x7:r9"",""arg1[0]:rdx"",""x34:rbx"",""x33:r14"",""x84:rax""]";
"	shrd rax, r8, 51; x84 <- x83||x81 >> 51";
"	;chose >>saved<< arg1[1] from:arg1[1], arg1[1][1] and candidates: arg1[1], arg1[1]";
"	mov rdx, [rsi + 0x08 * 1 ]; arg1[1] to rdx";
"	; fr:";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:r15"",""x43:r12"",""x77:r11"",""-0x1:r13"",""x78:OF"",""x75:rbp"",""x81:rcx"",""x82:CF"",""x83:r8"",""x7:r9"",""x34:rbx"",""x33:r14"",""x84:rax"",""arg1[1]:rdx""]";
"	; freeing x77 (r11) no dependants anymore";
"	; fr:";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:r15"",""x43:r12"",""-0x1:r13"",""x78:OF"",""x75:rbp"",""x81:rcx"",""x82:CF"",""x83:r8"",""x7:r9"",""x34:rbx"",""x33:r14"",""x84:rax"",""arg1[1]:rdx"",""x28:r11""]";
"	; freeing x75 (rbp) no dependants anymore";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x2:r15"",""x43:r12"",""-0x1:r13"",""x78:OF"",""x81:rcx"",""x82:CF"",""x83:r8"",""x7:r9"",""x34:rbx"",""x33:r14"",""x84:rax"",""arg1[1]:rdx"",""x28:r11"",""x27:rbp""]";
"	mulx r11, rbp, [rsi + 0x08 * 1 ]; x28, x27<- arg1[1] * arg1[1]";
"	;chose >>saved<< x2 from:arg1[3], x2[1] and candidates: arg1[3], x2";
"	mov rdx, r15; x2 to rdx";
"	; fr:r15";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x43:r12"",""-0x1:r13"",""x78:OF"",""x81:rcx"",""x82:CF"",""x83:r8"",""x7:r9"",""x34:rbx"",""x33:r14"",""x84:rax"",""x28:r11"",""x27:rbp"",""x12:rdx""]";
"	;chose >>RANDOMLY<< r15 from candidates :r15[0].";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x43:r12"",""-0x1:r13"",""x78:OF"",""x81:rcx"",""x82:CF"",""x83:r8"",""x7:r9"",""x34:rbx"",""x33:r14"",""x84:rax"",""x28:r11"",""x27:rbp"",""x12:rdx"",""x11:r15""]";
"	mulx rdx, r15, [rsi + 0x08 * 3 ]; x12, x11<- arg1[3] * x2";
"	";
"";
"	; add:";
"	; r:x65,f:x66<-add(0x0,x27,x11)";
"	; CF: KILLED,OF: KILLED";
"	;chose >>saved<< c_xor_adx from:c_add, c_xor_adx, c_test_adx[1] and candidates: c_add, c_xor_adx, c_test_adx";
"	; fr:";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x43:r12"",""-0x1:r13"",""x78:OF"",""x81:rcx"",""x82:CF"",""x83:r8"",""x7:r9"",""x34:rbx"",""x33:r14"",""x84:rax"",""x28:r11"",""x12:rdx"",""x11:r15"",""x65:rbp""]";
"	; freeing x83 (r8) no dependants anymore";
"	xor r8, r8";
"	;chose >>saved<< CF from:CF, OF[0] and candidates: CF, OF";
"	adox rbp, r15";
"	";
"";
"	; add:";
"	; r:x69,f:x70<-add(0x0,x33,x65)";
"	; CF: ZERO,OF: ALIVE";
"	adcx r14, rbp";
"	";
"";
"	; add:";
"	; r:x67,f:_<-add(x66,x28,x12)";
"	; CF: ALIVE,OF: ALIVE";
"	adox r11, rdx";
"	";
"";
"	; add:";
"	; r:x86,f:x87<-add(0x0,x84,x69)";
"	; CF: ALIVE,OF: KILLED";
"	inc r13; OF<-0x0, preserve CF 1";
"	adox rax, r14";
"	";
"";
"	; add:";
"	; r:x71,f:_<-add(x70,x34,x67)";
"	; CF: ALIVE,OF: ALIVE";
"	adcx rbx, r11";
"	";
"";
"	; add:";
"	; r:x88,f:_<-add(x87,x71)";
"	; CF: KILLED,OF: ALIVE";
"	adox rbx, r13";
"	; fr:r8";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x43:r12"",""x81:rcx"",""x7:r9"",""x12:rdx"",""x11:r15"",""x65:rbp"",""0x0:r13"",""x69:r14"",""x70:CF"",""x67:r11"",""x86:rax"",""x87:OF"",""x88:rbx""]";
"	;chose >>RANDOMLY<< r8 from candidates :r8[0].";
"	mov r8, 0x7ffffffffffff ; moving imm to reg";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x81:rcx"",""x7:r9"",""x12:rdx"",""x11:r15"",""x65:rbp"",""0x0:r13"",""x69:r14"",""x70:CF"",""x67:r11"",""x86:rax"",""x87:OF"",""x88:rbx"",""0x7ffffffffffff:r8"",""x48:r12""]";
"	and r12, r8; x48 <- x43& 0x7ffffffffffff";
"	; fr:";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x81:rcx"",""x7:r9"",""x12:rdx"",""x11:r15"",""x65:rbp"",""0x0:r13"",""x69:r14"",""x70:CF"",""x67:r11"",""x86:rax"",""x87:OF"",""x88:rbx"",""0x7ffffffffffff:r8"",""x48:r12""]";
"	; freeing x12 (rdx) no dependants anymore";
"	mov rdx,  rax; x89, copying x86 here, cause x86 is needed in a reg for other than x89, namely all: , x89, x90, size: 2";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x81:rcx"",""x7:r9"",""x11:r15"",""x65:rbp"",""0x0:r13"",""x69:r14"",""x70:CF"",""x67:r11"",""x86:rax"",""x87:OF"",""x88:rbx"",""0x7ffffffffffff:r8"",""x48:r12"",""x89:rdx""]";
"	shrd rdx, rbx, 51; x89 <- x88||x86 >> 51";
"	; fr:";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x81:rcx"",""x7:r9"",""x11:r15"",""x65:rbp"",""0x0:r13"",""x69:r14"",""x70:CF"",""x67:r11"",""x86:rax"",""x87:OF"",""x88:rbx"",""0x7ffffffffffff:r8"",""x48:r12"",""x89:rdx""]";
"	; freeing x11 (r15) no dependants anymore";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x81:rcx"",""x7:r9"",""x65:rbp"",""0x0:r13"",""x69:r14"",""x70:CF"",""x67:r11"",""x86:rax"",""x87:OF"",""x88:rbx"",""0x7ffffffffffff:r8"",""x48:r12"",""x89:rdx"",""x6:r15""]";
"	imul r15, [rsi + 0x08 * 3 ], 0x2; x6 <- arg1[3] * 0x2";
"	;CF: KILLED,OF: KILLED";
"	;chose >>saved<< arg1[0] from:arg1[0], x6[0] and candidates: arg1[0], x6";
"	; fr:";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x81:rcx"",""x7:r9"",""x65:rbp"",""0x0:r13"",""x69:r14"",""x70:CF"",""x67:r11"",""x86:rax"",""x87:OF"",""x88:rbx"",""0x7ffffffffffff:r8"",""x48:r12"",""x89:rdx"",""x6:r15"",""arg1[0]:rdx""]";
"	; freeing x65 (rbp) no dependants anymore";
"	mov rbp, rdx; preserving value of x89 into a new reg";
"	mov rdx, [rsi + 0x08 * 0 ]; saving arg1[0] in rdx.";
"	; fr:";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x81:rcx"",""x7:r9"",""0x0:r13"",""x69:r14"",""x70:CF"",""x67:r11"",""x86:rax"",""x87:OF"",""x88:rbx"",""0x7ffffffffffff:r8"",""x48:r12"",""x89:rbp"",""x6:r15"",""arg1[0]:rdx""]";
"	; freeing x69 (r14) no dependants anymore";
"	; fr:";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x81:rcx"",""x7:r9"",""0x0:r13"",""x70:CF"",""x67:r11"",""x86:rax"",""x87:OF"",""x88:rbx"",""0x7ffffffffffff:r8"",""x48:r12"",""x89:rbp"",""x6:r15"",""arg1[0]:rdx"",""x32:r14""]";
"	; freeing x67 (r11) no dependants anymore";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x81:rcx"",""x7:r9"",""0x0:r13"",""x70:CF"",""x86:rax"",""x87:OF"",""x88:rbx"",""0x7ffffffffffff:r8"",""x48:r12"",""x89:rbp"",""x6:r15"",""arg1[0]:rdx"",""x32:r14"",""x31:r11""]";
"	mulx r14, r11, r15; x32, x31<- arg1[0] * x6";
"	;chose >>saved<< arg1[1] from:arg1[1], x7[0] and candidates: arg1[1], x7";
"	mov rdx, [rsi + 0x08 * 1 ]; arg1[1] to rdx";
"	; fr:";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x81:rcx"",""0x0:r13"",""x70:CF"",""x86:rax"",""x87:OF"",""x88:rbx"",""0x7ffffffffffff:r8"",""x48:r12"",""x89:rbp"",""x6:r15"",""x32:r14"",""x31:r11"",""arg1[1]:rdx"",""x26:r9""]";
"	; freeing x88 (rbx) no dependants anymore";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""x1:r10"",""x81:rcx"",""0x0:r13"",""x70:CF"",""x86:rax"",""x87:OF"",""0x7ffffffffffff:r8"",""x48:r12"",""x89:rbp"",""x6:r15"",""x32:r14"",""x31:r11"",""arg1[1]:rdx"",""x26:r9"",""x25:rbx""]";
"	mulx r9, rbx, r9; x26, x25<- arg1[1] * x7";
"	;chose >>saved<< x1 from:arg1[4], x1[1] and candidates: arg1[4], x1";
"	mov rdx, r10; x1 to rdx";
"	; fr:r10";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x81:rcx"",""0x0:r13"",""x70:CF"",""x86:rax"",""x87:OF"",""0x7ffffffffffff:r8"",""x48:r12"",""x89:rbp"",""x6:r15"",""x32:r14"",""x31:r11"",""x26:r9"",""x25:rbx"",""x10:rdx""]";
"	;chose >>RANDOMLY<< r10 from candidates :r10[0].";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""x81:rcx"",""0x0:r13"",""x70:CF"",""x86:rax"",""x87:OF"",""0x7ffffffffffff:r8"",""x48:r12"",""x89:rbp"",""x6:r15"",""x32:r14"",""x31:r11"",""x26:r9"",""x25:rbx"",""x10:rdx"",""x9:r10""]";
"	mulx rdx, r10, [rsi + 0x08 * 4 ]; x10, x9<- arg1[4] * x1";
"	";
"";
"	; add:";
"	; r:x57,f:x58<-add(0x0,x25,x9)";
"	; CF: KILLED,OF: KILLED";
"	;chose >>saved<< c_add from:c_add, c_xor_adx, c_test_adx[0] and candidates: c_add, c_xor_adx, c_test_adx";
"	add rbx, r10; could be done better, if r0 has been u8 as well";
"	";
"";
"	; add:";
"	; r:x61,f:x62<-add(0x0,x31,x57)";
"	; CF: ALIVE,OF: KILLED";
"	dec r13; OF<-0x0, preserve CF 3";
"	adox r11, rbx";
"	";
"";
"	; add:";
"	; r:x59,f:_<-add(x58,x26,x10)";
"	; CF: ALIVE,OF: ALIVE";
"	adcx r9, rdx";
"	";
"";
"	; add:";
"	; r:x91,f:x92<-add(0x0,x89,x61)";
"	; CF: KILLED,OF: ALIVE";
"	clc;";
"	adcx rbp, r11";
"	";
"";
"	; add:";
"	; r:x63,f:_<-add(x62,x32,x59)";
"	; CF: ALIVE,OF: ALIVE";
"	adox r14, r9";
"	";
"";
"	; add:";
"	; r:x93,f:_<-add(x92,x63)";
"	; CF: ALIVE,OF: KILLED";
"	adc r14, 0x0";
"	; fr:";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x81:rcx"",""x86:rax"",""0x7ffffffffffff:r8"",""x48:r12"",""x6:r15"",""x10:rdx"",""x9:r10"",""x57:rbx"",""x61:r11"",""-0x1:r13"",""x62:OF"",""x59:r9"",""x91:rbp"",""x92:CF"",""x93:r14""]";
"	; freeing x10 (rdx) no dependants anymore";
"	mov rdx,  rbp; x94, copying x91 here, cause x91 is needed in a reg for other than x94, namely all: , x95, x94, size: 2";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""x81:rcx"",""x86:rax"",""0x7ffffffffffff:r8"",""x48:r12"",""x6:r15"",""x9:r10"",""x57:rbx"",""x61:r11"",""-0x1:r13"",""x62:OF"",""x59:r9"",""x91:rbp"",""x92:CF"",""x93:r14"",""x94:rdx""]";
"	shrd rdx, r14, 51; x94 <- x93||x91 >> 51";
"	; fr:";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x81:rcx"",""x86:rax"",""0x7ffffffffffff:r8"",""x48:r12"",""x6:r15"",""x9:r10"",""x57:rbx"",""x61:r11"",""-0x1:r13"",""x62:OF"",""x59:r9"",""x91:rbp"",""x92:CF"",""x93:r14"",""x94:rdx""]";
"	; freeing x9 (r10) no dependants anymore";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""x81:rcx"",""x86:rax"",""0x7ffffffffffff:r8"",""x48:r12"",""x6:r15"",""x57:rbx"",""x61:r11"",""-0x1:r13"",""x62:OF"",""x59:r9"",""x91:rbp"",""x92:CF"",""x93:r14"",""x94:rdx"",""x3:r10""]";
"	imul r10, [rsi + 0x08 * 4 ], 0x2; x3 <- arg1[4] * 0x2";
"	;CF: KILLED,OF: KILLED";
"	;chose >>saved<< arg1[0] from:arg1[0], x3[0] and candidates: arg1[0], x3";
"	; fr:";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x81:rcx"",""x86:rax"",""0x7ffffffffffff:r8"",""x48:r12"",""x6:r15"",""x57:rbx"",""x61:r11"",""-0x1:r13"",""x62:OF"",""x59:r9"",""x91:rbp"",""x92:CF"",""x93:r14"",""x94:rdx"",""x3:r10"",""arg1[0]:rdx""]";
"	; freeing x57 (rbx) no dependants anymore";
"	mov rbx, rdx; preserving value of x94 into a new reg";
"	mov rdx, [rsi + 0x08 * 0 ]; saving arg1[0] in rdx.";
"	; fr:";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x81:rcx"",""x86:rax"",""0x7ffffffffffff:r8"",""x48:r12"",""x6:r15"",""x61:r11"",""-0x1:r13"",""x62:OF"",""x59:r9"",""x91:rbp"",""x92:CF"",""x93:r14"",""x94:rbx"",""arg1[0]:rdx"",""x30:r10""]";
"	; freeing x61 (r11) no dependants anymore";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""x81:rcx"",""x86:rax"",""0x7ffffffffffff:r8"",""x48:r12"",""x6:r15"",""-0x1:r13"",""x62:OF"",""x59:r9"",""x91:rbp"",""x92:CF"",""x93:r14"",""x94:rbx"",""arg1[0]:rdx"",""x30:r10"",""x29:r11""]";
"	mulx r10, r11, r10; x30, x29<- arg1[0] * x3";
"	;chose >>saved<< arg1[1] from:arg1[1], x6[0] and candidates: arg1[1], x6";
"	mov rdx, [rsi + 0x08 * 1 ]; arg1[1] to rdx";
"	; fr:";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x81:rcx"",""x86:rax"",""0x7ffffffffffff:r8"",""x48:r12"",""-0x1:r13"",""x62:OF"",""x59:r9"",""x91:rbp"",""x92:CF"",""x93:r14"",""x94:rbx"",""x30:r10"",""x29:r11"",""arg1[1]:rdx"",""x24:r15""]";
"	; freeing x59 (r9) no dependants anymore";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""x81:rcx"",""x86:rax"",""0x7ffffffffffff:r8"",""x48:r12"",""-0x1:r13"",""x62:OF"",""x91:rbp"",""x92:CF"",""x93:r14"",""x94:rbx"",""x30:r10"",""x29:r11"",""arg1[1]:rdx"",""x24:r15"",""x23:r9""]";
"	mulx r15, r9, r15; x24, x23<- arg1[1] * x6";
"	;chose >>saved<< arg1[2] from:arg1[2], arg1[2][1] and candidates: arg1[2], arg1[2]";
"	mov rdx, [rsi + 0x08 * 2 ]; arg1[2] to rdx";
"	; fr:";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x81:rcx"",""x86:rax"",""0x7ffffffffffff:r8"",""x48:r12"",""-0x1:r13"",""x62:OF"",""x91:rbp"",""x92:CF"",""x93:r14"",""x94:rbx"",""x30:r10"",""x29:r11"",""x24:r15"",""x23:r9"",""arg1[2]:rdx""]";
"	; freeing x93 (r14) no dependants anymore";
"	; fr:";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x81:rcx"",""x86:rax"",""0x7ffffffffffff:r8"",""x48:r12"",""-0x1:r13"",""x62:OF"",""x91:rbp"",""x92:CF"",""x94:rbx"",""x30:r10"",""x29:r11"",""x24:r15"",""x23:r9"",""arg1[2]:rdx"",""x20:r14""]";
"	;chose 0x7ffffffffffff to spill because list of spills:arg1[1]Larg1[1]Larg1[1]L0x7ffffffffffffL0x7ffffffffffffL-0x1L-0x1 and candidates: 0x7ffffffffffff, -0x1";
"	; freeing, i.e. spilling 0x7ffffffffffff, because I am out of ideas";
"	; allocs: out1(rdi),arg1(rsi),x81(rcx),x86(rax),0x7ffffffffffff(r8),x48(r12),-0x1(r13),x91(rbp),x94(rbx),x30(r10),x29(r11),x24(r15),x23(r9),arg1[2](rdx),x20(r14); clobs x19,x20,arg1[2],arg1,arg1[2],arg1,x20; will spare: 0x7ffffffffffff ";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""x81:rcx"",""x86:rax"",""x48:r12"",""-0x1:r13"",""x62:OF"",""x91:rbp"",""x92:CF"",""x94:rbx"",""x30:r10"",""x29:r11"",""x24:r15"",""x23:r9"",""arg1[2]:rdx"",""x20:r14"",""x19:r8""]";
"	mulx r14, r8, [rsi + 0x08 * 2 ]; x20, x19<- arg1[2] * arg1[2]";
"	";
"";
"	; add:";
"	; r:x49,f:x50<-add(0x0,x23,x19)";
"	; CF: KILLED,OF: KILLED";
"	;chose >>saved<< c_add from:c_add, c_xor_adx, c_test_adx[0] and candidates: c_add, c_xor_adx, c_test_adx";
"	add r9, r8; could be done better, if r0 has been u8 as well";
"	";
"";
"	; add:";
"	; r:x53,f:x54<-add(0x0,x29,x49)";
"	; CF: ALIVE,OF: KILLED";
"	inc r13; OF<-0x0, preserve CF 2";
"	adox r11, r9";
"	";
"";
"	; add:";
"	; r:x51,f:_<-add(x50,x24,x20)";
"	; CF: ALIVE,OF: ALIVE";
"	adcx r15, r14";
"	";
"";
"	; add:";
"	; r:x96,f:x97<-add(0x0,x94,x53)";
"	; CF: KILLED,OF: ALIVE";
"	clc;";
"	adcx rbx, r11";
"	";
"";
"	; add:";
"	; r:x55,f:_<-add(x54,x30,x51)";
"	; CF: ALIVE,OF: ALIVE";
"	adox r10, r15";
"	";
"";
"	; add:";
"	; r:x98,f:_<-add(x97,x55)";
"	; CF: ALIVE,OF: KILLED";
"	adc r10, 0x0";
"	; fr:";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x81:rcx"",""x86:rax"",""x48:r12"",""x91:rbp"",""arg1[2]:rdx"",""x20:r14"",""x19:r8"",""x49:r9"",""x53:r11"",""0x0:r13"",""x54:OF"",""x51:r15"",""x96:rbx"",""x97:CF"",""x98:r10""]";
"	; freeing x20 (r14) no dependants anymore";
"	mov r14,  rbx; x99, copying x96 here, cause x96 is needed in a reg for other than x99, namely all: , x100, x99, size: 2";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""x81:rcx"",""x86:rax"",""x48:r12"",""x91:rbp"",""arg1[2]:rdx"",""x19:r8"",""x49:r9"",""x53:r11"",""0x0:r13"",""x54:OF"",""x51:r15"",""x96:rbx"",""x97:CF"",""x98:r10"",""x99:r14""]";
"	shrd r14, r10, 51; x99 <- x98||x96 >> 51";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""x81:rcx"",""x86:rax"",""x48:r12"",""x91:rbp"",""arg1[2]:rdx"",""x19:r8"",""x49:r9"",""x53:r11"",""0x0:r13"",""x54:OF"",""x51:r15"",""x96:rbx"",""x97:CF"",""x98:r10"",""x101:r14""]";
"	imul r14, r14, 0x13; x101 <- x99 * 0x13";
"	;CF: KILLED,OF: KILLED";
"	";
"";
"	; add:";
"	; r:x102,f:_<-add(x48,x101)";
"	; CF: KILLED,OF: KILLED";
"	lea r12, [r12+r14]";
"	; fr:";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x81:rcx"",""x86:rax"",""x91:rbp"",""arg1[2]:rdx"",""x19:r8"",""x49:r9"",""x53:r11"",""0x0:r13"",""x54:OF"",""x51:r15"",""x96:rbx"",""x97:CF"",""x98:r10"",""x101:r14"",""x102:r12""]";
"	; freeing x19 (r8) no dependants anymore";
"	mov r8, 0x7ffffffffffff ; moving imm to reg";
"	; fr:";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x81:rcx"",""x86:rax"",""x91:rbp"",""arg1[2]:rdx"",""x49:r9"",""x53:r11"",""0x0:r13"",""x54:OF"",""x51:r15"",""x96:rbx"",""x97:CF"",""x98:r10"",""x101:r14"",""x102:r12"",""0x7ffffffffffff:r8""]";
"	; freeing x49 (r9) no dependants anymore";
"	mov r9,  r12; x104, copying x102 here, cause x102 is needed in a reg for other than x104, namely all: , x104, x103, size: 2";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""x81:rcx"",""x86:rax"",""x91:rbp"",""arg1[2]:rdx"",""x53:r11"",""0x0:r13"",""x54:OF"",""x51:r15"",""x96:rbx"",""x97:CF"",""x98:r10"",""x101:r14"",""x102:r12"",""0x7ffffffffffff:r8"",""x104:r9""]";
"	and r9, r8; x104 <- x102& 0x7ffffffffffff";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""x81:rcx"",""x86:rax"",""arg1[2]:rdx"",""x53:r11"",""0x0:r13"",""x54:OF"",""x51:r15"",""x96:rbx"",""x97:CF"",""x98:r10"",""x101:r14"",""x102:r12"",""0x7ffffffffffff:r8"",""x104:r9"",""x95:rbp""]";
"	and rbp, r8; x95 <- x91& 0x7ffffffffffff";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""x81:rcx"",""x86:rax"",""arg1[2]:rdx"",""x53:r11"",""0x0:r13"",""x54:OF"",""x51:r15"",""x96:rbx"",""x97:CF"",""x98:r10"",""x101:r14"",""0x7ffffffffffff:r8"",""x104:r9"",""x95:rbp"",""x103:r12""]";
"	shr r12, 51; x103 <- x102>> 51";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""x86:rax"",""arg1[2]:rdx"",""x53:r11"",""0x0:r13"",""x54:OF"",""x51:r15"",""x96:rbx"",""x97:CF"",""x98:r10"",""x101:r14"",""0x7ffffffffffff:r8"",""x104:r9"",""x95:rbp"",""x103:r12"",""x85:rcx""]";
"	and rcx, r8; x85 <- x81& 0x7ffffffffffff";
"	";
"";
"	; add:";
"	; r:x105,f:_<-add(x103,x85)";
"	; CF: KILLED,OF: KILLED";
"	lea r12, [r12+rcx]";
"	; fr:";
"	; allocatedR: ;-- allocation: [""out1:rdi"",""arg1:rsi"",""x86:rax"",""arg1[2]:rdx"",""x53:r11"",""0x0:r13"",""x54:OF"",""x51:r15"",""x96:rbx"",""x97:CF"",""x98:r10"",""x101:r14"",""0x7ffffffffffff:r8"",""x104:r9"",""x95:rbp"",""x85:rcx"",""x105:r12""]";
"	; freeing x53 (r11) no dependants anymore";
"	mov r11,  r12; x106, copying x105 here, cause x105 is needed in a reg for other than x106, namely all: , x106, x107, size: 2";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""x86:rax"",""arg1[2]:rdx"",""0x0:r13"",""x54:OF"",""x51:r15"",""x96:rbx"",""x97:CF"",""x98:r10"",""x101:r14"",""0x7ffffffffffff:r8"",""x104:r9"",""x95:rbp"",""x85:rcx"",""x105:r12"",""x106:r11""]";
"	shr r11, 51; x106 <- x105>> 51";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""arg1[2]:rdx"",""0x0:r13"",""x54:OF"",""x51:r15"",""x96:rbx"",""x97:CF"",""x98:r10"",""x101:r14"",""0x7ffffffffffff:r8"",""x104:r9"",""x95:rbp"",""x85:rcx"",""x105:r12"",""x106:r11"",""x90:rax""]";
"	and rax, r8; x90 <- x86& 0x7ffffffffffff";
"	";
"";
"	; add:";
"	; r:x108,f:_<-add(x106,x90)";
"	; CF: KILLED,OF: KILLED";
"	lea r11, [r11+rax]";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""arg1[2]:rdx"",""0x0:r13"",""x54:OF"",""x51:r15"",""x97:CF"",""x98:r10"",""x101:r14"",""0x7ffffffffffff:r8"",""x104:r9"",""x95:rbp"",""x85:rcx"",""x105:r12"",""x90:rax"",""x108:r11"",""x100:rbx""]";
"	and rbx, r8; x100 <- x96& 0x7ffffffffffff";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""arg1[2]:rdx"",""0x0:r13"",""x54:OF"",""x51:r15"",""x97:CF"",""x98:r10"",""x101:r14"",""0x7ffffffffffff:r8"",""x104:r9"",""x95:rbp"",""x85:rcx"",""x105:r12"",""x90:rax"",""x108:r11"",""x100:rbx""]";
"	mov [rdi + 0x08 * 4 ], rbx; out1[4] = x100";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""arg1[2]:rdx"",""0x0:r13"",""x54:OF"",""x51:r15"",""x97:CF"",""x98:r10"",""x101:r14"",""0x7ffffffffffff:r8"",""x95:rbp"",""x85:rcx"",""x105:r12"",""x90:rax"",""x108:r11"",""x100:rbx"",""x104:r9""]";
"	mov [rdi + 0x08 * 0 ], r9; out1[0] = x104";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""arg1[2]:rdx"",""0x0:r13"",""x54:OF"",""x51:r15"",""x97:CF"",""x98:r10"",""x101:r14"",""0x7ffffffffffff:r8"",""x95:rbp"",""x85:rcx"",""x90:rax"",""x108:r11"",""x100:rbx"",""x104:r9"",""x107:r12""]";
"	and r12, r8; x107 <- x105& 0x7ffffffffffff";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""arg1[2]:rdx"",""0x0:r13"",""x54:OF"",""x51:r15"",""x97:CF"",""x98:r10"",""x101:r14"",""0x7ffffffffffff:r8"",""x95:rbp"",""x85:rcx"",""x90:rax"",""x100:rbx"",""x104:r9"",""x107:r12"",""x108:r11""]";
"	mov [rdi + 0x08 * 2 ], r11; out1[2] = x108";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""arg1[2]:rdx"",""0x0:r13"",""x54:OF"",""x51:r15"",""x97:CF"",""x98:r10"",""x101:r14"",""0x7ffffffffffff:r8"",""x95:rbp"",""x85:rcx"",""x90:rax"",""x100:rbx"",""x104:r9"",""x108:r11"",""x107:r12""]";
"	mov [rdi + 0x08 * 1 ], r12; out1[1] = x107";
"	;-- allocation: [""out1:rdi"",""arg1:rsi"",""arg1[2]:rdx"",""0x0:r13"",""x54:OF"",""x51:r15"",""x97:CF"",""x98:r10"",""x101:r14"",""0x7ffffffffffff:r8"",""x85:rcx"",""x90:rax"",""x100:rbx"",""x104:r9"",""x108:r11"",""x107:r12"",""x95:rbp""]";
"	mov [rdi + 0x08 * 3 ], rbp; out1[3] = x95";
"	mov rbx, [rsp + 0x08 * 0 ]; restoring from stack";
"	mov rbp, [rsp + 0x08 * 1 ]; restoring from stack";
"	mov r12, [rsp + 0x08 * 2 ]; restoring from stack";
"	mov r13, [rsp + 0x08 * 3 ]; restoring from stack";
"	mov r14, [rsp + 0x08 * 4 ]; restoring from stack";
"	mov r15, [rsp + 0x08 * 5 ]; restoring from stack";
"	add rsp, 0x38 ";
"	ret";
"; cyclecount: 207";
"; seed 20 ";
"; time Needed: 419536 ms/ 10000 runs";
"; Time Spent By Invoking Make (measure): 359470 ms";
"; Ratio (time for make measure)/elapsed: 0.8568275428091987";
"; Reverts a mutation because test was slower: 9198";
"; number tried mutation Permutation: 3351";
"; number tried mutation Spill: 3276";
"; number tried mutation Decision: 3372";
"; FailedEvals (cannot swap because of edge to the next node): 2030";
""].