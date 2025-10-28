int __fastcall diff_to_target_ltc(__int64 *a1)
{
  double v1; // d0
  __int64 v3; // r6
  int v4; // r2
  double v5; // d8
  __int64 v6; // kr00_8
  int v7; // r2
  double v8; // d8
  __int64 v9; // kr08_8
  int v10; // r2
  double v11; // r0
  __int64 v12; // r0

  if ( v1 <= 0.0 )
  {
    v12 = 0;
    v3 = 0xFFFF00000000LL;
    v6 = 0;
    v9 = 0;
  }
  else
  {
    v3 = sub_12D5A0(
           COERCE_UNSIGNED_INT64(1.7668201e72 / v1 * 1.59309191e-58),
           HIDWORD(COERCE_UNSIGNED_INT64(1.7668201e72 / v1 * 1.59309191e-58)));
    v5 = 1.7668201e72 / v1 - sub_12D214(v3, HIDWORD(v3), v4) * 6.27710174e57;
    v6 = sub_12D5A0(COERCE_UNSIGNED_INT64(v5 * 2.93873588e-39), HIDWORD(COERCE_UNSIGNED_INT64(v5 * 2.93873588e-39)));
    v8 = v5 - sub_12D214(v6, HIDWORD(v6), v7) * 3.40282367e38;
    v9 = sub_12D5A0(COERCE_UNSIGNED_INT64(v8 * 5.42101086e-20), HIDWORD(COERCE_UNSIGNED_INT64(v8 * 5.42101086e-20)));
    v11 = sub_12D214(v9, HIDWORD(v9), v10);
    v12 = sub_12D5A0(
            COERCE_UNSIGNED_INT64(v8 - v11 * 1.84467441e19),
            HIDWORD(COERCE_UNSIGNED_INT64(v8 - v11 * 1.84467441e19)));
  }
  *a1 = v12;
  a1[1] = v9;
  a1[2] = v6;
  a1[3] = v3;
  return v6;
}
