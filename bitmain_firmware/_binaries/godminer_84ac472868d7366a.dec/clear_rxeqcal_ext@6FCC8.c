int __fastcall clear_rxeqcal_ext(int a1, int a2, int a3)
{
  char v4; // r6
  int v5; // r0
  int v6; // r10
  int v7; // r11
  int v8; // r6
  int v9; // r4
  _BOOL4 v10; // r3
  char *v12; // [sp+28h] [bp-103Ch]
  int v15; // [sp+3Ch] [bp-1028h]
  _BYTE v16[31]; // [sp+40h] [bp-1024h] BYREF
  char v17; // [sp+5Fh] [bp-1005h] BYREF
  _DWORD v18[3]; // [sp+60h] [bp-1004h] BYREF
  __int16 v19; // [sp+6Ch] [bp-FF8h] BYREF

  v4 = a2;
  V_LOCK(a1);
  v15 = 0;
  V_INT((int)v16, "chain");
  v5 = logfmt_raw((int)v18, 0x1000u);
  V_UNLOCK(v5);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "clear_rxeqcal_ext",
    17,
    3519,
    60,
    v18);
  v18[0] = 100991489;
  v18[1] = 235735561;
  v18[2] = 134677248;
  v19 = 3851;
  v6 = a1;
  v7 = (unsigned __int8)(v4 - 1) + 1;
  do
  {
    v12 = &v17;
    do
    {
      v8 = (unsigned __int8)*++v12;
      if ( a2 )
      {
        v9 = 0;
        do
        {
          v10 = (unsigned __int8)v9 <= 3u && v8 == 3;
          if ( !v10 && *(_BYTE *)(a3 + 8 * (v8 + 2 * v15) + v9) )
          {
            serdes_apb_write_1_chip(v6, v15, v8, (unsigned __int16)((_WORD)v9 << 12) | 1, -4194305);
            serdes_apb_write_1_chip(v6, v15, v8, (unsigned __int16)((_WORD)v9 << 12) | 0x2F, 0x400000);
          }
          ++v9;
        }
        while ( v9 != v7 );
      }
    }
    while ( v12 != (char *)&v19 + 1 );
    ++v15;
  }
  while ( v15 != 8 );
  sub_5C2A0(v6, 0xFFu, 144, 0);
  sub_5C2A0(v6, 0xFFu, 145, -2147422207);
  return 0;
}
