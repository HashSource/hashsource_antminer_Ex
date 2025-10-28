int __fastcall diff_to_be256_target_base(int a1)
{
  double v1; // d0
  double v2; // d1
  double v4; // d8
  __int64 v5; // r0
  double v6; // d8
  __int64 v7; // r0
  double v8; // d8
  unsigned __int64 v9; // r0
  double v10; // r0
  __int64 v11; // r0
  unsigned int v12; // r2
  unsigned int v13; // r3
  unsigned __int64 v14; // r0
  unsigned int v15; // r2
  unsigned int v16; // r3
  int v17; // r0
  unsigned int v19; // [sp+10h] [bp-1004h] BYREF
  unsigned int v20; // [sp+14h] [bp-1000h]
  unsigned int v21; // [sp+18h] [bp-FFCh]
  unsigned int v22; // [sp+1Ch] [bp-FF8h]
  unsigned __int64 v23; // [sp+20h] [bp-FF4h]
  unsigned int v24; // [sp+28h] [bp-FECh]
  unsigned int v25; // [sp+2Ch] [bp-FE8h]

  v4 = v2;
  if ( v1 <= 0.0 )
  {
    V_LOCK(a1);
    v17 = logfmt_raw((int)&v19, 0x1000u);
    V_UNLOCK(v17);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/dhash_content/base_common.c",
      158,
      "diff_to_be256_target_base",
      25,
      169,
      20,
      &v19);
  }
  else
  {
    v4 = v2 / v1;
  }
  v5 = sub_12E9A8(COERCE_UNSIGNED_INT64(v4 * 1.59309191e-58), HIDWORD(COERCE_UNSIGNED_INT64(v4 * 1.59309191e-58)));
  v19 = bswap32(HIDWORD(v5));
  v20 = bswap32(v5);
  v6 = v4 - sub_12E61C(v5, HIDWORD(v5)) * 6.27710174e57;
  v7 = sub_12E9A8(COERCE_UNSIGNED_INT64(v6 * 2.93873588e-39), HIDWORD(COERCE_UNSIGNED_INT64(v6 * 2.93873588e-39)));
  v22 = bswap32(v7);
  v21 = bswap32(HIDWORD(v7));
  v8 = v6 - sub_12E61C(v7, HIDWORD(v7)) * 3.40282367e38;
  v9 = sub_12E9A8(COERCE_UNSIGNED_INT64(v8 * 5.42101086e-20), HIDWORD(COERCE_UNSIGNED_INT64(v8 * 5.42101086e-20)));
  v23 = _byteswap_uint64(v9);
  v10 = sub_12E61C(v9, HIDWORD(v9));
  v11 = sub_12E9A8(
          COERCE_UNSIGNED_INT64(v8 - v10 * 1.84467441e19),
          HIDWORD(COERCE_UNSIGNED_INT64(v8 - v10 * 1.84467441e19)));
  v25 = bswap32(v11);
  v24 = bswap32(HIDWORD(v11));
  HIDWORD(v11) = v20;
  v12 = v21;
  v13 = v22;
  *(_DWORD *)a1 = v19;
  *(_DWORD *)(a1 + 4) = HIDWORD(v11);
  *(_DWORD *)(a1 + 8) = v12;
  *(_DWORD *)(a1 + 12) = v13;
  v14 = v23;
  v15 = v24;
  v16 = v25;
  *(_QWORD *)(a1 + 16) = v23;
  *(_DWORD *)(a1 + 24) = v15;
  *(_DWORD *)(a1 + 28) = v16;
  return v14;
}
