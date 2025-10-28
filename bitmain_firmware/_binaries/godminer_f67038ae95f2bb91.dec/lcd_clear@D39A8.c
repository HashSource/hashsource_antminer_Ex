int __fastcall lcd_clear(int a1)
{
  int v1; // r6
  int v2; // r1
  char v4[2048]; // [sp+10h] [bp-1800h] BYREF
  char v5[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( !dword_1B404C )
    return -2;
  if ( dword_1B4050 == a1 )
  {
    if ( pthread_mutex_lock(&stru_1B4054) )
    {
      strcpy(v4, "failed to lcd lock");
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/platform/7020/7020_lcd.c",
        174,
        "lcd_clear",
        9,
        123,
        100,
        v5);
      return -4;
    }
    else
    {
      memset(&unk_1B406C, 0x20, 0x40u);
      v1 = dword_1B4050;
      lseek64(dword_1B4050, v2, 0, 0, 0);
      write(v1, &unk_1B406C, 0x40u);
      pthread_mutex_unlock(&stru_1B4054);
      return 0;
    }
  }
  else
  {
    strcpy(v4, "bad param");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_lcd.c",
      174,
      "lcd_clear",
      9,
      117,
      80,
      v5);
    return -3;
  }
}
