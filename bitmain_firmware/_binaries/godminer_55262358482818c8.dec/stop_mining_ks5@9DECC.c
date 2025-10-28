int __fastcall stop_mining_ks5(int a1)
{
  int v1; // r5
  int v3; // r3
  int v4; // r1
  int v5; // r0
  int (**v6)(); // r0
  char v8[4096]; // [sp+10h] [bp-1000h] BYREF

  LOWORD(v1) = -3880;
  HIWORD(v1) = (unsigned int)"%08x" >> 16;
  V_LOCK();
  LOWORD(v3) = -17112;
  HIWORD(v3) = (unsigned int)"ue %04x resp value %04x" >> 16;
  logfmt_raw(v8, 0x1000u, 0, v3, v1 + 1492);
  V_UNLOCK();
  LOWORD(v4) = -2320;
  HIWORD(v4) = (unsigned int)&unk_16F6D8 >> 16;
  zlog(g_zc, v4, 174, v1 + 1508, 15, 938, 60, v8);
  v5 = (*(int (__fastcall **)(int))(a1 + 56))(a1);
  v6 = dev_ctrl(v5);
  ((void (__fastcall *)(_DWORD))v6[14])(*(_DWORD *)(a1 + 240));
  *(_BYTE *)(a1 + 253) = 0;
  *(_BYTE *)(a1 + 254) = 0;
  sub_9A4A8((int *)a1, 127);
  set_reset_ks5(a1);
  set_core_reset_ks5(a1);
  set_inactive_ks5(a1);
  return 0;
}
