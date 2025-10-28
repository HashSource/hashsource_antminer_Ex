int set_working_voltage_and_runtime_freq()
{
  float v0; // s17
  int v1; // r4
  int working_voltage; // r7
  int current_voltage; // r5
  int result; // r0
  int v5; // r8
  int v6; // r2
  char v7; // r9
  int v8; // r6
  int v9; // r3
  int v10; // r8
  _DWORD *v11; // r6
  int v12; // t1
  int v13; // r4
  float *v14; // r5
  float v15; // s16
  int v16; // r1
  float v17; // s15
  int v18; // r0
  int v19; // r0
  int v20; // r6
  int v21; // r10
  int v22; // r11
  int v23; // t1
  int i; // r4
  int v25; // t1
  int v26; // r0
  int all_created_runtime; // [sp+1Ch] [bp-1218h]
  int v28; // [sp+20h] [bp-1214h]
  int v29; // [sp+28h] [bp-120Ch] BYREF
  float dest; // [sp+30h] [bp-1204h] BYREF
  int v31; // [sp+34h] [bp-1200h] BYREF
  _BYTE v32[4100]; // [sp+230h] [bp-1004h] BYREF

  v1 = 0;
  working_voltage = get_working_voltage();
  current_voltage = get_current_voltage();
  v29 = 0;
  all_created_runtime = get_all_created_runtime(&v29);
  result = is_power_init();
  v5 = result;
  if ( !result )
  {
    V_LOCK(0);
    v26 = logfmt_raw((int)v32, 0x1000u);
    V_UNLOCK(v26);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "set_working_voltage_and_runtime_freq",
      36,
      1032,
      100,
      v32);
    return -1;
  }
  if ( opt_algo == 6 )
  {
    if ( working_voltage < current_voltage )
      v6 = -7;
    else
      v6 = 7;
    v28 = v6;
    v7 = 0;
    while ( 1 )
    {
      if ( !v1 )
      {
        if ( v29 > 0 )
        {
          v20 = 0;
          v21 = all_created_runtime - 4;
          v22 = all_created_runtime - 4;
          do
          {
            v23 = *(_DWORD *)(v22 + 4);
            v22 += 4;
            ++v1;
            v20 |= (*(int (**)(void))(v23 + 132))();
          }
          while ( v29 > v1 );
          v1 = v20 == 0;
          if ( v20 )
          {
            usleep((__useconds_t)&loc_30D40);
            if ( v29 > 0 )
            {
              for ( i = 0; i < v29; ++i )
              {
                v25 = *(_DWORD *)(v21 + 4);
                v21 += 4;
                v20 |= (*(int (**)(void))(v25 + 132))();
              }
              v1 = v20 == 0;
            }
          }
        }
        else
        {
          v1 = v5;
        }
      }
      v9 = current_voltage - working_voltage;
      if ( current_voltage - working_voltage < 0 )
        v9 = working_voltage - current_voltage;
      if ( v9 > 7 )
        break;
      if ( working_voltage == current_voltage )
      {
        current_voltage = working_voltage;
        result = sub_2B4B0();
        v7 = v5;
        if ( v1 )
        {
LABEL_16:
          if ( v29 > 0 )
          {
            v10 = 0;
            v11 = (_DWORD *)(all_created_runtime - 4);
            do
            {
              v12 = v11[1];
              ++v11;
              result = api_get_eeprom_fmt_version(*(_DWORD *)(v12 + 144));
              if ( result == 4 )
              {
                result = api_get_eeprom_sweep_freqs(*(_DWORD *)(*v11 + 144), &dest);
                v13 = result;
                if ( !result )
                {
                  v14 = (float *)&v31;
                  (*(void (**)(void))(*v11 + 136))();
                  v15 = dest + v0;
                  printf("%-6.1f ", dest);
                  while ( ++v13 != 120 )
                  {
                    while ( 1 )
                    {
                      v17 = *v14++;
                      v15 = v15 + v17;
                      printf("%-6.1f ", v16, v17);
                      if ( (v13 & 0xF) != 0xF )
                        break;
                      ++v13;
                      putchar(10);
                      if ( v13 == 120 )
                        goto LABEL_25;
                    }
                  }
LABEL_25:
                  putchar(10);
                  v0 = v15 / 120.0;
                  v18 = printf(
                          "[%s] chain-%d, sweep_start_freq = %f, sweep_average_freq = %f\n",
                          "set_working_voltage_and_runtime_freq",
                          *(_DWORD *)(*v11 + 144),
                          *(float *)(*v11 + 768),
                          (float)(v15 / 120.0));
                  V_LOCK(v18);
                  v19 = logfmt_raw((int)v32, 0x1000u);
                  V_UNLOCK(v19);
                  result = zlog(
                             g_zc,
                             "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release"
                             "/build/godminer-origin_master/god-miner.c",
                             132,
                             "set_working_voltage_and_runtime_freq",
                             36,
                             1094,
                             40,
                             v32);
                }
              }
              ++v10;
            }
            while ( v29 > v10 );
          }
          return result;
        }
      }
      else
      {
        v8 = v1;
        current_voltage = working_voltage;
        v7 = v5;
        set_voltage(working_voltage, 1);
LABEL_9:
        result = sub_2B4B0();
        if ( v8 )
          goto LABEL_16;
      }
    }
    current_voltage += v28;
    set_voltage(current_voltage, 1);
    if ( working_voltage == current_voltage )
    {
      v8 = v1;
      v7 = v5;
    }
    else
    {
      v8 = (unsigned __int8)(v1 & v7);
    }
    goto LABEL_9;
  }
  return result;
}
