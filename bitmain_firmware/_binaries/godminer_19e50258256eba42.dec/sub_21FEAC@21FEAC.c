int __fastcall sub_21FEAC(unsigned __int8 a1, char a2, char a3, int a4, int a5)
{
  unsigned int v5; // r3
  unsigned int v6; // r3
  int v7; // r0
  _BYTE v13[48]; // [sp+2Ch] [bp-1030h] BYREF
  int v14; // [sp+102Ch] [bp-30h] BYREF
  int v15; // [sp+1030h] [bp-2Ch]
  char v16; // [sp+1034h] [bp-28h]
  _DWORD s[4]; // [sp+1038h] [bp-24h] BYREF
  __int16 v18; // [sp+1048h] [bp-14h]
  unsigned __int8 i; // [sp+104Bh] [bp-11h]
  int v20; // [sp+104Ch] [bp-10h]
  unsigned __int8 v21; // [sp+1051h] [bp-Bh]
  __int16 v22; // [sp+1052h] [bp-Ah]
  unsigned int v23; // [sp+1054h] [bp-8h]

  v21 = 7;
  v18 = 255;
  s[0] = 255;
  memset(&s[1], 0, 12);
  v22 = 0;
  v14 = 839363157;
  v16 = 0;
  v20 = 1;
  pthread_mutex_lock(&i2c_mutex_all);
  v15 = (unsigned __int8)(2 * a2) | 1;
  BYTE1(v15) = a3;
  v23 = 7;
  BYTE2(v15) = a5;
  for ( i = 2; i < (unsigned int)v21; ++i )
    v22 += *((unsigned __int8 *)&v14 + i);
  LOBYTE(v18) = HIBYTE(v22);
  HIBYTE(v18) = v22;
  v5 = v23++;
  *((_BYTE *)&v14 + v5) = HIBYTE(v22);
  v6 = v23++;
  *((_BYTE *)&v14 + v6) = HIBYTE(v18);
  v7 = sub_21F914(a1, (int)&v14, v23);
  if ( v23 == v7 )
  {
    usleep(0x30D40u);
    memset(s, 0, sizeof(s));
    if ( sub_21F960(a1, (int)s, 5u) == 5 )
    {
      if ( BYTE1(s[0]) == 50 && BYTE2(s[0]) == 1 )
      {
        for ( i = 0; a5 > i; ++i )
          *(_BYTE *)(a4 + i) = *((_BYTE *)s + i + 3);
        v20 = 1;
      }
      else
      {
        V_LOCK();
        logfmt_raw(
          v13,
          0x1000u,
          0,
          "--- %s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x, read_back_data[2] = 0x%02x, read_back_data[3] = 0x%02x",
          "read_dc_dc",
          LOBYTE(s[0]),
          BYTE1(s[0]),
          BYTE2(s[0]),
          HIBYTE(s[0]));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/drv_pic/isl68127.c",
          165,
          "read_dc_dc",
          10,
          125,
          100,
          v13);
        v20 = 0;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v13, 0x1000u, 0, "%s read iic err", "read_dc_dc");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/drv_pic/isl68127.c",
        165,
        "read_dc_dc",
        10,
        118,
        100,
        v13);
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "%s write iic err", "read_dc_dc");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/isl68127.c",
      165,
      "read_dc_dc",
      10,
      110,
      100,
      v13);
  }
  pthread_mutex_unlock(&i2c_mutex_all);
  return v20;
}
