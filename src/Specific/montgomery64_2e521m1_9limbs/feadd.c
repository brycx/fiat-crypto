static void feadd(uint64_t out[9], const uint64_t in1[9], const uint64_t in2[9]) {
  { const uint64_t x18 = in1[8];
  { const uint64_t x19 = in1[7];
  { const uint64_t x17 = in1[6];
  { const uint64_t x15 = in1[5];
  { const uint64_t x13 = in1[4];
  { const uint64_t x11 = in1[3];
  { const uint64_t x9 = in1[2];
  { const uint64_t x7 = in1[1];
  { const uint64_t x5 = in1[0];
  { const uint64_t x34 = in2[8];
  { const uint64_t x35 = in2[7];
  { const uint64_t x33 = in2[6];
  { const uint64_t x31 = in2[5];
  { const uint64_t x29 = in2[4];
  { const uint64_t x27 = in2[3];
  { const uint64_t x25 = in2[2];
  { const uint64_t x23 = in2[1];
  { const uint64_t x21 = in2[0];
  { uint64_t x37; uint8_t/*bool*/ x38 = _addcarryx_u64(0x0, x5, x21, &x37);
  { uint64_t x40; uint8_t/*bool*/ x41 = _addcarryx_u64(x38, x7, x23, &x40);
  { uint64_t x43; uint8_t/*bool*/ x44 = _addcarryx_u64(x41, x9, x25, &x43);
  { uint64_t x46; uint8_t/*bool*/ x47 = _addcarryx_u64(x44, x11, x27, &x46);
  { uint64_t x49; uint8_t/*bool*/ x50 = _addcarryx_u64(x47, x13, x29, &x49);
  { uint64_t x52; uint8_t/*bool*/ x53 = _addcarryx_u64(x50, x15, x31, &x52);
  { uint64_t x55; uint8_t/*bool*/ x56 = _addcarryx_u64(x53, x17, x33, &x55);
  { uint64_t x58; uint8_t/*bool*/ x59 = _addcarryx_u64(x56, x19, x35, &x58);
  { uint64_t x61; uint8_t/*bool*/ x62 = _addcarryx_u64(x59, x18, x34, &x61);
  { uint64_t x64; uint8_t/*bool*/ x65 = _subborrow_u64(0x0, x37, 0xffffffffffffffffL, &x64);
  { uint64_t x67; uint8_t/*bool*/ x68 = _subborrow_u64(x65, x40, 0xffffffffffffffffL, &x67);
  { uint64_t x70; uint8_t/*bool*/ x71 = _subborrow_u64(x68, x43, 0xffffffffffffffffL, &x70);
  { uint64_t x73; uint8_t/*bool*/ x74 = _subborrow_u64(x71, x46, 0xffffffffffffffffL, &x73);
  { uint64_t x76; uint8_t/*bool*/ x77 = _subborrow_u64(x74, x49, 0xffffffffffffffffL, &x76);
  { uint64_t x79; uint8_t/*bool*/ x80 = _subborrow_u64(x77, x52, 0xffffffffffffffffL, &x79);
  { uint64_t x82; uint8_t/*bool*/ x83 = _subborrow_u64(x80, x55, 0xffffffffffffffffL, &x82);
  { uint64_t x85; uint8_t/*bool*/ x86 = _subborrow_u64(x83, x58, 0xffffffffffffffffL, &x85);
  { uint64_t x88; uint8_t/*bool*/ x89 = _subborrow_u64(x86, x61, 0x1ff, &x88);
  { uint64_t _; uint8_t/*bool*/ x92 = _subborrow_u64(x89, x62, 0x0, &_);
  { uint64_t x93 = cmovznz64(x92, x88, x61);
  { uint64_t x94 = cmovznz64(x92, x85, x58);
  { uint64_t x95 = cmovznz64(x92, x82, x55);
  { uint64_t x96 = cmovznz64(x92, x79, x52);
  { uint64_t x97 = cmovznz64(x92, x76, x49);
  { uint64_t x98 = cmovznz64(x92, x73, x46);
  { uint64_t x99 = cmovznz64(x92, x70, x43);
  { uint64_t x100 = cmovznz64(x92, x67, x40);
  { uint64_t x101 = cmovznz64(x92, x64, x37);
  out[0] = x101;
  out[1] = x100;
  out[2] = x99;
  out[3] = x98;
  out[4] = x97;
  out[5] = x96;
  out[6] = x95;
  out[7] = x94;
  out[8] = x93;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
