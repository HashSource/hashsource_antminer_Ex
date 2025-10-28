int __fastcall top_init_eth(int a1)
{
  int v2; // r4
  char *v3; // r1
  int v4; // r1
  int v5; // r2
  int v6; // r3
  void (__fastcall *v7)(int, int); // r3
  int v8; // r1
  char *v9; // r1
  int v10; // r1
  int v11; // r0
  int v12; // r3
  int result; // r0
  char *v14; // r1
  int v15; // r4
  int v16; // r1
  char *v17; // r1
  int v18; // r5
  int v19; // r1
  _DWORD v20[7]; // [sp+28h] [bp-1080h] BYREF
  int v21; // [sp+44h] [bp-1064h]
  _DWORD v22[7]; // [sp+48h] [bp-1060h] BYREF
  int v23; // [sp+64h] [bp-1044h]
  int v24; // [sp+68h] [bp-1040h] BYREF
  int v25; // [sp+6Ch] [bp-103Ch]
  int v26; // [sp+70h] [bp-1038h]
  int v27; // [sp+74h] [bp-1034h]
  int v28; // [sp+78h] [bp-1030h]
  int v29; // [sp+7Ch] [bp-102Ch]
  int v30; // [sp+80h] [bp-1028h]
  int v31; // [sp+84h] [bp-1024h]
  _DWORD v32[7]; // [sp+88h] [bp-1020h] BYREF
  int v33; // [sp+A4h] [bp-1004h]
  char v34[4096]; // [sp+A8h] [bp-1000h] BYREF

  LOWORD(v2) = -17736;
  V_LOCK();
  LOWORD(v3) = 23936;
  HIWORD(v3) = (unsigned int)"p" >> 16;
  V_INT((int)v20, v3, *(int *)(a1 + 248));
  HIWORD(v2) = (unsigned int)&unk_16BAA0 >> 16;
  logfmt_raw(v34, 0x1000u, 0, v21, v20[0], v20[1], v20[2], v20[3], v20[4], v20[5], v20[6], v21, v2, "top_init_eth");
  V_UNLOCK();
  LOWORD(v4) = -17724;
  HIWORD(v4) = (unsigned int)&unk_16BAAC >> 16;
  zlog(g_zc, v4, 174, "top_init_eth", 12, 1969, 60, v34);
  if ( sub_7AAD4((int *)a1) )
  {
    V_LOCK();
    LOWORD(v17) = 23936;
    HIWORD(v17) = (unsigned int)"p" >> 16;
    V_INT((int)v22, v17, *(int *)(a1 + 248));
    LOWORD(v18) = -17056;
    HIWORD(v18) = (unsigned int)"%02x cnt %08x" >> 16;
    logfmt_raw(v34, 0x1000u, 0, v23, v22[0], v22[1], v22[2], v22[3], v22[4], v22[5], v22[6], v23, v18, "top_init_eth");
    V_UNLOCK();
    LOWORD(v19) = -17724;
    HIWORD(v19) = (unsigned int)&unk_16BAAC >> 16;
    zlog(g_zc, v19, 174, "top_init_eth", 12, 1973, 100, v34);
    return 12;
  }
  else
  {
    setup_clk(a1);
    v5 = 0;
    v6 = *(_DWORD *)(a1 + 488) - 1;
    do
      *(_BYTE *)++v6 = v5++;
    while ( v5 != 8 );
    v7 = *(void (__fastcall **)(int, int))(a1 + 256);
    v8 = *(_DWORD *)(a1 + 488);
    *(_DWORD *)(a1 + 428) = 1;
    v7(a1, v8);
    if ( sub_7AAD4((int *)a1) )
    {
      V_LOCK();
      LOWORD(v14) = 23936;
      HIWORD(v14) = (unsigned int)"p" >> 16;
      LOWORD(v15) = -17032;
      V_INT((int)&v24, v14, *(int *)(a1 + 248));
      HIWORD(v15) = (unsigned int)"check asic num failed" >> 16;
      logfmt_raw(v34, 0x1000u, 0, v31, v24, v25, v26, v27, v28, v29, v30, v31, v15, "top_init_eth");
      V_UNLOCK();
      LOWORD(v16) = -17724;
      HIWORD(v16) = (unsigned int)&unk_16BAAC >> 16;
      zlog(g_zc, v16, 174, "top_init_eth", 12, 1987, 100, v34);
      return 12;
    }
    else
    {
      set_debug_ctrl(a1, 19);
      v25 = 0;
      v27 = 0;
      v24 = 3;
      v26 = 4718593;
      V_LOCK();
      LOWORD(v9) = 23936;
      HIWORD(v9) = (unsigned int)"p" >> 16;
      V_INT((int)v32, v9, *(int *)(a1 + 248));
      logfmt_raw(
        v34,
        0x1000u,
        0,
        v33,
        v32[0],
        v32[1],
        v32[2],
        v32[3],
        v32[4],
        v32[5],
        v32[6],
        v33,
        "set analog value %08x",
        v24);
      V_UNLOCK();
      LOWORD(v10) = -26872;
      HIWORD(v10) = (unsigned int)"stdiv1:%d, postdiv2:%d" >> 16;
      zlog(g_zc, v10, 153, "ChipSetting_analog_mux_ETH", 26, 997, 40, v34);
      (*(void (__fastcall **)(int, int *))(a1 + 264))(a1, &v24);
      v11 = sub_78CBC(a1);
      v12 = *(unsigned __int8 *)(a1 + 460);
      if ( !v11 )
        *(_DWORD *)(a1 + 512) = 1;
      result = 0;
      if ( !v12 )
        *(_DWORD *)(a1 + 464) = (int)*(float *)(a1 + 976);
    }
  }
  return result;
}
