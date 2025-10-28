int __fastcall eeprom_read(unsigned int a1, __int16 a2, int a3, int a4)
{
  int v5; // r9
  int v7; // r5
  int fd_from_ctx; // r7
  int v10; // r6
  int v12; // r10
  int v13; // r0
  int v14; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _BYTE v21[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( a1 > 0xF )
  {
    v12 = -2147483391;
    v18 = snprintf(s, 0x800u, "%s: Bad eeprom param, input chain is %d", "eeprom_read", a1);
    V_LOCK(v18);
    v19 = logfmt_raw((int)v21, 0x1000u);
    V_UNLOCK(v19);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      173,
      "eeprom_read",
      11,
      131,
      100,
      v21);
    return v12;
  }
  v5 = 2 * a1;
  LOWORD(v7) = a2;
  if ( !dword_18D880[2 * a1 + 19] )
  {
    v12 = eeprom_open(a1);
    if ( v12 < 0 )
    {
      v16 = snprintf(s, 0x800u, "%s: auto exec eeprom_open, but chain %d open eeprom failed", "eeprom_read", a1);
      V_LOCK(v16);
      v17 = logfmt_raw((int)v21, 0x1000u);
      V_UNLOCK(v17);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        173,
        "eeprom_read",
        11,
        136,
        100,
        v21);
      return v12;
    }
  }
  fd_from_ctx = i2c_get_fd_from_ctx(dword_18D880[v5 + 18]);
  if ( a4 )
  {
    v7 = (unsigned __int16)v7;
    v10 = a3 + a4;
    while ( !at24c512_eeprom_read_byte(fd_from_ctx, 80, v7, a3++) )
    {
      v7 = (unsigned __int16)(v7 + 1);
      if ( a3 == v10 )
        goto LABEL_11;
    }
    v12 = -2147483392;
    v13 = snprintf(s, 0x800u, "fail to read eeprom by iic, chain: %d, addr: %d", a1, v7);
    V_LOCK(v13);
    v14 = logfmt_raw((int)v21, 0x1000u);
    V_UNLOCK(v14);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      173,
      "eeprom_read",
      11,
      147,
      100,
      v21);
    return v12;
  }
LABEL_11:
  usleep((__useconds_t)&loc_7A120);
  return 0;
}
