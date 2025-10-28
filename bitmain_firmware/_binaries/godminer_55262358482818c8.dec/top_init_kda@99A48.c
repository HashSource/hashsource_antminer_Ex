int __fastcall top_init_kda(int a1)
{
  int v2; // r4
  char *v3; // r1
  int v4; // r1
  int v5; // r9
  int v6; // r4
  int v7; // r0
  int v8; // r1
  char v9; // r3
  void (__fastcall *v10)(int, int, int); // r3
  char *v11; // r1
  int v12; // r1
  _DWORD v14[4]; // [sp+30h] [bp-1054h] BYREF
  _DWORD v15[7]; // [sp+40h] [bp-1044h] BYREF
  int v16; // [sp+5Ch] [bp-1028h]
  _DWORD v17[7]; // [sp+60h] [bp-1024h] BYREF
  int v18; // [sp+7Ch] [bp-1008h]
  char v19[4100]; // [sp+80h] [bp-1004h] BYREF

  LOWORD(v2) = -3896;
  V_LOCK();
  LOWORD(v3) = 23936;
  HIWORD(v3) = (unsigned int)"p" >> 16;
  V_INT((int)v15, v3, *(int *)(a1 + 248));
  HIWORD(v2) = (unsigned int)"nonce len value %08x" >> 16;
  logfmt_raw(v19, 0x1000u, 0, v16, v15[0], v15[1], v15[2], v15[3], v15[4], v15[5], v15[6], v16, v2);
  V_UNLOCK();
  LOWORD(v4) = -4372;
  HIWORD(v4) = (unsigned int)"_ctrl_KDA_2110" >> 16;
  zlog(g_zc, v4, 174, "top_init_kda", 12, 462, 40, v19);
  v5 = *(_DWORD *)(a1 + 336);
  v6 = *(_DWORD *)(a1 + 488);
  v7 = sub_144470(256, (unsigned __int8)v5);
  if ( (_BYTE)v5 )
  {
    v8 = v6 - 1;
    v9 = 0;
    do
    {
      *(_BYTE *)++v8 = v9;
      v9 += v7;
    }
    while ( v8 != v6 - 1 + (unsigned __int8)v5 );
    v6 = *(_DWORD *)(a1 + 488);
  }
  v10 = *(void (__fastcall **)(int, int, int))(a1 + 256);
  *(_DWORD *)(a1 + 428) = v7;
  v10(a1, v6, v5);
  sub_96198(a1, 0);
  v14[0] = 5381904;
  v14[2] = 1835009;
  v14[1] = 0;
  v14[3] = 0;
  V_LOCK();
  LOWORD(v11) = 23936;
  HIWORD(v11) = (unsigned int)"p" >> 16;
  V_INT((int)v17, v11, *(int *)(a1 + 248));
  logfmt_raw(
    v19,
    0x1000u,
    0,
    v18,
    v17[0],
    v17[1],
    v17[2],
    v17[3],
    v17[4],
    v17[5],
    v17[6],
    v18,
    "set misc ctrl %08x",
    v14[0]);
  V_UNLOCK();
  LOWORD(v12) = -26872;
  HIWORD(v12) = (unsigned int)"stdiv1:%d, postdiv2:%d" >> 16;
  zlog(g_zc, v12, 153, "ChipSetting_misc_ctrl_KDA_2110", 30, 229, 40, v19);
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 264))(a1, v14);
  usleep(0x2710u);
  return 0;
}
