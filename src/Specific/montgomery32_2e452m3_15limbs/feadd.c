static void feadd(uint32_t out[15], const uint32_t in1[15], const uint32_t in2[15]) {
  { const uint32_t x30 = in1[14];
  { const uint32_t x31 = in1[13];
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
  { const uint32_t x58 = in2[14];
  { const uint32_t x59 = in2[13];
  { const uint32_t x57 = in2[12];
  { const uint32_t x55 = in2[11];
  { const uint32_t x53 = in2[10];
  { const uint32_t x51 = in2[9];
  { const uint32_t x49 = in2[8];
  { const uint32_t x47 = in2[7];
  { const uint32_t x45 = in2[6];
  { const uint32_t x43 = in2[5];
  { const uint32_t x41 = in2[4];
  { const uint32_t x39 = in2[3];
  { const uint32_t x37 = in2[2];
  { const uint32_t x35 = in2[1];
  { const uint32_t x33 = in2[0];
  { uint32_t x61; uint8_t/*bool*/ x62 = _addcarryx_u32(0x0, x5, x33, &x61);
  { uint32_t x64; uint8_t/*bool*/ x65 = _addcarryx_u32(x62, x7, x35, &x64);
  { uint32_t x67; uint8_t/*bool*/ x68 = _addcarryx_u32(x65, x9, x37, &x67);
  { uint32_t x70; uint8_t/*bool*/ x71 = _addcarryx_u32(x68, x11, x39, &x70);
  { uint32_t x73; uint8_t/*bool*/ x74 = _addcarryx_u32(x71, x13, x41, &x73);
  { uint32_t x76; uint8_t/*bool*/ x77 = _addcarryx_u32(x74, x15, x43, &x76);
  { uint32_t x79; uint8_t/*bool*/ x80 = _addcarryx_u32(x77, x17, x45, &x79);
  { uint32_t x82; uint8_t/*bool*/ x83 = _addcarryx_u32(x80, x19, x47, &x82);
  { uint32_t x85; uint8_t/*bool*/ x86 = _addcarryx_u32(x83, x21, x49, &x85);
  { uint32_t x88; uint8_t/*bool*/ x89 = _addcarryx_u32(x86, x23, x51, &x88);
  { uint32_t x91; uint8_t/*bool*/ x92 = _addcarryx_u32(x89, x25, x53, &x91);
  { uint32_t x94; uint8_t/*bool*/ x95 = _addcarryx_u32(x92, x27, x55, &x94);
  { uint32_t x97; uint8_t/*bool*/ x98 = _addcarryx_u32(x95, x29, x57, &x97);
  { uint32_t x100; uint8_t/*bool*/ x101 = _addcarryx_u32(x98, x31, x59, &x100);
  { uint32_t x103; uint8_t/*bool*/ x104 = _addcarryx_u32(x101, x30, x58, &x103);
  { uint32_t x106; uint8_t/*bool*/ x107 = _subborrow_u32(0x0, x61, 0xfffffffd, &x106);
  { uint32_t x109; uint8_t/*bool*/ x110 = _subborrow_u32(x107, x64, 0xffffffff, &x109);
  { uint32_t x112; uint8_t/*bool*/ x113 = _subborrow_u32(x110, x67, 0xffffffff, &x112);
  { uint32_t x115; uint8_t/*bool*/ x116 = _subborrow_u32(x113, x70, 0xffffffff, &x115);
  { uint32_t x118; uint8_t/*bool*/ x119 = _subborrow_u32(x116, x73, 0xffffffff, &x118);
  { uint32_t x121; uint8_t/*bool*/ x122 = _subborrow_u32(x119, x76, 0xffffffff, &x121);
  { uint32_t x124; uint8_t/*bool*/ x125 = _subborrow_u32(x122, x79, 0xffffffff, &x124);
  { uint32_t x127; uint8_t/*bool*/ x128 = _subborrow_u32(x125, x82, 0xffffffff, &x127);
  { uint32_t x130; uint8_t/*bool*/ x131 = _subborrow_u32(x128, x85, 0xffffffff, &x130);
  { uint32_t x133; uint8_t/*bool*/ x134 = _subborrow_u32(x131, x88, 0xffffffff, &x133);
  { uint32_t x136; uint8_t/*bool*/ x137 = _subborrow_u32(x134, x91, 0xffffffff, &x136);
  { uint32_t x139; uint8_t/*bool*/ x140 = _subborrow_u32(x137, x94, 0xffffffff, &x139);
  { uint32_t x142; uint8_t/*bool*/ x143 = _subborrow_u32(x140, x97, 0xffffffff, &x142);
  { uint32_t x145; uint8_t/*bool*/ x146 = _subborrow_u32(x143, x100, 0xffffffff, &x145);
  { uint32_t x148; uint8_t/*bool*/ x149 = _subborrow_u32(x146, x103, 0xf, &x148);
  { uint32_t _; uint8_t/*bool*/ x152 = _subborrow_u32(x149, x104, 0x0, &_);
  { uint32_t x153 = cmovznz32(x152, x148, x103);
  { uint32_t x154 = cmovznz32(x152, x145, x100);
  { uint32_t x155 = cmovznz32(x152, x142, x97);
  { uint32_t x156 = cmovznz32(x152, x139, x94);
  { uint32_t x157 = cmovznz32(x152, x136, x91);
  { uint32_t x158 = cmovznz32(x152, x133, x88);
  { uint32_t x159 = cmovznz32(x152, x130, x85);
  { uint32_t x160 = cmovznz32(x152, x127, x82);
  { uint32_t x161 = cmovznz32(x152, x124, x79);
  { uint32_t x162 = cmovznz32(x152, x121, x76);
  { uint32_t x163 = cmovznz32(x152, x118, x73);
  { uint32_t x164 = cmovznz32(x152, x115, x70);
  { uint32_t x165 = cmovznz32(x152, x112, x67);
  { uint32_t x166 = cmovznz32(x152, x109, x64);
  { uint32_t x167 = cmovznz32(x152, x106, x61);
  out[0] = x167;
  out[1] = x166;
  out[2] = x165;
  out[3] = x164;
  out[4] = x163;
  out[5] = x162;
  out[6] = x161;
  out[7] = x160;
  out[8] = x159;
  out[9] = x158;
  out[10] = x157;
  out[11] = x156;
  out[12] = x155;
  out[13] = x154;
  out[14] = x153;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
