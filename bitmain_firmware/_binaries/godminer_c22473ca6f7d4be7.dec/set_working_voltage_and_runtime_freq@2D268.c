char *set_working_voltage_and_runtime_freq()
{
  char v0; // r7
  int working_voltage; // r6
  int current_voltage; // r5
  char *result; // r0
  char *v4; // r8
  int v5; // r2
  char *v6; // r4
  int v7; // r3
  char *v8; // r9
  int v9; // r11
  char *v10; // r9
  char *v11; // r10
  int v12; // t1
  int i; // r4
  int v14; // t1
  int v15; // r3
  _DWORD *v16; // r3
  int v17; // r1
  char *all_created_runtime; // [sp+14h] [bp-1018h]
  int v19; // [sp+18h] [bp-1014h]
  int v20; // [sp+24h] [bp-1008h] BYREF
  char v21[4100]; // [sp+28h] [bp-1004h] BYREF

  v0 = 0;
  working_voltage = get_working_voltage();
  current_voltage = get_current_voltage();
  v20 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v20);
  result = (char *)is_power_init();
  v4 = result;
  if ( result )
  {
    if ( opt_algo == 6 )
    {
      if ( working_voltage < current_voltage )
        v5 = -7;
      else
        v5 = 7;
      v19 = v5;
      v6 = 0;
      do
      {
        if ( !v6 )
        {
          if ( v20 > 0 )
          {
            v9 = 0;
            v10 = all_created_runtime - 4;
            v11 = all_created_runtime - 4;
            do
            {
              v12 = *((_DWORD *)v11 + 1);
              v11 += 4;
              ++v6;
              v9 |= (*(int (**)(void))(v12 + 132))();
            }
            while ( v20 > (int)v6 );
            v6 = (char *)(v9 == 0);
            if ( v9 )
            {
              usleep((__useconds_t)&loc_30D40);
              if ( v20 > 0 )
              {
                for ( i = 0; i < v20; ++i )
                {
                  v14 = *((_DWORD *)v10 + 1);
                  v10 += 4;
                  v9 |= (*(int (**)(void))(v14 + 132))();
                }
                v6 = (char *)(v9 == 0);
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
          current_voltage += v19;
          set_voltage(current_voltage, 1);
          if ( working_voltage == current_voltage )
          {
            v8 = v6;
            v0 = (char)v4;
          }
          else
          {
            v8 = (char *)(unsigned __int8)((unsigned __int8)v6 & v0);
          }
        }
        else
        {
          v8 = v6;
          if ( working_voltage == current_voltage )
          {
            current_voltage = working_voltage;
            v0 = (char)v4;
          }
          else
          {
            current_voltage = working_voltage;
            v0 = (char)v4;
            set_voltage(working_voltage, 1);
          }
        }
        result = sub_2B154();
      }
      while ( !v8 );
    }
  }
  else
  {
    V_LOCK();
    LOWORD(v15) = -3080;
    HIWORD(v15) = (unsigned int)"_monitor" >> 16;
    logfmt_raw(v21, 0x1000u, 0, v15, "set_working_voltage_and_runtime_freq");
    V_UNLOCK();
    LOWORD(v16) = -14512;
    HIWORD(v16) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v17) = -4392;
    HIWORD(v17) = (unsigned int)"ares / min): %.2f/min" >> 16;
    zlog(*v16, v17, 132, "set_working_voltage_and_runtime_freq", 36, 1018, 100, v21);
    return (char *)-1;
  }
  return result;
}
