int __fastcall start_mining_base(int a1)
{
  int v1; // r4
  _DWORD *all_created_runtime; // r0
  _DWORD *v4; // r6
  _DWORD *v5; // r5
  int v6; // t1
  int v7; // r0
  int v8; // r3
  int v9; // r1
  int v10; // r3
  int v11; // r1
  _DWORD *v12; // r6
  int i; // r4
  int (**v14)(void); // t1
  int v15; // r5
  int v16; // r0
  int v18; // r3
  int v19; // r1
  int v20; // r1
  const char *v21; // r0
  int v22; // r3
  int v23; // r1
  int v24; // r2
  int v25; // r3
  int v26; // r1
  int *v27; // r4
  unsigned int v28; // r0
  int *v29; // r7
  int v30; // r6
  int v31; // t1
  int v32; // r3
  int v33; // r1
  int *v34; // r4
  int v35; // r6
  int v36; // t1
  int v37; // r3
  int v38; // r1
  int (__fastcall *v39)(int, int); // r4
  int v40; // r0
  int v41; // r3
  int v42; // r1
  int v43; // [sp+14h] [bp-4h] BYREF
  int v44; // [sp+18h] [bp+0h] BYREF

  v1 = 0;
  v43 = 0;
  all_created_runtime = get_all_created_runtime(&v43);
  v4 = all_created_runtime;
  if ( v43 > 0 )
  {
    if ( !*all_created_runtime )
    {
LABEL_21:
      LOWORD(v20) = -16896;
      LOWORD(v21) = 28808;
      HIWORD(v20) = (unsigned int)" have been poweroff." >> 16;
      HIWORD(v21) = (unsigned int)"." >> 16;
      printf(v21, v20);
      return 3;
    }
    v5 = all_created_runtime;
    while ( 1 )
    {
      v7 = dev_ctrl(all_created_runtime);
      all_created_runtime = (_DWORD *)(*(int (__fastcall **)(int))(v7 + 32))(v1++);
      if ( v43 <= v1 )
        break;
      v6 = v5[1];
      ++v5;
      if ( !v6 )
        goto LABEL_21;
    }
  }
  V_LOCK();
  LOWORD(v8) = -16940;
  HIWORD(v8) = (unsigned int)"ine_runtime_kas_2380.c" >> 16;
  logfmt_raw((char *)&v44, 0x1000u, 0, v8);
  V_UNLOCK();
  LOWORD(v9) = -14932;
  HIWORD(v9) = (unsigned int)"%d, set voltage to %d" >> 16;
  zlog(g_zc, v9, 169, "start_mining_base", 17, 763, 60, &v44);
  if ( *(_DWORD *)(a1 + 72) <= 5u && opt_custom_power_mode == 1 )
  {
    byte_195964 = 1;
    V_LOCK();
    LOWORD(v18) = -16880;
    HIWORD(v18) = (unsigned int)"off." >> 16;
    logfmt_raw((char *)&v44, 0x1000u, 0, v18);
    V_UNLOCK();
    LOWORD(v19) = -14932;
    HIWORD(v19) = (unsigned int)"%d, set voltage to %d" >> 16;
    zlog(g_zc, v19, 169, "start_mining_base", 17, 769, 60, &v44);
  }
  if ( power_init((unsigned __int8)byte_195964, v43) )
  {
    V_LOCK();
    LOWORD(v22) = -16868;
    HIWORD(v22) = (unsigned int)"untimes[c]" >> 16;
    logfmt_raw((char *)&v44, 0x1000u, 0, v22);
    V_UNLOCK();
    LOWORD(v23) = -14932;
    HIWORD(v23) = (unsigned int)"%d, set voltage to %d" >> 16;
    zlog(g_zc, v23, 169, "start_mining_base", 17, 772, 100, &v44);
    V_LOCK();
    LOWORD(v24) = 28468;
    LOWORD(v25) = 27800;
    HIWORD(v24) = (unsigned int)"%s, power has not init!" >> 16;
    HIWORD(v25) = (unsigned int)"r" >> 16;
    logfmt_raw((char *)&v44, 0x1000u, 0, v25, v24);
    V_UNLOCK();
    LOWORD(v26) = -14932;
    HIWORD(v26) = (unsigned int)"%d, set voltage to %d" >> 16;
    zlog(g_zc, v26, 169, "start_mining_base", 17, 773, 100, &v44);
    return 30;
  }
  else
  {
    V_LOCK();
    LOWORD(v10) = -16824;
    HIWORD(v10) = (unsigned int)" check PSU please <<" >> 16;
    logfmt_raw((char *)&v44, 0x1000u, 0, v10);
    V_UNLOCK();
    LOWORD(v11) = -14932;
    HIWORD(v11) = (unsigned int)"%d, set voltage to %d" >> 16;
    zlog(g_zc, v11, 169, "start_mining_base", 17, 776, 40, &v44);
    if ( !start_heartbeat_thread() )
    {
      if ( opt_algo == 9 )
      {
        v39 = *(int (__fastcall **)(int, int))(a1 + 28);
        v40 = platfrom_get_check_asic_voltage();
        v15 = v39(a1, v40);
        if ( v15 )
          return v15;
      }
      (*(void (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 80));
      if ( v43 > 0 )
      {
        v12 = v4 - 1;
        for ( i = 0; i < v43; ++i )
        {
          v14 = (int (**)(void))v12[1];
          ++v12;
          v15 = (*v14)();
          if ( !v15 )
          {
            v16 = dev_ctrl(0);
            (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v16 + 28))(
              *(_DWORD *)(*v12 + 240),
              *(_DWORD *)(*v12 + 980),
              *(_DWORD *)(*v12 + 1000));
            (*(void (**)(void))(*v12 + 216))();
          }
        }
        if ( v15 )
          return v15;
      }
      check_and_destroy_abnormal_runtime();
      v27 = (int *)get_all_created_runtime(&v43);
      if ( v43 <= 0 )
      {
        V_LOCK();
        LOWORD(v41) = -16764;
        HIWORD(v41) = (unsigned int)"e work to open cores" >> 16;
        v15 = 12;
        logfmt_raw((char *)&v44, 0x1000u, 0, v41);
        V_UNLOCK();
        LOWORD(v42) = -14932;
        HIWORD(v42) = (unsigned int)"%d, set voltage to %d" >> 16;
        zlog(g_zc, v42, 169, "start_mining_base", 17, 807, 100, &v44);
      }
      else
      {
        v15 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 84));
        if ( !v15 )
        {
          (*(void (__fastcall **)(int))(a1 + 64))(a1);
          if ( *(_DWORD *)(a1 + 72) != 9 )
          {
            V_LOCK();
            LOWORD(v37) = -16696;
            HIWORD(v37) = (unsigned int)"eck abnormal runtime!" >> 16;
            logfmt_raw((char *)&v44, 0x1000u, 0, v37, *(_DWORD *)(a1 + 92));
            V_UNLOCK();
            LOWORD(v38) = -14932;
            HIWORD(v38) = (unsigned int)"%d, set voltage to %d" >> 16;
            zlog(g_zc, v38, 169, "start_mining_base", 17, 823, 60, &v44);
          }
          v28 = (*(int (__fastcall **)(_DWORD))(a1 + 24))(*(_DWORD *)(a1 + 92));
          fan_pwm_set(v28);
          if ( v43 > 0 )
          {
            v29 = v27 - 1;
            v30 = 0;
            do
            {
              v31 = v29[1];
              ++v29;
              ++v30;
              redirect_nonce_output(*v27, v31);
              (*(void (**)(void))(*v29 + 224))();
              v32 = v43;
            }
            while ( v43 > v30 );
            if ( *(_DWORD *)(a1 + 72) != 9 )
            {
LABEL_32:
              if ( v32 > 0 )
              {
                v34 = v27 - 1;
                v35 = 0;
                do
                {
                  v36 = v34[1];
                  ++v34;
                  ++v35;
                  (*(void (**)(void))(v36 + 4))();
                  (*(void (**)(void))(*v34 + 120))();
                  (*(void (**)(void))(*v34 + 16))();
                }
                while ( v43 > v35 );
              }
              return v15;
            }
LABEL_31:
            (*(void (__fastcall **)(int))(a1 + 64))(a1);
            V_LOCK();
            logfmt_raw((char *)&v44, 0x1000u, 0, "check bringup temperature %d C", *(_DWORD *)(a1 + 92));
            V_UNLOCK();
            LOWORD(v33) = -14932;
            HIWORD(v33) = (unsigned int)"%d, set voltage to %d" >> 16;
            zlog(g_zc, v33, 169, "start_mining_base", 17, 839, 60, &v44);
            v32 = v43;
            goto LABEL_32;
          }
          if ( *(_DWORD *)(a1 + 72) == 9 )
            goto LABEL_31;
        }
      }
      return v15;
    }
    return start_heartbeat_thread();
  }
}
