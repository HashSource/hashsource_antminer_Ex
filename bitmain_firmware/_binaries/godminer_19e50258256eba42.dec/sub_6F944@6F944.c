int __fastcall sub_6F944(int a1, int a2)
{
  _BYTE v6[8]; // [sp+1Ch] [bp-1008h] BYREF
  int v7; // [sp+101Ch] [bp-8h]

  if ( !*(_DWORD *)(a1 + 1132) )
    *(_DWORD *)(a1 + 1132) = calloc(1u, 0x11u);
  if ( *(_DWORD *)(a1 + 1132) )
  {
    if ( *(_DWORD *)(a2 + 1588) )
    {
      if ( *(_DWORD *)(a1 + 1124)
        && *(_DWORD *)(a2 + 1580)
        && !strcmp(*(const char **)(a1 + 1124), *(const char **)(a2 + 1580)) )
      {
        v7 = 0;
        V_LOCK();
        logfmt_raw(v6, 0x1000u, 0, "NO ERROR");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_ks5/frontend_ks5.c",
          164,
          "check_job_ks5",
          13,
          206,
          20,
          v6);
      }
      else
      {
        v7 = 2;
        V_LOCK();
        logfmt_raw(v6, 0x1000u, 0, "RETIRED");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_ks5/frontend_ks5.c",
          164,
          "check_job_ks5",
          13,
          211,
          20,
          v6);
      }
      return v7;
    }
    else
    {
      printf("invalid pointer(%s)!\n", "pool->work.private");
      return 0;
    }
  }
  else
  {
    printf("invalid pointer(%s)!\n", "work->private");
    return 0;
  }
}
