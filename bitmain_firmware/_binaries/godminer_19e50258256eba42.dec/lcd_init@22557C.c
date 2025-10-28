int __fastcall lcd_init(const char *a1)
{
  char v3[2048]; // [sp+18h] [bp-1804h] BYREF
  int v4; // [sp+818h] [bp-1004h] BYREF

  if ( dword_C26978 )
    return 0;
  if ( a1 )
  {
    dword_C26974 = open(a1, 2050);
    if ( dword_C26974 >= 0 )
    {
      dword_C26978 = 1;
      return dword_C26974;
    }
    else
    {
      strcpy(v3, "open lcd failed!!!");
      V_LOCK();
      logfmt_raw(&v4, 0x1000u, 0, v3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_lcd.c",
        177,
        "lcd_init",
        8,
        41,
        100,
        &v4);
      return -1;
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
      "lcd_init",
      8,
      35,
      100,
      &v4);
    return -3;
  }
}
