int __fastcall reg_key_callback(int (__fastcall *a1)(int, bool))
{
  char v4[2048]; // [sp+18h] [bp-180Ch] BYREF
  _BYTE v5[12]; // [sp+818h] [bp-100Ch] BYREF
  int i; // [sp+1818h] [bp-Ch]
  int v7; // [sp+181Ch] [bp-8h]

  i = 0;
  v7 = 0;
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
      "reg_key_callback",
      16,
      398,
      100,
      v5);
    return -1;
  }
  else
  {
    for ( i = 0; i <= 4; ++i )
    {
      if ( !dword_C25EC4[i] )
      {
        dword_C25EC4[i] = a1;
        break;
      }
    }
    if ( i > 4 )
    {
      v7 = -2;
      strcpy(v4, "no more listener available");
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_ui.c",
        176,
        "reg_key_callback",
        16,
        414,
        100,
        v5);
    }
    pthread_mutex_unlock(&stru_C25E9C);
    return v7;
  }
}
