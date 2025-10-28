int __fastcall sub_21F9AC(unsigned __int8 a1, char a2, char a3, int a4, int a5)
{
  unsigned int v5; // r3
  unsigned int v6; // r3
  unsigned int v7; // r3
  int v8; // r0
  _BYTE v14[56]; // [sp+2Ch] [bp-1038h] BYREF
  int v15; // [sp+102Ch] [bp-38h] BYREF
  int v16; // [sp+1030h] [bp-34h]
  int v17; // [sp+1034h] [bp-30h]
  int v18; // [sp+1038h] [bp-2Ch]
  _DWORD s[4]; // [sp+103Ch] [bp-28h] BYREF
  __int16 v20; // [sp+104Ch] [bp-18h]
  unsigned __int8 i; // [sp+104Fh] [bp-15h]
  int j; // [sp+1050h] [bp-14h]
  unsigned int v23; // [sp+1054h] [bp-10h]
  int v24; // [sp+1058h] [bp-Ch]
  _BYTE v25[3]; // [sp+105Dh] [bp-7h]

  v20 = 255;
  s[0] = 255;
  memset(&s[1], 0, 12);
  v25[2] = 0;
  v15 = 838904405;
  v17 = 0;
  v18 = 0;
  j = 0;
  *(_WORD *)v25 = (unsigned __int8)(a5 + 6);
  v24 = 1;
  pthread_mutex_lock(&i2c_mutex_all);
  BYTE2(v15) = a5 + 6;
  v16 = (unsigned __int8)(2 * a2);
  v23 = 6;
  BYTE1(v16) = a3;
  for ( i = 0; a5 > i; ++i )
  {
    v5 = v23++;
    *((_BYTE *)&v15 + v5) = *(_BYTE *)(a4 + i);
  }
  for ( j = 2; j < a5 + 6; ++j )
    *(_WORD *)&v25[1] += *((unsigned __int8 *)&v15 + j);
  LOBYTE(v20) = v25[2];
  HIBYTE(v20) = v25[1];
  v6 = v23++;
  *((_BYTE *)&v15 + v6) = v25[2];
  v7 = v23++;
  *((_BYTE *)&v15 + v7) = HIBYTE(v20);
  v8 = sub_21F914(a1, (int)&v15, v23);
  if ( v23 == v8 )
  {
    usleep(0x30D40u);
    memset(s, 0, sizeof(s));
    if ( sub_21F960(a1, (int)s, 5u) == 5 )
    {
      if ( BYTE1(s[0]) != 50 || BYTE2(s[0]) != 1 )
      {
        V_LOCK();
        logfmt_raw(
          v14,
          0x1000u,
          0,
          "--- %s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x, read_back_data[2] = 0x%02x, read_back_data[3] = 0x%02x",
          "write_dc_dc",
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
          "write_dc_dc",
          11,
          75,
          100,
          v14);
        v24 = 0;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v14, 0x1000u, 0, "%s read iic err", "write_dc_dc");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/drv_pic/isl68127.c",
        165,
        "write_dc_dc",
        11,
        68,
        100,
        v14);
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, "%s write iic err", "write_dc_dc");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/isl68127.c",
      165,
      "write_dc_dc",
      11,
      61,
      100,
      v14);
  }
  pthread_mutex_unlock(&i2c_mutex_all);
  return v24;
}
