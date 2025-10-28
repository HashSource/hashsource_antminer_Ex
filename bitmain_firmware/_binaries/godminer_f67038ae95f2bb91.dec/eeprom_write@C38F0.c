int __fastcall eeprom_write(unsigned int a1, __int16 a2, unsigned __int8 *a3, int a4)
{
  unsigned int v5; // r9
  int v7; // r5
  int fd_from_ctx; // r7
  unsigned __int8 *v10; // r6
  int v11; // t1
  int v12; // r10
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v15[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( a1 > 0xF )
  {
    v12 = -2147483391;
    snprintf(s, 0x800u, "%s: Bad eeprom param, input chain is %d", "eeprom_write", a1);
    V_LOCK();
    logfmt_raw(v15, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      173,
      "eeprom_write",
      12,
      91,
      100,
      v15);
    return v12;
  }
  v5 = 2 * a1;
  LOWORD(v7) = a2;
  if ( !dword_1B3628[2 * a1 + 19] )
  {
    v12 = eeprom_open(a1);
    if ( v12 < 0 )
    {
      snprintf(s, 0x800u, "%s: auto exec eeprom_open, but chain %d open eeprom failed", "eeprom_write", a1);
      V_LOCK();
      logfmt_raw(v15, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        173,
        "eeprom_write",
        12,
        96,
        100,
        v15);
      return v12;
    }
  }
  fd_from_ctx = i2c_get_fd_from_ctx(dword_1B3628[v5 + 18]);
  if ( a4 )
  {
    v7 = (unsigned __int16)v7;
    v10 = &a3[a4];
    while ( 1 )
    {
      v11 = *a3++;
      if ( at24c512_eeprom_write_byte(fd_from_ctx, 80, v7, v11) )
        break;
      v7 = (unsigned __int16)(v7 + 1);
      if ( a3 == v10 )
        goto LABEL_11;
    }
    v12 = -2147483392;
    snprintf(s, 0x800u, "fail to write eeprom by iic, chain:%d, addr: %d", a1, v7);
    V_LOCK();
    logfmt_raw(v15, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      173,
      "eeprom_write",
      12,
      106,
      100,
      v15);
    return v12;
  }
LABEL_11:
  sleep(1u);
  return 0;
}
