int __fastcall set_chain_isl_voltage(unsigned __int8 a1, int a2)
{
  _DWORD *v2; // r10
  int v3; // r9
  int v4; // r2
  int v6; // r6
  int v7; // r5
  int v8; // r2
  int v10; // [sp+14h] [bp-1030h]
  int v11; // [sp+18h] [bp-102Ch]
  int v12; // [sp+28h] [bp-101Ch]
  unsigned int v14; // [sp+30h] [bp-1014h]
  char v15; // [sp+3Bh] [bp-1009h] BYREF
  __int16 v16; // [sp+3Ch] [bp-1008h] BYREF
  unsigned __int16 v17; // [sp+3Eh] [bp-1006h] BYREF
  char v18[4100]; // [sp+40h] [bp-1004h] BYREF

  LOWORD(v2) = -14512;
  v12 = 0;
  v14 = a2 - 810;
  if ( (unsigned int)(a2 - 810) > 0xB4 )
    v3 = 900;
  else
    v3 = a2;
  LOWORD(v4) = -224;
  HIWORD(v4) = (unsigned int)"k fail.fixture_crc = 0x%x, len = 0x%x, crc = 0x%x\n" >> 16;
  HIWORD(v2) = (unsigned int)&unk_16B55C >> 16;
  v10 = v4;
  v6 = 80;
  if ( v14 > 0xB4 )
    goto LABEL_12;
  while ( 1 )
  {
    LOBYTE(v7) = 4;
    v17 = 0;
    while ( 1 )
    {
      v15 = -1;
      sub_BACA0(a1, v6, 0, &v15, 1);
      usleep((__useconds_t)&stru_18694.st_info);
      v16 = v3;
      sub_BACA0(a1, v6, 33, (char *)&v16, 2);
      usleep((__useconds_t)&loc_30D40);
      sub_BB1A0(a1, v6, &v17);
      v8 = v17;
      if ( v17 >= v3 - 9 && v17 <= v3 + 9 )
        break;
      V_LOCK();
      logfmt_raw(v18, 0x1000u, 0, 1310896, v3, v17);
      V_UNLOCK();
      zlog(*v2, v10, 158, "ISL_set_voltage_dynamic", 23, 181, 60, v18);
      usleep((__useconds_t)&loc_30D40);
      v7 = (unsigned __int8)(v7 - 1);
      if ( !v7 )
      {
        v8 = v17;
        break;
      }
    }
    v11 = v8;
    V_LOCK();
    logfmt_raw(v18, 0x1000u, 0, "Set one chain ISL: domain addr = %x set vol %d, get vol %d", v6, a2, v11);
    V_UNLOCK();
    ++v12;
    zlog(*v2, v10, 158, "set_chain_isl_voltage", 21, 215, 60, v18);
    if ( v12 == 3 )
      return 1;
    v6 = (unsigned __int8)aPqt[v12];
    if ( v14 > 0xB4 )
    {
LABEL_12:
      V_LOCK();
      logfmt_raw(v18, 0x1000u, 0, 1310844, 810, 990, 900);
      V_UNLOCK();
      zlog(*v2, v10, 158, "ISL_set_voltage_dynamic", 23, 154, 60, v18);
    }
  }
}
