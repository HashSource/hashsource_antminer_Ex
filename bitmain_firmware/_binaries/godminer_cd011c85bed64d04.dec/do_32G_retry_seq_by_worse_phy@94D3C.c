int __fastcall do_32G_retry_seq_by_worse_phy(int a1, int a2, int a3, int a4, int a5)
{
  int v6; // r0
  int v7; // r0
  _WORD *v8; // r9
  int v9; // r4
  int v10; // t1
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v15; // [sp+28h] [bp-1454h]
  char *v16; // [sp+40h] [bp-143Ch]
  _DWORD v17[4]; // [sp+44h] [bp-1438h] BYREF
  __int16 v18; // [sp+54h] [bp-1428h] BYREF
  int v19; // [sp+58h] [bp-1424h] BYREF
  _BYTE s[1024]; // [sp+78h] [bp-1404h] BYREF
  _BYTE _478[4104]; // [sp+478h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)&v19, "chain");
  v15 = 0;
  v16 = s;
  v6 = logfmt_raw((int)_478, 0x1000u);
  V_UNLOCK(v6);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "do_32G_retry_seq_by_worse_phy",
    29,
    8569,
    60,
    _478);
  memset(s, 0, sizeof(s));
  v17[0] = 0;
  v7 = 100991489;
  v17[1] = 100991489;
  v17[2] = 235735561;
  v17[3] = 134677248;
  v18 = 3851;
  do
  {
    v8 = (_WORD *)((char *)v17 + 3);
    do
    {
      while ( 1 )
      {
        v10 = *((unsigned __int8 *)v8 + 1);
        v8 = (_WORD *)((char *)v8 + 1);
        v9 = v10;
        V_LOCK(v7);
        v11 = logfmt_raw((int)_478, 0x1000u);
        V_UNLOCK(v11);
        v7 = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmine"
               "r-origin_master/backend/backend_eth/backend_eth.c",
               154,
               "do_32G_retry_seq_by_worse_phy",
               29,
               8579,
               20,
               _478);
        if ( *(_BYTE *)(a5 + v10 + 16 * v15) )
          break;
        if ( (__int16 *)((char *)&v18 + 1) == v8 )
          goto LABEL_6;
      }
      V_LOCK(v7);
      v12 = logfmt_raw((int)_478, 0x1000u);
      V_UNLOCK(v12);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_eth/backend_eth.c",
        154,
        "do_32G_retry_seq_by_worse_phy",
        29,
        8581,
        60,
        _478);
      sprintf(v16, "%1x-%1x ", v15, v9);
      ++v17[0];
      serdes_apb_write_1_chip(a1, v15, v9, 32769, -131073);
      serdes_apb_write_1_chip(a1, v15, v9, 32798, 0x20000);
      v16 += 4;
      serdes_apb_write_1_chip(a1, v15, v9, 32769, -536870913);
      serdes_apb_write_1_chip(a1, v15, v9, 32796, 0x20000000);
      serdes_apb_write_1_chip(a1, v15, v9, 32769, -131073);
      serdes_apb_write_1_chip(a1, v15, v9, 32798, 0);
      serdes_apb_write_1_chip(a1, v15, v9, 32769, -536870913);
      serdes_apb_write_1_chip(a1, v15, v9, 32796, 0);
      serdes_apb_write_1_chip(a1, v15, v9, 32769, -134217729);
      serdes_apb_write_1_chip(a1, v15, v9, 32797, 0x8000000);
      serdes_apb_write_1_chip(a1, v15, v9, 32769, -134217729);
      serdes_apb_write_1_chip(a1, v15, v9, 32797, 0);
      serdes_apb_write_1_chip(a1, v15, v9, 32769, -8388609);
      serdes_apb_write_1_chip(a1, v15, v9, 32841, 0x800000);
      serdes_apb_write_1_chip(a1, v15, v9, 32769, -33554433);
      serdes_apb_write_1_chip(a1, v15, v9, 32845, 0);
      serdes_apb_write_1_chip(a1, v15, v9, 32769, -33554433);
      serdes_apb_write_1_chip(a1, v15, v9, 32845, 0x2000000);
      serdes_apb_write_1_chip(a1, v15, v9, 32769, -33554433);
      serdes_apb_write_1_chip(a1, v15, v9, 32845, 0);
      serdes_apb_write_1_chip(a1, v15, v9, 32769, -268435457);
      serdes_apb_write_1_chip(a1, v15, v9, 32841, 0x10000000);
      serdes_apb_write_1_chip(a1, v15, v9, 32769, -67108865);
      serdes_apb_write_1_chip(a1, v15, v9, 32845, 0);
      serdes_apb_write_1_chip(a1, v15, v9, 32769, -67108865);
      serdes_apb_write_1_chip(a1, v15, v9, 32845, 0x4000000);
      serdes_apb_write_1_chip(a1, v15, v9, 32769, -67108865);
      serdes_apb_write_1_chip(a1, v15, v9, 32845, 0);
      serdes_apb_write_1_chip(a1, v15, v9, 32769, -257);
      serdes_apb_write_1_chip(a1, v15, v9, 32844, 256);
      serdes_apb_write_1_chip(a1, v15, v9, 32769, -3);
      serdes_apb_write_1_chip(a1, v15, v9, 32848, 2);
      serdes_apb_write_1_chip(a1, v15, v9, 32769, 0);
      usleep((__useconds_t)&stru_1869C.st_value);
      check_cmn_calibration_status_1_phy(a1, v15, v9);
      serdes_apb_write_1_chip(a1, v15, v9, 32769, -3);
      serdes_apb_write_1_chip(a1, v15, v9, 32848, 0);
      serdes_apb_write_1_chip(a1, v15, v9, 32769, -257);
      serdes_apb_write_1_chip(a1, v15, v9, 32844, 0);
      v7 = serdes_apb_write_1_chip(a1, v15, v9, 32769, 0);
    }
    while ( (__int16 *)((char *)&v18 + 1) != v8 );
LABEL_6:
    ++v15;
  }
  while ( v15 != 8 );
  V_LOCK(v7);
  v13 = logfmt_raw((int)_478, 0x1000u);
  V_UNLOCK(v13);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "do_32G_retry_seq_by_worse_phy",
    29,
    8631,
    60,
    _478);
  return 0;
}
