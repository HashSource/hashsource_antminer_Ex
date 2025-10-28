int __fastcall lcd_clear(int a1)
{
  int v1; // r6
  int v2; // r1
  int v4; // r0
  int v5; // r0
  _BYTE v6[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( !dword_18E2A0 )
    return -2;
  if ( dword_18E2A4 == a1 )
  {
    if ( pthread_mutex_lock(&stru_18E2A8) )
    {
      V_LOCK(*(_DWORD *)"failed to lcd lock");
      v5 = logfmt_raw((int)v6, 0x1000u);
      V_UNLOCK(v5);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/platform/7020/7020_lcd.c",
        174,
        "lcd_clear",
        9,
        123,
        100,
        v6);
      return -4;
    }
    else
    {
      memset(&unk_18E2C0, 0x20, 0x40u);
      v1 = dword_18E2A4;
      lseek64(dword_18E2A4, v2, 0, 0, 0);
      write(v1, &unk_18E2C0, 0x40u);
      pthread_mutex_unlock(&stru_18E2A8);
      return 0;
    }
  }
  else
  {
    V_LOCK(*(_DWORD *)"bad param");
    v4 = logfmt_raw((int)v6, 0x1000u);
    V_UNLOCK(v4);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_lcd.c",
      174,
      "lcd_clear",
      9,
      117,
      80,
      v6);
    return -3;
  }
}
