static void feadd(uint32_t out[14], const uint32_t in1[14], const uint32_t in2[14]) {
  { const uint32_t x28 = in1[13];
  { const uint32_t x29 = in1[12];
  { const uint32_t x27 = in1[11];
  { const uint32_t x25 = in1[10];
  { const uint32_t x23 = in1[9];
  { const uint32_t x21 = in1[8];
  { const uint32_t x19 = in1[7];
  { const uint32_t x17 = in1[6];
  { const uint32_t x15 = in1[5];
  { const uint32_t x13 = in1[4];
  { const uint32_t x11 = in1[3];
  { const uint32_t x9 = in1[2];
  { const uint32_t x7 = in1[1];
  { const uint32_t x5 = in1[0];
  { const uint32_t x54 = in2[13];
  { const uint32_t x55 = in2[12];
  { const uint32_t x53 = in2[11];
  { const uint32_t x51 = in2[10];
  { const uint32_t x49 = in2[9];
  { const uint32_t x47 = in2[8];
  { const uint32_t x45 = in2[7];
  { const uint32_t x43 = in2[6];
  { const uint32_t x41 = in2[5];
  { const uint32_t x39 = in2[4];
  { const uint32_t x37 = in2[3];
  { const uint32_t x35 = in2[2];
  { const uint32_t x33 = in2[1];
  { const uint32_t x31 = in2[0];
  { uint32_t x57; uint8_t/*bool*/ x58 = _addcarryx_u32(0x0, x5, x31, &x57);
  { uint32_t x60; uint8_t/*bool*/ x61 = _addcarryx_u32(x58, x7, x33, &x60);
  { uint32_t x63; uint8_t/*bool*/ x64 = _addcarryx_u32(x61, x9, x35, &x63);
  { uint32_t x66; uint8_t/*bool*/ x67 = _addcarryx_u32(x64, x11, x37, &x66);
  { uint32_t x69; uint8_t/*bool*/ x70 = _addcarryx_u32(x67, x13, x39, &x69);
  { uint32_t x72; uint8_t/*bool*/ x73 = _addcarryx_u32(x70, x15, x41, &x72);
  { uint32_t x75; uint8_t/*bool*/ x76 = _addcarryx_u32(x73, x17, x43, &x75);
  { uint32_t x78; uint8_t/*bool*/ x79 = _addcarryx_u32(x76, x19, x45, &x78);
  { uint32_t x81; uint8_t/*bool*/ x82 = _addcarryx_u32(x79, x21, x47, &x81);
  { uint32_t x84; uint8_t/*bool*/ x85 = _addcarryx_u32(x82, x23, x49, &x84);
  { uint32_t x87; uint8_t/*bool*/ x88 = _addcarryx_u32(x85, x25, x51, &x87);
  { uint32_t x90; uint8_t/*bool*/ x91 = _addcarryx_u32(x88, x27, x53, &x90);
  { uint32_t x93; uint8_t/*bool*/ x94 = _addcarryx_u32(x91, x29, x55, &x93);
  { uint32_t x96; uint8_t/*bool*/ x97 = _addcarryx_u32(x94, x28, x54, &x96);
  { uint32_t x99; uint8_t/*bool*/ x100 = _subborrow_u32(0x0, x57, 0xffffffef, &x99);
  { uint32_t x102; uint8_t/*bool*/ x103 = _subborrow_u32(x100, x60, 0xffffffff, &x102);
  { uint32_t x105; uint8_t/*bool*/ x106 = _subborrow_u32(x103, x63, 0xffffffff, &x105);
  { uint32_t x108; uint8_t/*bool*/ x109 = _subborrow_u32(x106, x66, 0xffffffff, &x108);
  { uint32_t x111; uint8_t/*bool*/ x112 = _subborrow_u32(x109, x69, 0xffffffff, &x111);
  { uint32_t x114; uint8_t/*bool*/ x115 = _subborrow_u32(x112, x72, 0xffffffff, &x114);
  { uint32_t x117; uint8_t/*bool*/ x118 = _subborrow_u32(x115, x75, 0xffffffff, &x117);
  { uint32_t x120; uint8_t/*bool*/ x121 = _subborrow_u32(x118, x78, 0xffffffff, &x120);
  { uint32_t x123; uint8_t/*bool*/ x124 = _subborrow_u32(x121, x81, 0xffffffff, &x123);
  { uint32_t x126; uint8_t/*bool*/ x127 = _subborrow_u32(x124, x84, 0xffffffff, &x126);
  { uint32_t x129; uint8_t/*bool*/ x130 = _subborrow_u32(x127, x87, 0xffffffff, &x129);
  { uint32_t x132; uint8_t/*bool*/ x133 = _subborrow_u32(x130, x90, 0xffffffff, &x132);
  { uint32_t x135; uint8_t/*bool*/ x136 = _subborrow_u32(x133, x93, 0xffffffff, &x135);
  { uint32_t x138; uint8_t/*bool*/ x139 = _subborrow_u32(x136, x96, 0xfffffff, &x138);
  { uint32_t _; uint8_t/*bool*/ x142 = _subborrow_u32(x139, x97, 0x0, &_);
  { uint32_t x143 = cmovznz32(x142, x138, x96);
  { uint32_t x144 = cmovznz32(x142, x135, x93);
  { uint32_t x145 = cmovznz32(x142, x132, x90);
  { uint32_t x146 = cmovznz32(x142, x129, x87);
  { uint32_t x147 = cmovznz32(x142, x126, x84);
  { uint32_t x148 = cmovznz32(x142, x123, x81);
  { uint32_t x149 = cmovznz32(x142, x120, x78);
  { uint32_t x150 = cmovznz32(x142, x117, x75);
  { uint32_t x151 = cmovznz32(x142, x114, x72);
  { uint32_t x152 = cmovznz32(x142, x111, x69);
  { uint32_t x153 = cmovznz32(x142, x108, x66);
  { uint32_t x154 = cmovznz32(x142, x105, x63);
  { uint32_t x155 = cmovznz32(x142, x102, x60);
  { uint32_t x156 = cmovznz32(x142, x99, x57);
  out[0] = x156;
  out[1] = x155;
  out[2] = x154;
  out[3] = x153;
  out[4] = x152;
  out[5] = x151;
  out[6] = x150;
  out[7] = x149;
  out[8] = x148;
  out[9] = x147;
  out[10] = x146;
  out[11] = x145;
  out[12] = x144;
  out[13] = x143;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
