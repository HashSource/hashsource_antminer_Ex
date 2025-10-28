int __fastcall set_frequency_with_voltage_base(int a1)
{
  float v1; // r3
  int v3; // r3
  int v4; // r4
  int eeprom_PT2_freq; // r0
  _BYTE v8[60]; // [sp+20h] [bp-227Ch] BYREF
  char v9[32]; // [sp+1020h] [bp-127Ch] BYREF
  char v10[4096]; // [sp+1040h] [bp-125Ch] BYREF
  float v11; // [sp+2040h] [bp-25Ch] BYREF
  float v12[128]; // [sp+2044h] [bp-258h] BYREF
  int v13; // [sp+2244h] [bp-58h] BYREF
  int eeprom_sweep_freq; // [sp+2248h] [bp-54h]
  int v15; // [sp+224Ch] [bp-50h]
  int v16; // [sp+2250h] [bp-4Ch]
  float v17; // [sp+2254h] [bp-48h]
  int v18; // [sp+2258h] [bp-44h]
  int working_voltage; // [sp+225Ch] [bp-40h]
  int v20; // [sp+2260h] [bp-3Ch]
  unsigned int v21; // [sp+2264h] [bp-38h]
  float v22; // [sp+2268h] [bp-34h]
  float v23; // [sp+226Ch] [bp-30h]
  _DWORD *all_created_runtime; // [sp+2270h] [bp-2Ch]
  int v25; // [sp+2274h] [bp-28h]
  int j; // [sp+2278h] [bp-24h]
  float v27; // [sp+227Ch] [bp-20h]
  float v28; // [sp+2280h] [bp-1Ch]
  int current_voltage; // [sp+2284h] [bp-18h]
  int i; // [sp+2288h] [bp-14h]
  unsigned int k; // [sp+228Ch] [bp-10h]

  v25 = 0;
  v13 = 0;
  all_created_runtime = get_all_created_runtime(&v13);
  current_voltage = 0;
  v23 = 6.25;
  v28 = *(float *)(*all_created_runtime + 1016);
  if ( *(float *)(*all_created_runtime + 1020) <= *(float *)(a1 + 104) )
    v1 = *(float *)(*all_created_runtime + 1020);
  else
    v1 = *(float *)(a1 + 104);
  v22 = v1;
  v21 = 10;
  v20 = 0;
  working_voltage = get_working_voltage();
  if ( (unsigned __int8)is_check_asic_voltage_enable() != 1 )
  {
    v25 = set_check_asic_voltage(1);
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "set high voltage befor rise freq.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "set_frequency_with_voltage_base",
      31,
      562,
      40,
      v8);
  }
  v18 = v20 + working_voltage;
  v17 = v22 * *(float *)(a1 + 112);
  V_LOCK();
  logfmt_raw(v8, 0x1000u, 0, "Initializing chip cluster, please wait, this may take up to 2 minutes...");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/machine_runtime_base.c",
    166,
    "set_frequency_with_voltage_base",
    31,
    572,
    60,
    v8);
  current_voltage = get_current_voltage();
  v16 = sub_344EB8(current_voltage - v18, v21);
  v15 = (int)(float)((float)(v22 - v28) / v23);
  for ( i = 0; i < v15; ++i )
  {
    v28 = v28 + v23;
    for ( j = 0; j < v13; ++j )
    {
      if ( !all_created_runtime[j] )
      {
        printf("invalid pointer(%s)!\n", "be_runtimes[b]");
        return 3;
      }
      v25 = (*(int (__fastcall **)(_DWORD, _DWORD))(all_created_runtime[j] + 204))(all_created_runtime[j], 0);
      if ( v25 )
        return v25;
      usleep(*(_DWORD *)(a1 + 100));
    }
    if ( current_voltage > (int)(2 * v21 + v18) && v28 > v17 && i >= v15 - v16 )
    {
      current_voltage -= v21;
      v25 = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, current_voltage);
      if ( v25 )
        return v25;
      usleep(0x30D40u);
    }
  }
  if ( v28 != v22 )
  {
    for ( j = 0; j < v13; ++j )
    {
      v25 = (*(int (__fastcall **)(_DWORD, _DWORD))(all_created_runtime[j] + 204))(all_created_runtime[j], 0);
      if ( v25 )
        return v25;
      usleep(*(_DWORD *)(a1 + 100));
    }
  }
  V_LOCK();
  logfmt_raw(v8, 0x1000u, 0, "set PT2_freq to %.2f, current voltage %d", v22, current_voltage);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/machine_runtime_base.c",
    166,
    "set_frequency_with_voltage_base",
    31,
    607,
    60,
    v8);
  if ( byte_5AD339 != 1 )
  {
    for ( j = 0; j < v13; ++j )
    {
      if ( api_get_eeprom_fmt_version(*(_DWORD *)(all_created_runtime[j] + 264)) == 4
        && !api_get_eeprom_asic_freqs(*(_DWORD *)(all_created_runtime[j] + 264), v12, &v11) )
      {
        v27 = 0.0;
        memset(v10, 0, sizeof(v10));
        for ( k = 0; k < *(_DWORD *)(all_created_runtime[j] + 372); ++k )
        {
          v27 = v27 + v12[k];
          sprintf(v9, "ASIC-%03d [%.2f] ", k, v12[k]);
          strcat(v10, v9);
          if ( (k & 7) == 7 )
            *(_WORD *)&v10[strlen(v10)] = 10;
        }
        v27 = v27 / (float)*(int *)(all_created_runtime[j] + 372);
        (*(void (__fastcall **)(_DWORD, float *))(all_created_runtime[j] + 216))(all_created_runtime[j], v12);
        v3 = all_created_runtime[j];
        *(_DWORD *)(v3 + 504) = (int)v27;
        *(float *)(all_created_runtime[j] + 1020) = (float)*(int *)(v3 + 504);
        eeprom_sweep_freq = api_get_eeprom_sweep_freq(j);
        V_LOCK();
        v4 = *(_DWORD *)(all_created_runtime[j] + 264);
        eeprom_PT2_freq = api_get_eeprom_PT2_freq(j);
        logfmt_raw(
          v8,
          0x1000u,
          0,
          "chain:%d, PT2_freq: %d, sweep_average_freq: %.2f, sweep_level_freq: %d  sweep_matrix:\n%s",
          v4,
          eeprom_PT2_freq,
          v27,
          eeprom_sweep_freq,
          v10);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/machine_runtime/machine_runtime_base.c",
          166,
          "set_frequency_with_voltage_base",
          31,
          640,
          40,
          v8);
      }
    }
  }
  return v25;
}
