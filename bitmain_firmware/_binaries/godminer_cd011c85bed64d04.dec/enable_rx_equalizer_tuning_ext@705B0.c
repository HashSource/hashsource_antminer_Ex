int __fastcall enable_rx_equalizer_tuning_ext(int a1, int a2, int a3)
{
  char v4; // r6
  int v5; // r0
  int v6; // r4
  int v7; // r9
  _BOOL4 v8; // r7
  int v9; // r6
  unsigned __int16 v10; // r5
  int v12; // [sp+2Ch] [bp-1048h]
  int v13; // [sp+30h] [bp-1044h]
  char *v14; // [sp+38h] [bp-103Ch]
  int v17; // [sp+4Ch] [bp-1028h]
  _BYTE v18[31]; // [sp+50h] [bp-1024h] BYREF
  char v19; // [sp+6Fh] [bp-1005h] BYREF
  _DWORD v20[3]; // [sp+70h] [bp-1004h] BYREF
  __int16 v21; // [sp+7Ch] [bp-FF8h] BYREF

  v4 = a2;
  V_LOCK(a1);
  v17 = 0;
  V_INT((int)v18, "chain");
  v5 = logfmt_raw((int)v20, 0x1000u);
  V_UNLOCK(v5);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "enable_rx_equalizer_tuning_ext",
    30,
    3545,
    60,
    v20);
  v13 = (unsigned __int8)(v4 - 1) + 1;
  v20[0] = 100991489;
  v20[1] = 235735561;
  v20[2] = 134677248;
  v21 = 3851;
  do
  {
    v14 = &v19;
    do
    {
      v6 = (unsigned __int8)*++v14;
      if ( a2 )
      {
        v7 = 0;
        do
        {
          v8 = (unsigned __int8)v7 <= 3u && v6 == 3;
          if ( !v8 && *(_BYTE *)(a3 + 8 * (v6 + 2 * v17) + v7) )
          {
            v9 = (unsigned __int16)((_WORD)v7 << 12) | 1;
            serdes_apb_write_1_chip(a1, v17, v6, v9, -4194305);
            v12 = (unsigned __int16)((_WORD)v7 << 12) | 0x2F;
            serdes_apb_write_1_chip(a1, v17, v6, v12, 0);
            serdes_apb_write_1_chip(a1, v17, v6, v9, -4194305);
            serdes_apb_write_1_chip(a1, v17, v6, v12, 0x400000);
            serdes_apb_write_1_chip(a1, v17, v6, v9, -4194305);
            serdes_apb_write_1_chip(a1, v17, v6, v12, 0);
            serdes_apb_write_1_chip(a1, v17, v6, v9, -2049);
            serdes_apb_write_1_chip(a1, v17, v6, (unsigned __int16)((_WORD)v7 << 12) | 0x37, 2048);
            serdes_apb_write_1_chip(a1, v17, v6, v9, -1073741825);
            v10 = ((_WORD)v7 << 12) | 0x98;
            serdes_apb_write_1_chip(a1, v17, v6, (unsigned __int16)((_WORD)v7 << 12) | 0x7E, 0x40000000);
            serdes_apb_write_1_chip(a1, v17, v6, v9, -16777217);
            serdes_apb_write_1_chip(a1, v17, v6, v10, 0);
            serdes_apb_write_1_chip(a1, v17, v6, v9, -16777217);
            serdes_apb_write_1_chip(a1, v17, v6, v10, 0x1000000);
            check_d54_one_lane(a1, v17, v6, (unsigned __int8)v7, 8u);
            serdes_apb_write_1_chip(a1, v17, v6, v9, -16777217);
            serdes_apb_write_1_chip(a1, v17, v6, v10, 0);
            serdes_apb_write_1_chip(a1, v17, v6, v9, 0);
            check_d54_one_lane(a1, v17, v6, (unsigned __int8)v7, 0);
          }
          ++v7;
        }
        while ( v7 != v13 );
      }
    }
    while ( v14 != (char *)&v21 + 1 );
    ++v17;
  }
  while ( v17 != 8 );
  return 0;
}
