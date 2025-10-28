int __fastcall do_32G_retry_seq_by_worse_phy(int a1, int a2, int a3, int a4, int a5)
{
  char *v6; // r1
  _DWORD *v7; // r4
  int v8; // r1
  _WORD *v9; // r9
  int v10; // r4
  int v11; // t1
  const char *v12; // r1
  int v13; // r3
  _DWORD *v15; // [sp+20h] [bp-145Ch]
  int v16; // [sp+28h] [bp-1454h]
  _DWORD *v17; // [sp+2Ch] [bp-1450h]
  int v18; // [sp+38h] [bp-1444h]
  char *v19; // [sp+40h] [bp-143Ch]
  _DWORD v20[4]; // [sp+44h] [bp-1438h] BYREF
  __int16 v21; // [sp+54h] [bp-1428h] BYREF
  _DWORD v22[7]; // [sp+58h] [bp-1424h] BYREF
  int v23; // [sp+74h] [bp-1408h]
  _BYTE s[1024]; // [sp+78h] [bp-1404h] BYREF
  char _478[4104]; // [sp+478h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v6) = -7948;
  HIWORD(v6) = (unsigned int)&loc_12D594 >> 16;
  V_INT((int)v22, v6, *(int *)(a1 + 140));
  LOWORD(v7) = -22412;
  HIWORD(v7) = (unsigned int)&unk_139BA4 >> 16;
  v15 = v7;
  LOWORD(v7) = -14512;
  HIWORD(v7) = (unsigned int)&unk_16B55C >> 16;
  v17 = v7;
  v16 = 0;
  v19 = s;
  logfmt_raw(
    _478,
    0x1000u,
    0,
    v23,
    v22[0],
    v22[1],
    v22[2],
    v22[3],
    v22[4],
    v22[5],
    v22[6],
    v23,
    v15,
    "do_32G_retry_seq_by_worse_phy");
  V_UNLOCK();
  LOWORD(v8) = -25512;
  HIWORD(v8) = (unsigned int)"one" >> 16;
  zlog(*v7, v8, 154, "do_32G_retry_seq_by_worse_phy", 29, 8569, 60, _478);
  memset(s, 0, sizeof(s));
  v20[0] = 0;
  v20[1] = 100991489;
  v20[2] = 235735561;
  v20[3] = 134677248;
  v21 = 3851;
  do
  {
    v9 = (_WORD *)((char *)v20 + 3);
    v18 = 16 * v16;
    do
    {
      while ( 1 )
      {
        v11 = *((unsigned __int8 *)v9 + 1);
        v9 = (_WORD *)((char *)v9 + 1);
        v10 = v11;
        V_LOCK();
        logfmt_raw(
          _478,
          0x1000u,
          0,
          "%s chip %x core %x cmn status %x",
          "do_32G_retry_seq_by_worse_phy",
          v16,
          v10,
          *(unsigned __int8 *)(a5 + v10 + v18));
        V_UNLOCK();
        zlog(
          *v17,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_eth/backend_eth.c",
          154,
          "do_32G_retry_seq_by_worse_phy",
          29,
          8579,
          20,
          _478);
        if ( *(_BYTE *)(a5 + v11 + v18) )
          break;
        if ( (__int16 *)((char *)&v21 + 1) == v9 )
          goto LABEL_6;
      }
      V_LOCK();
      logfmt_raw(_478, 0x1000u, 0, "do retry chip %02x core_id %02x", v16, v10);
      V_UNLOCK();
      zlog(
        *v17,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_eth/backend_eth.c",
        154,
        "do_32G_retry_seq_by_worse_phy",
        29,
        8581,
        60,
        _478);
      LOWORD(v12) = -21852;
      HIWORD(v12) = (unsigned int)"x" >> 16;
      sprintf(v19, v12, v16, v10);
      ++v20[0];
      serdes_apb_write_1_chip(a1, v16, v10, 32769, -131073);
      serdes_apb_write_1_chip(a1, v16, v10, 32798, 0x20000);
      v19 += 4;
      serdes_apb_write_1_chip(a1, v16, v10, 32769, -536870913);
      serdes_apb_write_1_chip(a1, v16, v10, 32796, 0x20000000);
      serdes_apb_write_1_chip(a1, v16, v10, 32769, -131073);
      serdes_apb_write_1_chip(a1, v16, v10, 32798, 0);
      serdes_apb_write_1_chip(a1, v16, v10, 32769, -536870913);
      serdes_apb_write_1_chip(a1, v16, v10, 32796, 0);
      serdes_apb_write_1_chip(a1, v16, v10, 32769, -134217729);
      serdes_apb_write_1_chip(a1, v16, v10, 32797, 0x8000000);
      serdes_apb_write_1_chip(a1, v16, v10, 32769, -134217729);
      serdes_apb_write_1_chip(a1, v16, v10, 32797, 0);
      serdes_apb_write_1_chip(a1, v16, v10, 32769, -8388609);
      serdes_apb_write_1_chip(a1, v16, v10, 32841, 0x800000);
      serdes_apb_write_1_chip(a1, v16, v10, 32769, -33554433);
      serdes_apb_write_1_chip(a1, v16, v10, 32845, 0);
      serdes_apb_write_1_chip(a1, v16, v10, 32769, -33554433);
      serdes_apb_write_1_chip(a1, v16, v10, 32845, 0x2000000);
      serdes_apb_write_1_chip(a1, v16, v10, 32769, -33554433);
      serdes_apb_write_1_chip(a1, v16, v10, 32845, 0);
      serdes_apb_write_1_chip(a1, v16, v10, 32769, -268435457);
      serdes_apb_write_1_chip(a1, v16, v10, 32841, 0x10000000);
      serdes_apb_write_1_chip(a1, v16, v10, 32769, -67108865);
      serdes_apb_write_1_chip(a1, v16, v10, 32845, 0);
      serdes_apb_write_1_chip(a1, v16, v10, 32769, -67108865);
      serdes_apb_write_1_chip(a1, v16, v10, 32845, 0x4000000);
      serdes_apb_write_1_chip(a1, v16, v10, 32769, -67108865);
      serdes_apb_write_1_chip(a1, v16, v10, 32845, 0);
      serdes_apb_write_1_chip(a1, v16, v10, 32769, -257);
      serdes_apb_write_1_chip(a1, v16, v10, 32844, 256);
      serdes_apb_write_1_chip(a1, v16, v10, 32769, -3);
      serdes_apb_write_1_chip(a1, v16, v10, 32848, 2);
      serdes_apb_write_1_chip(a1, v16, v10, 32769, 0);
      usleep((__useconds_t)&stru_18694.st_info);
      check_cmn_calibration_status_1_phy(a1, v16, v10);
      serdes_apb_write_1_chip(a1, v16, v10, 32769, -3);
      serdes_apb_write_1_chip(a1, v16, v10, 32848, 0);
      serdes_apb_write_1_chip(a1, v16, v10, 32769, -257);
      serdes_apb_write_1_chip(a1, v16, v10, 32844, 0);
      serdes_apb_write_1_chip(a1, v16, v10, 32769, 0);
    }
    while ( (__int16 *)((char *)&v21 + 1) != v9 );
LABEL_6:
    ++v16;
  }
  while ( v16 != 8 );
  V_LOCK();
  LOWORD(v13) = -23484;
  HIWORD(v13) = (unsigned int)"work_1_pe" >> 16;
  logfmt_raw(_478, 0x1000u, 0, v13, "do_32G_retry_seq_by_worse_phy", v20[0], s);
  V_UNLOCK();
  zlog(
    *v17,
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
