static void freeze(uint32_t out[20], const uint32_t in1[20]) {
  { const uint32_t x37 = in1[19];
  { const uint32_t x38 = in1[18];
  { const uint32_t x36 = in1[17];
  { const uint32_t x34 = in1[16];
  { const uint32_t x32 = in1[15];
  { const uint32_t x30 = in1[14];
  { const uint32_t x28 = in1[13];
  { const uint32_t x26 = in1[12];
  { const uint32_t x24 = in1[11];
  { const uint32_t x22 = in1[10];
  { const uint32_t x20 = in1[9];
  { const uint32_t x18 = in1[8];
  { const uint32_t x16 = in1[7];
  { const uint32_t x14 = in1[6];
  { const uint32_t x12 = in1[5];
  { const uint32_t x10 = in1[4];
  { const uint32_t x8 = in1[3];
  { const uint32_t x6 = in1[2];
  { const uint32_t x4 = in1[1];
  { const uint32_t x2 = in1[0];
  { uint32_t x40; uint8_t/*bool*/ x41 = _subborrow_u25(0x0, x2, 0x1ffffeb, &x40);
  { uint32_t x43, uint8_t/*bool*/ x44 = Op (Syntax.SubWithGetBorrow 24 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x41, Return x4, 0xffffff);
  { uint32_t x46; uint8_t/*bool*/ x47 = _subborrow_u25(x44, x6, 0x1ffffff, &x46);
  { uint32_t x49, uint8_t/*bool*/ x50 = Op (Syntax.SubWithGetBorrow 24 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x47, Return x8, 0xffffff);
  { uint32_t x52; uint8_t/*bool*/ x53 = _subborrow_u25(x50, x10, 0x1ffffff, &x52);
  { uint32_t x55, uint8_t/*bool*/ x56 = Op (Syntax.SubWithGetBorrow 24 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x53, Return x12, 0xffffff);
  { uint32_t x58; uint8_t/*bool*/ x59 = _subborrow_u25(x56, x14, 0x1ffffff, &x58);
  { uint32_t x61, uint8_t/*bool*/ x62 = Op (Syntax.SubWithGetBorrow 24 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x59, Return x16, 0xffffff);
  { uint32_t x64; uint8_t/*bool*/ x65 = _subborrow_u25(x62, x18, 0x1ffffff, &x64);
  { uint32_t x67, uint8_t/*bool*/ x68 = Op (Syntax.SubWithGetBorrow 24 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x65, Return x20, 0xffffff);
  { uint32_t x70, uint8_t/*bool*/ x71 = Op (Syntax.SubWithGetBorrow 24 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x68, Return x22, 0xffffff);
  { uint32_t x73; uint8_t/*bool*/ x74 = _subborrow_u25(x71, x24, 0x1ffffff, &x73);
  { uint32_t x76, uint8_t/*bool*/ x77 = Op (Syntax.SubWithGetBorrow 24 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x74, Return x26, 0xffffff);
  { uint32_t x79; uint8_t/*bool*/ x80 = _subborrow_u25(x77, x28, 0x1ffffff, &x79);
  { uint32_t x82, uint8_t/*bool*/ x83 = Op (Syntax.SubWithGetBorrow 24 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x80, Return x30, 0xffffff);
  { uint32_t x85; uint8_t/*bool*/ x86 = _subborrow_u25(x83, x32, 0x1ffffff, &x85);
  { uint32_t x88, uint8_t/*bool*/ x89 = Op (Syntax.SubWithGetBorrow 24 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x86, Return x34, 0xffffff);
  { uint32_t x91; uint8_t/*bool*/ x92 = _subborrow_u25(x89, x36, 0x1ffffff, &x91);
  { uint32_t x94, uint8_t/*bool*/ x95 = Op (Syntax.SubWithGetBorrow 24 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x92, Return x38, 0xffffff);
  { uint32_t x97, uint8_t/*bool*/ x98 = Op (Syntax.SubWithGetBorrow 24 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x95, Return x37, 0xffffff);
  { uint32_t x99 = cmovznz32(x98, 0x0, 0xffffffff);
  { uint32_t x100 = (x99 & 0x1ffffeb);
  { uint32_t x102; uint8_t/*bool*/ x103 = _addcarryx_u25(0x0, x40, x100, &x102);
  { uint32_t x104 = (x99 & 0xffffff);
  { uint32_t x106, uint8_t/*bool*/ x107 = Op (Syntax.AddWithGetCarry 24 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x103, Return x43, Return x104);
  { uint32_t x108 = (x99 & 0x1ffffff);
  { uint32_t x110; uint8_t/*bool*/ x111 = _addcarryx_u25(x107, x46, x108, &x110);
  { uint32_t x112 = (x99 & 0xffffff);
  { uint32_t x114, uint8_t/*bool*/ x115 = Op (Syntax.AddWithGetCarry 24 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x111, Return x49, Return x112);
  { uint32_t x116 = (x99 & 0x1ffffff);
  { uint32_t x118; uint8_t/*bool*/ x119 = _addcarryx_u25(x115, x52, x116, &x118);
  { uint32_t x120 = (x99 & 0xffffff);
  { uint32_t x122, uint8_t/*bool*/ x123 = Op (Syntax.AddWithGetCarry 24 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x119, Return x55, Return x120);
  { uint32_t x124 = (x99 & 0x1ffffff);
  { uint32_t x126; uint8_t/*bool*/ x127 = _addcarryx_u25(x123, x58, x124, &x126);
  { uint32_t x128 = (x99 & 0xffffff);
  { uint32_t x130, uint8_t/*bool*/ x131 = Op (Syntax.AddWithGetCarry 24 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x127, Return x61, Return x128);
  { uint32_t x132 = (x99 & 0x1ffffff);
  { uint32_t x134; uint8_t/*bool*/ x135 = _addcarryx_u25(x131, x64, x132, &x134);
  { uint32_t x136 = (x99 & 0xffffff);
  { uint32_t x138, uint8_t/*bool*/ x139 = Op (Syntax.AddWithGetCarry 24 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x135, Return x67, Return x136);
  { uint32_t x140 = (x99 & 0xffffff);
  { uint32_t x142, uint8_t/*bool*/ x143 = Op (Syntax.AddWithGetCarry 24 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x139, Return x70, Return x140);
  { uint32_t x144 = (x99 & 0x1ffffff);
  { uint32_t x146; uint8_t/*bool*/ x147 = _addcarryx_u25(x143, x73, x144, &x146);
  { uint32_t x148 = (x99 & 0xffffff);
  { uint32_t x150, uint8_t/*bool*/ x151 = Op (Syntax.AddWithGetCarry 24 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x147, Return x76, Return x148);
  { uint32_t x152 = (x99 & 0x1ffffff);
  { uint32_t x154; uint8_t/*bool*/ x155 = _addcarryx_u25(x151, x79, x152, &x154);
  { uint32_t x156 = (x99 & 0xffffff);
  { uint32_t x158, uint8_t/*bool*/ x159 = Op (Syntax.AddWithGetCarry 24 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x155, Return x82, Return x156);
  { uint32_t x160 = (x99 & 0x1ffffff);
  { uint32_t x162; uint8_t/*bool*/ x163 = _addcarryx_u25(x159, x85, x160, &x162);
  { uint32_t x164 = (x99 & 0xffffff);
  { uint32_t x166, uint8_t/*bool*/ x167 = Op (Syntax.AddWithGetCarry 24 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x163, Return x88, Return x164);
  { uint32_t x168 = (x99 & 0x1ffffff);
  { uint32_t x170; uint8_t/*bool*/ x171 = _addcarryx_u25(x167, x91, x168, &x170);
  { uint32_t x172 = (x99 & 0xffffff);
  { uint32_t x174, uint8_t/*bool*/ x175 = Op (Syntax.AddWithGetCarry 24 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x171, Return x94, Return x172);
  { uint32_t x176 = (x99 & 0xffffff);
  { uint32_t x178, uint8_t/*bool*/ _ = Op (Syntax.AddWithGetCarry 24 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x175, Return x97, Return x176);
  out[0] = x102;
  out[1] = x106;
  out[2] = x110;
  out[3] = x114;
  out[4] = x118;
  out[5] = x122;
  out[6] = x126;
  out[7] = x130;
  out[8] = x134;
  out[9] = x138;
  out[10] = x142;
  out[11] = x146;
  out[12] = x150;
  out[13] = x154;
  out[14] = x158;
  out[15] = x162;
  out[16] = x166;
  out[17] = x170;
  out[18] = x174;
  out[19] = x178;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
