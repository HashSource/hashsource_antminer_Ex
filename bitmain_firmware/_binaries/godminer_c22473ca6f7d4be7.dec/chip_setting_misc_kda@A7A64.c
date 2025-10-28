int __fastcall chip_setting_misc_kda(int a1)
{
  int v2; // r3
  _DWORD *v3; // r3
  int v4; // r1
  _DWORD v6[4]; // [sp+10h] [bp-1010h] BYREF
  char v7[4096]; // [sp+20h] [bp-1000h] BYREF

  v6[0] = 5381904;
  v6[2] = 1835009;
  v6[3] = 0;
  v6[1] = 0;
  V_LOCK();
  LOWORD(v2) = 28664;
  HIWORD(v2) = (unsigned int)"%lld jobid %s start_nonce %llx" >> 16;
  logfmt_raw(v7, 0x1000u, 0, v2, 5381904);
  V_UNLOCK();
  LOWORD(v3) = -14512;
  HIWORD(v3) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v4) = -15924;
  HIWORD(v4) = (unsigned int)&unk_13B4FC >> 16;
  zlog(*v3, v4, 159, "chip_setting_misc_kda", 21, 94, 60, v7);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v6);
}
