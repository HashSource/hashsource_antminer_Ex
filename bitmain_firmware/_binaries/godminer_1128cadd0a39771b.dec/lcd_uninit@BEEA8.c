int __fastcall lcd_uninit(int a1)
{
  int result; // r0
  int v2; // r0
  _BYTE v3[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( !dword_16D6F8 )
    return 0;
  result = close(a1);
  if ( result )
  {
    V_LOCK(*(_DWORD *)"lcd close failed!!!");
    v2 = logfmt_raw((int)v3, 0x1000u);
    V_UNLOCK(v2);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_lcd.c",
      168,
      "lcd_uninit",
      10,
      147,
      100,
      v3);
    result = -1;
  }
  dword_16D6F8 = 0;
  return result;
}
