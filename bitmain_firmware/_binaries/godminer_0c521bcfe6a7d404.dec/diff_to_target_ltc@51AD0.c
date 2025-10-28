int __fastcall diff_to_target_ltc(__int64 *a1)
{
  double v1; // d0
  __int64 v3; // r6
  double v4; // d8
  __int64 v5; // kr00_8
  double v6; // d8
  __int64 v7; // kr08_8
  double v8; // r0
  __int64 v9; // r0

  if ( v1 <= 0.0 )
  {
    v9 = 0;
    v3 = 0xFFFF00000000LL;
    v5 = 0;
    v7 = 0;
  }
  else
  {
    v3 = sub_12E9A8(
           COERCE_UNSIGNED_INT64(1.7668201e72 / v1 * 1.59309191e-58),
           HIDWORD(COERCE_UNSIGNED_INT64(1.7668201e72 / v1 * 1.59309191e-58)));
    v4 = 1.7668201e72 / v1 - sub_12E61C(v3, HIDWORD(v3)) * 6.27710174e57;
    v5 = sub_12E9A8(COERCE_UNSIGNED_INT64(v4 * 2.93873588e-39), HIDWORD(COERCE_UNSIGNED_INT64(v4 * 2.93873588e-39)));
    v6 = v4 - sub_12E61C(v5, HIDWORD(v5)) * 3.40282367e38;
    v7 = sub_12E9A8(COERCE_UNSIGNED_INT64(v6 * 5.42101086e-20), HIDWORD(COERCE_UNSIGNED_INT64(v6 * 5.42101086e-20)));
    v8 = sub_12E61C(v7, HIDWORD(v7));
    v9 = sub_12E9A8(
           COERCE_UNSIGNED_INT64(v6 - v8 * 1.84467441e19),
           HIDWORD(COERCE_UNSIGNED_INT64(v6 - v8 * 1.84467441e19)));
  }
  *a1 = v9;
  a1[1] = v7;
  a1[2] = v5;
  a1[3] = v3;
  return v5;
}
