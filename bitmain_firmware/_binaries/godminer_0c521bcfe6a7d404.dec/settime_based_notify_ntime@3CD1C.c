int __fastcall settime_based_notify_ntime(const char *a1)
{
  int v1; // r0
  int v2; // r4
  unsigned int v4; // r6
  int v5; // r0
  int v6; // r0
  struct timeval tv; // [sp+10h] [bp-1008h] BYREF
  _BYTE v8[4096]; // [sp+18h] [bp-1000h] BYREF

  v1 = strtol(a1, 0, 16);
  if ( v1 )
    v2 = ((unsigned __int8)byte_173DE5 ^ 1) & 1;
  else
    v2 = 0;
  if ( v2 )
  {
    v4 = v1;
    tv.tv_usec = 0;
    tv.tv_sec = 0;
    gettimeofday(&tv, 0);
    if ( tv.tv_sec < v4 )
    {
      tv.tv_sec = v4;
      v5 = settimeofday(&tv, 0);
      V_LOCK(v5);
      v6 = logfmt_raw((int)v8, 0x1000u);
      V_UNLOCK(v6);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/frontend/frontend_base.c",
        155,
        "settime_based_notify_ntime",
        26,
        383,
        60,
        v8);
      byte_173DE5 = 1;
    }
    else
    {
      return 0;
    }
  }
  return v2;
}
