int dump_target_diff()
{
  int v0; // s0
  int v1; // s1
  int v2; // r3
  _DWORD *v3; // r3
  int v4; // r1
  int v6; // [sp+4h] [bp-1010h]
  char v7[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v2) = 11516;
  HIWORD(v2) = (unsigned int)"c" >> 16;
  logfmt_raw(v7, 0x1000u, 0, v2, "dump_target_diff", v6, v0, v1);
  V_UNLOCK();
  LOWORD(v3) = -14512;
  HIWORD(v3) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v4) = 11324;
  HIWORD(v4) = (unsigned int)"tranonce_ckb" >> 16;
  return zlog(*v3, v4, 163, "dump_target_diff", 16, 19, 20, v7);
}
