static void femul(uint64_t out[3], const uint64_t in1[3], const uint64_t in2[3]) {
  { const uint64_t x6 = in1[2];
  { const uint64_t x7 = in1[1];
  { const uint64_t x5 = in1[0];
  { const uint64_t x10 = in2[2];
  { const uint64_t x11 = in2[1];
  { const uint64_t x9 = in2[0];
  { uint64_t x14;  uint64_t x13 = _mulx_u64(x5, x9, &x14);
  { uint64_t x17;  uint64_t x16 = _mulx_u64(x5, x11, &x17);
  { uint64_t x20;  uint64_t x19 = _mulx_u64(x5, x10, &x20);
  { uint64_t x22; uint8_t/*bool*/ x23 = _addcarryx_u64(0x0, x14, x16, &x22);
  { uint64_t x25; uint8_t/*bool*/ x26 = _addcarryx_u64(x23, x17, x19, &x25);
  { uint64_t x28; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x26, x20, &x28);
  { uint64_t _;  uint64_t x31 = _mulx_u64(x13, 0x2e8ba2e8ba2e8ba3, &_);
  { uint64_t x35;  uint64_t x34 = _mulx_u64(x31, 0xfffffffffffffff5L, &x35);
  { uint64_t x38;  uint64_t x37 = _mulx_u64(x31, 0xffffffffffffffffL, &x38);
  { uint64_t x41;  uint64_t x40 = _mulx_u64(x31, 0x3fffffffffffffff, &x41);
  { uint64_t x43; uint8_t/*bool*/ x44 = _addcarryx_u64(0x0, x35, x37, &x43);
  { uint64_t x46; uint8_t/*bool*/ x47 = _addcarryx_u64(x44, x38, x40, &x46);
  { uint64_t x49; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x47, x41, &x49);
  { uint64_t _; uint8_t/*bool*/ x53 = _addcarryx_u64(0x0, x13, x34, &_);
  { uint64_t x55; uint8_t/*bool*/ x56 = _addcarryx_u64(x53, x22, x43, &x55);
  { uint64_t x58; uint8_t/*bool*/ x59 = _addcarryx_u64(x56, x25, x46, &x58);
  { uint64_t x61; uint8_t/*bool*/ x62 = _addcarryx_u64(x59, x28, x49, &x61);
  { uint64_t x65;  uint64_t x64 = _mulx_u64(x7, x9, &x65);
  { uint64_t x68;  uint64_t x67 = _mulx_u64(x7, x11, &x68);
  { uint64_t x71;  uint64_t x70 = _mulx_u64(x7, x10, &x71);
  { uint64_t x73; uint8_t/*bool*/ x74 = _addcarryx_u64(0x0, x65, x67, &x73);
  { uint64_t x76; uint8_t/*bool*/ x77 = _addcarryx_u64(x74, x68, x70, &x76);
  { uint64_t x79; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x77, x71, &x79);
  { uint64_t x82; uint8_t/*bool*/ x83 = _addcarryx_u64(0x0, x55, x64, &x82);
  { uint64_t x85; uint8_t/*bool*/ x86 = _addcarryx_u64(x83, x58, x73, &x85);
  { uint64_t x88; uint8_t/*bool*/ x89 = _addcarryx_u64(x86, x61, x76, &x88);
  { uint64_t x91; uint8_t/*bool*/ x92 = _addcarryx_u64(x89, x62, x79, &x91);
  { uint64_t _;  uint64_t x94 = _mulx_u64(x82, 0x2e8ba2e8ba2e8ba3, &_);
  { uint64_t x98;  uint64_t x97 = _mulx_u64(x94, 0xfffffffffffffff5L, &x98);
  { uint64_t x101;  uint64_t x100 = _mulx_u64(x94, 0xffffffffffffffffL, &x101);
  { uint64_t x104;  uint64_t x103 = _mulx_u64(x94, 0x3fffffffffffffff, &x104);
  { uint64_t x106; uint8_t/*bool*/ x107 = _addcarryx_u64(0x0, x98, x100, &x106);
  { uint64_t x109; uint8_t/*bool*/ x110 = _addcarryx_u64(x107, x101, x103, &x109);
  { uint64_t x112; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x110, x104, &x112);
  { uint64_t _; uint8_t/*bool*/ x116 = _addcarryx_u64(0x0, x82, x97, &_);
  { uint64_t x118; uint8_t/*bool*/ x119 = _addcarryx_u64(x116, x85, x106, &x118);
  { uint64_t x121; uint8_t/*bool*/ x122 = _addcarryx_u64(x119, x88, x109, &x121);
  { uint64_t x124; uint8_t/*bool*/ x125 = _addcarryx_u64(x122, x91, x112, &x124);
  { uint8_t x126 = ((uint8_t)x125 + x92);
  { uint64_t x129;  uint64_t x128 = _mulx_u64(x6, x9, &x129);
  { uint64_t x132;  uint64_t x131 = _mulx_u64(x6, x11, &x132);
  { uint64_t x135;  uint64_t x134 = _mulx_u64(x6, x10, &x135);
  { uint64_t x137; uint8_t/*bool*/ x138 = _addcarryx_u64(0x0, x129, x131, &x137);
  { uint64_t x140; uint8_t/*bool*/ x141 = _addcarryx_u64(x138, x132, x134, &x140);
  { uint64_t x143; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x141, x135, &x143);
  { uint64_t x146; uint8_t/*bool*/ x147 = _addcarryx_u64(0x0, x118, x128, &x146);
  { uint64_t x149; uint8_t/*bool*/ x150 = _addcarryx_u64(x147, x121, x137, &x149);
  { uint64_t x152; uint8_t/*bool*/ x153 = _addcarryx_u64(x150, x124, x140, &x152);
  { uint64_t x155; uint8_t/*bool*/ x156 = _addcarryx_u64(x153, x126, x143, &x155);
  { uint64_t _;  uint64_t x158 = _mulx_u64(x146, 0x2e8ba2e8ba2e8ba3, &_);
  { uint64_t x162;  uint64_t x161 = _mulx_u64(x158, 0xfffffffffffffff5L, &x162);
  { uint64_t x165;  uint64_t x164 = _mulx_u64(x158, 0xffffffffffffffffL, &x165);
  { uint64_t x168;  uint64_t x167 = _mulx_u64(x158, 0x3fffffffffffffff, &x168);
  { uint64_t x170; uint8_t/*bool*/ x171 = _addcarryx_u64(0x0, x162, x164, &x170);
  { uint64_t x173; uint8_t/*bool*/ x174 = _addcarryx_u64(x171, x165, x167, &x173);
  { uint64_t x176; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x174, x168, &x176);
  { uint64_t _; uint8_t/*bool*/ x180 = _addcarryx_u64(0x0, x146, x161, &_);
  { uint64_t x182; uint8_t/*bool*/ x183 = _addcarryx_u64(x180, x149, x170, &x182);
  { uint64_t x185; uint8_t/*bool*/ x186 = _addcarryx_u64(x183, x152, x173, &x185);
  { uint64_t x188; uint8_t/*bool*/ x189 = _addcarryx_u64(x186, x155, x176, &x188);
  { uint8_t x190 = ((uint8_t)x189 + x156);
  { uint64_t x192; uint8_t/*bool*/ x193 = _subborrow_u64(0x0, x182, 0xfffffffffffffff5L, &x192);
  { uint64_t x195; uint8_t/*bool*/ x196 = _subborrow_u64(x193, x185, 0xffffffffffffffffL, &x195);
  { uint64_t x198; uint8_t/*bool*/ x199 = _subborrow_u64(x196, x188, 0x3fffffffffffffff, &x198);
  { uint64_t _; uint8_t/*bool*/ x202 = _subborrow_u64(x199, x190, 0x0, &_);
  { uint64_t x203 = cmovznz64(x202, x198, x188);
  { uint64_t x204 = cmovznz64(x202, x195, x185);
  { uint64_t x205 = cmovznz64(x202, x192, x182);
  out[0] = x205;
  out[1] = x204;
  out[2] = x203;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
