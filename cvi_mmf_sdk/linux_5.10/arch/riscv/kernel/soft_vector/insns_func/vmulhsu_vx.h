// vmulhsu.vx *vd, vs2, rs1
VI_LOOP_BASE
switch(sew) {
case e8: {
  int8_t *vd =vector_elt_int8_t(VECTOR, rd_num, i);
  int8_t vs2 = *vector_elt_int8_t(VECTOR, rs2_num, i);
  uint8_t rs1 = RS1;

  *vd =((int16_t)vs2 * (uint16_t)rs1) >> sew;
  break;
}
case e16: {
  int16_t *vd =vector_elt_int16_t(VECTOR, rd_num, i);
  int16_t vs2 = *vector_elt_int16_t(VECTOR, rs2_num, i);
  uint16_t rs1 = RS1;

  *vd =((int32_t)vs2 * (uint32_t)rs1) >> sew;
  break;
}
case e32: {
  int32_t *vd =vector_elt_int32_t(VECTOR, rd_num, i);
  int32_t vs2 = *vector_elt_int32_t(VECTOR, rs2_num, i);
  uint32_t rs1 = RS1;

  *vd =((int64_t)vs2 * (uint64_t)rs1) >> sew;
  break;
}
default: {
  int64_t *vd =vector_elt_int64_t(VECTOR, rd_num, i);
  int64_t vs2 = *vector_elt_int64_t(VECTOR, rs2_num, i);
  uint64_t rs1 = RS1;

  *vd =((int128_t)vs2 * (uint128_t)rs1) >> sew;
  break;
}
}
VI_LOOP_END
