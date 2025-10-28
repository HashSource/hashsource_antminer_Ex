int __fastcall start_mining_kas(int a1)
{
  int v1; // r4
  _DWORD *all_created_runtime; // r0
  _DWORD *v4; // r7
  _DWORD *v5; // r5
  int v6; // t1
  int v7; // r0
  int v8; // r3
  int v9; // r1
  int v10; // r3
  int v11; // r1
  int started; // r9
  int *v13; // r5
  int (**v14)(void); // t1
  int v15; // r0
  int v16; // r7
  int v17; // r0
  int v18; // r4
  int v19; // r4
  int *v20; // r6
  int v21; // r1
  unsigned int v22; // r0
  int *v23; // r5
  int i; // r4
  int v25; // t1
  int v26; // r5
  _DWORD *v27; // r7
  int *v28; // r9
  int v29; // r4
  int v30; // r3
  int v31; // t1
  int v32; // t1
  int *v33; // r6
  int j; // r4
  int v35; // t1
  int v36; // r1
  const char *v37; // r0
  int v39; // r3
  int v40; // r1
  int v41; // r2
  int v42; // r3
  int v43; // r1
  int v44; // r3
  int v45; // r1
  int v46; // r3
  int v47; // r1
  _DWORD *v48; // [sp+14h] [bp-1010h]
  int v49; // [sp+1Ch] [bp-1008h] BYREF
  char v50[4100]; // [sp+20h] [bp-1004h] BYREF

  v1 = 0;
  v49 = 0;
  all_created_runtime = get_all_created_runtime(&v49);
  v4 = all_created_runtime;
  if ( v49 > 0 )
  {
    if ( !*all_created_runtime )
    {
LABEL_35:
      LOWORD(v36) = -16896;
      LOWORD(v37) = 28808;
      v26 = 3;
      HIWORD(v36) = (unsigned int)" have been poweroff." >> 16;
      HIWORD(v37) = (unsigned int)"." >> 16;
      printf(v37, v36);
      return v26;
    }
    v5 = all_created_runtime;
    while ( 1 )
    {
      v7 = dev_ctrl(all_created_runtime);
      all_created_runtime = (_DWORD *)(*(int (__fastcall **)(int))(v7 + 32))(v1++);
      if ( v49 <= v1 )
        break;
      v6 = v5[1];
      ++v5;
      if ( !v6 )
        goto LABEL_35;
    }
  }
  V_LOCK();
  LOWORD(v8) = -16940;
  HIWORD(v8) = (unsigned int)"ine_runtime_kas_2380.c" >> 16;
  logfmt_raw(v50, 0x1000u, 0, v8);
  V_UNLOCK();
  LOWORD(v9) = -17124;
  HIWORD(v9) = (unsigned int)"uency_with_voltage_kas" >> 16;
  zlog(g_zc, v9, 182, "start_mining_kas", 16, 145, 60, v50);
  if ( support_of_sleepmode(*(_DWORD *)(a1 + 72)) && opt_custom_power_mode == 1 )
  {
    V_LOCK();
    LOWORD(v44) = -16880;
    HIWORD(v44) = (unsigned int)"off." >> 16;
    logfmt_raw(v50, 0x1000u, 0, v44);
    V_UNLOCK();
    LOWORD(v45) = -17124;
    HIWORD(v45) = (unsigned int)"uency_with_voltage_kas" >> 16;
    zlog(g_zc, v45, 182, "start_mining_kas", 16, 153, 60, v50);
  }
  if ( power_init(0, v49) )
  {
    V_LOCK();
    LOWORD(v39) = -16868;
    HIWORD(v39) = (unsigned int)"untimes[c]" >> 16;
    logfmt_raw(v50, 0x1000u, 0, v39);
    V_UNLOCK();
    LOWORD(v40) = -17124;
    HIWORD(v40) = (unsigned int)"uency_with_voltage_kas" >> 16;
    zlog(g_zc, v40, 182, "start_mining_kas", 16, 156, 100, v50);
    V_LOCK();
    LOWORD(v41) = 28468;
    LOWORD(v42) = 27800;
    HIWORD(v41) = (unsigned int)"%s, power has not init!" >> 16;
    HIWORD(v42) = (unsigned int)"r" >> 16;
    logfmt_raw(v50, 0x1000u, 0, v42, v41);
    V_UNLOCK();
    LOWORD(v43) = -17124;
    HIWORD(v43) = (unsigned int)"uency_with_voltage_kas" >> 16;
    zlog(g_zc, v43, 182, "start_mining_kas", 16, 157, 100, v50);
    return 30;
  }
  else
  {
    V_LOCK();
    LOWORD(v10) = -16824;
    HIWORD(v10) = (unsigned int)" check PSU please <<" >> 16;
    logfmt_raw(v50, 0x1000u, 0, v10);
    V_UNLOCK();
    LOWORD(v11) = -17124;
    HIWORD(v11) = (unsigned int)"uency_with_voltage_kas" >> 16;
    zlog(g_zc, v11, 182, "start_mining_kas", 16, 160, 40, v50);
    started = start_heartbeat_thread();
    if ( !started )
    {
      puts("send fake work to open cores");
      (*(void (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 80));
      if ( v49 > 0 )
      {
        v13 = v4 - 1;
        v48 = v4;
        do
        {
          v14 = (int (**)(void))v13[1];
          ++v13;
          v15 = (*v14)();
          if ( !v15 )
          {
            v16 = 3;
            do
            {
              v17 = dev_ctrl(v15);
              v18 = 10;
              (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v17 + 28))(
                *(_DWORD *)(*v13 + 240),
                *(_DWORD *)(*v13 + 980),
                *(_DWORD *)(*v13 + 1000));
              do
              {
                usleep((__useconds_t)&stru_186A0);
                send_fake_work_kas(*v13);
                --v18;
              }
              while ( v18 );
              v19 = (*(int (**)(void))(*v13 + 204))();
              v15 = (*(int (**)(void))(*v13 + 216))();
              if ( !v19 )
                break;
              --v16;
            }
            while ( v16 );
          }
          ++started;
        }
        while ( v49 > started );
        v4 = v48;
      }
      check_and_destroy_abnormal_runtime();
      v20 = (int *)get_all_created_runtime(&v49);
      if ( v49 <= 0 )
      {
        V_LOCK();
        LOWORD(v46) = -16764;
        HIWORD(v46) = (unsigned int)"e work to open cores" >> 16;
        v26 = 12;
        logfmt_raw(v50, 0x1000u, 0, v46);
        V_UNLOCK();
        LOWORD(v47) = -17124;
        HIWORD(v47) = (unsigned int)"uency_with_voltage_kas" >> 16;
        zlog(g_zc, v47, 182, "start_mining_kas", 16, 199, 100, v50);
      }
      else
      {
        (*(void (__fastcall **)(int))(a1 + 64))(a1);
        V_LOCK();
        logfmt_raw(v50, 0x1000u, 0, "check bringup temperature %d C", *(_DWORD *)(a1 + 92));
        V_UNLOCK();
        LOWORD(v21) = -17124;
        HIWORD(v21) = (unsigned int)"uency_with_voltage_kas" >> 16;
        zlog(g_zc, v21, 182, "start_mining_kas", 16, 205, 60, v50);
        check_if_bringup_temp_too_low(a1);
        v22 = (*(int (__fastcall **)(_DWORD))(a1 + 24))(*(_DWORD *)(a1 + 92));
        fan_pwm_set(v22);
        if ( v49 > 0 )
        {
          v23 = v20 - 1;
          for ( i = 0; i < v49; ++i )
          {
            v25 = v23[1];
            ++v23;
            redirect_nonce_output(*v20, v25);
            (*(void (**)(void))(*v23 + 224))();
          }
        }
        v26 = (*(int (__fastcall **)(int))(a1 + 44))(a1);
        if ( v49 > 0 )
        {
          v27 = v4 - 1;
          v28 = v20 - 1;
          v29 = 0;
          do
          {
            v31 = v27[1];
            ++v27;
            v30 = v31;
            ++v29;
            v32 = v28[1];
            ++v28;
            (*(void (__fastcall **)(int))(v30 + 56))(v32);
          }
          while ( v49 > v29 );
        }
        if ( !v26 )
        {
          v26 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 84));
          if ( !v26 && v49 > 0 )
          {
            v33 = v20 - 1;
            for ( j = 0; j < v49; ++j )
            {
              v35 = v33[1];
              ++v33;
              (*(void (**)(void))(v35 + 120))();
              (*(void (**)(void))(*v33 + 16))();
            }
          }
        }
      }
      return v26;
    }
    return start_heartbeat_thread();
  }
}
