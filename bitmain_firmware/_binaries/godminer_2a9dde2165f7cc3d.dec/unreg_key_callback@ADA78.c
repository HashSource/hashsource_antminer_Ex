int __fastcall unreg_key_callback(int a1)
{
  int v2; // r0
  int *v3; // r3
  int v4; // t1
  int v5; // r0
  int v6; // r0
  _BYTE v8[4100]; // [sp+810h] [bp-1004h] BYREF

  v2 = pthread_mutex_lock(&stru_18D844);
  if ( v2 )
  {
    V_LOCK(*(_DWORD *)"failed to api lock");
    v6 = logfmt_raw((int)v8, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_ui.c",
      173,
      "unreg_key_callback",
      18,
      454,
      100,
      v8);
    return -1;
  }
  else
  {
    v3 = (int *)&off_18D860;
    while ( 1 )
    {
      v4 = *v3++;
      if ( a1 == v4 )
        break;
      if ( ++v2 == 5 )
      {
        V_LOCK(*(_DWORD *)"istered before");
        v5 = logfmt_raw((int)v8, 0x1000u);
        V_UNLOCK(v5);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/device/hal/platform/7020/7020_ui.c",
          173,
          "unreg_key_callback",
          18,
          468,
          80,
          v8);
        goto LABEL_7;
      }
    }
    dword_18D840[v2 + 8] = 0;
LABEL_7:
    pthread_mutex_unlock(&stru_18D844);
    return 0;
  }
}
