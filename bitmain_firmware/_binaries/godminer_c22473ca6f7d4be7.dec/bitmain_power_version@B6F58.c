int bitmain_power_version()
{
  int v0; // r5
  const char *v2; // r2
  _DWORD *v3; // r3
  int v4; // r1
  int *v5; // lr
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r1
  int v11; // r2
  _DWORD *v12; // r3
  int v13; // r1
  int v14; // [sp+10h] [bp-1810h] BYREF
  __int16 v15; // [sp+14h] [bp-180Ch]
  int v16; // [sp+18h] [bp-1808h] BYREF
  int v17; // [sp+1Ch] [bp-1804h]
  _DWORD s[6]; // [sp+20h] [bp-1800h] BYREF
  __int16 v19; // [sp+38h] [bp-17E8h]
  char v20[4096]; // [sp+820h] [bp-1000h] BYREF

  if ( dword_16C644 || (v0 = bitmain_power_open(), v0 >= 0) )
  {
    v17 = 0;
    v16 = 0;
    v14 = 33860181;
    v15 = 6;
    if ( sub_B6918(dword_16C640, (unsigned __int8 *)&v14, 6u, (unsigned __int8 *)&v16, 8u) )
    {
      LOWORD(v5) = -2020;
      HIWORD(v5) = (unsigned int)"et_voltage" >> 16;
      v0 = -2147482880;
      v6 = *v5;
      v7 = v5[1];
      v8 = v5[2];
      v9 = v5[3];
      v5 += 4;
      s[0] = v6;
      s[1] = v7;
      s[2] = v8;
      s[3] = v9;
      v10 = v5[1];
      v11 = v5[2];
      s[4] = *v5;
      s[5] = v10;
      v19 = v11;
      V_LOCK();
      logfmt_raw(v20, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v12) = -14512;
      HIWORD(v12) = (unsigned int)&unk_16B55C >> 16;
      LOWORD(v13) = -2412;
      HIWORD(v13) = (unsigned int)"_standard_code" >> 16;
      zlog(*v12, v13, 166, "_bitmain_get_power_version", 26, 251, 100, v20);
    }
    else
    {
      v0 = (unsigned __int16)v17;
      if ( (_WORD)v17 )
        dword_16C648 = (unsigned __int16)v17;
    }
  }
  else
  {
    LOWORD(v2) = -2080;
    HIWORD(v2) = (unsigned int)"" >> 16;
    snprintf((char *)s, 0x800u, v2, "bitmain_power_version");
    V_LOCK();
    logfmt_raw(v20, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v3) = -14512;
    HIWORD(v3) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v4) = -2412;
    HIWORD(v4) = (unsigned int)"_standard_code" >> 16;
    zlog(*v3, v4, 166, "bitmain_power_version", 21, 452, 100, v20);
  }
  return v0;
}
