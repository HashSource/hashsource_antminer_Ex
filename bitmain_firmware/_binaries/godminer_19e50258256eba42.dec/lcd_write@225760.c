int __fastcall lcd_write(int a1, unsigned __int8 a2, int a3, unsigned int a4)
{
  size_t v5; // r3
  int v6; // r2
  unsigned int v8; // [sp+10h] [bp-181Ch]
  unsigned __int8 v10; // [sp+1Bh] [bp-1811h]
  char v11[2048]; // [sp+20h] [bp-180Ch] BYREF
  _BYTE v12[12]; // [sp+820h] [bp-100Ch] BYREF
  size_t n; // [sp+1820h] [bp-Ch]
  int v14; // [sp+1824h] [bp-8h]

  v8 = a4;
  v10 = a2;
  v14 = 0;
  if ( !dword_C26978 )
    return -2;
  if ( a1 == dword_C26974 && a2 <= 3u && a4 <= 0x40 )
  {
    if ( pthread_mutex_lock(&stru_C2697C) )
    {
      strcpy(v11, "failed to lcd lock");
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, v11);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_lcd.c",
        177,
        "lcd_write",
        9,
        75,
        100,
        v12);
      return -4;
    }
    else
    {
      do
      {
        v5 = v8;
        if ( v8 >= 0x10 )
          v5 = 16;
        n = v5;
        v6 = (char)v10++;
        memcpy((char *)&unk_C26994 + 16 * v6, (const void *)(a3 + v14), v5);
        v14 += n;
        v8 -= n;
      }
      while ( v8 && v10 <= 3u );
      write(dword_C26974, &unk_C26994, 0x40u);
      pthread_mutex_unlock(&stru_C2697C);
      return 0;
    }
  }
  else
  {
    strcpy(v11, "bad param");
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, v11);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_lcd.c",
      177,
      "lcd_write",
      9,
      69,
      80,
      v12);
    return -3;
  }
}
