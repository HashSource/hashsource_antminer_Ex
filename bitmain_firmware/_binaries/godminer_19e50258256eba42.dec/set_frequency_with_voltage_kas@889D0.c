int __fastcall set_frequency_with_voltage_kas(int a1)
{
  float v1; // r3
  int v3; // r3
  int v4; // r4
  int eeprom_PT2_freq; // r0
  _BYTE v8[48]; // [sp+24h] [bp-1270h] BYREF
  int v9; // [sp+1024h] [bp-270h] BYREF
  int v10; // [sp+1028h] [bp-26Ch] BYREF
  float v11; // [sp+102Ch] [bp-268h] BYREF
  float v12[128]; // [sp+1030h] [bp-264h] BYREF
  int v13; // [sp+1230h] [bp-64h] BYREF
  int eeprom_sweep_freq; // [sp+1234h] [bp-60h]
  int v15; // [sp+1238h] [bp-5Ch]
  int v16; // [sp+123Ch] [bp-58h]
  int v17; // [sp+1240h] [bp-54h]
  float v18; // [sp+1244h] [bp-50h]
  int v19; // [sp+1248h] [bp-4Ch]
  int working_voltage; // [sp+124Ch] [bp-48h]
  int v21; // [sp+1250h] [bp-44h]
  unsigned int v22; // [sp+1254h] [bp-40h]
  float v23; // [sp+1258h] [bp-3Ch]
  float v24; // [sp+125Ch] [bp-38h]
  _DWORD *all_created_runtime; // [sp+1260h] [bp-34h]
  unsigned int m; // [sp+1264h] [bp-30h]
  int k; // [sp+1268h] [bp-2Ch]
  int i; // [sp+126Ch] [bp-28h]
  int v29; // [sp+1270h] [bp-24h]
  int j; // [sp+1274h] [bp-20h]
  int v31; // [sp+1278h] [bp-1Ch]
  int current_voltage; // [sp+127Ch] [bp-18h]
  float v33; // [sp+1280h] [bp-14h]
  float v34; // [sp+1284h] [bp-10h]

  v29 = 0;
  v13 = 0;
  v31 = 180;
  all_created_runtime = get_all_created_runtime(&v13);
  current_voltage = 0;
  v24 = 6.25;
  v33 = *(float *)(*all_created_runtime + 1016);
  if ( *(float *)(*all_created_runtime + 1020) <= *(float *)(a1 + 104) )
    v1 = *(float *)(*all_created_runtime + 1020);
  else
    v1 = *(float *)(a1 + 104);
  v23 = v1;
  v10 = -64;
  v9 = 255;
  v22 = 10;
  v21 = 0;
  current_voltage = get_current_voltage();
  working_voltage = get_working_voltage();
  v19 = v21 + working_voltage;
  v18 = v23 * *(float *)(a1 + 112);
  v17 = sub_344EB8(current_voltage - (v21 + working_voltage), v22);
  v16 = (int)(float)((float)(v23 - v33) / v24);
  if ( *(int *)(a1 + 92) <= 19 )
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "Warming up chains, please wait, this may take up 5 minutes");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
      179,
      "set_frequency_with_voltage_kas",
      30,
      310,
      60,
      v8);
    v33 = *(float *)(*all_created_runtime + 1016);
    v15 = (int)(float)((float)(900.0 - v33) / v24);
    for ( i = 0; i < v15; ++i )
    {
      v33 = v33 + v24;
      for ( j = 0; j < v13; ++j )
      {
        if ( !all_created_runtime[j] )
        {
LABEL_8:
          printf("invalid pointer(%s)!\n", "be_runtimes[b]");
          return 3;
        }
        v29 = (*(int (__fastcall **)(_DWORD, _DWORD))(all_created_runtime[j] + 204))(all_created_runtime[j], 0);
        send_fake_work_kas(all_created_runtime[j]);
        if ( v29 )
          return v29;
        usleep(*(_DWORD *)(a1 + 100));
      }
    }
    check_temperature_base(a1, &v10, &v9);
    v31 = 180;
    while ( v10 <= 19 && v9 <= 19 && v31 > 0 )
    {
      sleep(0xAu);
      v31 -= 10;
      for ( j = 0; j < v13; ++j )
      {
        check_temperature_base(a1, &v10, &v9);
        printf("min temp %d max temp %d\n", v10, v9);
      }
    }
  }
  V_LOCK();
  logfmt_raw(v8, 0x1000u, 0, "Initializing chip cluster, please wait, this may take up to 2 minutes...");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
    179,
    "set_frequency_with_voltage_kas",
    30,
    340,
    60,
    v8);
  for ( j = 0; j < v13; ++j )
    (*(void (__fastcall **)(_DWORD))(all_created_runtime[j] + 60))(all_created_runtime[j]);
  v33 = *(float *)(*all_created_runtime + 1016);
  for ( k = 0; k < v16; ++k )
  {
    v33 = v33 + v24;
    for ( j = 0; j < v13; ++j )
    {
      if ( !all_created_runtime[j] )
        goto LABEL_8;
      v29 = (*(int (__fastcall **)(_DWORD, _DWORD))(all_created_runtime[j] + 204))(all_created_runtime[j], 0);
      if ( v29 )
        return v29;
      usleep(*(_DWORD *)(a1 + 100));
    }
    if ( current_voltage > (int)(2 * v22 + v19) && v33 > v18 && k >= v16 - v17 )
    {
      current_voltage -= v22;
      v29 = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, current_voltage);
      if ( v29 )
        return v29;
      usleep(0x30D40u);
    }
  }
  if ( v33 != v23 )
  {
    for ( j = 0; j < v13; ++j )
    {
      v29 = (*(int (__fastcall **)(_DWORD, _DWORD))(all_created_runtime[j] + 204))(all_created_runtime[j], 0);
      if ( v29 )
        return v29;
      usleep(*(_DWORD *)(a1 + 100));
    }
  }
  V_LOCK();
  logfmt_raw(v8, 0x1000u, 0, "set PT2_freq to %.2f, current voltage %d", v23, current_voltage);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
    179,
    "set_frequency_with_voltage_kas",
    30,
    500,
    60,
    v8);
  for ( j = 0; j < v13; ++j )
  {
    if ( api_get_eeprom_fmt_version(*(_DWORD *)(all_created_runtime[j] + 264)) == 4
      && !api_get_eeprom_asic_freqs(*(_DWORD *)(all_created_runtime[j] + 264), v12, &v11) )
    {
      v34 = 0.0;
      for ( m = 0; m < *(_DWORD *)(all_created_runtime[j] + 372); ++m )
      {
        v34 = v34 + v12[m];
        printf("%-6.1f ", v12[m]);
        if ( (m & 0xF) == 0xF || m == *(_DWORD *)(all_created_runtime[j] + 372) - 1 )
          putchar(10);
      }
      v34 = v34 / (float)*(int *)(all_created_runtime[j] + 372);
      v3 = all_created_runtime[j];
      *(_DWORD *)(v3 + 504) = (int)v34;
      *(float *)(all_created_runtime[j] + 1020) = (float)*(int *)(v3 + 504);
      eeprom_sweep_freq = api_get_eeprom_sweep_freq(j);
      V_LOCK();
      v4 = *(_DWORD *)(all_created_runtime[j] + 264);
      eeprom_PT2_freq = api_get_eeprom_PT2_freq(j);
      logfmt_raw(
        v8,
        0x1000u,
        0,
        "chain:%d, PT2_freq: %d, sweep_average_freq: %.2f, sweep_level_freq: %d\n",
        v4,
        eeprom_PT2_freq,
        v34,
        eeprom_sweep_freq);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
        179,
        "set_frequency_with_voltage_kas",
        30,
        522,
        40,
        v8);
      (*(void (__fastcall **)(_DWORD, float *))(all_created_runtime[j] + 216))(all_created_runtime[j], v12);
    }
  }
  return v29;
}
