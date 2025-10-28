int frontend_runtime_instance()
{
  int *v0; // r3
  int v1; // r4
  int v3; // r3
  int *v4; // r3
  int v5; // r0
  int v6; // r1
  char v7[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v0) = 25076;
  HIWORD(v0) = (unsigned int)&opt_custom_freq >> 16;
  v1 = *v0;
  if ( !*v0 )
  {
    V_LOCK();
    LOWORD(v3) = 13996;
    HIWORD(v3) = (unsigned int)"ndler_grin29" >> 16;
    logfmt_raw(v7, 0x1000u, 0, v3);
    V_UNLOCK();
    LOWORD(v4) = -14512;
    HIWORD(v4) = (unsigned int)&unk_16B55C >> 16;
    v5 = *v4;
    LOWORD(v4) = 13968;
    LOWORD(v6) = 14028;
    HIWORD(v4) = (unsigned int)" targetdiff:%d" >> 16;
    HIWORD(v6) = (unsigned int)"" >> 16;
    zlog(v5, v6, 150, v4, 25, 82, 100, v7);
  }
  return v1;
}
