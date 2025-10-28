int __fastcall diff_to_le256_target_base(__int64 *a1)
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
  __int64 v13; // r0
  __int64 v14; // r2
  _QWORD v16[2]; // [sp+10h] [bp-1004h] BYREF
  __int64 v17; // [sp+20h] [bp-FF4h]
  __int64 v18; // [sp+28h] [bp-FECh]

  if ( v1 <= 0.0 )
  {
    V_LOCK();
    logfmt_raw((char *)v16, 0x1000u, 0, "Diff zero passed to set_target");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/common/mining/base_common.c",
      148,
      "diff_to_le256_target_base",
      25,
      58,
      20,
      v16);
    v12 = 0;
    v3 = 0xFFFF000000000000LL;
    v6 = 0;
    v9 = 0;
  }
  else
  {
    v3 = sub_12D708(
           COERCE_UNSIGNED_INT64(1.15790322e77 / v1 * 1.59309191e-58),
           HIDWORD(COERCE_UNSIGNED_INT64(1.15790322e77 / v1 * 1.59309191e-58)));
    v5 = 1.15790322e77 / v1 - sub_12D37C(v3, HIDWORD(v3), v4) * 6.27710174e57;
    v6 = sub_12D708(COERCE_UNSIGNED_INT64(v5 * 2.93873588e-39), HIDWORD(COERCE_UNSIGNED_INT64(v5 * 2.93873588e-39)));
    v8 = v5 - sub_12D37C(v6, HIDWORD(v6), v7) * 3.40282367e38;
    v9 = sub_12D708(COERCE_UNSIGNED_INT64(v8 * 5.42101086e-20), HIDWORD(COERCE_UNSIGNED_INT64(v8 * 5.42101086e-20)));
    v11 = sub_12D37C(v9, HIDWORD(v9), v10);
    v12 = sub_12D708(
            COERCE_UNSIGNED_INT64(v8 - v11 * 1.84467441e19),
            HIDWORD(COERCE_UNSIGNED_INT64(v8 - v11 * 1.84467441e19)));
  }
  v18 = v3;
  v17 = v6;
  v16[1] = v9;
  v16[0] = v12;
  *a1 = v12;
  a1[1] = v9;
  v13 = v17;
  v14 = v18;
  a1[2] = v17;
  a1[3] = v14;
  return v13;
}
