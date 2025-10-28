void bitmain_get_voltage()
{
  const char *v0; // r2
  _DWORD *v1; // r3
  int v2; // r1
  int *v3; // r12
  _DWORD *v4; // r6
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r1
  int v10; // r2
  int v11; // r1
  int *v12; // lr
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r1
  int v18; // r1
  int v19; // [sp+10h] [bp-1814h] BYREF
  __int16 v20; // [sp+14h] [bp-1810h]
  _DWORD v21[2]; // [sp+18h] [bp-180Ch] BYREF
  int s; // [sp+20h] [bp-1804h] BYREF
  int v23; // [sp+24h] [bp-1800h]
  int v24; // [sp+28h] [bp-17FCh]
  int v25; // [sp+2Ch] [bp-17F8h]
  int v26; // [sp+30h] [bp-17F4h]
  int v27; // [sp+34h] [bp-17F0h]
  int v28; // [sp+38h] [bp-17ECh]
  char v29[4100]; // [sp+820h] [bp-1004h] BYREF

  if ( dword_16C644 || sub_B70F4() >= 0 )
  {
    v21[1] = 0;
    v21[0] = 0;
    v19 = 50637397;
    v20 = 7;
    if ( sub_B6918(dword_16C640, (unsigned __int8 *)&v19, 6u, (unsigned __int8 *)v21, 8u) )
    {
      LOWORD(v3) = -1864;
      HIWORD(v3) = (unsigned int)"api_get_eeprom_nonce_response_rate" >> 16;
      LOWORD(v4) = -14512;
      v5 = *v3;
      v6 = v3[1];
      v7 = v3[2];
      v8 = v3[3];
      v3 += 4;
      HIWORD(v4) = (unsigned int)&unk_16B55C >> 16;
      s = v5;
      v23 = v6;
      v24 = v7;
      v25 = v8;
      v9 = v3[1];
      v10 = v3[2];
      v26 = *v3;
      v27 = v9;
      v28 = v10;
      V_LOCK();
      logfmt_raw(v29, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v11) = -2412;
      HIWORD(v11) = (unsigned int)"_standard_code" >> 16;
      zlog(*v4, v11, 166, "_bitmain_get_AD_conversion_N", 28, 311, 100, v29);
      LOWORD(v12) = -1836;
      HIWORD(v12) = (unsigned int)"e_rate" >> 16;
      v13 = *v12;
      v14 = v12[1];
      v15 = v12[2];
      v16 = v12[3];
      v12 += 4;
      s = v13;
      v23 = v14;
      v24 = v15;
      v25 = v16;
      v17 = v12[1];
      v26 = *v12;
      LOWORD(v27) = v17;
      V_LOCK();
      logfmt_raw(v29, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v18) = -2412;
      HIWORD(v18) = (unsigned int)"_standard_code" >> 16;
      zlog(*v4, v18, 166, "bitmain_get_voltage", 19, 467, 100, v29);
    }
    else
    {
      bitmain_convert_N_to_V();
    }
  }
  else
  {
    LOWORD(v0) = -2080;
    HIWORD(v0) = (unsigned int)"" >> 16;
    snprintf((char *)&s, 0x800u, v0, "bitmain_get_voltage");
    V_LOCK();
    logfmt_raw(v29, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v1) = -14512;
    HIWORD(v1) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v2) = -2412;
    HIWORD(v2) = (unsigned int)"_standard_code" >> 16;
    zlog(*v1, v2, 166, "bitmain_get_voltage", 19, 463, 100, v29);
  }
}
