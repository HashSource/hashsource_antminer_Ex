int __fastcall ajust_retry_param(int a1, char a2, int a3)
{
  char *v6; // r1
  int v7; // r4
  _DWORD *v8; // r3
  int v9; // r1
  int v11; // r3
  unsigned __int8 v12; // r2
  _DWORD v13[7]; // [sp+28h] [bp-1024h] BYREF
  int v14; // [sp+44h] [bp-1008h]
  char v15[4]; // [sp+48h] [bp-1004h] BYREF
  unsigned int v16; // [sp+4Ch] [bp-1000h]

  V_LOCK();
  LOWORD(v6) = -7948;
  HIWORD(v6) = (unsigned int)&loc_12D594 >> 16;
  V_INT((int)v13, v6, *(int *)(a1 + 140));
  LOWORD(v7) = -22412;
  HIWORD(v7) = (unsigned int)&unk_139BA4 >> 16;
  logfmt_raw(v15, 0x1000u, 0, v14, v13[0], v13[1], v13[2], v13[3], v13[4], v13[5], v13[6], v14, v7, "ajust_retry_param");
  V_UNLOCK();
  LOWORD(v8) = -14512;
  HIWORD(v8) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v9) = -25512;
  HIWORD(v9) = (unsigned int)"one" >> 16;
  zlog(*v8, v9, 154, "ajust_retry_param", 17, 8649, 60, v15);
  if ( !serdes_apb_read_back_1_chip(a1, a2, a3, 0x8023u, (int)v15) )
    return 0;
  if ( v16 > 0xFA )
  {
    serdes_apb_write_1_chip(a1, a2, a3, 32769, -4190209);
    v11 = 0x2000;
    v12 = a3;
  }
  else
  {
    if ( v16 > 9 )
      return 0;
    serdes_apb_write_1_chip(a1, a2, a3, 32769, -4190209);
    v11 = 4186112;
    v12 = a3;
  }
  serdes_apb_write_1_chip(a1, a2, v12, 32801, v11);
  return 0;
}
