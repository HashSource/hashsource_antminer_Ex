int __fastcall diff_to_target_ltc(__int64 *a1)
{
  double v1; // d0
  __int64 v3; // r6
  int v4; // r2
  int v5; // r3
  double v6; // d8
  __int64 v7; // kr00_8
  int v8; // r2
  int v9; // r3
  double v10; // d8
  __int64 v11; // kr08_8
  int v12; // r2
  int v13; // r3
  double v14; // r0
  __int64 v15; // r0

  if ( v1 <= 0.0 )
  {
    v15 = 0;
    v3 = 0xFFFF00000000LL;
    v7 = 0;
    v11 = 0;
  }
  else
  {
    v3 = sub_122390(
           COERCE_UNSIGNED_INT64(1.7668201e72 / v1 * 1.59309191e-58),
           HIDWORD(COERCE_UNSIGNED_INT64(1.7668201e72 / v1 * 1.59309191e-58)));
    v6 = 1.7668201e72 / v1 - sub_122004(v3, HIDWORD(v3), v4, v5) * 6.27710174e57;
    v7 = sub_122390(COERCE_UNSIGNED_INT64(v6 * 2.93873588e-39), HIDWORD(COERCE_UNSIGNED_INT64(v6 * 2.93873588e-39)));
    v10 = v6 - sub_122004(v7, HIDWORD(v7), v8, v9) * 3.40282367e38;
    v11 = sub_122390(COERCE_UNSIGNED_INT64(v10 * 5.42101086e-20), HIDWORD(COERCE_UNSIGNED_INT64(v10 * 5.42101086e-20)));
    v14 = sub_122004(v11, HIDWORD(v11), v12, v13);
    v15 = sub_122390(
            COERCE_UNSIGNED_INT64(v10 - v14 * 1.84467441e19),
            HIDWORD(COERCE_UNSIGNED_INT64(v10 - v14 * 1.84467441e19)));
  }
  *a1 = v15;
  a1[1] = v11;
  a1[2] = v7;
  a1[3] = v3;
  return v7;
}
