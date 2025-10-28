int get_power_voltage_calibration_data()
{
  int v0; // r0
  int v1; // r8
  int v2; // r10
  _DWORD *v3; // r9
  unsigned __int16 *v4; // r4
  double *v5; // r6
  unsigned __int8 *v6; // r5
  int v7; // r1
  double v8; // d7
  int v9; // r1
  int v11; // r3
  _DWORD *v12; // r3
  int v13; // r1
  _BYTE v14[30]; // [sp+10h] [bp-20h] BYREF
  unsigned __int16 v15; // [sp+2Eh] [bp-2h] BYREF
  char v16[4100]; // [sp+30h] [bp+0h] BYREF

  bitmain_power_read(64, (int)v14, 32);
  v15 = HIBYTE(v15) | (v15 << 8);
  v0 = POWER_CRC16((int)v14, 30);
  if ( v15 == v0 )
  {
    LOWORD(v1) = -14808;
    HIWORD(v1) = (unsigned int)&unk_16B438 >> 16;
    LOWORD(v2) = -1812;
    LOWORD(v3) = -14512;
    v4 = (unsigned __int16 *)v14;
    v5 = (double *)(v1 + 56);
    v6 = (unsigned __int8 *)(v1 + 39);
    *(_DWORD *)(v1 + 0x88) = 0;
    do
    {
      v7 = *(unsigned __int8 *)v4;
      v4 = (unsigned __int16 *)((char *)v4 + 3);
      if ( !v7 && !*((_BYTE *)v4 - 2) && !*((_BYTE *)v4 - 1) )
        break;
      *v5 = (double)(*((unsigned __int8 *)v4 - 1) | ((unsigned __int8)(*(_BYTE *)(v4 - 1) & 3) << 8)) / 1000.0
          + (double)(*((unsigned __int8 *)v4 - 2) >> 2);
      *++v6 = v7;
      ++*(_DWORD *)(v1 + 0x88);
      V_LOCK();
      v8 = *v5++;
      HIWORD(v2) = (unsigned int)"once_response_rate" >> 16;
      logfmt_raw(v16, 0x1000u, 0, v2, v8, *v6);
      V_UNLOCK();
      LOWORD(v9) = -2412;
      HIWORD(v9) = (unsigned int)"_standard_code" >> 16;
      HIWORD(v3) = (unsigned int)&unk_16B55C >> 16;
      zlog(*v3, v9, 166, "get_power_voltage_calibration_data", 34, 697, 60, v16);
    }
    while ( v4 != &v15 );
    return 0;
  }
  else
  {
    V_LOCK();
    LOWORD(v11) = 18324;
    HIWORD(v11) = (unsigned int)":%ld,\"type\":\"TIMESTAMP\"},\"nonce\":{\"data\":%u,\"type\":\"NONCE\"},\"extra_nonce\":{\"data\":%lld,\"type\":\"EXTRA_NONCE\"}}" >> 16;
    logfmt_raw(v16, 0x1000u, 0, v11, "get_power_voltage_calibration_data");
    V_UNLOCK();
    LOWORD(v12) = -14512;
    HIWORD(v12) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v13) = -2412;
    HIWORD(v13) = (unsigned int)"_standard_code" >> 16;
    zlog(*v12, v13, 166, "get_power_voltage_calibration_data", 34, 680, 100, v16);
    return -1;
  }
}
