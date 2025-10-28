int __fastcall set_nonce_cycle_limit(int a1)
{
  unsigned int v2; // r5
  char *v3; // r1
  int v4; // r4
  int v5; // r1
  _DWORD v7[7]; // [sp+28h] [bp-1024h] BYREF
  int v8; // [sp+44h] [bp-1008h]
  char v9[4100]; // [sp+48h] [bp-1004h] BYREF

  v2 = (unsigned int)(float)((float)(67109000.0 / *(float *)(a1 + 976)) * 12.0);
  sub_8C530(a1, 14, HIWORD(v2));
  sub_8C530(a1, 15, (unsigned __int16)v2);
  V_LOCK();
  LOWORD(v3) = 23936;
  HIWORD(v3) = (unsigned int)"p" >> 16;
  V_INT((int)v7, v3, *(int *)(a1 + 248));
  LOWORD(v4) = -7748;
  HIWORD(v4) = (unsigned int)"_hns" >> 16;
  logfmt_raw(v9, 0x1000u, 0, v8, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v8, v4, v2);
  V_UNLOCK();
  LOWORD(v5) = -8280;
  HIWORD(v5) = (unsigned int)"e_cycle_limit" >> 16;
  zlog(g_zc, v5, 174, "set_nonce_cycle_limit", 21, 517, 40, v9);
  return 0;
}
