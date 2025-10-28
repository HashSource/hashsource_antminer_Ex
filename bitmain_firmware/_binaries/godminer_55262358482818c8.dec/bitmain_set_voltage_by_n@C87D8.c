int __fastcall bitmain_set_voltage_by_n(__int16 a1)
{
  int v2; // r5
  const char *v4; // r2
  int v5; // r1
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v7[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( dword_1B36F4 )
    return sub_C7AA0(dword_1B36F0, a1);
  v2 = sub_C7E8C();
  if ( v2 >= 0 )
    return sub_C7AA0(dword_1B36F0, a1);
  LOWORD(v4) = 26340;
  HIWORD(v4) = (unsigned int)"power close ===========" >> 16;
  snprintf(s, 0x800u, v4, "bitmain_set_voltage_by_n");
  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, s);
  V_UNLOCK();
  LOWORD(v5) = 25984;
  HIWORD(v5) = (unsigned int)"x, crc_read = 0x%04x" >> 16;
  zlog(g_zc, v5, 176, "bitmain_set_voltage_by_n", 24, 722, 100, v7);
  return v2;
}
