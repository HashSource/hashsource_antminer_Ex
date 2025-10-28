int __fastcall dhash_start_dash(int a1)
{
  char *v2; // r1
  int v3; // r4
  int v4; // r1
  int v5; // r3
  int result; // r0
  _DWORD v7[7]; // [sp+28h] [bp-1020h] BYREF
  int v8; // [sp+44h] [bp-1004h]
  char v9[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK();
  LOWORD(v2) = 23936;
  HIWORD(v2) = (unsigned int)"p" >> 16;
  V_INT((int)v7, v2, *(int *)(a1 + 248));
  LOWORD(v3) = -22416;
  HIWORD(v3) = (unsigned int)"04x\n" >> 16;
  logfmt_raw(v9, 0x1000u, 0, v8, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v8, v3);
  V_UNLOCK();
  LOWORD(v4) = -22992;
  HIWORD(v4) = (unsigned int)"__custom_data init %p" >> 16;
  zlog(g_zc, v4, 176, "dhash_start_dash", 16, 662, 40, v9);
  sub_739F0(a1);
  v5 = *(unsigned __int8 *)(a1 + 460);
  result = 0;
  *(_BYTE *)(a1 + 253) = 1;
  if ( !v5 )
    *(_DWORD *)(a1 + 464) = (int)*(float *)(a1 + 976);
  return result;
}
