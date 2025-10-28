int __fastcall set_chip_reg(int a1, char a2, char a3, int a4, int a5)
{
  int v7; // r3
  int v8; // r1
  _DWORD v10[2]; // [sp+10h] [bp-1010h] BYREF
  char v11; // [sp+18h] [bp-1008h]
  char v12; // [sp+19h] [bp-1007h]
  __int16 v13; // [sp+1Ah] [bp-1006h]
  int v14; // [sp+1Ch] [bp-1004h]
  char v15[4064]; // [sp+20h] [bp-1000h] BYREF

  v11 = a2;
  v12 = a3;
  v13 = a4;
  v14 = 0;
  v10[1] = 0;
  v10[0] = a5;
  V_LOCK();
  LOWORD(v7) = -22396;
  HIWORD(v7) = (unsigned int)"h" >> 16;
  logfmt_raw(v15, 0x1000u, 0, v7, a4, a5);
  V_UNLOCK();
  LOWORD(v8) = -22992;
  HIWORD(v8) = (unsigned int)"__custom_data init %p" >> 16;
  zlog(g_zc, v8, 176, "set_chip_reg", 12, 314, 40, v15);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 264))(a1, v10);
}
