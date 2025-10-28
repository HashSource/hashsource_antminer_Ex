int __fastcall phy_eq_main_set(int a1, int a2)
{
  int v3; // r5
  unsigned __int8 *v4; // r4
  int v5; // r0
  unsigned __int8 *v6; // r3
  int v7; // r2
  int v8; // r0
  unsigned __int8 *v9; // r7
  int v10; // r3
  int v11; // r0
  int v12; // r0
  unsigned __int8 *v13; // r3
  int v14; // r2
  int v15; // r0
  unsigned __int8 *v16; // r5
  int v17; // r3
  int v18; // r0
  _BYTE v20[32]; // [sp+28h] [bp-1044h] BYREF
  _BYTE v21[32]; // [sp+48h] [bp-1024h] BYREF
  _BYTE v22[4100]; // [sp+68h] [bp-1004h] BYREF

  v3 = (a2 << 12) | (a2 << 18) | a2 | (a2 << 6);
  v4 = (unsigned __int8 *)malloc(0x600u);
  v5 = sub_6F13C(a1, 0, 111, v4);
  if ( v5 )
  {
    v6 = v4;
    v7 = 0;
    while ( 1 )
    {
      ++v7;
      if ( (unsigned __int16)__rev16(*((unsigned __int16 *)v6 + 3)) == 111 && !v6[8] )
        break;
      v6 += 12;
      if ( v5 == v7 )
        goto LABEL_7;
    }
    sub_6F0A4(a1, 111, bswap32(*v6) | v3);
  }
LABEL_7:
  v8 = sub_6F13C(a1, 0, 111, v4);
  if ( v8 )
  {
    v9 = v4;
    v10 = 0;
    while ( 1 )
    {
      ++v10;
      if ( *((_WORD *)v9 + 3) == 28416 && !v9[8] )
        break;
      v9 += 12;
      if ( v8 == v10 )
        goto LABEL_13;
    }
    V_LOCK(v8);
    V_INT((int)v20, "chain");
    v11 = logfmt_raw((int)v22, 0x1000u);
    V_UNLOCK(v11);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      173,
      "phy_eq_main_set",
      15,
      1374,
      60,
      v22);
  }
LABEL_13:
  v12 = sub_6F13C(a1, 0, 112, v4);
  if ( v12 )
  {
    v13 = v4;
    v14 = 0;
    while ( 1 )
    {
      ++v14;
      if ( (unsigned __int16)__rev16(*((unsigned __int16 *)v13 + 3)) == 112 && !v13[8] )
        break;
      v13 += 12;
      if ( v12 == v14 )
        goto LABEL_19;
    }
    sub_6F0A4(a1, 112, bswap32(*v13) | v3);
  }
LABEL_19:
  v15 = sub_6F13C(a1, 0, 112, v4);
  if ( v15 )
  {
    v16 = v4;
    v17 = 0;
    while ( 1 )
    {
      ++v17;
      if ( *((_WORD *)v16 + 3) == 28672 && !v16[8] )
        break;
      v16 += 12;
      if ( v15 == v17 )
        goto LABEL_25;
    }
    V_LOCK(v15);
    V_INT((int)v21, "chain");
    v18 = logfmt_raw((int)v22, 0x1000u);
    V_UNLOCK(v18);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      173,
      "phy_eq_main_set",
      15,
      1394,
      60,
      v22);
  }
LABEL_25:
  free(v4);
  return 0;
}
