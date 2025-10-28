int __fastcall phy_internal_bist(int a1, int a2, unsigned __int16 a3, int a4)
{
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  __int16 v17; // r2
  _DWORD *v18; // r4
  int v19; // r0
  int v20; // r0
  _DWORD *v21; // r7
  int v22; // r0
  __int16 v23; // r2
  _DWORD *v24; // r4
  int v25; // r0
  int v26; // r0
  _DWORD *v27; // r7
  int v28; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  _DWORD *v35; // [sp+60h] [bp-1184h]
  int v36; // [sp+64h] [bp-1180h]
  _DWORD *i; // [sp+6Ch] [bp-1178h]
  _DWORD *j; // [sp+6Ch] [bp-1178h]
  int v39; // [sp+78h] [bp-116Ch] BYREF
  int v40; // [sp+7Ch] [bp-1168h] BYREF
  int v41; // [sp+80h] [bp-1164h] BYREF
  _BYTE v42[32]; // [sp+A0h] [bp-1144h] BYREF
  int v43; // [sp+C0h] [bp-1124h] BYREF
  _BYTE v44[32]; // [sp+E0h] [bp-1104h] BYREF
  int v45; // [sp+100h] [bp-10E4h] BYREF
  _BYTE v46[32]; // [sp+120h] [bp-10C4h] BYREF
  int v47; // [sp+140h] [bp-10A4h] BYREF
  _BYTE v48[32]; // [sp+160h] [bp-1084h] BYREF
  int v49; // [sp+180h] [bp-1064h] BYREF
  _BYTE v50[32]; // [sp+1A0h] [bp-1044h] BYREF
  int v51; // [sp+1C0h] [bp-1024h] BYREF
  _BYTE v52[4100]; // [sp+1E0h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)&v41, "chain");
  v8 = logfmt_raw((int)v52, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    177,
    "phy_internal_bist",
    17,
    933,
    0x14u,
    v52);
  v35 = malloc(0x600u);
  sub_76204(a1, a3, 86, 3670024);
  usleep(0x12Cu);
  sub_76204(a1, a3, 85, 109905420);
  usleep(0x12Cu);
  sub_76204(a1, a3, 101, -268374016);
  usleep(0x12Cu);
  sub_76204(a1, a3, 64, 256);
  usleep(0x12Cu);
  sub_76204(a1, a3, 80, 33423870);
  usleep(0x12Cu);
  sub_76204(a1, a3, 81, 832516511);
  usleep(0x12Cu);
  sub_76204(a1, a3, 88, -1);
  usleep(0x12Cu);
  v9 = check_core_reg_with_expect_data(a1, a2, a3, 125, 0x70007000u);
  if ( v9 )
  {
    V_LOCK(v9);
    V_INT((int)v42, "chain");
    v31 = logfmt_raw((int)v52, 0x1000u);
    V_UNLOCK(v31);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      177,
      "phy_internal_bist",
      17,
      965,
      100,
      v52);
  }
  sub_76204(a1, a3, 86, 137889800);
  usleep(0x12Cu);
  sub_76204(a1, a3, 80, 0);
  usleep(0x12Cu);
  v10 = check_core_reg_with_expect_data(a1, a2, a3, 119, 0);
  if ( v10 )
  {
    V_LOCK(v10);
    V_INT((int)&v43, "chain");
    v30 = logfmt_raw((int)v52, 0x1000u);
    V_UNLOCK(v30);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      177,
      "phy_internal_bist",
      17,
      978,
      100,
      v52);
  }
  sub_76204(a1, a3, 82, 0);
  v11 = usleep(0x64u);
  V_LOCK(v11);
  V_INT((int)v44, "chain");
  v12 = logfmt_raw((int)v52, 0x1000u);
  V_UNLOCK(v12);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    177,
    "phy_internal_bist",
    17,
    984,
    20,
    v52);
  sub_76204(a1, a3, 83, 16711935);
  v13 = check_core_reg_with_expect_data(a1, a2, a3, 83, 0);
  if ( v13 )
  {
    V_LOCK(v13);
    V_INT((int)&v51, "chain");
    v14 = logfmt_raw((int)v52, 0x1000u);
    V_UNLOCK(v14);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      177,
      "phy_handshake",
      13,
      890,
      100,
      v52);
  }
  phy_pll_switch(a1, a2, a3, a4);
  sub_76204(a1, a3, 98, -1426085121);
  usleep(0x64u);
  v15 = check_core_reg_with_expect_data(a1, a2, a3, 64, 0xFF000100);
  if ( v15 )
  {
    V_LOCK(v15);
    V_INT((int)&v45, "chain");
    v33 = logfmt_raw((int)v52, 0x1000u);
    V_UNLOCK(v33);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      177,
      "phy_internal_bist",
      17,
      997,
      100,
      v52);
  }
  sub_76204(a1, a3, 133, 255);
  usleep(0x64u);
  sub_76204(a1, a3, 134, 255);
  usleep(0x64u);
  sub_76204(a1, a3, 132, -2147483647);
  sleep(6u);
  v16 = check_core_reg_with_expect_data(a1, a2, a3, 139, 0xFF0000FF);
  if ( v16 )
  {
    V_LOCK(v16);
    V_INT((int)v46, "chain");
    v32 = logfmt_raw((int)v52, 0x1000u);
    V_UNLOCK(v32);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      177,
      "phy_internal_bist",
      17,
      1013,
      100,
      v52);
  }
  v36 = a3;
  v39 = -1970698105;
  v17 = 135;
  for ( i = (int *)((char *)&v39 + 1); ; i = (_DWORD *)((char *)i + 1) )
  {
    v18 = v35;
    v19 = sub_76258(a1, v36, v17, v35);
    if ( v19 )
    {
      v20 = 3 * v19;
      v21 = &v35[v20];
      do
      {
        while ( !*v18 )
        {
          v18 += 3;
          if ( v18 == v21 )
            goto LABEL_17;
        }
        V_LOCK(v20);
        v18 += 3;
        V_INT((int)&v47, "chain");
        V_INT((int)v48, "chain");
        v22 = logfmt_raw((int)v52, 0x1000u);
        V_UNLOCK(v22);
        v20 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/go"
                "dminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
                177,
                "phy_internal_bist",
                17,
                1026,
                20,
                v52);
      }
      while ( v18 != v21 );
    }
LABEL_17:
    if ( i == (int *)((char *)&v40 + 1) )
      break;
    v17 = *(unsigned __int8 *)i;
  }
  v40 = -2088599168;
  v23 = 128;
  for ( j = (int *)((char *)&v40 + 1); ; j = (_DWORD *)((char *)j + 1) )
  {
    v24 = v35;
    v25 = sub_76258(a1, v36, v23, v35);
    if ( v25 )
    {
      v26 = 3 * v25;
      v27 = &v35[v26];
      do
      {
        while ( !*v24 )
        {
          v24 += 3;
          if ( v24 == v27 )
            goto LABEL_25;
        }
        V_LOCK(v26);
        v24 += 3;
        V_INT((int)&v49, "chain");
        V_INT((int)v50, "chain");
        v28 = logfmt_raw((int)v52, 0x1000u);
        V_UNLOCK(v28);
        v26 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/go"
                "dminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
                177,
                "phy_internal_bist",
                17,
                1041,
                20,
                v52);
      }
      while ( v24 != v27 );
    }
LABEL_25:
    if ( (int *)((char *)&v41 + 1) == j )
      break;
    v23 = *(unsigned __int8 *)j;
  }
  return 0;
}
