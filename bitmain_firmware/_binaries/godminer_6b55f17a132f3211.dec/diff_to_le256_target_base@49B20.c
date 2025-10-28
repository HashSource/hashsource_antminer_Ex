int __fastcall diff_to_le256_target_base(__int64 *a1)
{
  double v1; // d0
  double v2; // d1
  double v4; // d8
  int v5; // r2
  int v6; // r3
  double v7; // d8
  int v8; // r2
  int v9; // r3
  double v10; // d8
  int v11; // r2
  int v12; // r3
  double v13; // r0
  __int64 v14; // r2
  __int64 v15; // r0
  __int64 v16; // r2
  int v17; // r0
  __int64 v19; // [sp+10h] [bp-1004h] BYREF
  __int64 v20; // [sp+18h] [bp-FFCh]
  __int64 v21; // [sp+20h] [bp-FF4h]
  __int64 v22; // [sp+28h] [bp-FECh]

  v4 = v2;
  if ( v1 <= 0.0 )
  {
    V_LOCK(a1);
    v17 = logfmt_raw((int)&v19, 0x1000u);
    V_UNLOCK(v17);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/dhash_content/base_common.c",
      154,
      "diff_to_le256_target_base",
      25,
      57,
      20,
      &v19);
  }
  else
  {
    v4 = v2 / v1;
  }
  v22 = sub_122390(COERCE_UNSIGNED_INT64(v4 * 1.59309191e-58), HIDWORD(COERCE_UNSIGNED_INT64(v4 * 1.59309191e-58)));
  v7 = v4 - sub_122004(v22, HIDWORD(v22), v5, v6) * 6.27710174e57;
  v21 = sub_122390(COERCE_UNSIGNED_INT64(v7 * 2.93873588e-39), HIDWORD(COERCE_UNSIGNED_INT64(v7 * 2.93873588e-39)));
  v10 = v7 - sub_122004(v21, HIDWORD(v21), v8, v9) * 3.40282367e38;
  v20 = sub_122390(COERCE_UNSIGNED_INT64(v10 * 5.42101086e-20), HIDWORD(COERCE_UNSIGNED_INT64(v10 * 5.42101086e-20)));
  v13 = sub_122004(v20, HIDWORD(v20), v11, v12);
  v19 = sub_122390(
          COERCE_UNSIGNED_INT64(v10 - v13 * 1.84467441e19),
          HIDWORD(COERCE_UNSIGNED_INT64(v10 - v13 * 1.84467441e19)));
  v14 = v20;
  *a1 = v19;
  a1[1] = v14;
  v15 = v21;
  v16 = v22;
  a1[2] = v21;
  a1[3] = v16;
  return v15;
}
