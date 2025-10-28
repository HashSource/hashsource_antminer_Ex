int __fastcall diff_to_target_dash(__int64 *a1)
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
  __int64 v16; // r0
  __int64 v17; // r2
  int v18; // r0
  _QWORD v20[2]; // [sp+10h] [bp-1004h] BYREF
  __int64 v21; // [sp+20h] [bp-FF4h]
  __int64 v22; // [sp+28h] [bp-FECh]

  if ( v1 <= 0.0 )
  {
    V_LOCK(a1);
    v18 = logfmt_raw((int)v20, 0x1000u);
    V_UNLOCK(v18);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/dhash_content/dash/dash_dhash_common.c",
      165,
      "diff_to_target_dash",
      19,
      58,
      20,
      v20);
    v3 = 4294901760LL;
    v15 = 0;
    v7 = 0;
    v11 = 0;
  }
  else
  {
    v3 = sub_122390(
           COERCE_UNSIGNED_INT64(2.69595353e67 / v1 * 1.59309191e-58),
           HIDWORD(COERCE_UNSIGNED_INT64(2.69595353e67 / v1 * 1.59309191e-58)));
    v6 = 2.69595353e67 / v1 - sub_122004(v3, HIDWORD(v3), v4, v5) * 6.27710174e57;
    v7 = sub_122390(COERCE_UNSIGNED_INT64(v6 * 2.93873588e-39), HIDWORD(COERCE_UNSIGNED_INT64(v6 * 2.93873588e-39)));
    v10 = v6 - sub_122004(v7, HIDWORD(v7), v8, v9) * 3.40282367e38;
    v11 = sub_122390(COERCE_UNSIGNED_INT64(v10 * 5.42101086e-20), HIDWORD(COERCE_UNSIGNED_INT64(v10 * 5.42101086e-20)));
    v14 = sub_122004(v11, HIDWORD(v11), v12, v13);
    v15 = sub_122390(
            COERCE_UNSIGNED_INT64(v10 - v14 * 1.84467441e19),
            HIDWORD(COERCE_UNSIGNED_INT64(v10 - v14 * 1.84467441e19)));
  }
  v22 = v3;
  v21 = v7;
  v20[1] = v11;
  v20[0] = v15;
  *a1 = v15;
  a1[1] = v11;
  v16 = v21;
  v17 = v22;
  a1[2] = v21;
  a1[3] = v17;
  return v16;
}
