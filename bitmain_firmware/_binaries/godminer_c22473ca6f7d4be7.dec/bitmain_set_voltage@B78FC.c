int bitmain_set_voltage()
{
  int v0; // r5
  unsigned int v1; // r0
  const char *v3; // r2
  _DWORD *v4; // r3
  int v5; // r1
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v7[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_16C644 || (v0 = sub_B70F4(), v0 >= 0) )
  {
    v1 = bitmain_convert_V_to_N();
    if ( v1 > 0xFF )
      return -2147482879;
    else
      return sub_B6DD8(dword_16C640, (unsigned __int8)v1);
  }
  else
  {
    LOWORD(v3) = -2080;
    HIWORD(v3) = (unsigned int)"" >> 16;
    snprintf(s, 0x800u, v3, "bitmain_set_voltage");
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v4) = -14512;
    HIWORD(v4) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v5) = -2412;
    HIWORD(v5) = (unsigned int)"_standard_code" >> 16;
    zlog(*v4, v5, 166, "bitmain_set_voltage", 19, 479, 100, v7);
  }
  return v0;
}
