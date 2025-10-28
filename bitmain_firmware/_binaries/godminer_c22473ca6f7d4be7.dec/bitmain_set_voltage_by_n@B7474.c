int __fastcall bitmain_set_voltage_by_n(__int16 a1)
{
  int v2; // r5
  const char *v4; // r2
  _DWORD *v5; // r3
  int v6; // r1
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v8[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( dword_16C644 )
    return sub_B6DD8(dword_16C640, a1);
  v2 = sub_B70F4();
  if ( v2 >= 0 )
    return sub_B6DD8(dword_16C640, a1);
  LOWORD(v4) = -2080;
  HIWORD(v4) = (unsigned int)"" >> 16;
  snprintf(s, 0x800u, v4, "bitmain_set_voltage_by_n");
  V_LOCK();
  logfmt_raw(v8, 0x1000u, 0, s);
  V_UNLOCK();
  LOWORD(v5) = -14512;
  HIWORD(v5) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v6) = -2412;
  HIWORD(v6) = (unsigned int)"_standard_code" >> 16;
  zlog(*v5, v6, 166, "bitmain_set_voltage_by_n", 24, 493, 100, v8);
  return v2;
}
