int set_working_voltage_and_runtime_freq()
{
  char v0; // r7
  int working_voltage; // r6
  int current_voltage; // r5
  int result; // r0
  int v4; // r8
  int v5; // r2
  int v6; // r4
  int v7; // r3
  int v8; // r9
  int v9; // r11
  int v10; // r9
  int v11; // r10
  int v12; // t1
  int i; // r4
  int v14; // t1
  int v15; // r0
  int all_created_runtime; // [sp+14h] [bp-1018h]
  int v17; // [sp+18h] [bp-1014h]
  int v18; // [sp+24h] [bp-1008h] BYREF
  _BYTE v19[4100]; // [sp+28h] [bp-1004h] BYREF

  v0 = 0;
  working_voltage = get_working_voltage();
  current_voltage = get_current_voltage();
  v18 = 0;
  all_created_runtime = get_all_created_runtime(&v18);
  result = is_power_init();
  v4 = result;
  if ( result )
  {
    if ( opt_algo == 6 )
    {
      if ( working_voltage < current_voltage )
        v5 = -7;
      else
        v5 = 7;
      v17 = v5;
      v6 = 0;
      do
      {
        if ( !v6 )
        {
          if ( v18 > 0 )
          {
            v9 = 0;
            v10 = all_created_runtime - 4;
            v11 = all_created_runtime - 4;
            do
            {
              v12 = *(_DWORD *)(v11 + 4);
              v11 += 4;
              ++v6;
              v9 |= (*(int (**)(void))(v12 + 132))();
            }
            while ( v18 > v6 );
            v6 = v9 == 0;
            if ( v9 )
            {
              usleep((__useconds_t)&loc_30D40);
              if ( v18 > 0 )
              {
                for ( i = 0; i < v18; ++i )
                {
                  v14 = *(_DWORD *)(v10 + 4);
                  v10 += 4;
                  v9 |= (*(int (**)(void))(v14 + 132))();
                }
                v6 = v9 == 0;
              }
            }
          }
          else
          {
            v6 = v4;
          }
        }
        v7 = current_voltage - working_voltage;
        if ( current_voltage - working_voltage < 0 )
          v7 = working_voltage - current_voltage;
        if ( v7 > 7 )
        {
          current_voltage += v17;
          set_voltage(current_voltage, 1);
          if ( working_voltage == current_voltage )
          {
            v8 = v6;
            v0 = v4;
          }
          else
          {
            v8 = (unsigned __int8)(v6 & v0);
          }
        }
        else
        {
          v8 = v6;
          if ( working_voltage == current_voltage )
          {
            current_voltage = working_voltage;
            v0 = v4;
          }
          else
          {
            current_voltage = working_voltage;
            v0 = v4;
            set_voltage(working_voltage, 1);
          }
        }
        result = sub_2B254();
      }
      while ( !v8 );
    }
  }
  else
  {
    V_LOCK(0);
    v15 = logfmt_raw((int)v19, 0x1000u);
    V_UNLOCK(v15);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "set_working_voltage_and_runtime_freq",
      36,
      1021,
      100,
      v19);
    return -1;
  }
  return result;
}
