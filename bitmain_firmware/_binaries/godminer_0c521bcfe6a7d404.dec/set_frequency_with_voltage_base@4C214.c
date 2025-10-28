int __fastcall set_frequency_with_voltage_base(int a1)
{
  int v2; // r6
  int all_created_runtime; // r8
  float v4; // s17
  float v5; // s16
  int v6; // r0
  float v7; // s20
  int v8; // r0
  int v9; // r0
  int current_voltage; // r0
  int v11; // r2
  int v12; // s19
  int v13; // r0
  int v14; // r5
  int v15; // r4
  int v16; // t1
  int v19; // r5
  int v20; // r4
  int v21; // t1
  int v22; // r0
  int v23; // r0
  _DWORD *v24; // r8
  int v25; // r4
  int v26; // t1
  int v27; // r12
  int v28; // lr
  unsigned int v29; // r6
  float *v30; // r7
  float v31; // s16
  float v32; // s15
  size_t v33; // r0
  _WORD *v34; // r0
  float v35; // s17
  int v36; // r3
  int eeprom_sweep_freq; // r11
  int v38; // r0
  int working_voltage; // [sp+18h] [bp-223Ch]
  int v40; // [sp+18h] [bp-223Ch]
  int v41; // [sp+1Ch] [bp-2238h]
  int v42; // [sp+20h] [bp-2234h]
  int v43; // [sp+24h] [bp-2230h]
  int v44; // [sp+28h] [bp-222Ch] BYREF
  char src[32]; // [sp+30h] [bp-2224h] BYREF
  float dest; // [sp+50h] [bp-2204h] BYREF
  char v47; // [sp+54h] [bp-2200h] BYREF
  char s[4096]; // [sp+250h] [bp-2004h] BYREF
  _BYTE v49[4100]; // [sp+1250h] [bp-1004h] BYREF

  v2 = 0;
  v44 = 0;
  all_created_runtime = get_all_created_runtime(&v44);
  v4 = *(float *)(*(_DWORD *)all_created_runtime + 924);
  v5 = *(float *)(*(_DWORD *)all_created_runtime + 920);
  if ( v4 > *(float *)(a1 + 96) )
    v4 = *(float *)(a1 + 96);
  working_voltage = get_working_voltage();
  v6 = is_check_asic_voltage_enable();
  if ( !v6 )
  {
    v2 = set_check_asic_voltage(1);
    V_LOCK(v2);
    v22 = logfmt_raw((int)v49, 0x1000u);
    V_UNLOCK(v22);
    v6 = zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmine"
           "r-origin_godminer-new/machine_runtime/machine_runtime_base.c",
           169,
           "set_frequency_with_voltage_base",
           31,
           448,
           40,
           v49);
  }
  v7 = v4 * *(float *)(a1 + 104);
  V_LOCK(v6);
  v8 = logfmt_raw((int)v49, 0x1000u);
  V_UNLOCK(v8);
  v9 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-"
         "origin_godminer-new/machine_runtime/machine_runtime_base.c",
         169,
         "set_frequency_with_voltage_base",
         31,
         458,
         60,
         v49);
  current_voltage = get_current_voltage(v9);
  v42 = current_voltage;
  v11 = 1717986919 * (current_voltage - working_voltage);
  v43 = (current_voltage - working_voltage) / 10;
  v12 = (int)(float)((float)(v4 - v5) / 6.25);
  if ( v12 <= 0 )
  {
LABEL_21:
    if ( v4 == v5 || v44 <= 0 )
    {
LABEL_28:
      V_LOCK(current_voltage);
      v23 = logfmt_raw((int)v49, 0x1000u);
      V_UNLOCK(v23);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/machine_runtime/machine_runtime_base.c",
        169,
        "set_frequency_with_voltage_base",
        31,
        493,
        60,
        v49);
      if ( v44 > 0 )
      {
        v24 = (_DWORD *)(all_created_runtime - 4);
        v25 = 0;
        v40 = v2;
        do
        {
          v26 = v24[1];
          ++v24;
          if ( api_get_eeprom_fmt_version(*(_DWORD *)(v26 + 220)) == 4
            && !api_get_eeprom_asic_freqs(*(_DWORD *)(*v24 + 220), &dest) )
          {
            memset(s, 0, sizeof(s));
            v27 = *v24;
            v28 = *(_DWORD *)(*v24 + 304);
            if ( v28 )
            {
              v29 = 0;
              v30 = (float *)&v47;
              v31 = dest + 0.0;
              sprintf(src, "ASIC-%03d [%.2f] ", 0, dest);
              strcat(s, src);
              while ( 1 )
              {
                v27 = *v24;
                ++v29;
                v28 = *(_DWORD *)(*v24 + 304);
                if ( v28 <= v29 )
                  break;
                v32 = *v30++;
                v31 = v31 + v32;
                sprintf(src, "ASIC-%03d [%.2f] ", v29, v32);
                v33 = strlen(s);
                v34 = (_WORD *)stpcpy(&s[v33]);
                if ( (v29 & 7) == 7 )
                  *v34 = 10;
              }
            }
            else
            {
              v31 = 0.0;
            }
            v35 = v31 / (float)v28;
            (*(void (__fastcall **)(int, float *))(v27 + 192))(v27, &dest);
            v36 = *v24;
            *(_DWORD *)(v36 + 432) = (int)v35;
            *(float *)(v36 + 924) = (float)(int)v35;
            eeprom_sweep_freq = api_get_eeprom_sweep_freq(v25);
            V_LOCK(eeprom_sweep_freq);
            api_get_eeprom_PT2_freq(v25);
            v38 = logfmt_raw((int)v49, 0x1000u);
            V_UNLOCK(v38);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/machine_runtime/machine_runtime_base.c",
              169,
              "set_frequency_with_voltage_base",
              31,
              526,
              40,
              v49);
          }
          ++v25;
        }
        while ( v44 > v25 );
        return v40;
      }
    }
    else
    {
      v19 = all_created_runtime - 4;
      v20 = 0;
      while ( 1 )
      {
        v21 = *(_DWORD *)(v19 + 4);
        v19 += 4;
        ++v20;
        v2 = (*(int (**)(void))(v21 + 188))();
        if ( v2 )
          break;
        current_voltage = usleep(*(_DWORD *)(a1 + 92));
        if ( v44 <= v20 )
          goto LABEL_28;
      }
    }
  }
  else
  {
    v41 = 0;
    while ( 1 )
    {
      v5 = v5 + 6.25;
      if ( v44 > 0 )
        break;
LABEL_14:
      if ( working_voltage + 20 < v42 && v7 < v5 && v12 - v43 <= v41 )
      {
        v42 -= 10;
        v2 = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, v42);
        if ( v2 )
          return v2;
        current_voltage = usleep((__useconds_t)sub_30D40);
      }
      v11 = v12;
      if ( v12 == ++v41 )
        goto LABEL_21;
    }
    v13 = *(_DWORD *)all_created_runtime;
    if ( *(_DWORD *)all_created_runtime )
    {
      v14 = all_created_runtime;
      v15 = 0;
      while ( 1 )
      {
        ++v15;
        v2 = (*(int (__fastcall **)(int, _DWORD, int))(v13 + 188))(v13, 0, v11);
        if ( v2 )
          break;
        current_voltage = usleep(*(_DWORD *)(a1 + 92));
        if ( v44 <= v15 )
          goto LABEL_14;
        v16 = *(_DWORD *)(v14 + 4);
        v14 += 4;
        v13 = v16;
        if ( !v16 )
          goto LABEL_27;
      }
    }
    else
    {
LABEL_27:
      printf(aInvalidPointer, "be_runtimes[b]", v11);
      return 3;
    }
  }
  return v2;
}
