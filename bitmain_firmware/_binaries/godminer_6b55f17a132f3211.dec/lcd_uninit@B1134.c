int __fastcall lcd_uninit(int a1)
{
  int result; // r0
  int v2; // r0
  _BYTE v3[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( !dword_177E2C )
    return 0;
  result = close(a1);
  if ( result )
  {
    V_LOCK(*(_DWORD *)"lcd close failed!!!");
    v2 = logfmt_raw((int)v3, 0x1000u);
    V_UNLOCK(v2);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7020/7020_lcd.c",
      170,
      "lcd_uninit",
      10,
      147,
      100,
      v3);
    result = -1;
  }
  dword_177E2C = 0;
  return result;
}
