int __fastcall set_voltage_and_freq_by_eeprom_chip_ft(int *a1, int *a2)
{
  int v2; // r6
  char *all_created_runtime; // r0
  _DWORD *v4; // r7
  _DWORD *v5; // r8
  int eeprom_chip_ft; // r5
  int eeprom_chip_bin; // r0
  int v8; // r3
  char **v9; // r11
  char **v10; // r5
  int v11; // r2
  char *v12; // r3
  int *v13; // lr
  char *v14; // r1
  int v15; // r3
  int v16; // t1
  int v17; // r2
  int v18; // r12
  int v19; // t1
  int v20; // r3
  int v21; // r0
  int v23; // r0
  int v26; // [sp+2Ch] [bp-1188h] BYREF
  _DWORD v27[16]; // [sp+30h] [bp-1184h] BYREF
  _BYTE v28[64]; // [sp+70h] [bp-1144h] BYREF
  char v29[256]; // [sp+B0h] [bp-1104h] BYREF
  _BYTE v30[4100]; // [sp+1B0h] [bp-1004h] BYREF

  v2 = 0;
  *a1 = 0;
  *a2 = 0xFFFF;
  all_created_runtime = (char *)get_all_created_runtime(&v26);
  if ( v26 > 0 )
  {
    v4 = v27;
    v5 = v28;
    while ( 2 )
    {
      eeprom_chip_ft = api_get_eeprom_chip_ft(v2);
      eeprom_chip_bin = api_get_eeprom_chip_bin(v2);
      snprintf(v29, 0x100u, "%s BIN%d", eeprom_chip_ft, eeprom_chip_bin);
      v8 = opt_algo;
      *v4++ = 0;
      *v5++ = 0;
      v9 = &off_171464;
      if ( v8 != 11 )
        v9 = &off_171590;
      v10 = v9 + 75;
      while ( 1 )
      {
        all_created_runtime = *v9;
        if ( *v9 )
        {
          all_created_runtime = strstr(all_created_runtime, v29);
          if ( all_created_runtime )
            break;
        }
        v9 += 3;
        if ( v9 == v10 )
        {
          V_LOCK(all_created_runtime);
          v23 = logfmt_raw((int)v30, 0x1000u);
          V_UNLOCK(v23);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/machine_runtime/machine_runtime_base.c",
            169,
            "get_voltage_and_freq_by_chip_ft",
            31,
            887,
            100,
            v30);
          return 33;
        }
      }
      v11 = v26;
      ++v2;
      v12 = v9[2];
      *(v4 - 1) = v9[1];
      *(v5 - 1) = v12;
      if ( v11 > v2 )
        continue;
      break;
    }
    if ( v11 > 0 )
    {
      v13 = (int *)v28;
      v14 = (char *)v27;
      all_created_runtime = (char *)&v27[v11];
      do
      {
        v16 = *(_DWORD *)v14;
        v14 += 4;
        v15 = v16;
        v17 = *a1;
        v19 = *v13++;
        v18 = v19;
        if ( *a1 < v15 )
          v17 = v15;
        *a1 = v17;
        v20 = *a2;
        if ( *a2 >= v18 )
          v20 = v18;
        *a2 = v20;
      }
      while ( v14 != all_created_runtime );
    }
  }
  V_LOCK(all_created_runtime);
  v21 = logfmt_raw((int)v30, 0x1000u);
  V_UNLOCK(v21);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/machine_runtime/machine_runtime_base.c",
    169,
    "set_voltage_and_freq_by_eeprom_chip_ft",
    38,
    926,
    0x28u,
    v30);
  return 0;
}
