unsigned int __fastcall diff_to_be256_target_base(unsigned int *a1)
{
  double v1; // d0
  __int64 v3; // r0
  unsigned int v4; // r9
  unsigned int v5; // r11
  int v6; // r2
  double v7; // d8
  __int64 v8; // r0
  unsigned int v9; // r10
  unsigned int v10; // r8
  int v11; // r2
  double v12; // d8
  __int64 v13; // r0
  unsigned int v14; // r7
  unsigned int v15; // r6
  int v16; // r2
  double v17; // r0
  __int64 v18; // r0
  unsigned int v19; // r1
  unsigned int v20; // r0
  unsigned int result; // r0
  unsigned int v22; // r1
  unsigned int v23; // r2
  unsigned int v24; // r3
  _DWORD v25[4]; // [sp+10h] [bp-1004h] BYREF
  unsigned int v26; // [sp+20h] [bp-FF4h]
  unsigned int v27; // [sp+24h] [bp-FF0h]
  unsigned int v28; // [sp+28h] [bp-FECh]
  unsigned int v29; // [sp+2Ch] [bp-FE8h]

  if ( v1 <= 0.0 )
  {
    V_LOCK();
    logfmt_raw((char *)v25, 0x1000u, 0, "Diff zero passed to set_target");
    V_UNLOCK();
    v4 = 0xFFFF;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/common/mining/base_common.c",
      148,
      "diff_to_be256_target_base",
      25,
      170,
      20,
      v25);
    v19 = 0;
    v20 = 0;
    v14 = 0;
    v15 = 0;
    v9 = 0;
    v10 = 0;
    v5 = 0;
  }
  else
  {
    v3 = sub_12EA28(
           COERCE_UNSIGNED_INT64(1.15790322e77 / v1 * 1.59309191e-58),
           HIDWORD(COERCE_UNSIGNED_INT64(1.15790322e77 / v1 * 1.59309191e-58)));
    v4 = bswap32(HIDWORD(v3));
    v5 = bswap32(v3);
    v7 = 1.15790322e77 / v1 - sub_12E69C(v3, HIDWORD(v3), v6) * 6.27710174e57;
    v8 = sub_12EA28(COERCE_UNSIGNED_INT64(v7 * 2.93873588e-39), HIDWORD(COERCE_UNSIGNED_INT64(v7 * 2.93873588e-39)));
    v9 = bswap32(HIDWORD(v8));
    v10 = bswap32(v8);
    v12 = v7 - sub_12E69C(v8, HIDWORD(v8), v11) * 3.40282367e38;
    v13 = sub_12EA28(COERCE_UNSIGNED_INT64(v12 * 5.42101086e-20), HIDWORD(COERCE_UNSIGNED_INT64(v12 * 5.42101086e-20)));
    v14 = bswap32(HIDWORD(v13));
    v15 = bswap32(v13);
    v17 = sub_12E69C(v13, HIDWORD(v13), v16);
    v18 = sub_12EA28(
            COERCE_UNSIGNED_INT64(v12 - v17 * 1.84467441e19),
            HIDWORD(COERCE_UNSIGNED_INT64(v12 - v17 * 1.84467441e19)));
    v19 = bswap32(HIDWORD(v18));
    v20 = bswap32(v18);
  }
  v25[0] = v4;
  v25[1] = v5;
  v25[2] = v9;
  v25[3] = v10;
  v26 = v14;
  v27 = v15;
  v28 = v19;
  v29 = v20;
  *a1 = v4;
  a1[1] = v5;
  a1[2] = v9;
  a1[3] = v10;
  result = v26;
  v22 = v27;
  v23 = v28;
  v24 = v29;
  a1[4] = v26;
  a1[5] = v22;
  a1[6] = v23;
  a1[7] = v24;
  return result;
}
