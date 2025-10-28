int __fastcall start_mining_ks5(int a1)
{
  int v1; // r4
  _DWORD *all_created_runtime; // r0
  _DWORD *v4; // r6
  _DWORD *v5; // r9
  int v6; // t1
  int v7; // r0
  int v8; // r3
  int v9; // r3
  int started; // r10
  _DWORD *v11; // r4
  int (**v12)(void); // t1
  int v13; // r0
  int v14; // r9
  int v15; // r0
  int v16; // r11
  int *v17; // r8
  unsigned int v18; // r0
  int *v19; // r9
  int i; // r4
  int v21; // t1
  int v22; // r9
  _DWORD *v23; // r6
  int *v24; // r10
  int v25; // r4
  int v26; // r3
  int v27; // t1
  int v28; // t1
  int *v29; // r8
  int j; // r4
  int v31; // t1
  int v33; // r1
  const char *v34; // r0
  int v35; // r3
  int v36; // r2
  int v37; // r3
  int v38; // r1
  int v39; // r3
  int v40; // r3
  int v41; // [sp+1Ch] [bp-1008h] BYREF
  char v42[4100]; // [sp+20h] [bp-1004h] BYREF

  v1 = 0;
  v41 = 0;
  all_created_runtime = get_all_created_runtime(&v41);
  v4 = all_created_runtime;
  if ( v41 > 0 )
  {
    if ( !*all_created_runtime )
    {
LABEL_32:
      LOWORD(v33) = -16896;
      LOWORD(v34) = 28808;
      HIWORD(v33) = (unsigned int)" have been poweroff." >> 16;
      HIWORD(v34) = (unsigned int)"." >> 16;
      printf(v34, v33);
      return 3;
    }
    v5 = all_created_runtime;
    while ( 1 )
    {
      v7 = dev_ctrl(all_created_runtime);
      all_created_runtime = (_DWORD *)(*(int (__fastcall **)(int))(v7 + 32))(v1++);
      if ( v41 <= v1 )
        break;
      v6 = v5[1];
      ++v5;
      if ( !v6 )
        goto LABEL_32;
    }
  }
  V_LOCK();
  LOWORD(v8) = -16940;
  HIWORD(v8) = (unsigned int)"ine_runtime_kas_2380.c" >> 16;
  logfmt_raw(v42, 0x1000u, 0, v8);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
    182,
    "start_mining_ks5",
    16,
    145,
    60,
    v42);
  if ( support_of_sleepmode(*(_DWORD *)(a1 + 72)) && opt_custom_power_mode == 1 )
  {
    V_LOCK();
    LOWORD(v39) = -16880;
    HIWORD(v39) = (unsigned int)"off." >> 16;
    logfmt_raw(v42, 0x1000u, 0, v39);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
      182,
      "start_mining_ks5",
      16,
      153,
      60,
      v42);
  }
  if ( power_init(0, v41) )
  {
    V_LOCK();
    LOWORD(v35) = -16868;
    HIWORD(v35) = (unsigned int)"untimes[c]" >> 16;
    logfmt_raw(v42, 0x1000u, 0, v35);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
      182,
      "start_mining_ks5",
      16,
      156,
      100,
      v42);
    V_LOCK();
    LOWORD(v36) = 28468;
    LOWORD(v37) = 27800;
    HIWORD(v36) = (unsigned int)"%s, power has not init!" >> 16;
    HIWORD(v37) = (unsigned int)"r" >> 16;
    logfmt_raw(v42, 0x1000u, 0, v37, v36);
    V_UNLOCK();
    LOWORD(v38) = -16096;
    HIWORD(v38) = (unsigned int)"uency_with_voltage_ks5" >> 16;
    zlog(g_zc, v38, 182, "start_mining_ks5", 16, 157, 100, v42);
    return 30;
  }
  else
  {
    V_LOCK();
    LOWORD(v9) = -16824;
    HIWORD(v9) = (unsigned int)" check PSU please <<" >> 16;
    logfmt_raw(v42, 0x1000u, 0, v9);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
      182,
      "start_mining_ks5",
      16,
      160,
      40,
      v42);
    started = start_heartbeat_thread();
    if ( started )
      return start_heartbeat_thread();
    (*(void (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 80));
    if ( v41 > 0 )
    {
      v11 = v4 - 1;
      do
      {
        v12 = (int (**)(void))v11[1];
        ++v11;
        v13 = (*v12)();
        if ( !v13 )
        {
          v14 = 3;
          do
          {
            v15 = dev_ctrl(v13);
            (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v15 + 28))(
              *(_DWORD *)(*v11 + 240),
              *(_DWORD *)(*v11 + 980),
              *(_DWORD *)(*v11 + 1000));
            v16 = (*(int (**)(void))(*v11 + 204))();
            v13 = (*(int (**)(void))(*v11 + 216))();
            if ( !v16 )
              break;
            --v14;
          }
          while ( v14 );
        }
        ++started;
      }
      while ( v41 > started );
    }
    check_and_destroy_abnormal_runtime();
    v17 = (int *)get_all_created_runtime(&v41);
    if ( v41 <= 0 )
    {
      V_LOCK();
      LOWORD(v40) = -16764;
      HIWORD(v40) = (unsigned int)"e work to open cores" >> 16;
      v22 = 12;
      logfmt_raw(v42, 0x1000u, 0, v40);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
        182,
        "start_mining_ks5",
        16,
        188,
        100,
        v42);
    }
    else
    {
      (*(void (__fastcall **)(int))(a1 + 64))(a1);
      V_LOCK();
      logfmt_raw(v42, 0x1000u, 0, "check bringup temperature %d C", *(_DWORD *)(a1 + 92));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
        182,
        "start_mining_ks5",
        16,
        194,
        60,
        v42);
      check_if_bringup_temp_too_low(a1);
      v18 = (*(int (__fastcall **)(_DWORD))(a1 + 24))(*(_DWORD *)(a1 + 92));
      fan_pwm_set(v18);
      if ( v41 > 0 )
      {
        v19 = v17 - 1;
        for ( i = 0; i < v41; ++i )
        {
          v21 = v19[1];
          ++v19;
          redirect_nonce_output(*v17, v21);
          (*(void (**)(void))(*v19 + 224))();
        }
      }
      v22 = (*(int (__fastcall **)(int))(a1 + 44))(a1);
      if ( v41 > 0 )
      {
        v23 = v4 - 1;
        v24 = v17 - 1;
        v25 = 0;
        do
        {
          v27 = v23[1];
          ++v23;
          v26 = v27;
          ++v25;
          v28 = v24[1];
          ++v24;
          (*(void (__fastcall **)(int))(v26 + 56))(v28);
        }
        while ( v41 > v25 );
      }
      if ( !v22 )
      {
        v22 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 84));
        if ( !v22 && v41 > 0 )
        {
          v29 = v17 - 1;
          for ( j = 0; j < v41; ++j )
          {
            v31 = v29[1];
            ++v29;
            (*(void (**)(void))(v31 + 120))();
            (*(void (**)(void))(*v29 + 16))();
          }
        }
      }
    }
    return v22;
  }
}
