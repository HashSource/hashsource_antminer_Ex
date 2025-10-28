int __fastcall lcd_clear(int a1)
{
  int v1; // r6
  int v2; // r1
  int v4; // r0
  int v5; // r0
  _BYTE v6[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( !dword_177E2C )
    return -2;
  if ( dword_177E30 == a1 )
  {
    if ( pthread_mutex_lock(&stru_177E34) )
    {
      V_LOCK(*(_DWORD *)"failed to lcd lock");
      v5 = logfmt_raw((int)v6, 0x1000u);
      V_UNLOCK(v5);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/device/hal/platform/7020/7020_lcd.c",
        170,
        "lcd_clear",
        9,
        123,
        100,
        v6);
      return -4;
    }
    else
    {
      memset(&unk_177E4C, 0x20, 0x40u);
      v1 = dword_177E30;
      lseek64(dword_177E30, v2, 0, 0, 0);
      write(v1, &unk_177E4C, 0x40u);
      pthread_mutex_unlock(&stru_177E34);
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
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7020/7020_lcd.c",
      170,
      "lcd_clear",
      9,
      117,
      80,
      v6);
    return -3;
  }
}
