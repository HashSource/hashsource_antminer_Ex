int __fastcall set_frequency_with_voltage_base(int a1)
{
  int v2; // r6
  char *all_created_runtime; // r8
  float v4; // s17
  float v5; // s16
  float v6; // s20
  int v7; // r3
  int v8; // r1
  int v9; // r2
  int v10; // s19
  int v11; // r0
  char *v12; // r5
  int v13; // r4
  int v14; // t1
  char *v17; // r5
  int v18; // r4
  int v19; // t1
  int v20; // r1
  const char *v21; // r0
  int v22; // r3
  int v23; // r1
  int v24; // r3
  int v25; // r1
  _WORD *v26; // r5
  char *v27; // r8
  int v28; // r4
  int v29; // t1
  int v30; // r12
  int v31; // lr
  unsigned int v32; // r6
  float *v33; // r7
  float v34; // s16
  float v35; // s15
  size_t v36; // r0
  _WORD *v37; // r0
  float v38; // s17
  int v39; // r3
  int eeprom_sweep_freq; // r11
  int v41; // r7
  int eeprom_freq; // r0
  int v43; // r3
  int v44; // r1
  int working_voltage; // [sp+18h] [bp-223Ch]
  int v46; // [sp+18h] [bp-223Ch]
  int v47; // [sp+1Ch] [bp-2238h]
  int current_voltage; // [sp+20h] [bp-2234h]
  int v49; // [sp+24h] [bp-2230h]
  int v50; // [sp+28h] [bp-222Ch] BYREF
  float v51; // [sp+2Ch] [bp-2228h] BYREF
  char src[32]; // [sp+30h] [bp-2224h] BYREF
  float dest; // [sp+50h] [bp-2204h] BYREF
  char v54; // [sp+54h] [bp-2200h] BYREF
  char s[4096]; // [sp+250h] [bp-2004h] BYREF
  char v56[4100]; // [sp+1250h] [bp-1004h] BYREF

  v2 = 0;
  v50 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v50);
  v4 = *(float *)(*(_DWORD *)all_created_runtime + 976);
  v5 = *(float *)(*(_DWORD *)all_created_runtime + 972);
  if ( v4 > *(float *)(a1 + 104) )
    v4 = *(float *)(a1 + 104);
  working_voltage = get_working_voltage();
  if ( !is_check_asic_voltage_enable() )
  {
    v2 = set_check_asic_voltage(1);
    V_LOCK();
    LOWORD(v22) = -14196;
    HIWORD(v22) = (unsigned int)"ed" >> 16;
    logfmt_raw(v56, 0x1000u, 0, v22);
    V_UNLOCK();
    LOWORD(v23) = -14932;
    HIWORD(v23) = (unsigned int)"%d, set voltage to %d" >> 16;
    zlog(g_zc, v23, 169, "set_frequency_with_voltage_base", 31, 519, 40, v56);
  }
  v6 = v4 * *(float *)(a1 + 112);
  V_LOCK();
  LOWORD(v7) = -16664;
  HIWORD(v7) = (unsigned int)"ingup temperature %d C" >> 16;
  logfmt_raw(v56, 0x1000u, 0, v7);
  V_UNLOCK();
  LOWORD(v8) = -14932;
  HIWORD(v8) = (unsigned int)"%d, set voltage to %d" >> 16;
  zlog(g_zc, v8, 169, "set_frequency_with_voltage_base", 31, 529, 60, v56);
  current_voltage = get_current_voltage();
  v9 = 1717986919 * (current_voltage - working_voltage);
  v49 = (current_voltage - working_voltage) / 10;
  v10 = (int)(float)((float)(v4 - v5) / 6.25);
  if ( v10 <= 0 )
  {
LABEL_21:
    if ( v4 == v5 || v50 <= 0 )
    {
LABEL_28:
      V_LOCK();
      LOWORD(v24) = -16484;
      HIWORD(v24) = (unsigned int)"temp %d max temp %d\n" >> 16;
      logfmt_raw(v56, 0x1000u, 0, v24, v4, current_voltage);
      V_UNLOCK();
      LOWORD(v25) = -14932;
      HIWORD(v25) = (unsigned int)"%d, set voltage to %d" >> 16;
      zlog(g_zc, v25, 169, "set_frequency_with_voltage_base", 31, 564, 60, v56);
      if ( v50 > 0 )
      {
        LOWORD(v26) = 28828;
        v27 = all_created_runtime - 4;
        v28 = 0;
        v46 = v2;
        do
        {
          v29 = *((_DWORD *)v27 + 1);
          v27 += 4;
          if ( api_get_eeprom_fmt_version(*(_DWORD *)(v29 + 240)) == 4
            && !api_get_eeprom_asic_freqs(*(_DWORD *)(*(_DWORD *)v27 + 240), &dest, &v51) )
          {
            memset(s, 0, sizeof(s));
            v30 = *(_DWORD *)v27;
            v31 = *(_DWORD *)(*(_DWORD *)v27 + 336);
            if ( v31 )
            {
              v32 = 0;
              v33 = (float *)&v54;
              v34 = dest + 0.0;
              sprintf(src, "ASIC-%03d [%.2f] ", 0, dest);
              strcat(s, src);
              while ( 1 )
              {
                v30 = *(_DWORD *)v27;
                ++v32;
                v31 = *(_DWORD *)(*(_DWORD *)v27 + 336);
                if ( v31 <= v32 )
                  break;
                v35 = *v33++;
                v34 = v34 + v35;
                sprintf(src, "ASIC-%03d [%.2f] ", v32, v35);
                v36 = strlen(s);
                v37 = (_WORD *)stpcpy(&s[v36], src);
                if ( (v32 & 7) == 7 )
                {
                  HIWORD(v26) = (unsigned int)"d!" >> 16;
                  *v37 = *v26;
                }
              }
            }
            else
            {
              v34 = 0.0;
            }
            v38 = v34 / (float)v31;
            (*(void (__fastcall **)(int, float *))(v30 + 200))(v30, &dest);
            v39 = *(_DWORD *)v27;
            *(_DWORD *)(v39 + 464) = (int)v38;
            *(float *)(v39 + 976) = (float)(int)v38;
            eeprom_sweep_freq = api_get_eeprom_sweep_freq(v28);
            V_LOCK();
            v41 = *(_DWORD *)(*(_DWORD *)v27 + 240);
            eeprom_freq = api_get_eeprom_freq(v28);
            LOWORD(v43) = -14140;
            HIWORD(v43) = (unsigned int)"." >> 16;
            logfmt_raw(v56, 0x1000u, 0, v43, v41, eeprom_freq, v38, eeprom_sweep_freq, s);
            V_UNLOCK();
            LOWORD(v44) = -14932;
            HIWORD(v44) = (unsigned int)"%d, set voltage to %d" >> 16;
            zlog(g_zc, v44, 169, "set_frequency_with_voltage_base", 31, 597, 40, v56);
          }
          ++v28;
        }
        while ( v50 > v28 );
        return v46;
      }
    }
    else
    {
      v17 = all_created_runtime - 4;
      v18 = 0;
      while ( 1 )
      {
        v19 = *((_DWORD *)v17 + 1);
        v17 += 4;
        ++v18;
        v2 = (*(int (**)(void))(v19 + 188))();
        if ( v2 )
          break;
        usleep(*(_DWORD *)(a1 + 100));
        if ( v50 <= v18 )
          goto LABEL_28;
      }
    }
  }
  else
  {
    v47 = 0;
    while ( 1 )
    {
      v5 = v5 + 6.25;
      if ( v50 > 0 )
        break;
LABEL_14:
      if ( working_voltage + 20 < current_voltage && v6 < v5 && v10 - v49 <= v47 )
      {
        current_voltage -= 10;
        v2 = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, current_voltage);
        if ( v2 )
          return v2;
        usleep((__useconds_t)&loc_30D40);
      }
      v9 = v10;
      if ( v10 == ++v47 )
        goto LABEL_21;
    }
    v11 = *(_DWORD *)all_created_runtime;
    if ( *(_DWORD *)all_created_runtime )
    {
      v12 = all_created_runtime;
      v13 = 0;
      while ( 1 )
      {
        ++v13;
        v2 = (*(int (__fastcall **)(int, _DWORD, int))(v11 + 188))(v11, 0, v9);
        if ( v2 )
          break;
        usleep(*(_DWORD *)(a1 + 100));
        if ( v50 <= v13 )
          goto LABEL_14;
        v14 = *((_DWORD *)v12 + 1);
        v12 += 4;
        v11 = v14;
        if ( !v14 )
          goto LABEL_27;
      }
    }
    else
    {
LABEL_27:
      LOWORD(v20) = -16528;
      LOWORD(v21) = 28808;
      HIWORD(v20) = (unsigned int)" may take up 5 minutes" >> 16;
      HIWORD(v21) = (unsigned int)"." >> 16;
      printf(v21, v20, v9);
      return 3;
    }
  }
  return v2;
}
