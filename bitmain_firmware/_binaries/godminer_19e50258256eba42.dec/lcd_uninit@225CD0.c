int __fastcall lcd_uninit(int a1)
{
  char v2[2048]; // [sp+1Ch] [bp-1808h] BYREF
  _BYTE v3[8]; // [sp+81Ch] [bp-1008h] BYREF
  int v4; // [sp+181Ch] [bp-8h]

  v4 = 0;
  if ( dword_C26978 )
  {
    if ( close(a1) )
    {
      strcpy(v2, "lcd close failed!!!");
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, v2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_lcd.c",
        177,
        "lcd_uninit",
        10,
        147,
        100,
        v3);
      v4 = -1;
    }
    dword_C26978 = 0;
  }
  return v4;
}
