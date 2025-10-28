int __fastcall dhash_start_kda(int a1)
{
  int v2; // r4
  char *v3; // r1
  int v4; // r1
  char *v5; // r1
  int v6; // r1
  int v7; // r3
  int result; // r0
  _DWORD v9[4]; // [sp+28h] [bp-1054h] BYREF
  _DWORD v10[7]; // [sp+38h] [bp-1044h] BYREF
  int v11; // [sp+54h] [bp-1028h]
  _DWORD v12[7]; // [sp+58h] [bp-1024h] BYREF
  int v13; // [sp+74h] [bp-1008h]
  char v14[4100]; // [sp+78h] [bp-1004h] BYREF

  LOWORD(v2) = -3940;
  V_LOCK();
  LOWORD(v3) = 23936;
  HIWORD(v3) = (unsigned int)"p" >> 16;
  V_INT((int)v10, v3, *(int *)(a1 + 248));
  HIWORD(v2) = (unsigned int)" expected value %04x\n" >> 16;
  logfmt_raw(v14, 0x1000u, 0, v11, v10[0], v10[1], v10[2], v10[3], v10[4], v10[5], v10[6], v11, v2);
  V_UNLOCK();
  LOWORD(v4) = -4372;
  HIWORD(v4) = (unsigned int)"_ctrl_KDA_2110" >> 16;
  zlog(g_zc, v4, 174, "dhash_start_kda", 15, 482, 40, v14);
  v9[2] = 5505025;
  v9[1] = 0;
  v9[0] = 4;
  v9[3] = 0;
  V_LOCK();
  LOWORD(v5) = 23936;
  HIWORD(v5) = (unsigned int)"p" >> 16;
  V_INT((int)v12, v5, *(int *)(a1 + 248));
  logfmt_raw(
    v14,
    0x1000u,
    0,
    v13,
    v12[0],
    v12[1],
    v12[2],
    v12[3],
    v12[4],
    v12[5],
    v12[6],
    v13,
    "set nonce len value %08x",
    4);
  V_UNLOCK();
  LOWORD(v6) = -26872;
  HIWORD(v6) = (unsigned int)"stdiv1:%d, postdiv2:%d" >> 16;
  zlog(g_zc, v6, 153, "ChipSetting_nonce_len_KDA_2110", 30, 323, 40, v14);
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 264))(a1, v9);
  usleep(0x2710u);
  v7 = *(unsigned __int8 *)(a1 + 460);
  result = 0;
  *(_BYTE *)(a1 + 253) = 1;
  if ( !v7 )
    *(_DWORD *)(a1 + 464) = (int)*(float *)(a1 + 976);
  return result;
}
