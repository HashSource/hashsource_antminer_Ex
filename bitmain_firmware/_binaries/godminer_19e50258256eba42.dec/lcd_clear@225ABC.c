int __fastcall lcd_clear(int a1)
{
  char v3[2048]; // [sp+18h] [bp-1804h] BYREF
  int v4; // [sp+818h] [bp-1004h] BYREF

  if ( !dword_C26978 )
    return -2;
  if ( a1 == dword_C26974 )
  {
    if ( pthread_mutex_lock(&stru_C2697C) )
    {
      strcpy(v3, "failed to lcd lock");
      V_LOCK();
      logfmt_raw(&v4, 0x1000u, 0, v3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_lcd.c",
        177,
        "lcd_clear",
        9,
        123,
        100,
        &v4);
      return -4;
    }
    else
    {
      memset(&unk_C26994, 32, 0x40u);
      lseek(dword_C26974, 0, 0);
      write(dword_C26974, &unk_C26994, 0x40u);
      pthread_mutex_unlock(&stru_C2697C);
      return 0;
    }
  }
  else
  {
    strcpy(v3, "bad param");
    V_LOCK();
    logfmt_raw(&v4, 0x1000u, 0, v3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_lcd.c",
      177,
      "lcd_clear",
      9,
      117,
      80,
      &v4);
    return -3;
  }
}
