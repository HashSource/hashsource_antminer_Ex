int __fastcall set_fuart_cfg_kas(int a1)
{
  int v1; // r6
  int v3; // r3
  int v4; // r1
  void (__fastcall *v5)(int, _DWORD *); // r3
  _DWORD v7[2]; // [sp+10h] [bp-1004h] BYREF
  int v8; // [sp+18h] [bp-FFCh]
  int v9; // [sp+1Ch] [bp-FF8h]

  LOWORD(v1) = -7712;
  HIWORD(v1) = (unsigned int)"cle limit value %08x" >> 16;
  V_LOCK();
  LOWORD(v3) = -17388;
  HIWORD(v3) = (unsigned int)"addr %04x reg_data %08x" >> 16;
  logfmt_raw((char *)v7, 0x1000u, 0, v3, v1 + 760);
  V_UNLOCK();
  LOWORD(v4) = -6092;
  HIWORD(v4) = (unsigned int)", expected freq: %.2f" >> 16;
  zlog(g_zc, v4, 174, v1 + 780, 17, 140, 40, v7);
  v8 = 6291456;
  v9 = 0;
  v7[1] = 0;
  v7[0] = 32;
  v5 = *(void (__fastcall **)(int, _DWORD *))(a1 + 264);
  LOBYTE(v8) = 1;
  v5(a1, v7);
  usleep(0x2710u);
  return 0;
}
