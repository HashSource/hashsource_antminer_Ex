int __fastcall phy_external_bist(int a1, int a2, int a3, int a4)
{
  int v8; // r0
  unsigned __int8 *v9; // r6
  unsigned __int8 *v10; // r5
  unsigned __int16 v11; // t1
  int v12; // r0
  int v13; // r0
  unsigned __int8 *v14; // r5
  unsigned __int8 v15; // t1
  char v17[32]; // [sp+38h] [bp-1084h] BYREF
  _BYTE v18[96]; // [sp+58h] [bp-1064h] BYREF
  _BYTE v19[4100]; // [sp+B8h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)v17, "chain");
  v8 = logfmt_raw((int)v19, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    177,
    "phy_external_bist",
    17,
    1158,
    60,
    v19);
  memset(&v18[32], 0, 64);
  if ( a4 )
  {
    v9 = (unsigned __int8 *)(a3 - 1);
    v10 = (unsigned __int8 *)(a3 + (unsigned __int8)(a4 - 1));
    do
    {
      while ( 1 )
      {
        v11 = *++v9;
        v12 = check_core_reg_with_expect_data_eth(a1, a2, v11, 64, 0xFF000100);
        if ( v12 )
          break;
        if ( v9 == v10 )
          goto LABEL_6;
      }
      V_LOCK(v12);
      V_INT((int)v18, "chain");
      v13 = logfmt_raw((int)v19, 0x1000u);
      V_UNLOCK(v13);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
        177,
        "phy_external_bist",
        17,
        1298,
        100,
        v19);
    }
    while ( v9 != v10 );
LABEL_6:
    v14 = (unsigned __int8 *)(a3 - 1);
    do
    {
      v15 = *++v14;
      sub_76214(a1, v15, 133, 0xFFFF);
      sub_76214(a1, *v14, 134, 1342177279);
    }
    while ( v14 != v9 );
  }
  sub_761D0(a1, 132, -2147483647);
  sleep(0xAu);
  return 0;
}
