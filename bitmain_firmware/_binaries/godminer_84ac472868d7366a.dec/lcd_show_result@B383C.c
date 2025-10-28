int lcd_show_result()
{
  int v0; // r0
  int v1; // r4
  int v3; // r0
  int v4; // r0
  int v5; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _BYTE v7[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_16C52C) )
  {
    v1 = -4;
    strcpy(s, "failed to api lock");
    V_LOCK(*(_DWORD *)"failed to api lock");
    v5 = logfmt_raw((int)v7, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_ui.c",
      167,
      "lcd_show_result",
      15,
      490,
      100,
      v7);
  }
  else
  {
    v0 = dword_163B90;
    if ( dword_163B90 < 0 )
    {
      dword_163B90 = lcd_init(lcd_path);
      lcd_clear();
      v0 = dword_163B90;
    }
    if ( v0 <= 0 )
    {
      v3 = snprintf(s, 0x800u, "failed to init %s", lcd_path);
      V_LOCK(v3);
      v4 = logfmt_raw((int)v7, 0x1000u);
      V_UNLOCK(v4);
      v1 = -1;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/zynqmp/zynqmp_ui.c",
        167,
        "lcd_show_result",
        15,
        506,
        100,
        v7);
    }
    else
    {
      v1 = lcd_write();
    }
    pthread_mutex_unlock(&stru_16C52C);
  }
  return v1;
}
