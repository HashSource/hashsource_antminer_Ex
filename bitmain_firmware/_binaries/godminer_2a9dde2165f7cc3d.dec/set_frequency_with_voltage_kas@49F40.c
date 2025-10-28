int __fastcall set_frequency_with_voltage_kas(int a1)
{
  int v2; // r11
  _DWORD *all_created_runtime; // r0
  int v4; // r3
  float v5; // s15
  _DWORD *v6; // r7
  float v7; // s17
  float v8; // s19
  int current_voltage; // r9
  int working_voltage; // r0
  float v11; // s21
  int v12; // r0
  _DWORD *v13; // r6
  int j; // r4
  int v15; // t1
  float v16; // s16
  int v17; // r0
  int v18; // r10
  int v19; // r2
  int v20; // r0
  _DWORD *v21; // r6
  int v22; // r4
  int v23; // t1
  int v24; // r0
  int v25; // r10
  int v27; // r0
  float v28; // s16
  int v29; // s20
  int v30; // r0
  _DWORD *v31; // r6
  int v32; // r4
  int v33; // t1
  _DWORD *v34; // r6
  int v35; // r4
  int v36; // t1
  int v37; // r11
  _BOOL4 v38; // r3
  int i; // r4
  int v40; // r0
  _DWORD *v41; // r7
  int k; // r4
  int v43; // t1
  int v44; // r2
  float v45; // s16
  int v46; // r3
  unsigned int v47; // r5
  float *v48; // r10
  float v49; // s15
  float v50; // s17
  int eeprom_sweep_freq; // r10
  int v52; // r0
  int v53; // [sp+1Ch] [bp-1220h]
  int v54; // [sp+24h] [bp-1218h]
  int v55; // [sp+28h] [bp-1214h] BYREF
  int v56; // [sp+30h] [bp-120Ch] BYREF
  int v57; // [sp+34h] [bp-1208h] BYREF
  _BYTE dest[512]; // [sp+38h] [bp-1204h] BYREF
  _BYTE v59[4100]; // [sp+238h] [bp-1004h] BYREF

  v2 = 0;
  v55 = 0;
  all_created_runtime = (_DWORD *)get_all_created_runtime(&v55);
  v4 = *all_created_runtime;
  v5 = *(float *)(a1 + 96);
  v56 = -64;
  v6 = all_created_runtime;
  v7 = *(float *)(v4 + 924);
  v8 = *(float *)(v4 + 920);
  v57 = 255;
  if ( v7 > v5 )
    v7 = v5;
  current_voltage = get_current_voltage();
  working_voltage = get_working_voltage();
  v53 = working_voltage;
  v11 = *(float *)(a1 + 104);
  if ( *(int *)(a1 + 84) <= 19 )
  {
    V_LOCK(working_voltage);
    v27 = logfmt_raw((int)v59, 0x1000u);
    V_UNLOCK(v27);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
      182,
      "set_frequency_with_voltage_kas",
      30,
      318,
      60,
      v59);
    v28 = *(float *)(*v6 + 920);
    v29 = (int)(float)((float)(900.0 - v28) / 6.25);
    if ( v29 > 0 )
    {
      while ( 1 )
      {
        v28 = v28 + 6.25;
        if ( v55 > 0 )
          break;
LABEL_39:
        if ( v29 == ++v2 )
          goto LABEL_40;
      }
      v30 = *v6;
      if ( !*v6 )
        goto LABEL_26;
      v31 = v6;
      v32 = 0;
      while ( 1 )
      {
        ++v32;
        v25 = (*(int (__fastcall **)(int, _DWORD))(v30 + 188))(v30, 0);
        send_fake_work_kas(*v31);
        if ( v25 )
          return v25;
        usleep(*(_DWORD *)(a1 + 92));
        if ( v55 <= v32 )
          goto LABEL_39;
        v33 = v31[1];
        ++v31;
        v30 = v33;
        if ( !v33 )
          goto LABEL_26;
      }
    }
LABEL_40:
    v37 = 180;
    working_voltage = check_temperature_base(a1, &v56, &v57);
    while ( v56 <= 19 )
    {
      v38 = v57 <= 19;
      if ( !v37 )
        v38 = 0;
      if ( !v38 )
        break;
      v37 -= 10;
      working_voltage = sleep(0xAu);
      if ( v55 > 0 )
      {
        for ( i = 0; i < v55; ++i )
        {
          check_temperature_base(a1, &v56, &v57);
          working_voltage = printf("min temp %d max temp %d\n", v56, v57);
        }
      }
    }
  }
  V_LOCK(working_voltage);
  v12 = logfmt_raw((int)v59, 0x1000u);
  V_UNLOCK(v12);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
    182,
    "set_frequency_with_voltage_kas",
    30,
    348,
    60,
    v59);
  if ( v55 > 0 )
  {
    v13 = v6 - 1;
    for ( j = 0; j < v55; ++j )
    {
      v15 = v13[1];
      ++v13;
      (*(void (**)(void))(v15 + 56))();
    }
  }
  v16 = *(float *)(*v6 + 920);
  v17 = (int)(float)((float)(v7 - v8) / 6.25);
  if ( v17 > 0 )
  {
    v18 = 0;
    v19 = 1717986919 * (current_voltage - v53);
    v54 = v17 - (current_voltage - v53) / 10;
    while ( 1 )
    {
      v16 = v16 + 6.25;
      if ( v55 > 0 )
        break;
LABEL_27:
      if ( v53 + 20 < current_voltage && (float)(v11 * v7) < v16 && v54 <= v18 )
      {
        current_voltage -= 10;
        v24 = (*(int (__fastcall **)(int, int, int))(a1 + 28))(a1, current_voltage, v19);
        if ( v24 )
          return v24;
        v17 = usleep((__useconds_t)sub_30D40);
      }
      if ( (int)(float)((float)(v7 - v8) / 6.25) == ++v18 )
        goto LABEL_33;
    }
    v20 = *v6;
    if ( *v6 )
    {
      v21 = v6;
      v22 = 0;
      do
      {
        ++v22;
        v24 = (*(int (__fastcall **)(int, _DWORD, int))(v20 + 188))(v20, 0, v19);
        if ( v24 )
          return v24;
        v17 = usleep(*(_DWORD *)(a1 + 92));
        if ( v55 <= v22 )
          goto LABEL_27;
        v23 = v21[1];
        ++v21;
        v20 = v23;
      }
      while ( v23 );
    }
LABEL_26:
    printf(aInvalidPointer, "be_runtimes[b]", v19);
    return 3;
  }
LABEL_33:
  if ( v7 != v16 && v55 > 0 )
  {
    v34 = v6 - 1;
    v35 = 0;
    do
    {
      v36 = v34[1];
      ++v34;
      ++v35;
      v24 = (*(int (**)(void))(v36 + 188))();
      if ( v24 )
        return v24;
      v17 = usleep(*(_DWORD *)(a1 + 92));
    }
    while ( v55 > v35 );
  }
  V_LOCK(v17);
  v40 = logfmt_raw((int)v59, 0x1000u);
  V_UNLOCK(v40);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
    182,
    "set_frequency_with_voltage_kas",
    30,
    508,
    60,
    v59);
  if ( v55 > 0 )
  {
    v41 = v6 - 1;
    for ( k = 0; k < v55; ++k )
    {
      v43 = v41[1];
      ++v41;
      if ( api_get_eeprom_fmt_version(*(_DWORD *)(v43 + 220)) == 4
        && !api_get_eeprom_asic_freqs(*(_DWORD *)(*v41 + 220), dest) )
      {
        v44 = *v41;
        v45 = 0.0;
        v46 = *(_DWORD *)(*v41 + 304);
        if ( v46 )
        {
          v47 = 0;
          v48 = (float *)dest;
          do
          {
            v49 = *v48++;
            v45 = v45 + v49;
            printf("%-6.1f ", v49);
            if ( (v47 & 0xF) == 0xF || (v44 = *v41, v46 = *(_DWORD *)(*v41 + 304), v46 - 1 == v47) )
            {
              putchar(10);
              v44 = *v41;
              v46 = *(_DWORD *)(*v41 + 304);
            }
            ++v47;
          }
          while ( v46 > v47 );
        }
        v50 = v45 / (float)v46;
        *(_DWORD *)(v44 + 432) = (int)v50;
        *(float *)(v44 + 924) = (float)(int)v50;
        eeprom_sweep_freq = api_get_eeprom_sweep_freq(k);
        V_LOCK(eeprom_sweep_freq);
        api_get_eeprom_PT2_freq(k);
        v52 = logfmt_raw((int)v59, 0x1000u);
        V_UNLOCK(v52);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
          182,
          "set_frequency_with_voltage_kas",
          30,
          530,
          40,
          v59);
        (*(void (**)(void))(*v41 + 192))();
      }
    }
  }
  return 0;
}
