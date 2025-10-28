int __fastcall phy_rx_adapt_rvn(int a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v3; // r3
  _BYTE v8[64]; // [sp+1Ch] [bp-1040h] BYREF
  unsigned int v9; // [sp+101Ch] [bp-40h]
  unsigned int v10; // [sp+1020h] [bp-3Ch]
  unsigned int v11; // [sp+1024h] [bp-38h]
  unsigned int v12; // [sp+1028h] [bp-34h]
  unsigned int v13; // [sp+102Ch] [bp-30h]
  unsigned int v14; // [sp+1030h] [bp-2Ch]
  unsigned int j; // [sp+1034h] [bp-28h]
  unsigned int k; // [sp+1038h] [bp-24h]
  unsigned int m; // [sp+103Ch] [bp-20h]
  unsigned int n; // [sp+1040h] [bp-1Ch]
  unsigned int ii; // [sp+1044h] [bp-18h]
  void *ptr; // [sp+1048h] [bp-14h]
  unsigned int v21; // [sp+104Ch] [bp-10h]
  unsigned int i; // [sp+1050h] [bp-Ch]
  int v23; // [sp+1054h] [bp-8h]

  v21 = 0;
  ptr = malloc(0xCu);
  V_LOCK();
  logfmt_raw(v8, 0x1000u, 0, "%s start", "phy_rx_adapt_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "phy_rx_adapt_rvn",
    16,
    1490,
    60,
    v8);
  sub_1D0F04(a1, a3, 84, -1);
  v21 = sub_1D2990(a1, a2, a3, 84, ptr);
  for ( i = 0; v21 > i; ++i )
  {
    if ( a2 == *((unsigned __int8 *)ptr + 12 * i + 4) && a3 == *((unsigned __int8 *)ptr + 12 * i + 8) )
    {
      v9 = sub_1C65C0(*((_DWORD *)ptr + 3 * i));
      free(ptr);
      return v9;
    }
  }
  v23 = check_core_reg_with_expect_data_2_rvn(a1, a2, a3, 126, 0xF0000000, 4);
  if ( v23 )
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "first !!! %s PHY core %02x macro0 rx is invalid!", "phy_rx_adapt_rvn", a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
      174,
      "phy_rx_adapt_rvn",
      16,
      1510,
      100,
      v8);
  }
  v23 = check_core_reg_with_expect_data_2_rvn(a1, a2, a3, 127, 0xF0000000, 4);
  if ( v23 )
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "first !!! %s PHY core %02x macro1 rx is invalid!", "phy_rx_adapt_rvn", a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
      174,
      "phy_rx_adapt_rvn",
      16,
      1516,
      100,
      v8);
  }
  sub_1D0F04(a1, a3, 84, -16711936);
  v21 = sub_1D2990(a1, a2, a3, 84, ptr);
  for ( j = 0; v21 > j; ++j )
  {
    if ( a2 == *((unsigned __int8 *)ptr + 12 * j + 4) && a3 == *((unsigned __int8 *)ptr + 12 * j + 8) )
    {
      v10 = sub_1C65C0(*((_DWORD *)ptr + 3 * j));
      free(ptr);
      return v10;
    }
  }
  sub_1D0F04(a1, a3, 100, 983055);
  v21 = sub_1D2990(a1, a2, a3, 100, ptr);
  for ( k = 0; v21 > k; ++k )
  {
    if ( a2 == *((unsigned __int8 *)ptr + 12 * k + 4) && a3 == *((unsigned __int8 *)ptr + 12 * k + 8) )
    {
      v11 = sub_1C65C0(*((_DWORD *)ptr + 3 * k));
      free(ptr);
      return v11;
    }
  }
  sub_1D0F04(a1, a3, 80, 1966110);
  v21 = sub_1D2990(a1, a2, a3, 80, ptr);
  for ( m = 0; v21 > m; ++m )
  {
    if ( a2 == *((unsigned __int8 *)ptr + 12 * m + 4) && a3 == *((unsigned __int8 *)ptr + 12 * m + 8) )
    {
      v12 = sub_1C65C0(*((_DWORD *)ptr + 3 * m));
      free(ptr);
      return v12;
    }
  }
  sub_1D0F04(a1, a3, 80, 0);
  v21 = sub_1D2990(a1, a2, a3, 80, ptr);
  for ( n = 0; v21 > n; ++n )
  {
    if ( a2 == *((unsigned __int8 *)ptr + 12 * n + 4) && a3 == *((unsigned __int8 *)ptr + 12 * n + 8) )
    {
      v13 = sub_1C65C0(*((_DWORD *)ptr + 3 * n));
      free(ptr);
      return v13;
    }
  }
  v23 = check_core_reg_with_expect_data_2_rvn(a1, a2, a3, 119, 0, 4);
  if ( v23 )
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "%s PHY core %02x rx ack de-assert!", "phy_rx_adapt_rvn", a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
      174,
      "phy_rx_adapt_rvn",
      16,
      1589,
      100,
      v8);
  }
  sub_1D0F04(a1, a3, 84, -1);
  v21 = sub_1D2990(a1, a2, a3, 84, ptr);
  for ( ii = 0; v21 > ii; ++ii )
  {
    if ( a2 == *((unsigned __int8 *)ptr + 12 * ii + 4) && a3 == *((unsigned __int8 *)ptr + 12 * ii + 8) )
    {
      v14 = sub_1C65C0(*((_DWORD *)ptr + 3 * ii));
      free(ptr);
      return v14;
    }
  }
  v23 = check_core_reg_with_expect_data_2_rvn(a1, a2, a3, 126, 0xF0000000, 4);
  if ( v23 )
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "Second !!! %s PHY core %02x macro0 rx is invalid!", "phy_rx_adapt_rvn", a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
      174,
      "phy_rx_adapt_rvn",
      16,
      1612,
      100,
      v8);
  }
  v23 = check_core_reg_with_expect_data_2_rvn(a1, a2, a3, 127, 0xF0000000, 4);
  if ( v23 )
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "Second !!! %s PHY core %02x macro1 rx is invalid!", "phy_rx_adapt_rvn", a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
      174,
      "phy_rx_adapt_rvn",
      16,
      1617,
      100,
      v8);
  }
  sub_1D0F04(a1, a3, 83, 251662080);
  v23 = check_core_reg_with_expect_data_2_rvn(a1, a2, a3, 83, 0, 4);
  v3 = v23;
  if ( v23 )
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "%s PHY core %02x rx ack de-assert!", "phy_rx_adapt_rvn", a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
      174,
      "phy_rx_adapt_rvn",
      16,
      1624,
      100,
      v8);
  }
  return v3;
}
