int __fastcall lcd_write(int a1, int a2, int a3, unsigned int a4)
{
  int v4; // r7
  unsigned int v5; // r4
  bool v6; // cc
  int v8; // r11
  unsigned __int8 v9; // r5
  size_t v10; // r6
  const void *v11; // r1
  int v14; // r0
  int v15; // r0
  _BYTE v16[4100]; // [sp+810h] [bp-1004h] BYREF

  v4 = a2;
  if ( !dword_177E2C )
    return -2;
  v5 = a4;
  if ( dword_177E30 != a1 )
    goto LABEL_15;
  v6 = a4 > 0x40;
  if ( a4 <= 0x40 )
    v6 = (unsigned __int8)a2 > 3u;
  if ( v6 )
  {
LABEL_15:
    V_LOCK(*(_DWORD *)"bad param");
    v14 = logfmt_raw((int)v16, 0x1000u);
    V_UNLOCK(v14);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7020/7020_lcd.c",
      170,
      "lcd_write",
      9,
      69,
      80,
      v16);
    return -3;
  }
  else
  {
    v8 = pthread_mutex_lock(&stru_177E34);
    if ( v8 )
    {
      V_LOCK(*(_DWORD *)"failed to lcd lock");
      v15 = logfmt_raw((int)v16, 0x1000u);
      V_UNLOCK(v15);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/device/hal/platform/7020/7020_lcd.c",
        170,
        "lcd_write",
        9,
        75,
        100,
        v16);
      return -4;
    }
    else
    {
      do
      {
        v9 = v4 + 1;
        if ( v5 >= 0x10 )
          v10 = 16;
        else
          v10 = v5;
        v11 = (const void *)(a3 + v8);
        v8 += v10;
        memcpy((char *)&unk_177E4C + 16 * v4, v11, v10);
        v5 -= v10;
        v4 = (char)v9;
      }
      while ( v9 <= 3u && v5 != 0 );
      write(dword_177E30, &unk_177E4C, 0x40u);
      pthread_mutex_unlock(&stru_177E34);
      return 0;
    }
  }
}
