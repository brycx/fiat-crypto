static void femul(uint64_t out[4], const uint64_t in1[4], const uint64_t in2[4]) {
  { const uint64_t x8 = in1[3];
  { const uint64_t x9 = in1[2];
  { const uint64_t x7 = in1[1];
  { const uint64_t x5 = in1[0];
  { const uint64_t x14 = in2[3];
  { const uint64_t x15 = in2[2];
  { const uint64_t x13 = in2[1];
  { const uint64_t x11 = in2[0];
  { uint64_t x18;  uint64_t x17 = _mulx_u64(x5, x11, &x18);
  { uint64_t x21;  uint64_t x20 = _mulx_u64(x5, x13, &x21);
  { uint64_t x24;  uint64_t x23 = _mulx_u64(x5, x15, &x24);
  { uint64_t x27;  uint64_t x26 = _mulx_u64(x5, x14, &x27);
  { uint64_t x29; uint8_t/*bool*/ x30 = _addcarryx_u64(0x0, x18, x20, &x29);
  { uint64_t x32; uint8_t/*bool*/ x33 = _addcarryx_u64(x30, x21, x23, &x32);
  { uint64_t x35; uint8_t/*bool*/ x36 = _addcarryx_u64(x33, x24, x26, &x35);
  { uint64_t x38; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x36, x27, &x38);
  { uint64_t _;  uint64_t x41 = _mulx_u64(x17, 0xeeeeeeeeeeeeeeefL, &_);
  { uint64_t x45;  uint64_t x44 = _mulx_u64(x41, 0xfffffffffffffff1L, &x45);
  { uint64_t x48;  uint64_t x47 = _mulx_u64(x41, 0xffffffffffffffffL, &x48);
  { uint64_t x51;  uint64_t x50 = _mulx_u64(x41, 0xffffffffffffffffL, &x51);
  { uint8_t x54;  uint64_t x53 = _mulx_u64_out_u8(x41, 0xf, &x54);
  { uint64_t x56; uint8_t/*bool*/ x57 = _addcarryx_u64(0x0, x45, x47, &x56);
  { uint64_t x59; uint8_t/*bool*/ x60 = _addcarryx_u64(x57, x48, x50, &x59);
  { uint64_t x62; uint8_t/*bool*/ x63 = _addcarryx_u64(x60, x51, x53, &x62);
  { uint8_t x64 = ((uint8_t)0x0 + x63);
  { uint8_t x65 = (x64 + x54);
  { uint64_t _; uint8_t/*bool*/ x68 = _addcarryx_u64(0x0, x17, x44, &_);
  { uint64_t x70; uint8_t/*bool*/ x71 = _addcarryx_u64(x68, x29, x56, &x70);
  { uint64_t x73; uint8_t/*bool*/ x74 = _addcarryx_u64(x71, x32, x59, &x73);
  { uint64_t x76; uint8_t/*bool*/ x77 = _addcarryx_u64(x74, x35, x62, &x76);
  { uint64_t x79; uint8_t/*bool*/ x80 = _addcarryx_u64(x77, x38, x65, &x79);
  { uint64_t x83;  uint64_t x82 = _mulx_u64(x7, x11, &x83);
  { uint64_t x86;  uint64_t x85 = _mulx_u64(x7, x13, &x86);
  { uint64_t x89;  uint64_t x88 = _mulx_u64(x7, x15, &x89);
  { uint64_t x92;  uint64_t x91 = _mulx_u64(x7, x14, &x92);
  { uint64_t x94; uint8_t/*bool*/ x95 = _addcarryx_u64(0x0, x83, x85, &x94);
  { uint64_t x97; uint8_t/*bool*/ x98 = _addcarryx_u64(x95, x86, x88, &x97);
  { uint64_t x100; uint8_t/*bool*/ x101 = _addcarryx_u64(x98, x89, x91, &x100);
  { uint64_t x103; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x101, x92, &x103);
  { uint64_t x106; uint8_t/*bool*/ x107 = _addcarryx_u64(0x0, x70, x82, &x106);
  { uint64_t x109; uint8_t/*bool*/ x110 = _addcarryx_u64(x107, x73, x94, &x109);
  { uint64_t x112; uint8_t/*bool*/ x113 = _addcarryx_u64(x110, x76, x97, &x112);
  { uint64_t x115; uint8_t/*bool*/ x116 = _addcarryx_u64(x113, x79, x100, &x115);
  { uint64_t x118; uint8_t/*bool*/ x119 = _addcarryx_u64(x116, x80, x103, &x118);
  { uint64_t _;  uint64_t x121 = _mulx_u64(x106, 0xeeeeeeeeeeeeeeefL, &_);
  { uint64_t x125;  uint64_t x124 = _mulx_u64(x121, 0xfffffffffffffff1L, &x125);
  { uint64_t x128;  uint64_t x127 = _mulx_u64(x121, 0xffffffffffffffffL, &x128);
  { uint64_t x131;  uint64_t x130 = _mulx_u64(x121, 0xffffffffffffffffL, &x131);
  { uint8_t x134;  uint64_t x133 = _mulx_u64_out_u8(x121, 0xf, &x134);
  { uint64_t x136; uint8_t/*bool*/ x137 = _addcarryx_u64(0x0, x125, x127, &x136);
  { uint64_t x139; uint8_t/*bool*/ x140 = _addcarryx_u64(x137, x128, x130, &x139);
  { uint64_t x142; uint8_t/*bool*/ x143 = _addcarryx_u64(x140, x131, x133, &x142);
  { uint8_t x144 = ((uint8_t)0x0 + x143);
  { uint8_t x145 = (x144 + x134);
  { uint64_t _; uint8_t/*bool*/ x148 = _addcarryx_u64(0x0, x106, x124, &_);
  { uint64_t x150; uint8_t/*bool*/ x151 = _addcarryx_u64(x148, x109, x136, &x150);
  { uint64_t x153; uint8_t/*bool*/ x154 = _addcarryx_u64(x151, x112, x139, &x153);
  { uint64_t x156; uint8_t/*bool*/ x157 = _addcarryx_u64(x154, x115, x142, &x156);
  { uint64_t x159; uint8_t/*bool*/ x160 = _addcarryx_u64(x157, x118, x145, &x159);
  { uint8_t x161 = ((uint8_t)x160 + x119);
  { uint64_t x164;  uint64_t x163 = _mulx_u64(x9, x11, &x164);
  { uint64_t x167;  uint64_t x166 = _mulx_u64(x9, x13, &x167);
  { uint64_t x170;  uint64_t x169 = _mulx_u64(x9, x15, &x170);
  { uint64_t x173;  uint64_t x172 = _mulx_u64(x9, x14, &x173);
  { uint64_t x175; uint8_t/*bool*/ x176 = _addcarryx_u64(0x0, x164, x166, &x175);
  { uint64_t x178; uint8_t/*bool*/ x179 = _addcarryx_u64(x176, x167, x169, &x178);
  { uint64_t x181; uint8_t/*bool*/ x182 = _addcarryx_u64(x179, x170, x172, &x181);
  { uint64_t x184; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x182, x173, &x184);
  { uint64_t x187; uint8_t/*bool*/ x188 = _addcarryx_u64(0x0, x150, x163, &x187);
  { uint64_t x190; uint8_t/*bool*/ x191 = _addcarryx_u64(x188, x153, x175, &x190);
  { uint64_t x193; uint8_t/*bool*/ x194 = _addcarryx_u64(x191, x156, x178, &x193);
  { uint64_t x196; uint8_t/*bool*/ x197 = _addcarryx_u64(x194, x159, x181, &x196);
  { uint64_t x199; uint8_t/*bool*/ x200 = _addcarryx_u64(x197, x161, x184, &x199);
  { uint64_t _;  uint64_t x202 = _mulx_u64(x187, 0xeeeeeeeeeeeeeeefL, &_);
  { uint64_t x206;  uint64_t x205 = _mulx_u64(x202, 0xfffffffffffffff1L, &x206);
  { uint64_t x209;  uint64_t x208 = _mulx_u64(x202, 0xffffffffffffffffL, &x209);
  { uint64_t x212;  uint64_t x211 = _mulx_u64(x202, 0xffffffffffffffffL, &x212);
  { uint8_t x215;  uint64_t x214 = _mulx_u64_out_u8(x202, 0xf, &x215);
  { uint64_t x217; uint8_t/*bool*/ x218 = _addcarryx_u64(0x0, x206, x208, &x217);
  { uint64_t x220; uint8_t/*bool*/ x221 = _addcarryx_u64(x218, x209, x211, &x220);
  { uint64_t x223; uint8_t/*bool*/ x224 = _addcarryx_u64(x221, x212, x214, &x223);
  { uint8_t x225 = ((uint8_t)0x0 + x224);
  { uint8_t x226 = (x225 + x215);
  { uint64_t _; uint8_t/*bool*/ x229 = _addcarryx_u64(0x0, x187, x205, &_);
  { uint64_t x231; uint8_t/*bool*/ x232 = _addcarryx_u64(x229, x190, x217, &x231);
  { uint64_t x234; uint8_t/*bool*/ x235 = _addcarryx_u64(x232, x193, x220, &x234);
  { uint64_t x237; uint8_t/*bool*/ x238 = _addcarryx_u64(x235, x196, x223, &x237);
  { uint64_t x240; uint8_t/*bool*/ x241 = _addcarryx_u64(x238, x199, x226, &x240);
  { uint8_t x242 = ((uint8_t)x241 + x200);
  { uint64_t x245;  uint64_t x244 = _mulx_u64(x8, x11, &x245);
  { uint64_t x248;  uint64_t x247 = _mulx_u64(x8, x13, &x248);
  { uint64_t x251;  uint64_t x250 = _mulx_u64(x8, x15, &x251);
  { uint64_t x254;  uint64_t x253 = _mulx_u64(x8, x14, &x254);
  { uint64_t x256; uint8_t/*bool*/ x257 = _addcarryx_u64(0x0, x245, x247, &x256);
  { uint64_t x259; uint8_t/*bool*/ x260 = _addcarryx_u64(x257, x248, x250, &x259);
  { uint64_t x262; uint8_t/*bool*/ x263 = _addcarryx_u64(x260, x251, x253, &x262);
  { uint64_t x265; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x263, x254, &x265);
  { uint64_t x268; uint8_t/*bool*/ x269 = _addcarryx_u64(0x0, x231, x244, &x268);
  { uint64_t x271; uint8_t/*bool*/ x272 = _addcarryx_u64(x269, x234, x256, &x271);
  { uint64_t x274; uint8_t/*bool*/ x275 = _addcarryx_u64(x272, x237, x259, &x274);
  { uint64_t x277; uint8_t/*bool*/ x278 = _addcarryx_u64(x275, x240, x262, &x277);
  { uint64_t x280; uint8_t/*bool*/ x281 = _addcarryx_u64(x278, x242, x265, &x280);
  { uint64_t _;  uint64_t x283 = _mulx_u64(x268, 0xeeeeeeeeeeeeeeefL, &_);
  { uint64_t x287;  uint64_t x286 = _mulx_u64(x283, 0xfffffffffffffff1L, &x287);
  { uint64_t x290;  uint64_t x289 = _mulx_u64(x283, 0xffffffffffffffffL, &x290);
  { uint64_t x293;  uint64_t x292 = _mulx_u64(x283, 0xffffffffffffffffL, &x293);
  { uint8_t x296;  uint64_t x295 = _mulx_u64_out_u8(x283, 0xf, &x296);
  { uint64_t x298; uint8_t/*bool*/ x299 = _addcarryx_u64(0x0, x287, x289, &x298);
  { uint64_t x301; uint8_t/*bool*/ x302 = _addcarryx_u64(x299, x290, x292, &x301);
  { uint64_t x304; uint8_t/*bool*/ x305 = _addcarryx_u64(x302, x293, x295, &x304);
  { uint8_t x306 = ((uint8_t)0x0 + x305);
  { uint8_t x307 = (x306 + x296);
  { uint64_t _; uint8_t/*bool*/ x310 = _addcarryx_u64(0x0, x268, x286, &_);
  { uint64_t x312; uint8_t/*bool*/ x313 = _addcarryx_u64(x310, x271, x298, &x312);
  { uint64_t x315; uint8_t/*bool*/ x316 = _addcarryx_u64(x313, x274, x301, &x315);
  { uint64_t x318; uint8_t/*bool*/ x319 = _addcarryx_u64(x316, x277, x304, &x318);
  { uint64_t x321; uint8_t/*bool*/ x322 = _addcarryx_u64(x319, x280, x307, &x321);
  { uint8_t x323 = ((uint8_t)x322 + x281);
  { uint64_t x325; uint8_t/*bool*/ x326 = _subborrow_u64(0x0, x312, 0xfffffffffffffff1L, &x325);
  { uint64_t x328; uint8_t/*bool*/ x329 = _subborrow_u64(x326, x315, 0xffffffffffffffffL, &x328);
  { uint64_t x331; uint8_t/*bool*/ x332 = _subborrow_u64(x329, x318, 0xffffffffffffffffL, &x331);
  { uint64_t x334; uint8_t/*bool*/ x335 = _subborrow_u64(x332, x321, 0xf, &x334);
  { uint64_t _; uint8_t/*bool*/ x338 = _subborrow_u64(x335, x323, 0x0, &_);
  { uint64_t x339 = cmovznz64(x338, x334, x321);
  { uint64_t x340 = cmovznz64(x338, x331, x318);
  { uint64_t x341 = cmovznz64(x338, x328, x315);
  { uint64_t x342 = cmovznz64(x338, x325, x312);
  out[0] = x342;
  out[1] = x341;
  out[2] = x340;
  out[3] = x339;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
