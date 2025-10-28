int __fastcall start_mining_base(int a1)
{
  int v1; // r4
  _DWORD *all_created_runtime; // r0
  _DWORD *v4; // r6
  _DWORD *v5; // r9
  int v6; // t1
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int started; // r0
  int v14; // r10
  int v15; // r0
  _DWORD *v16; // r6
  int (**v17)(void); // t1
  int v18; // r4
  int v19; // r0
  int v20; // r0
  _DWORD *v21; // r8
  int v22; // r6
  int v23; // r0
  int v24; // r0
  int v25; // r0
  _DWORD *v26; // r4
  int v27; // t1
  _DWORD *v28; // r4
  int v29; // r8
  int v30; // t1
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // [sp+14h] [bp-1008h] BYREF
  _BYTE v38[4100]; // [sp+18h] [bp-1004h] BYREF

  v1 = 0;
  v37 = 0;
  all_created_runtime = (_DWORD *)get_all_created_runtime(&v37);
  v4 = all_created_runtime;
  if ( v37 > 0 )
  {
    if ( !*all_created_runtime )
    {
LABEL_29:
      printf("invalid pointer(%s)!\n", "be_runtimes[c]");
      return 3;
    }
    v5 = all_created_runtime;
    while ( 1 )
    {
      v7 = dev_ctrl(all_created_runtime);
      all_created_runtime = (_DWORD *)(*(int (__fastcall **)(int))(v7 + 28))(v1++);
      if ( v37 <= v1 )
        break;
      v6 = v5[1];
      ++v5;
      if ( !v6 )
        goto LABEL_29;
    }
  }
  V_LOCK(all_created_runtime);
  v8 = logfmt_raw((int)v38, 0x1000u);
  V_UNLOCK(v8);
  v9 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-orig"
         "in_godminer-new/machine_runtime/machine_runtime_base.c",
         165,
         "start_mining_base",
         17,
         473,
         60,
         v38);
  if ( *(_DWORD *)(a1 + 60) <= 5u && opt_custom_power_mode == 1 )
  {
    byte_165DC0 = 1;
    V_LOCK(v9);
    v32 = logfmt_raw((int)v38, 0x1000u);
    V_UNLOCK(v32);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/machine_runtime/machine_runtime_base.c",
      165,
      "start_mining_base",
      17,
      479,
      60,
      v38);
  }
  v10 = power_init((unsigned __int8)byte_165DC0);
  if ( v10 )
  {
    V_LOCK(v10);
    v33 = logfmt_raw((int)v38, 0x1000u);
    V_UNLOCK(v33);
    v34 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-o"
            "rigin_godminer-new/machine_runtime/machine_runtime_base.c",
            165,
            "start_mining_base",
            17,
            482,
            100,
            v38);
    V_LOCK(v34);
    v35 = logfmt_raw((int)v38, 0x1000u);
    V_UNLOCK(v35);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/machine_runtime/machine_runtime_base.c",
      165,
      "start_mining_base",
      17,
      483,
      100,
      v38);
    return 30;
  }
  else
  {
    V_LOCK(0);
    v11 = logfmt_raw((int)v38, 0x1000u);
    V_UNLOCK(v11);
    v12 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-o"
            "rigin_godminer-new/machine_runtime/machine_runtime_base.c",
            165,
            "start_mining_base",
            17,
            486,
            40,
            v38);
    started = start_heartbeat_thread(v12);
    v14 = started;
    if ( started )
      return start_heartbeat_thread(started);
    v15 = (*(int (__fastcall **)(int, _DWORD))(a1 + 28))(a1, *(_DWORD *)(a1 + 68));
    if ( v37 > 0 )
    {
      v16 = v4 - 1;
      do
      {
        v17 = (int (**)(void))v16[1];
        ++v16;
        v15 = (*v17)();
        if ( !v15 )
        {
          v18 = 3;
          do
          {
            v19 = dev_ctrl(v15);
            (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v19 + 24))(
              *(_DWORD *)(*v16 + 208),
              *(_DWORD *)(*v16 + 920),
              *(_DWORD *)(*v16 + 944));
            (*(void (**)(void))(*v16 + 200))();
            v15 = (*(int (**)(void))(*v16 + 192))();
            if ( !v15 )
              break;
            --v18;
          }
          while ( v18 );
        }
        ++v14;
      }
      while ( v37 > v14 );
    }
    check_and_destroy_abnormal_runtime(v15);
    v20 = get_all_created_runtime(&v37);
    v21 = (_DWORD *)v20;
    if ( v37 <= 0 )
    {
      V_LOCK(v20);
      v22 = 12;
      v36 = logfmt_raw((int)v38, 0x1000u);
      V_UNLOCK(v36);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/machine_runtime/machine_runtime_base.c",
        165,
        "start_mining_base",
        17,
        513,
        100,
        v38);
    }
    else
    {
      v22 = (*(int (__fastcall **)(int, _DWORD))(a1 + 28))(a1, *(_DWORD *)(a1 + 72));
      if ( !v22 )
      {
        v23 = (*(int (__fastcall **)(int))(a1 + 52))(a1);
        V_LOCK(v23);
        v24 = logfmt_raw((int)v38, 0x1000u);
        V_UNLOCK(v24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/machine_runtime/machine_runtime_base.c",
          165,
          "start_mining_base",
          17,
          523,
          60,
          v38);
        v25 = (*(int (__fastcall **)(_DWORD))(a1 + 20))(*(_DWORD *)(a1 + 80));
        fan_pwm_set(v25);
        if ( v37 > 0 )
        {
          v26 = v21 - 1;
          do
          {
            v27 = v26[1];
            ++v26;
            ++v22;
            redirect_nonce_output(*v21, v27);
            (*(void (**)(void))(*v26 + 204))();
          }
          while ( v37 > v22 );
        }
        v22 = (*(int (__fastcall **)(int))(a1 + 32))(a1);
        if ( !v22 && v37 > 0 )
        {
          v28 = v21 - 1;
          v29 = 0;
          do
          {
            v30 = v28[1];
            ++v28;
            ++v29;
            (*(void (**)(void))(v30 + 4))();
            (*(void (**)(void))(*v28 + 120))();
            (*(void (**)(void))(*v28 + 16))();
          }
          while ( v37 > v29 );
        }
      }
    }
    return v22;
  }
}
