int __fastcall lcd_init(int a1)
{
  int result; // r0
  int v2; // r0
  int v3; // r0
  _BYTE v4[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_16C6E8 )
    return 0;
  if ( a1 )
  {
    result = open64(a1);
    dword_16C6EC = result;
    if ( result < 0 )
    {
      V_LOCK(*(_DWORD *)"open lcd failed!!!");
      v3 = logfmt_raw((int)v4, 0x1000u);
      V_UNLOCK(v3);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/zynqmp/zynqmp_lcd.c",
        168,
        "lcd_init",
        8,
        41,
        100,
        v4);
      return -1;
    }
    else
    {
      dword_16C6E8 = 1;
    }
  }
  else
  {
    V_LOCK(*(_DWORD *)"bad param");
    v2 = logfmt_raw((int)v4, 0x1000u);
    V_UNLOCK(v2);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_lcd.c",
      168,
      "lcd_init",
      8,
      35,
      100,
      v4);
    return -3;
  }
  return result;
}
