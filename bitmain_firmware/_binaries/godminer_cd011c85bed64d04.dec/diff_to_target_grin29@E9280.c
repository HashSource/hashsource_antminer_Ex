void *__fastcall diff_to_target_grin29(_QWORD *a1)
{
  double v1; // d0
  __int64 v3; // kr00_8
  void *result; // r0

  v3 = sub_12EA28(COERCE_UNSIGNED_INT64(1.84464626e19 / v1), HIDWORD(COERCE_UNSIGNED_INT64(1.84464626e19 / v1)));
  result = memset(a1, 0, 0x20u);
  a1[3] = v3;
  return result;
}
