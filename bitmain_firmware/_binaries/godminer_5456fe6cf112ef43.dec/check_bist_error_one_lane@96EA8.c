int __fastcall check_bist_error_one_lane(int a1, int a2, int a3, __int16 a4)
{
  int v4; // r9
  int v7; // r0
  int back; // r0
  int v9; // r0
  _BYTE *v10; // r4
  int v11; // r0
  int v12; // r6
  int v13; // r0
  int v14; // r3
  int v15; // r6
  int v16; // r0
  int v17; // r6
  int v18; // r0
  int v19; // r3
  int v20; // r6
  int v21; // r0
  int v22; // r6
  int v23; // r0
  int v24; // r2
  _BYTE *v25; // r6
  int v26; // r8
  int v27; // r9
  int v28; // r0
  int v29; // r0
  int v30; // r2
  int v31; // r0
  int v32; // r0
  _BYTE *v33; // r0
  _BYTE *v34; // r3
  _BYTE *v35; // r1
  unsigned int v36; // r2
  int v37; // r0
  _DWORD *v38; // r6
  int v39; // t1
  int v40; // r0
  _BYTE *v43; // [sp+30h] [bp-115Ch]
  int v45; // [sp+44h] [bp-1148h]
  _BYTE v46[28]; // [sp+48h] [bp-1144h] BYREF
  _BYTE v47[36]; // [sp+64h] [bp-1128h] BYREF
  _BYTE v48[64]; // [sp+88h] [bp-1104h] BYREF
  _BYTE v49[64]; // [sp+C8h] [bp-10C4h] BYREF
  _BYTE v50[128]; // [sp+108h] [bp-1084h] BYREF
  _BYTE v51[4100]; // [sp+188h] [bp-1004h] BYREF

  v4 = a1;
  V_LOCK(a1);
  V_INT((int)v46, "chain");
  v7 = logfmt_raw((int)v51, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_bist_error_one_lane",
    25,
    9070,
    60,
    v51);
  back = serdes_apb_read_back(v4, a2, a3, (unsigned __int16)(a4 << 12) | 0x10, (int)v48);
  if ( *(_DWORD *)(v4 + 236) != back )
  {
    V_LOCK(back);
    v9 = logfmt_raw((int)v51, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "check_bist_error_one_lane",
      25,
      9078,
      100,
      v51);
  }
  v10 = v49;
  v11 = serdes_apb_read_back(v4, a2, a3, (unsigned __int16)(a4 << 12) | 0x13, (int)v49);
  v12 = v11;
  if ( *(_DWORD *)(v4 + 236) != v11 )
  {
    V_LOCK(v11);
    v13 = logfmt_raw((int)v51, 0x1000u);
    V_UNLOCK(v13);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "check_bist_error_one_lane",
      25,
      9084,
      100,
      v51);
  }
  if ( v12 > 0 )
  {
    v14 = 4;
    v15 = 8 * v12 + 4;
    do
    {
      *(_DWORD *)&v50[v14 + 64] = *(_DWORD *)&v49[v14] >> 28;
      v14 += 8;
    }
    while ( v14 != v15 );
  }
  v16 = serdes_apb_read_back(v4, a2, a3, (unsigned __int16)(a4 << 12) | 0x14, (int)v49);
  v17 = v16;
  if ( *(_DWORD *)(v4 + 236) != v16 )
  {
    V_LOCK(v16);
    v18 = logfmt_raw((int)v51, 0x1000u);
    V_UNLOCK(v18);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "check_bist_error_one_lane",
      25,
      9090,
      100,
      v51);
  }
  if ( v17 > 0 )
  {
    v19 = 4;
    v20 = 8 * v17 + 4;
    do
    {
      *(_DWORD *)&v50[v19 + 64] |= 16 * *(_DWORD *)&v49[v19];
      v19 += 8;
    }
    while ( v19 != v20 );
  }
  v21 = serdes_apb_read_back(v4, a2, a3, (unsigned __int16)(a4 << 12) | 0x15, (int)v50);
  v22 = v21;
  if ( *(_DWORD *)(v4 + 236) != v21 )
  {
    V_LOCK(v21);
    v23 = logfmt_raw((int)v51, 0x1000u);
    V_UNLOCK(v23);
    v21 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_bist_error_one_lane",
            25,
            9096,
            100,
            v51);
  }
  if ( v22 > 0 )
  {
    v45 = v4;
    v24 = 8 * v22 + 4;
    v25 = v48;
    v26 = 4;
    v27 = v24;
    do
    {
      if ( (*((_DWORD *)v25 + 1) & 0xE000000) != 0 )
      {
        V_LOCK(v21);
        v28 = logfmt_raw((int)v51, 0x1000u);
        V_UNLOCK(v28);
        v29 = g_zc;
        v30 = 9101;
      }
      else
      {
        V_LOCK(v21);
        v31 = logfmt_raw((int)v51, 0x1000u);
        V_UNLOCK(v31);
        v29 = g_zc;
        v30 = 9104;
      }
      v26 += 8;
      v21 = zlog(
              v29,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_bist_error_one_lane",
              25,
              v30,
              60,
              v51);
      v25 += 8;
    }
    while ( v26 != v27 );
    v4 = v45;
  }
  memset(&v47[4], 0, 0x20u);
  v32 = serdes_apb_read_back(v4, a2, a3, (unsigned __int16)(a4 << 12) | 0x16, (int)v49);
  if ( v32 > 0 )
  {
    v33 = &v49[8 * v32];
    v34 = v49;
    v35 = v47;
    do
    {
      v36 = *((_DWORD *)v34 + 1);
      v34 += 8;
      *((_DWORD *)v35 + 1) = v36 >> 12;
      v35 += 4;
    }
    while ( v34 != v33 );
  }
  v37 = serdes_apb_read_back(v4, a2, a3, (unsigned __int16)(a4 << 12) | 0x17, (int)v49);
  if ( v37 > 0 )
  {
    v38 = v47;
    v43 = &v47[4 * v37];
    do
    {
      v39 = v38[1];
      *++v38 = v39 | (*((_DWORD *)v10 + 1) << 20);
      V_LOCK(v37);
      v10 += 8;
      v40 = logfmt_raw((int)v51, 0x1000u);
      V_UNLOCK(v40);
      v37 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_bist_error_one_lane",
              25,
              9116,
              60,
              v51);
    }
    while ( v43 != (_BYTE *)v38 );
  }
  return 0;
}
