int __fastcall start_mining_base(int a1)
{
  int v1; // r4
  _DWORD *all_created_runtime; // r0
  _DWORD *v4; // r6
  _DWORD *v5; // r5
  int v6; // t1
  int v7; // r0
  _DWORD *v8; // r6
  int i; // r4
  int (**v10)(void); // t1
  int v11; // r5
  int v12; // r0
  int *v14; // r4
  unsigned int v15; // r0
  int *v16; // r7
  int v17; // r6
  int v18; // t1
  int v19; // r3
  int *v20; // r4
  int v21; // r6
  int v22; // t1
  int (__fastcall *v23)(int, int); // r4
  int v24; // r0
  int v25; // [sp+14h] [bp-4h] BYREF
  int v26; // [sp+18h] [bp+0h] BYREF

  v1 = 0;
  v25 = 0;
  all_created_runtime = get_all_created_runtime(&v25);
  v4 = all_created_runtime;
  if ( v25 > 0 )
  {
    if ( !*all_created_runtime )
    {
LABEL_21:
      printf(aInvalidPointer, "be_runtimes[c]");
      return 3;
    }
    v5 = all_created_runtime;
    while ( 1 )
    {
      v7 = dev_ctrl(all_created_runtime);
      all_created_runtime = (_DWORD *)(*(int (__fastcall **)(int))(v7 + 32))(v1++);
      if ( v25 <= v1 )
        break;
      v6 = v5[1];
      ++v5;
      if ( !v6 )
        goto LABEL_21;
    }
  }
  V_LOCK();
  logfmt_raw((char *)&v26, 0x1000u, 0, "all backend runtimes have been poweroff.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/machine_runtime/machine_runtime_base.c",
    169,
    "start_mining_base",
    17,
    763,
    60,
    &v26);
  if ( *(_DWORD *)(a1 + 72) <= 5u && opt_custom_power_mode == 1 )
  {
    byte_195964 = 1;
    V_LOCK();
    logfmt_raw((char *)&v26, 0x1000u, 0, "sleep on!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/machine_runtime/machine_runtime_base.c",
      169,
      "start_mining_base",
      17,
      769,
      60,
      &v26);
  }
  if ( power_init((unsigned __int8)byte_195964, v25) )
  {
    V_LOCK();
    logfmt_raw((char *)&v26, 0x1000u, 0, ">> power init error, check PSU please <<");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/machine_runtime/machine_runtime_base.c",
      169,
      "start_mining_base",
      17,
      772,
      100,
      &v26);
    V_LOCK();
    logfmt_raw((char *)&v26, 0x1000u, 0, "Sweep error string = %s.", "V:1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/machine_runtime/machine_runtime_base.c",
      169,
      "start_mining_base",
      17,
      773,
      100,
      &v26);
    return 30;
  }
  else
  {
    V_LOCK();
    logfmt_raw((char *)&v26, 0x1000u, 0, ">> power init success <<");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/machine_runtime/machine_runtime_base.c",
      169,
      "start_mining_base",
      17,
      776,
      40,
      &v26);
    if ( !start_heartbeat_thread() )
    {
      if ( opt_algo == 9 )
      {
        v23 = *(int (__fastcall **)(int, int))(a1 + 28);
        v24 = platfrom_get_check_asic_voltage();
        v11 = v23(a1, v24);
        if ( v11 )
          return v11;
      }
      (*(void (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 80));
      if ( v25 > 0 )
      {
        v8 = v4 - 1;
        for ( i = 0; i < v25; ++i )
        {
          v10 = (int (**)(void))v8[1];
          ++v8;
          v11 = (*v10)();
          if ( !v11 )
          {
            v12 = dev_ctrl(0);
            (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v12 + 28))(
              *(_DWORD *)(*v8 + 240),
              *(_DWORD *)(*v8 + 980),
              *(_DWORD *)(*v8 + 1000));
            (*(void (**)(void))(*v8 + 216))();
          }
        }
        if ( v11 )
          return v11;
      }
      check_and_destroy_abnormal_runtime();
      v14 = (int *)get_all_created_runtime(&v25);
      if ( v25 <= 0 )
      {
        V_LOCK();
        v11 = 12;
        logfmt_raw((char *)&v26, 0x1000u, 0, "there is no qualified device remain after check abnormal runtime!");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/machine_runtime/machine_runtime_base.c",
          169,
          "start_mining_base",
          17,
          807,
          100,
          &v26);
      }
      else
      {
        v11 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 84));
        if ( !v11 )
        {
          (*(void (__fastcall **)(int))(a1 + 64))(a1);
          if ( *(_DWORD *)(a1 + 72) != 9 )
          {
            V_LOCK();
            logfmt_raw((char *)&v26, 0x1000u, 0, "check bringup temperature %d C", *(_DWORD *)(a1 + 92));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/machine_runtime/machine_runtime_base.c",
              169,
              "start_mining_base",
              17,
              823,
              60,
              &v26);
          }
          v15 = (*(int (__fastcall **)(_DWORD))(a1 + 24))(*(_DWORD *)(a1 + 92));
          fan_pwm_set(v15);
          if ( v25 > 0 )
          {
            v16 = v14 - 1;
            v17 = 0;
            do
            {
              v18 = v16[1];
              ++v16;
              ++v17;
              redirect_nonce_output(*v14, v18);
              (*(void (**)(void))(*v16 + 224))();
              v19 = v25;
            }
            while ( v25 > v17 );
            if ( *(_DWORD *)(a1 + 72) != 9 )
            {
LABEL_32:
              if ( v19 > 0 )
              {
                v20 = v14 - 1;
                v21 = 0;
                do
                {
                  v22 = v20[1];
                  ++v20;
                  ++v21;
                  (*(void (**)(void))(v22 + 4))();
                  (*(void (**)(void))(*v20 + 120))();
                  (*(void (**)(void))(*v20 + 16))();
                }
                while ( v25 > v21 );
              }
              return v11;
            }
LABEL_31:
            (*(void (__fastcall **)(int))(a1 + 64))(a1);
            V_LOCK();
            logfmt_raw((char *)&v26, 0x1000u, 0, "check bringup temperature %d C", *(_DWORD *)(a1 + 92));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/machine_runtime/machine_runtime_base.c",
              169,
              "start_mining_base",
              17,
              839,
              60,
              &v26);
            v19 = v25;
            goto LABEL_32;
          }
          if ( *(_DWORD *)(a1 + 72) == 9 )
            goto LABEL_31;
        }
      }
      return v11;
    }
    return start_heartbeat_thread();
  }
}
