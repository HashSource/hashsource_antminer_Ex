int __fastcall eeprom_write(unsigned int a1, __int16 a2, unsigned __int8 *a3, int a4)
{
  unsigned int v5; // r9
  int v7; // r5
  int fd_from_ctx; // r7
  unsigned __int8 *v10; // r6
  int v11; // t1
  const char *v12; // r2
  int v13; // r10
  int v14; // r1
  const char *v16; // r2
  int v17; // r1
  const char *v18; // r2
  int v19; // r1
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v21[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( a1 > 0xF )
  {
    LOWORD(v18) = 23772;
    HIWORD(v18) = (unsigned int)" %d." >> 16;
    v13 = -2147483391;
    snprintf(s, 0x800u, v18, "eeprom_write", a1);
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v19) = 23232;
    HIWORD(v19) = (unsigned int)" not ready, chain = %d." >> 16;
    zlog(g_zc, v19, 173, "eeprom_write", 12, 91, 100, v21);
    return v13;
  }
  v5 = 2 * a1;
  LOWORD(v7) = a2;
  if ( !dword_1B3628[2 * a1 + 19] )
  {
    v13 = eeprom_open(a1);
    if ( v13 < 0 )
    {
      LOWORD(v16) = 23844;
      HIWORD(v16) = (unsigned int)"prom_data is not ready" >> 16;
      snprintf(s, 0x800u, v16, "eeprom_write", a1);
      V_LOCK();
      logfmt_raw(v21, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v17) = 23232;
      HIWORD(v17) = (unsigned int)" not ready, chain = %d." >> 16;
      zlog(g_zc, v17, 173, "eeprom_write", 12, 96, 100, v21);
      return v13;
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
    LOWORD(v12) = 23904;
    HIWORD(v12) = (unsigned int)" %d open eeprom failed" >> 16;
    v13 = -2147483392;
    snprintf(s, 0x800u, v12, a1, v7);
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v14) = 23232;
    HIWORD(v14) = (unsigned int)" not ready, chain = %d." >> 16;
    zlog(g_zc, v14, 173, "eeprom_write", 12, 106, 100, v21);
    return v13;
  }
LABEL_11:
  sleep(1u);
  return 0;
}
