int __fastcall diff_to_target_kda(int a1)
{
  double v1; // d0
  __int64 v3; // r8
  int v4; // r2
  double v5; // d8
  __int64 v6; // kr00_8
  int v7; // r2
  double v8; // d8
  __int64 v9; // kr08_8
  int v10; // r2
  double v11; // r0
  __int64 v12; // r0
  __int64 *v13; // r2
  __int64 *v14; // r3
  char v15; // r1
  int v16; // r1
  __int64 v17; // r2
  __int64 v18; // r0
  __int64 v19; // r2
  __int64 v21; // [sp+10h] [bp-1004h] BYREF
  __int64 v22; // [sp+18h] [bp-FFCh]
  __int64 v23; // [sp+20h] [bp-FF4h]
  __int64 v24; // [sp+28h] [bp-FECh] BYREF

  if ( v1 <= 0.0 )
  {
    V_LOCK();
    logfmt_raw((char *)&v21, 0x1000u, 0, "Diff zero passed to set_target");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/common/mining/kda/kda_common.c",
      151,
      "diff_to_target_kda",
      18,
      83,
      20,
      &v21);
    v3 = 4294901760LL;
    v12 = 0;
    v6 = 0;
    v9 = 0;
  }
  else
  {
    v3 = sub_12EA28(
           COERCE_UNSIGNED_INT64(2.69595353e67 / v1 * 1.59309191e-58),
           HIDWORD(COERCE_UNSIGNED_INT64(2.69595353e67 / v1 * 1.59309191e-58)));
    v5 = 2.69595353e67 / v1 - sub_12E69C(v3, HIDWORD(v3), v4) * 6.27710174e57;
    v6 = sub_12EA28(COERCE_UNSIGNED_INT64(v5 * 2.93873588e-39), HIDWORD(COERCE_UNSIGNED_INT64(v5 * 2.93873588e-39)));
    v8 = v5 - sub_12E69C(v6, HIDWORD(v6), v7) * 3.40282367e38;
    v9 = sub_12EA28(COERCE_UNSIGNED_INT64(v8 * 5.42101086e-20), HIDWORD(COERCE_UNSIGNED_INT64(v8 * 5.42101086e-20)));
    v11 = sub_12E69C(v9, HIDWORD(v9), v10);
    v12 = sub_12EA28(
            COERCE_UNSIGNED_INT64(v8 - v11 * 1.84467441e19),
            HIDWORD(COERCE_UNSIGNED_INT64(v8 - v11 * 1.84467441e19)));
  }
  v13 = (__int64 *)((char *)&v24 + 7);
  v14 = &v21;
  v24 = v3;
  v23 = v6;
  v22 = v9;
  v21 = v12;
  do
  {
    v15 = *(_BYTE *)v14;
    *(_BYTE *)v14 = *(_BYTE *)v13;
    v14 = (__int64 *)((char *)v14 + 1);
    *(_BYTE *)v13 = v15;
    v13 = (__int64 *)((char *)v13 - 1);
  }
  while ( v14 < v13 );
  v16 = HIDWORD(v21);
  v17 = v22;
  *(_DWORD *)a1 = v21;
  *(_DWORD *)(a1 + 4) = v16;
  *(_QWORD *)(a1 + 8) = v17;
  v18 = v23;
  v19 = v24;
  *(_QWORD *)(a1 + 16) = v23;
  *(_QWORD *)(a1 + 24) = v19;
  return v18;
}
