static void feadd(uint32_t out[13], const uint32_t in1[13], const uint32_t in2[13]) {
  { const uint32_t x26 = in1[12];
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
  { const uint32_t x50 = in2[12];
  { const uint32_t x51 = in2[11];
  { const uint32_t x49 = in2[10];
  { const uint32_t x47 = in2[9];
  { const uint32_t x45 = in2[8];
  { const uint32_t x43 = in2[7];
  { const uint32_t x41 = in2[6];
  { const uint32_t x39 = in2[5];
  { const uint32_t x37 = in2[4];
  { const uint32_t x35 = in2[3];
  { const uint32_t x33 = in2[2];
  { const uint32_t x31 = in2[1];
  { const uint32_t x29 = in2[0];
  { uint32_t x53; uint8_t/*bool*/ x54 = _addcarryx_u32(0x0, x5, x29, &x53);
  { uint32_t x56; uint8_t/*bool*/ x57 = _addcarryx_u32(x54, x7, x31, &x56);
  { uint32_t x59; uint8_t/*bool*/ x60 = _addcarryx_u32(x57, x9, x33, &x59);
  { uint32_t x62; uint8_t/*bool*/ x63 = _addcarryx_u32(x60, x11, x35, &x62);
  { uint32_t x65; uint8_t/*bool*/ x66 = _addcarryx_u32(x63, x13, x37, &x65);
  { uint32_t x68; uint8_t/*bool*/ x69 = _addcarryx_u32(x66, x15, x39, &x68);
  { uint32_t x71; uint8_t/*bool*/ x72 = _addcarryx_u32(x69, x17, x41, &x71);
  { uint32_t x74; uint8_t/*bool*/ x75 = _addcarryx_u32(x72, x19, x43, &x74);
  { uint32_t x77; uint8_t/*bool*/ x78 = _addcarryx_u32(x75, x21, x45, &x77);
  { uint32_t x80; uint8_t/*bool*/ x81 = _addcarryx_u32(x78, x23, x47, &x80);
  { uint32_t x83; uint8_t/*bool*/ x84 = _addcarryx_u32(x81, x25, x49, &x83);
  { uint32_t x86; uint8_t/*bool*/ x87 = _addcarryx_u32(x84, x27, x51, &x86);
  { uint32_t x89; uint8_t/*bool*/ x90 = _addcarryx_u32(x87, x26, x50, &x89);
  { uint32_t x92; uint8_t/*bool*/ x93 = _subborrow_u32(0x0, x53, 0xffffffef, &x92);
  { uint32_t x95; uint8_t/*bool*/ x96 = _subborrow_u32(x93, x56, 0xffffffff, &x95);
  { uint32_t x98; uint8_t/*bool*/ x99 = _subborrow_u32(x96, x59, 0xffffffff, &x98);
  { uint32_t x101; uint8_t/*bool*/ x102 = _subborrow_u32(x99, x62, 0xffffffff, &x101);
  { uint32_t x104; uint8_t/*bool*/ x105 = _subborrow_u32(x102, x65, 0xffffffff, &x104);
  { uint32_t x107; uint8_t/*bool*/ x108 = _subborrow_u32(x105, x68, 0xffffffff, &x107);
  { uint32_t x110; uint8_t/*bool*/ x111 = _subborrow_u32(x108, x71, 0xffffffff, &x110);
  { uint32_t x113; uint8_t/*bool*/ x114 = _subborrow_u32(x111, x74, 0xffffffff, &x113);
  { uint32_t x116; uint8_t/*bool*/ x117 = _subborrow_u32(x114, x77, 0xffffffff, &x116);
  { uint32_t x119; uint8_t/*bool*/ x120 = _subborrow_u32(x117, x80, 0xffffffff, &x119);
  { uint32_t x122; uint8_t/*bool*/ x123 = _subborrow_u32(x120, x83, 0xffffffff, &x122);
  { uint32_t x125; uint8_t/*bool*/ x126 = _subborrow_u32(x123, x86, 0xffffffff, &x125);
  { uint32_t x128; uint8_t/*bool*/ x129 = _subborrow_u32(x126, x89, 0x3fffffff, &x128);
  { uint32_t _; uint8_t/*bool*/ x132 = _subborrow_u32(x129, x90, 0x0, &_);
  { uint32_t x133 = cmovznz32(x132, x128, x89);
  { uint32_t x134 = cmovznz32(x132, x125, x86);
  { uint32_t x135 = cmovznz32(x132, x122, x83);
  { uint32_t x136 = cmovznz32(x132, x119, x80);
  { uint32_t x137 = cmovznz32(x132, x116, x77);
  { uint32_t x138 = cmovznz32(x132, x113, x74);
  { uint32_t x139 = cmovznz32(x132, x110, x71);
  { uint32_t x140 = cmovznz32(x132, x107, x68);
  { uint32_t x141 = cmovznz32(x132, x104, x65);
  { uint32_t x142 = cmovznz32(x132, x101, x62);
  { uint32_t x143 = cmovznz32(x132, x98, x59);
  { uint32_t x144 = cmovznz32(x132, x95, x56);
  { uint32_t x145 = cmovznz32(x132, x92, x53);
  out[0] = x145;
  out[1] = x144;
  out[2] = x143;
  out[3] = x142;
  out[4] = x141;
  out[5] = x140;
  out[6] = x139;
  out[7] = x138;
  out[8] = x137;
  out[9] = x136;
  out[10] = x135;
  out[11] = x134;
  out[12] = x133;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
