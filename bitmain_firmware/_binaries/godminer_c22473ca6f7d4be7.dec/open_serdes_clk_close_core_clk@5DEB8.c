int __fastcall open_serdes_clk_close_core_clk(int a1)
{
  int v1; // r6
  int v3; // r3
  _DWORD *v4; // r3
  int v5; // r1
  void (__fastcall *v6)(int, _DWORD *); // r3
  _DWORD v8[2]; // [sp+10h] [bp-1004h] BYREF
  int v9; // [sp+18h] [bp-FFCh]
  int v10; // [sp+1Ch] [bp-FF8h]

  LOWORD(v1) = 32688;
  HIWORD(v1) = (unsigned int)&unk_1372E0 >> 16;
  V_LOCK();
  LOWORD(v3) = -22412;
  HIWORD(v3) = (unsigned int)&unk_139BA4 >> 16;
  logfmt_raw((char *)v8, 0x1000u, 0, v3, v1 + 544);
  V_UNLOCK();
  LOWORD(v4) = -14512;
  HIWORD(v4) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v5) = -25512;
  HIWORD(v5) = (unsigned int)"one" >> 16;
  zlog(*v4, v5, 154, v1 + 576, 30, 217, 20, v8);
  v9 = 1441792;
  v10 = 0;
  v8[1] = 0;
  v8[0] = -2147483642;
  v6 = *(void (__fastcall **)(int, _DWORD *))(a1 + 156);
  LOBYTE(v9) = 1;
  v6(a1, v8);
  usleep(0x2710u);
  return 0;
}
