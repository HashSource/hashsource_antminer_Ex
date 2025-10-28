int __fastcall lcd_clear(int a1)
{
  int v1; // r6
  int v2; // r1
  int v4; // r0
  int v5; // r0
  _BYTE v6[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( !dword_16C6E8 )
    return -2;
  if ( dword_16C6EC == a1 )
  {
    if ( pthread_mutex_lock(&stru_16C6F0) )
    {
      V_LOCK(*(_DWORD *)"failed to lcd lock");
      v5 = logfmt_raw((int)v6, 0x1000u);
      V_UNLOCK(v5);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/zynqmp/zynqmp_lcd.c",
        168,
        "lcd_clear",
        9,
        123,
        100,
        v6);
      return -4;
    }
    else
    {
      memset(&unk_16C708, 0x20, 0x40u);
      v1 = dword_16C6EC;
      lseek64(dword_16C6EC, v2, 0, 0, 0);
      write(v1, &unk_16C708, 0x40u);
      pthread_mutex_unlock(&stru_16C6F0);
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
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_lcd.c",
      168,
      "lcd_clear",
      9,
      117,
      80,
      v6);
    return -3;
  }
}
