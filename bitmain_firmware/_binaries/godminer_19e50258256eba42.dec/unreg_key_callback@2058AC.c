int __fastcall unreg_key_callback(int (__fastcall *a1)(int, bool))
{
  char v4[2048]; // [sp+1Ch] [bp-1808h] BYREF
  _BYTE v5[8]; // [sp+81Ch] [bp-1008h] BYREF
  int i; // [sp+181Ch] [bp-8h]

  i = 0;
  if ( pthread_mutex_lock(&stru_C25E9C) )
  {
    strcpy(v4, "failed to api lock");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_ui.c",
      176,
      "unreg_key_callback",
      18,
      434,
      100,
      v5);
    return -1;
  }
  else
  {
    for ( i = 0; i <= 4; ++i )
    {
      if ( a1 == dword_C25EC4[i] )
      {
        dword_C25EC4[i] = 0;
        break;
      }
    }
    if ( i > 4 )
    {
      strcpy(v4, "listener not registered before");
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_ui.c",
        176,
        "unreg_key_callback",
        18,
        448,
        80,
        v5);
    }
    pthread_mutex_unlock(&stru_C25E9C);
    return 0;
  }
}
