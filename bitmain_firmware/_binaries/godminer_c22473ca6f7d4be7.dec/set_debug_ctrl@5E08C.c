int __fastcall set_debug_ctrl(int a1, int a2)
{
  int v2; // r6
  int v5; // r3
  _DWORD *v6; // r3
  int v7; // r1
  void (__fastcall *v8)(int, _DWORD *); // r3
  _DWORD v10[2]; // [sp+10h] [bp-1000h] BYREF
  int v11; // [sp+18h] [bp-FF8h]
  int v12; // [sp+1Ch] [bp-FF4h]

  LOWORD(v2) = 32688;
  HIWORD(v2) = (unsigned int)&unk_1372E0 >> 16;
  V_LOCK();
  LOWORD(v5) = -22412;
  HIWORD(v5) = (unsigned int)&unk_139BA4 >> 16;
  logfmt_raw((char *)v10, 0x1000u, 0, v5, v2 + 632);
  V_UNLOCK();
  LOWORD(v6) = -14512;
  HIWORD(v6) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v7) = -25512;
  HIWORD(v7) = (unsigned int)"one" >> 16;
  zlog(*v6, v7, 154, v2 + 648, 14, 233, 20, v10);
  v11 = 0;
  v12 = 0;
  v10[0] = a2;
  v8 = *(void (__fastcall **)(int, _DWORD *))(a1 + 156);
  v10[1] = 0;
  LOBYTE(v11) = 1;
  HIWORD(v11) = 80;
  v8(a1, v10);
  usleep(0x2710u);
  return 0;
}
