static void freeze(uint64_t out[9], const uint64_t in1[9]) {
  { const uint64_t x15 = in1[8];
  { const uint64_t x16 = in1[7];
  { const uint64_t x14 = in1[6];
  { const uint64_t x12 = in1[5];
  { const uint64_t x10 = in1[4];
  { const uint64_t x8 = in1[3];
  { const uint64_t x6 = in1[2];
  { const uint64_t x4 = in1[1];
  { const uint64_t x2 = in1[0];
  { uint64_t x18, uint8_t/*bool*/ x19 = Op (Syntax.SubWithGetBorrow 52 (Syntax.TWord 0) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 0)) (0x0, Return x2, 0xfffffffffffef);
  { uint64_t x21, uint8_t/*bool*/ x22 = Op (Syntax.SubWithGetBorrow 52 (Syntax.TWord 0) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 0)) (Return x19, Return x4, 0xfffffffffffff);
  { uint64_t x24, uint8_t/*bool*/ x25 = Op (Syntax.SubWithGetBorrow 52 (Syntax.TWord 0) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 0)) (Return x22, Return x6, 0xfffffffffffff);
  { uint64_t x27, uint8_t/*bool*/ x28 = Op (Syntax.SubWithGetBorrow 52 (Syntax.TWord 0) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 0)) (Return x25, Return x8, 0xfffffffffffff);
  { uint64_t x30, uint8_t/*bool*/ x31 = Op (Syntax.SubWithGetBorrow 52 (Syntax.TWord 0) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 0)) (Return x28, Return x10, 0xfffffffffffff);
  { uint64_t x33, uint8_t/*bool*/ x34 = Op (Syntax.SubWithGetBorrow 52 (Syntax.TWord 0) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 0)) (Return x31, Return x12, 0xfffffffffffff);
  { uint64_t x36, uint8_t/*bool*/ x37 = Op (Syntax.SubWithGetBorrow 52 (Syntax.TWord 0) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 0)) (Return x34, Return x14, 0xfffffffffffff);
  { uint64_t x39, uint8_t/*bool*/ x40 = Op (Syntax.SubWithGetBorrow 52 (Syntax.TWord 0) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 0)) (Return x37, Return x16, 0xfffffffffffff);
  { uint64_t x42, uint8_t/*bool*/ x43 = Op (Syntax.SubWithGetBorrow 52 (Syntax.TWord 0) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 0)) (Return x40, Return x15, 0xfffffffffffff);
  { uint64_t x44 = cmovznz64(x43, 0x0, 0xffffffffffffffffL);
  { uint64_t x45 = (x44 & 0xfffffffffffef);
  { uint64_t x47, uint8_t/*bool*/ x48 = Op (Syntax.AddWithGetCarry 52 (Syntax.TWord 0) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 0)) (0x0, Return x18, Return x45);
  { uint64_t x49 = (x44 & 0xfffffffffffff);
  { uint64_t x51, uint8_t/*bool*/ x52 = Op (Syntax.AddWithGetCarry 52 (Syntax.TWord 0) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 0)) (Return x48, Return x21, Return x49);
  { uint64_t x53 = (x44 & 0xfffffffffffff);
  { uint64_t x55, uint8_t/*bool*/ x56 = Op (Syntax.AddWithGetCarry 52 (Syntax.TWord 0) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 0)) (Return x52, Return x24, Return x53);
  { uint64_t x57 = (x44 & 0xfffffffffffff);
  { uint64_t x59, uint8_t/*bool*/ x60 = Op (Syntax.AddWithGetCarry 52 (Syntax.TWord 0) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 0)) (Return x56, Return x27, Return x57);
  { uint64_t x61 = (x44 & 0xfffffffffffff);
  { uint64_t x63, uint8_t/*bool*/ x64 = Op (Syntax.AddWithGetCarry 52 (Syntax.TWord 0) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 0)) (Return x60, Return x30, Return x61);
  { uint64_t x65 = (x44 & 0xfffffffffffff);
  { uint64_t x67, uint8_t/*bool*/ x68 = Op (Syntax.AddWithGetCarry 52 (Syntax.TWord 0) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 0)) (Return x64, Return x33, Return x65);
  { uint64_t x69 = (x44 & 0xfffffffffffff);
  { uint64_t x71, uint8_t/*bool*/ x72 = Op (Syntax.AddWithGetCarry 52 (Syntax.TWord 0) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 0)) (Return x68, Return x36, Return x69);
  { uint64_t x73 = (x44 & 0xfffffffffffff);
  { uint64_t x75, uint8_t/*bool*/ x76 = Op (Syntax.AddWithGetCarry 52 (Syntax.TWord 0) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 0)) (Return x72, Return x39, Return x73);
  { uint64_t x77 = (x44 & 0xfffffffffffff);
  { uint64_t x79, uint8_t/*bool*/ _ = Op (Syntax.AddWithGetCarry 52 (Syntax.TWord 0) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 0)) (Return x76, Return x42, Return x77);
  out[0] = x47;
  out[1] = x51;
  out[2] = x55;
  out[3] = x59;
  out[4] = x63;
  out[5] = x67;
  out[6] = x71;
  out[7] = x75;
  out[8] = x79;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
