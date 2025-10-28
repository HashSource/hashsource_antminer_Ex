int __fastcall set_frequency_with_voltage_ks5(int a1)
{
  int v2; // r11
  _DWORD *all_created_runtime; // r0
  int v4; // r3
  float v5; // s15
  _DWORD *v6; // r7
  float v7; // s17
  float v8; // s19
  int current_voltage; // r9
  int working_voltage; // r10
  float v11; // s21
  int v12; // r3
  int v13; // r1
  _DWORD *v14; // r6
  int i; // r4
  int v16; // t1
  float v17; // s16
  int v18; // r0
  int v19; // r2
  int v20; // r0
  _DWORD *v21; // r6
  int v22; // r4
  int v23; // t1
  int result; // r0
  int v25; // r3
  int v26; // r1
  float v27; // s16
  int v28; // s20
  int v29; // r0
  _DWORD *v30; // r6
  int v31; // r4
  int v32; // t1
  int v33; // r1
  const char *v34; // r0
  _DWORD *v36; // r6
  int v37; // r4
  int v38; // t1
  const char *v39; // r6
  int v40; // r11
  _BOOL4 v41; // r3
  int v42; // r4
  int v43; // r1
  int v44; // r9
  int v45; // r6
  _DWORD *v46; // r7
  int j; // r4
  int v48; // t1
  int v49; // r1
  int v50; // r2
  float v51; // s16
  int v52; // r3
  const char *v53; // r11
  unsigned int v54; // r5
  float *v55; // r10
  float v56; // s15
  float v57; // s17
  int eeprom_sweep_freq; // r10
  int v59; // r5
  int eeprom_freq; // r0
  int v61; // [sp+20h] [bp-121Ch]
  int v62; // [sp+24h] [bp-1218h]
  int v63; // [sp+28h] [bp-1214h] BYREF
  float v64; // [sp+2Ch] [bp-1210h] BYREF
  int v65; // [sp+30h] [bp-120Ch] BYREF
  int v66; // [sp+34h] [bp-1208h] BYREF
  _BYTE dest[512]; // [sp+38h] [bp-1204h] BYREF
  char v68[4100]; // [sp+238h] [bp-1004h] BYREF

  v2 = 0;
  v63 = 0;
  all_created_runtime = get_all_created_runtime(&v63);
  v4 = *all_created_runtime;
  v5 = *(float *)(a1 + 104);
  v65 = -64;
  v6 = all_created_runtime;
  v7 = *(float *)(v4 + 976);
  v8 = *(float *)(v4 + 972);
  v66 = 255;
  if ( v7 > v5 )
    v7 = v5;
  current_voltage = get_current_voltage();
  working_voltage = get_working_voltage();
  v11 = *(float *)(a1 + 112);
  if ( *(int *)(a1 + 92) > 19 )
  {
LABEL_4:
    V_LOCK();
    LOWORD(v12) = -16664;
    HIWORD(v12) = (unsigned int)"ingup temperature %d C" >> 16;
    logfmt_raw(v68, 0x1000u, 0, v12);
    V_UNLOCK();
    LOWORD(v13) = -16096;
    HIWORD(v13) = (unsigned int)"uency_with_voltage_ks5" >> 16;
    zlog(g_zc, v13, 182, "set_frequency_with_voltage_ks5", 30, 315, 60, v68);
    if ( v63 > 0 )
    {
      v14 = v6 - 1;
      for ( i = 0; i < v63; ++i )
      {
        v16 = v14[1];
        ++v14;
        (*(void (**)(void))(v16 + 56))();
      }
    }
    v17 = *(float *)(*v6 + 972);
    v18 = (int)(float)((float)(v7 - v8) / 6.25);
    if ( v18 <= 0 )
    {
LABEL_33:
      if ( v7 == v17 || v63 <= 0 )
      {
LABEL_49:
        V_LOCK();
        logfmt_raw(v68, 0x1000u, 0, "set PT2_freq to %.2f, current voltage %d", v7, current_voltage);
        V_UNLOCK();
        LOWORD(v43) = -16096;
        HIWORD(v43) = (unsigned int)"uency_with_voltage_ks5" >> 16;
        zlog(g_zc, v43, 182, "set_frequency_with_voltage_ks5", 30, 478, 60, v68);
        if ( v63 > 0 )
        {
          LOWORD(v44) = -16432;
          LOWORD(v45) = -16096;
          v46 = v6 - 1;
          for ( j = 0; j < v63; ++j )
          {
            v48 = v46[1];
            ++v46;
            if ( api_get_eeprom_fmt_version(*(_DWORD *)(v48 + 240)) == 4
              && !api_get_eeprom_asic_freqs(*(_DWORD *)(*v46 + 240), dest, &v64) )
            {
              v50 = *v46;
              v51 = 0.0;
              v52 = *(_DWORD *)(*v46 + 336);
              if ( v52 )
              {
                LOWORD(v53) = -16440;
                v54 = 0;
                v55 = (float *)dest;
                do
                {
                  v56 = *v55++;
                  HIWORD(v53) = (unsigned int)", current voltage %d" >> 16;
                  v51 = v51 + v56;
                  printf(v53, v49, v56);
                  if ( (v54 & 0xF) == 0xF || (v50 = *v46, v52 = *(_DWORD *)(*v46 + 336), v49 = v52 - 1, v52 - 1 == v54) )
                  {
                    putchar(10);
                    v50 = *v46;
                    v52 = *(_DWORD *)(*v46 + 336);
                  }
                  ++v54;
                }
                while ( v52 > v54 );
              }
              v57 = v51 / (float)v52;
              *(_DWORD *)(v50 + 464) = (int)v57;
              *(float *)(v50 + 976) = (float)(int)v57;
              eeprom_sweep_freq = api_get_eeprom_sweep_freq(j);
              V_LOCK();
              v59 = *(_DWORD *)(*v46 + 240);
              eeprom_freq = api_get_eeprom_freq(j);
              HIWORD(v44) = (unsigned int)"t voltage %d" >> 16;
              logfmt_raw(v68, 0x1000u, 0, v44, v59, eeprom_freq, v57, eeprom_sweep_freq);
              V_UNLOCK();
              HIWORD(v45) = (unsigned int)"uency_with_voltage_ks5" >> 16;
              zlog(g_zc, v45, 182, "set_frequency_with_voltage_ks5", 30, 500, 40, v68);
              (*(void (**)(void))(*v46 + 200))();
            }
          }
        }
        return 0;
      }
      else
      {
        v36 = v6 - 1;
        v37 = 0;
        while ( 1 )
        {
          v38 = v36[1];
          ++v36;
          ++v37;
          result = (*(int (**)(void))(v38 + 188))();
          if ( result )
            break;
          usleep(*(_DWORD *)(a1 + 100));
          if ( v63 <= v37 )
            goto LABEL_49;
        }
      }
      return result;
    }
    v19 = 1717986919 * (current_voltage - working_voltage);
    v61 = 0;
    v62 = v18 - (current_voltage - working_voltage) / 10;
    while ( 1 )
    {
      v17 = v17 + 6.25;
      if ( v63 > 0 )
        break;
LABEL_26:
      if ( working_voltage + 20 < current_voltage && (float)(v11 * v7) < v17 && v62 <= v61 )
      {
        current_voltage -= 10;
        result = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, current_voltage);
        if ( result )
          return result;
        usleep((__useconds_t)&loc_30D40);
      }
      v19 = (int)(float)((float)(v7 - v8) / 6.25);
      if ( v19 == ++v61 )
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
        result = (*(int (__fastcall **)(int, _DWORD, int))(v20 + 188))(v20, 0, v19);
        if ( result )
          return result;
        usleep(*(_DWORD *)(a1 + 100));
        if ( v63 <= v22 )
          goto LABEL_26;
        v23 = v21[1];
        ++v21;
        v20 = v23;
      }
      while ( v23 );
    }
LABEL_25:
    LOWORD(v33) = -16528;
    LOWORD(v34) = 28808;
    HIWORD(v33) = (unsigned int)" may take up 5 minutes" >> 16;
    HIWORD(v34) = (unsigned int)"." >> 16;
    printf(v34, v33, v19);
    return 3;
  }
  V_LOCK();
  LOWORD(v25) = -16588;
  HIWORD(v25) = (unsigned int)"e up to 2 minutes..." >> 16;
  logfmt_raw(v68, 0x1000u, 0, v25);
  V_UNLOCK();
  LOWORD(v26) = -16096;
  HIWORD(v26) = (unsigned int)"uency_with_voltage_ks5" >> 16;
  zlog(g_zc, v26, 182, "set_frequency_with_voltage_ks5", 30, 286, 60, v68);
  v27 = *(float *)(*v6 + 972);
  v28 = (int)(float)((float)(600.0 - v27) / 6.25);
  if ( v28 <= 0 )
  {
LABEL_40:
    LOWORD(v39) = -16512;
    v40 = 180;
    check_temperature_base(a1, &v65, &v66);
    while ( v65 <= 19 )
    {
      v41 = v66 <= 19;
      if ( !v40 )
        v41 = 0;
      if ( !v41 )
        break;
      v40 -= 10;
      sleep(0xAu);
      if ( v63 > 0 )
      {
        v42 = 0;
        do
        {
          ++v42;
          check_temperature_base(a1, &v65, &v66);
          HIWORD(v39) = (unsigned int)"inutes" >> 16;
          printf(v39, v65, v66);
        }
        while ( v63 > v42 );
      }
    }
    goto LABEL_4;
  }
  while ( 1 )
  {
    v27 = v27 + 6.25;
    if ( v63 > 0 )
      break;
LABEL_39:
    if ( v28 == ++v2 )
      goto LABEL_40;
  }
  v29 = *v6;
  if ( !*v6 )
    goto LABEL_25;
  v30 = v6;
  v31 = 0;
  while ( 1 )
  {
    ++v31;
    result = (*(int (__fastcall **)(int, _DWORD))(v29 + 188))(v29, 0);
    if ( result )
      return result;
    usleep(*(_DWORD *)(a1 + 100));
    if ( v63 <= v31 )
      goto LABEL_39;
    v32 = v30[1];
    ++v30;
    v29 = v32;
    if ( !v32 )
      goto LABEL_25;
  }
}
