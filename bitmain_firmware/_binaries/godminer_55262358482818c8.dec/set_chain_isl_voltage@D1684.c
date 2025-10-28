int __fastcall set_chain_isl_voltage(unsigned __int8 a1, int a2)
{
  _DWORD *v2; // r10
  int v3; // r9
  int v4; // r1
  int v5; // r2
  int v7; // r6
  int v8; // r3
  int v9; // r5
  int v10; // r2
  int v12; // [sp+14h] [bp-1030h]
  int v13; // [sp+18h] [bp-102Ch]
  int v14; // [sp+18h] [bp-102Ch]
  int v15; // [sp+28h] [bp-101Ch]
  unsigned int v17; // [sp+30h] [bp-1014h]
  int v18; // [sp+34h] [bp-1010h]
  char v19; // [sp+3Bh] [bp-1009h] BYREF
  __int16 v20; // [sp+3Ch] [bp-1008h] BYREF
  unsigned __int16 v21; // [sp+3Eh] [bp-1006h] BYREF
  char v22[4100]; // [sp+40h] [bp-1004h] BYREF

  LOWORD(v2) = (unsigned __int16)&g_zc;
  v15 = 0;
  v17 = a2 - 810;
  if ( (unsigned int)(a2 - 810) > 0xB4 )
    v3 = 900;
  else
    v3 = a2;
  LOWORD(v4) = 30864;
  LOWORD(v5) = 30520;
  HIWORD(v4) = (unsigned int)"omain addr = %x vol=%u" >> 16;
  HIWORD(v5) = (unsigned int)"set_chain_isl_voltage" >> 16;
  HIWORD(v2) = (unsigned int)&g_zc >> 16;
  v18 = v4;
  v12 = v5;
  v7 = 80;
  if ( v17 > 0xB4 )
    goto LABEL_12;
  while ( 1 )
  {
    LOWORD(v8) = 30916;
    HIWORD(v8) = (unsigned int)"t default voltage %d" >> 16;
    LOBYTE(v9) = 4;
    v13 = v8;
    v21 = 0;
    while ( 1 )
    {
      v19 = -1;
      sub_D1060(a1, v7, 0, &v19, 1);
      usleep((__useconds_t)&stru_186A0);
      v20 = v3;
      sub_D1060(a1, v7, 33, (char *)&v20, 2);
      usleep((__useconds_t)&loc_30D40);
      sub_D1560(a1, v7, &v21);
      v10 = v21;
      if ( v21 >= v3 - 9 && v21 <= v3 + 9 )
        break;
      V_LOCK();
      logfmt_raw(v22, 0x1000u, 0, v13, v3, v21);
      V_UNLOCK();
      zlog(*v2, v12, 168, "ISL_set_voltage_dynamic", 23, 181, 60, v22);
      usleep((__useconds_t)&loc_30D40);
      v9 = (unsigned __int8)(v9 - 1);
      if ( !v9 )
      {
        v10 = v21;
        break;
      }
    }
    v14 = v10;
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, "Set one chain ISL: domain addr = %x set vol %d, get vol %d", v7, a2, v14);
    V_UNLOCK();
    ++v15;
    zlog(*v2, v12, 168, "set_chain_isl_voltage", 21, 215, 60, v22);
    if ( v15 == 3 )
      return 1;
    v7 = (unsigned __int8)aPqt[v15];
    if ( v17 > 0xB4 )
    {
LABEL_12:
      V_LOCK();
      logfmt_raw(v22, 0x1000u, 0, v18, 810, 990, 900);
      V_UNLOCK();
      zlog(*v2, v12, 168, "ISL_set_voltage_dynamic", 23, 154, 60, v22);
    }
  }
}
