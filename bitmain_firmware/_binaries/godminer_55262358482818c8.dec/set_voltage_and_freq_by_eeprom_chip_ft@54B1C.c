int __fastcall set_voltage_and_freq_by_eeprom_chip_ft(_DWORD *a1, _DWORD *a2)
{
  int v2; // r6
  _DWORD *v3; // r7
  _DWORD *v4; // r8
  int eeprom_chip_ft; // r5
  int eeprom_chip_bin; // r0
  int v7; // r3
  char **v8; // r11
  char **v9; // r5
  int v10; // r2
  char *v11; // r3
  int *v12; // lr
  int *v13; // r1
  int *v14; // r0
  int v15; // r3
  int v16; // t1
  int v17; // r2
  int v18; // r12
  int v19; // t1
  int v20; // r3
  int v21; // r3
  int v22; // r1
  int v24; // r3
  int v25; // r1
  int v28; // [sp+2Ch] [bp-1188h] BYREF
  _DWORD v29[16]; // [sp+30h] [bp-1184h] BYREF
  _BYTE v30[64]; // [sp+70h] [bp-1144h] BYREF
  char v31[256]; // [sp+B0h] [bp-1104h] BYREF
  char v32[4100]; // [sp+1B0h] [bp-1004h] BYREF

  v2 = 0;
  *a1 = 0;
  *a2 = 0xFFFF;
  get_all_created_runtime(&v28);
  if ( v28 > 0 )
  {
    v3 = v29;
    v4 = v30;
    while ( 2 )
    {
      eeprom_chip_ft = api_get_eeprom_chip_ft(v2);
      eeprom_chip_bin = api_get_eeprom_chip_bin(v2);
      snprintf(v31, 0x100u, "%s BIN%d", eeprom_chip_ft, eeprom_chip_bin);
      v7 = opt_algo;
      *v3++ = 0;
      *v4++ = 0;
      v8 = &off_1924A4;
      if ( v7 != 11 )
        v8 = &off_1925D0;
      v9 = v8 + 75;
      while ( !*v8 || !strstr(*v8, v31) )
      {
        v8 += 3;
        if ( v8 == v9 )
        {
          V_LOCK();
          LOWORD(v24) = -13872;
          HIWORD(v24) = (unsigned int)"chine_info" >> 16;
          logfmt_raw(v32, 0x1000u, 0, v24, v31);
          V_UNLOCK();
          LOWORD(v25) = -14932;
          HIWORD(v25) = (unsigned int)"%d, set voltage to %d" >> 16;
          zlog(g_zc, v25, 169, "get_voltage_and_freq_by_chip_ft", 31, 948, 100, v32);
          return 33;
        }
      }
      v10 = v28;
      ++v2;
      v11 = v8[2];
      *(v3 - 1) = v8[1];
      *(v4 - 1) = v11;
      if ( v10 > v2 )
        continue;
      break;
    }
    if ( v10 > 0 )
    {
      v12 = (int *)v30;
      v13 = v29;
      v14 = &v29[v10];
      do
      {
        v16 = *v13++;
        v15 = v16;
        v17 = *a1;
        v19 = *v12++;
        v18 = v19;
        if ( *a1 < v15 )
          v17 = v15;
        *a1 = v17;
        v20 = *a2;
        if ( *a2 >= v18 )
          v20 = v18;
        *a2 = v20;
      }
      while ( v13 != v14 );
    }
  }
  V_LOCK();
  LOWORD(v21) = -13848;
  HIWORD(v21) = (unsigned int)"chip_ft %s not in lists" >> 16;
  logfmt_raw(v32, 0x1000u, 0, v21, "set_voltage_and_freq_by_eeprom_chip_ft", *a1, *a2);
  V_UNLOCK();
  LOWORD(v22) = -14932;
  HIWORD(v22) = (unsigned int)"%d, set voltage to %d" >> 16;
  zlog(g_zc, v22, 169, "set_voltage_and_freq_by_eeprom_chip_ft", 38, 987, 0x28u, v32);
  return 0;
}
