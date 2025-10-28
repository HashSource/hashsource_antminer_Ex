int *__fastcall eeprom_close(unsigned int a1)
{
  int v1; // r4
  int *v2; // r3
  int *result; // r0
  int v4; // r0
  int v5; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _BYTE v7[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( a1 > 0xF )
  {
    v4 = snprintf(s, 0x800u, "%s: Bad eeprom param, input chain is %d", "eeprom_close", a1);
    V_LOCK(v4);
    v5 = logfmt_raw((int)v7, 0x1000u);
    V_UNLOCK(v5);
    return (int *)zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/buil"
                    "d/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
                    173,
                    "eeprom_close",
                    12,
                    74,
                    100,
                    v7);
  }
  else
  {
    v1 = 2 * a1;
    v2 = &dword_18D880[2 * a1];
    result = (int *)v2[18];
    if ( result || v2[19] )
    {
      iic_uninit((int)result);
      result = &dword_18D880[v1];
      result[18] = 0;
      result[19] = 0;
    }
  }
  return result;
}
