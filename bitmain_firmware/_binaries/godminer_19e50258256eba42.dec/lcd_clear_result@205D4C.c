int lcd_clear_result()
{
  char v1[2048]; // [sp+10h] [bp-1804h] BYREF
  int v2; // [sp+810h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_C25E9C) )
  {
    strcpy(v1, "failed to api lock");
    V_LOCK();
    logfmt_raw(&v2, 0x1000u, 0, v1);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer"
             "-origin_godminer-new/backend/device/hal/platform/7007e11/7007e11_ui.c",
             176,
             "lcd_clear_result",
             16,
             501,
             100,
             &v2);
  }
  else
  {
    if ( dword_5AA698 > 0 )
      lcd_clear(dword_5AA698);
    return pthread_mutex_unlock(&stru_C25E9C);
  }
}
