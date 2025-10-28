int __fastcall lcd_init(int a1)
{
  int result; // r0
  int v2; // r0
  int v3; // r0
  _BYTE v4[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_18E2A0 )
    return 0;
  if ( a1 )
  {
    result = open64(a1);
    dword_18E2A4 = result;
    if ( result < 0 )
    {
      V_LOCK(*(_DWORD *)"open lcd failed!!!");
      v3 = logfmt_raw((int)v4, 0x1000u);
      V_UNLOCK(v3);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/platform/7020/7020_lcd.c",
        174,
        "lcd_init",
        8,
        41,
        100,
        v4);
      return -1;
    }
    else
    {
      dword_18E2A0 = 1;
    }
  }
  else
  {
    V_LOCK(*(_DWORD *)"bad param");
    v2 = logfmt_raw((int)v4, 0x1000u);
    V_UNLOCK(v2);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_lcd.c",
      174,
      "lcd_init",
      8,
      35,
      100,
      v4);
    return -3;
  }
  return result;
}
