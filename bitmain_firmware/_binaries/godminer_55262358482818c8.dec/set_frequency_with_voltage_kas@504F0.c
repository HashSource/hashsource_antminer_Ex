int __fastcall set_frequency_with_voltage_kas(int a1)
{
  int v2; // r11
  int *all_created_runtime; // r0
  int v4; // r3
  float v5; // s15
  int *v6; // r7
  float v7; // s17
  float v8; // s19
  int current_voltage; // r9
  float v10; // s21
  int v11; // r3
  int v12; // r1
  int *v13; // r6
  int i; // r4
  int v15; // t1
  float v16; // s16
  int v17; // r0
  int v18; // r10
  int v19; // r2
  int v20; // r0
  int *v21; // r6
  int v22; // r4
  int v23; // t1
  int v24; // r0
  int v25; // r10
  int v27; // r3
  int v28; // r1
  float v29; // s16
  int v30; // s20
  int v31; // r0
  int *v32; // r6
  int v33; // r4
  int v34; // t1
  int v35; // r1
  const char *v36; // r0
  int *v37; // r6
  int v38; // r4
  int v39; // t1
  const char *v40; // r6
  int v41; // r11
  _BOOL4 v42; // r3
  int v43; // r4
  int v44; // r1
  int v45; // r9
  int v46; // r6
  int *v47; // r7
  int j; // r4
  int v49; // t1
  int v50; // r1
  int v51; // r2
  float v52; // s16
  int v53; // r3
  const char *v54; // r11
  unsigned int v55; // r5
  float *v56; // r10
  float v57; // s15
  float v58; // s17
  int eeprom_sweep_freq; // r10
  int v60; // r5
  int eeprom_freq; // r0
  int working_voltage; // [sp+1Ch] [bp-1220h]
  int v63; // [sp+24h] [bp-1218h]
  int v64; // [sp+28h] [bp-1214h] BYREF
  float v65; // [sp+2Ch] [bp-1210h] BYREF
  int v66; // [sp+30h] [bp-120Ch] BYREF
  int v67; // [sp+34h] [bp-1208h] BYREF
  _BYTE dest[512]; // [sp+38h] [bp-1204h] BYREF
  char v69[4100]; // [sp+238h] [bp-1004h] BYREF

  v2 = 0;
  v64 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v64);
  v4 = *all_created_runtime;
  v5 = *(float *)(a1 + 104);
  v66 = -64;
  v6 = all_created_runtime;
  v7 = *(float *)(v4 + 976);
  v8 = *(float *)(v4 + 972);
  v67 = 255;
  if ( v7 > v5 )
    v7 = v5;
  current_voltage = get_current_voltage();
  working_voltage = get_working_voltage();
  v10 = *(float *)(a1 + 112);
  if ( *(int *)(a1 + 92) <= 19 )
  {
    V_LOCK();
    LOWORD(v27) = -16588;
    HIWORD(v27) = (unsigned int)"e up to 2 minutes..." >> 16;
    logfmt_raw(v69, 0x1000u, 0, v27);
    V_UNLOCK();
    LOWORD(v28) = -17124;
    HIWORD(v28) = (unsigned int)"uency_with_voltage_kas" >> 16;
    zlog(g_zc, v28, 182, "set_frequency_with_voltage_kas", 30, 310, 60, v69);
    v29 = *(float *)(*v6 + 972);
    v30 = (int)(float)((float)(900.0 - v29) / 6.25);
    if ( v30 > 0 )
    {
      while ( 1 )
      {
        v29 = v29 + 6.25;
        if ( v64 > 0 )
          break;
LABEL_39:
        if ( v30 == ++v2 )
          goto LABEL_40;
      }
      v31 = *v6;
      if ( !*v6 )
        goto LABEL_26;
      v32 = v6;
      v33 = 0;
      while ( 1 )
      {
        ++v33;
        v25 = (*(int (__fastcall **)(int, _DWORD))(v31 + 188))(v31, 0);
        send_fake_work_kas(*v32);
        if ( v25 )
          return v25;
        usleep(*(_DWORD *)(a1 + 100));
        if ( v64 <= v33 )
          goto LABEL_39;
        v34 = v32[1];
        ++v32;
        v31 = v34;
        if ( !v34 )
          goto LABEL_26;
      }
    }
LABEL_40:
    LOWORD(v40) = -16512;
    v41 = 180;
    check_temperature_base(a1, &v66, &v67);
    while ( v66 <= 19 )
    {
      v42 = v67 <= 19;
      if ( !v41 )
        v42 = 0;
      if ( !v42 )
        break;
      v41 -= 10;
      sleep(0xAu);
      if ( v64 > 0 )
      {
        v43 = 0;
        do
        {
          ++v43;
          check_temperature_base(a1, &v66, &v67);
          HIWORD(v40) = (unsigned int)"inutes" >> 16;
          printf(v40, v66, v67);
        }
        while ( v64 > v43 );
      }
    }
  }
  V_LOCK();
  LOWORD(v11) = -16664;
  HIWORD(v11) = (unsigned int)"ingup temperature %d C" >> 16;
  logfmt_raw(v69, 0x1000u, 0, v11);
  V_UNLOCK();
  LOWORD(v12) = -17124;
  HIWORD(v12) = (unsigned int)"uency_with_voltage_kas" >> 16;
  zlog(g_zc, v12, 182, "set_frequency_with_voltage_kas", 30, 340, 60, v69);
  if ( v64 > 0 )
  {
    v13 = v6 - 1;
    for ( i = 0; i < v64; ++i )
    {
      v15 = v13[1];
      ++v13;
      (*(void (**)(void))(v15 + 56))();
    }
  }
  v16 = *(float *)(*v6 + 972);
  v17 = (int)(float)((float)(v7 - v8) / 6.25);
  if ( v17 > 0 )
  {
    v18 = 0;
    v19 = 1717986919 * (current_voltage - working_voltage);
    v63 = v17 - (current_voltage - working_voltage) / 10;
    while ( 1 )
    {
      v16 = v16 + 6.25;
      if ( v64 > 0 )
        break;
LABEL_27:
      if ( working_voltage + 20 < current_voltage && (float)(v10 * v7) < v16 && v63 <= v18 )
      {
        current_voltage -= 10;
        v24 = (*(int (__fastcall **)(int, int, int))(a1 + 28))(a1, current_voltage, v19);
        if ( v24 )
          return v24;
        usleep((__useconds_t)&loc_30D40);
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
        usleep(*(_DWORD *)(a1 + 100));
        if ( v64 <= v22 )
          goto LABEL_27;
        v23 = v21[1];
        ++v21;
        v20 = v23;
      }
      while ( v23 );
    }
LABEL_26:
    LOWORD(v35) = -16528;
    LOWORD(v36) = 28808;
    HIWORD(v35) = (unsigned int)" may take up 5 minutes" >> 16;
    HIWORD(v36) = (unsigned int)"." >> 16;
    printf(v36, v35, v19);
    return 3;
  }
LABEL_33:
  if ( v7 != v16 && v64 > 0 )
  {
    v37 = v6 - 1;
    v38 = 0;
    do
    {
      v39 = v37[1];
      ++v37;
      ++v38;
      v24 = (*(int (**)(void))(v39 + 188))();
      if ( v24 )
        return v24;
      usleep(*(_DWORD *)(a1 + 100));
    }
    while ( v64 > v38 );
  }
  V_LOCK();
  logfmt_raw(v69, 0x1000u, 0, "set PT2_freq to %.2f, current voltage %d", v7, current_voltage);
  V_UNLOCK();
  LOWORD(v44) = -17124;
  HIWORD(v44) = (unsigned int)"uency_with_voltage_kas" >> 16;
  zlog(g_zc, v44, 182, "set_frequency_with_voltage_kas", 30, 500, 60, v69);
  if ( v64 > 0 )
  {
    LOWORD(v45) = -16432;
    LOWORD(v46) = -17124;
    v47 = v6 - 1;
    for ( j = 0; j < v64; ++j )
    {
      v49 = v47[1];
      ++v47;
      if ( api_get_eeprom_fmt_version(*(_DWORD *)(v49 + 240)) == 4
        && !api_get_eeprom_asic_freqs(*(_DWORD *)(*v47 + 240), dest, &v65) )
      {
        v51 = *v47;
        v52 = 0.0;
        v53 = *(_DWORD *)(*v47 + 336);
        if ( v53 )
        {
          LOWORD(v54) = -16440;
          v55 = 0;
          v56 = (float *)dest;
          do
          {
            v57 = *v56++;
            HIWORD(v54) = (unsigned int)", current voltage %d" >> 16;
            v52 = v52 + v57;
            printf(v54, v50, v57);
            if ( (v55 & 0xF) == 0xF || (v51 = *v47, v53 = *(_DWORD *)(*v47 + 336), v50 = v53 - 1, v53 - 1 == v55) )
            {
              putchar(10);
              v51 = *v47;
              v53 = *(_DWORD *)(*v47 + 336);
            }
            ++v55;
          }
          while ( v53 > v55 );
        }
        v58 = v52 / (float)v53;
        *(_DWORD *)(v51 + 464) = (int)v58;
        *(float *)(v51 + 976) = (float)(int)v58;
        eeprom_sweep_freq = api_get_eeprom_sweep_freq(j);
        V_LOCK();
        v60 = *(_DWORD *)(*v47 + 240);
        eeprom_freq = api_get_eeprom_freq(j);
        HIWORD(v45) = (unsigned int)"t voltage %d" >> 16;
        logfmt_raw(v69, 0x1000u, 0, v45, v60, eeprom_freq, v58, eeprom_sweep_freq);
        V_UNLOCK();
        HIWORD(v46) = (unsigned int)"uency_with_voltage_kas" >> 16;
        zlog(g_zc, v46, 182, "set_frequency_with_voltage_kas", 30, 522, 40, v69);
        (*(void (**)(void))(*v47 + 200))();
      }
    }
  }
  return 0;
}
