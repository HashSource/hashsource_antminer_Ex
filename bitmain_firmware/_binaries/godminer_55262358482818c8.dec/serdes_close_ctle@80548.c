int __fastcall serdes_close_ctle(int a1, int a2, unsigned __int8 a3)
{
  char *v5; // r1
  int v6; // r7
  int v7; // r1
  _DWORD v9[7]; // [sp+28h] [bp-1020h] BYREF
  int v10; // [sp+44h] [bp-1004h]
  char v11[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK();
  LOWORD(v5) = 23936;
  HIWORD(v5) = (unsigned int)"p" >> 16;
  LOWORD(v6) = -15732;
  HIWORD(v6) = (unsigned int)"do prepare finished\n" >> 16;
  V_INT((int)v9, v5, *(int *)(a1 + 248));
  logfmt_raw(v11, 0x1000u, 0, v10, v9[0], v9[1], v9[2], v9[3], v9[4], v9[5], v9[6], v10, "%s ...", v6 + 284);
  V_UNLOCK();
  LOWORD(v7) = -14704;
  HIWORD(v7) = (unsigned int)" %s handshake failed!" >> 16;
  zlog(g_zc, v7, 177, v6 + 304, 17, 218, 60, v11);
  sub_7FA3C(a1, a3, 77, 281022656);
  sub_7FA3C(a1, a3, 78, -2144264179);
  sub_7FA3C(a1, a3, 77, 281022656);
  sub_7FA3C(a1, a3, 78, -2144263667);
  sub_7FA3C(a1, a3, 77, 281022656);
  sub_7FA3C(a1, a3, 78, -2144263155);
  sub_7FA3C(a1, a3, 77, 281022656);
  sub_7FA3C(a1, a3, 78, -2144262643);
  sub_7FA3C(a1, a3, 77, 0);
  sub_7FA3C(a1, a3, 78, -2144264178);
  sub_7FA3C(a1, a3, 77, 0);
  sub_7FA3C(a1, a3, 78, -2144263666);
  sub_7FA3C(a1, a3, 77, 0);
  sub_7FA3C(a1, a3, 78, -2144263154);
  sub_7FA3C(a1, a3, 77, 0);
  sub_7FA3C(a1, a3, 78, -2144262642);
  return 0;
}
