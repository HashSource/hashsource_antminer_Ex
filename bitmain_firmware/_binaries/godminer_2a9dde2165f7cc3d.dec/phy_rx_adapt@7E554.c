unsigned int __fastcall phy_rx_adapt(int a1, unsigned int a2, unsigned int a3)
{
  void *v6; // r7
  int v7; // r0
  int v8; // r0
  unsigned int *v9; // r3
  int v10; // r2
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r2
  int v16; // r0
  int v17; // r2
  int v18; // r0
  int v19; // r2
  int v20; // r0
  int v21; // r2
  int v22; // r0
  int v23; // r0
  int v24; // r2
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  _BYTE v34[4100]; // [sp+10h] [bp-1004h] BYREF

  v6 = malloc(0xCu);
  V_LOCK(v6);
  v7 = logfmt_raw((int)v34, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    177,
    "phy_rx_adapt",
    12,
    1608,
    60,
    v34);
  sub_76204(a1, a3, 84, -1);
  v8 = sub_76478(a1, a2, (unsigned __int16)a3, 84, v6);
  if ( v8 )
  {
    v9 = (unsigned int *)v6;
    v10 = 0;
    do
    {
      ++v10;
      if ( *((unsigned __int8 *)v9 + 4) == a2 && *((unsigned __int8 *)v9 + 8) == a3 )
        goto LABEL_6;
      v9 += 3;
    }
    while ( v8 != v10 );
  }
  v12 = check_core_reg_with_expect_data_2(a1, a2, a3, 126, 0xF0000000, 4);
  if ( v12 )
  {
    V_LOCK(v12);
    v30 = logfmt_raw((int)v34, 0x1000u);
    V_UNLOCK(v30);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      177,
      "phy_rx_adapt",
      12,
      1628,
      100,
      v34);
  }
  v13 = check_core_reg_with_expect_data_2(a1, a2, a3, 127, 0xF0000000, 4);
  if ( v13 )
  {
    V_LOCK(v13);
    v29 = logfmt_raw((int)v34, 0x1000u);
    V_UNLOCK(v29);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      177,
      "phy_rx_adapt",
      12,
      1634,
      100,
      v34);
  }
  sub_76204(a1, a3, 84, -16711936);
  v14 = sub_76478(a1, a2, (unsigned __int16)a3, 84, v6);
  if ( v14 )
  {
    v9 = (unsigned int *)v6;
    v15 = 0;
    do
    {
      while ( 1 )
      {
        ++v15;
        if ( *((unsigned __int8 *)v9 + 4) == a2 )
          break;
        v9 += 3;
        if ( v14 == v15 )
          goto LABEL_18;
      }
      if ( *((unsigned __int8 *)v9 + 8) == a3 )
        goto LABEL_6;
      v9 += 3;
    }
    while ( v14 != v15 );
  }
LABEL_18:
  sub_76204(a1, a3, 100, (int)&loc_F000C + 3);
  v16 = sub_76478(a1, a2, (unsigned __int16)a3, 100, v6);
  if ( v16 )
  {
    v9 = (unsigned int *)v6;
    v17 = 0;
    do
    {
      while ( 1 )
      {
        ++v17;
        if ( *((unsigned __int8 *)v9 + 4) == a2 )
          break;
        v9 += 3;
        if ( v16 == v17 )
          goto LABEL_24;
      }
      if ( *((unsigned __int8 *)v9 + 8) == a3 )
        goto LABEL_6;
      v9 += 3;
    }
    while ( v16 != v17 );
  }
LABEL_24:
  sub_76204(a1, a3, 80, 1966110);
  v18 = sub_76478(a1, a2, (unsigned __int16)a3, 80, v6);
  if ( v18 )
  {
    v9 = (unsigned int *)v6;
    v19 = 0;
    do
    {
      while ( 1 )
      {
        ++v19;
        if ( *((unsigned __int8 *)v9 + 4) == a2 )
          break;
        v9 += 3;
        if ( v18 == v19 )
          goto LABEL_30;
      }
      if ( *((unsigned __int8 *)v9 + 8) == a3 )
        goto LABEL_6;
      v9 += 3;
    }
    while ( v18 != v19 );
  }
LABEL_30:
  sub_76204(a1, a3, 80, 0);
  v20 = sub_76478(a1, a2, (unsigned __int16)a3, 80, v6);
  if ( v20 )
  {
    v9 = (unsigned int *)v6;
    v21 = 0;
    do
    {
      while ( 1 )
      {
        ++v21;
        if ( *((unsigned __int8 *)v9 + 4) == a2 )
          break;
        v9 += 3;
        if ( v20 == v21 )
          goto LABEL_36;
      }
      if ( *((unsigned __int8 *)v9 + 8) == a3 )
        goto LABEL_6;
      v9 += 3;
    }
    while ( v20 != v21 );
  }
LABEL_36:
  v22 = check_core_reg_with_expect_data_2(a1, a2, a3, 119, 0, 4);
  if ( v22 )
  {
    V_LOCK(v22);
    v31 = logfmt_raw((int)v34, 0x1000u);
    V_UNLOCK(v31);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      177,
      "phy_rx_adapt",
      12,
      1707,
      100,
      v34);
  }
  sub_76204(a1, a3, 84, -1);
  v23 = sub_76478(a1, a2, (unsigned __int16)a3, 84, v6);
  if ( v23 )
  {
    v9 = (unsigned int *)v6;
    v24 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        ++v24;
        if ( *((unsigned __int8 *)v9 + 4) == a2 )
          break;
        v9 += 3;
        if ( v23 == v24 )
          goto LABEL_44;
      }
      if ( *((unsigned __int8 *)v9 + 8) == a3 )
        break;
      v9 += 3;
      if ( v23 == v24 )
        goto LABEL_44;
    }
LABEL_6:
    a2 = bswap32(*v9);
    free(v6);
    return a2;
  }
LABEL_44:
  v25 = check_core_reg_with_expect_data_2(a1, a2, a3, 126, 0xF0000000, 4);
  if ( v25 )
  {
    V_LOCK(v25);
    v32 = logfmt_raw((int)v34, 0x1000u);
    V_UNLOCK(v32);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      177,
      "phy_rx_adapt",
      12,
      1730,
      100,
      v34);
  }
  v26 = check_core_reg_with_expect_data_2(a1, a2, a3, 127, 0xF0000000, 4);
  if ( v26 )
  {
    V_LOCK(v26);
    v33 = logfmt_raw((int)v34, 0x1000u);
    V_UNLOCK(v33);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      177,
      "phy_rx_adapt",
      12,
      1735,
      100,
      v34);
  }
  sub_76204(a1, a3, 83, 251662080);
  v27 = check_core_reg_with_expect_data_2(a1, a2, a3, 83, 0, 4);
  if ( v27 )
  {
    V_LOCK(v27);
    v28 = logfmt_raw((int)v34, 0x1000u);
    V_UNLOCK(v28);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      177,
      "phy_rx_adapt",
      12,
      1742,
      100,
      v34);
  }
  return a2;
}
