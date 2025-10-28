int __fastcall lcd_show_result(unsigned __int8 a1, int a2, unsigned int a3)
{
  char v8[2048]; // [sp+24h] [bp-1808h] BYREF
  _BYTE v9[8]; // [sp+824h] [bp-1008h] BYREF
  int v10; // [sp+1824h] [bp-8h]

  v10 = -1;
  if ( pthread_mutex_lock(&stru_C25E9C) )
  {
    strcpy(v8, "failed to api lock");
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_ui.c",
      176,
      "lcd_show_result",
      15,
      470,
      100,
      v9);
    return -4;
  }
  else
  {
    if ( dword_5AA698 < 0 )
    {
      dword_5AA698 = lcd_init(lcd_path[0]);
      lcd_clear(dword_5AA698);
    }
    if ( dword_5AA698 <= 0 )
    {
      snprintf(v8, 0x800u, "failed to init %s", lcd_path[0]);
      V_LOCK();
      logfmt_raw(v9, 0x1000u, 0, v8);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_ui.c",
        176,
        "lcd_show_result",
        15,
        486,
        100,
        v9);
      v10 = -1;
    }
    else
    {
      v10 = lcd_write(dword_5AA698, a1, a2, a3);
    }
    pthread_mutex_unlock(&stru_C25E9C);
    return v10;
  }
}
