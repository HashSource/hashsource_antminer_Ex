int __fastcall eeprom_write(unsigned int a1, int a2, int a3, unsigned int a4)
{
  char v10[16]; // [sp+24h] [bp-1810h] BYREF
  _BYTE v11[16]; // [sp+824h] [bp-1010h] BYREF
  int v12; // [sp+1824h] [bp-10h] BYREF
  int v13; // [sp+1828h] [bp-Ch]
  unsigned int i; // [sp+182Ch] [bp-8h]

  v13 = 0;
  i = 0;
  if ( a1 <= 0xF )
  {
    for ( i = 0; a4 > i; ++i )
    {
      v12 = i + a2;
      v13 = iic_write_eeprom_e11(0, &v12, 1, a3 + i, 1u, a1);
      if ( v13 != 1 )
      {
        snprintf(v10, 0x800u, "fail to write eeprom by iic, chain:%d, addr: %d", a1, v12);
        V_LOCK();
        logfmt_raw(v11, 0x1000u, 0, v10);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
          170,
          "eeprom_write",
          12,
          106,
          100,
          v11);
        return -2147483392;
      }
      snprintf(v10, 0x800u, "chain:%d, write no.%d data: %x", a1, i, *(unsigned __int8 *)(a3 + i));
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, v10);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "eeprom_write",
        12,
        109,
        20,
        v11);
    }
    sleep(1u);
    return 0;
  }
  else
  {
    snprintf(v10, 0x800u, "%s: Bad eeprom param, input chain is %d", "eeprom_write", a1);
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "eeprom_write",
      12,
      91,
      100,
      v11);
    return -2147483391;
  }
}
