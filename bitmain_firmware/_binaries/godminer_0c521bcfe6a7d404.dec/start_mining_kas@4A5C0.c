int __fastcall start_mining_kas(int a1)
{
  int v1; // r4
  _DWORD *all_created_runtime; // r0
  _DWORD *v4; // r10
  _DWORD *v5; // r6
  int v6; // t1
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int started; // r0
  int v14; // r9
  _DWORD *v15; // r4
  int i; // r6
  int v17; // t1
  unsigned int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  _DWORD *v22; // r4
  int (**v23)(void); // t1
  int v24; // r6
  int v25; // r0
  int v26; // r11
  int v27; // r0
  _DWORD *v28; // r6
  int v29; // r0
  int v30; // r0
  int v31; // r9
  int v32; // r0
  int v33; // r11
  int v34; // r3
  int v35; // r4
  int v36; // t1
  int v37; // r0
  _DWORD *v38; // r8
  int j; // r4
  int v40; // t1
  int v41; // r4
  _DWORD *v42; // r10
  _DWORD *v43; // r9
  int v44; // r8
  int v45; // r3
  int v46; // t1
  int v47; // t1
  _DWORD *v48; // r6
  int k; // r8
  int v50; // t1
  int v52; // r0
  int v53; // r0
  int v54; // r0
  int v55; // r0
  int v56; // r4
  int v57; // r0
  int v58; // r0
  int v59; // r0
  int v60; // t1
  int v61; // r0
  int v62; // r0
  int v63; // [sp+18h] [bp-100Ch] BYREF
  int v64; // [sp+1Ch] [bp-1008h] BYREF
  _DWORD v65[13]; // [sp+20h] [bp-1004h] BYREF
  __int16 v66; // [sp+54h] [bp-FD0h]

  v1 = 0;
  v63 = 0;
  all_created_runtime = (_DWORD *)get_all_created_runtime(&v63);
  v4 = all_created_runtime;
  if ( v63 > 0 )
  {
    if ( !*all_created_runtime )
    {
LABEL_46:
      v41 = 3;
      printf(aInvalidPointer, "be_runtimes[c]");
      return v41;
    }
    v5 = all_created_runtime;
    while ( 1 )
    {
      v7 = dev_ctrl(all_created_runtime);
      all_created_runtime = (_DWORD *)(*(int (__fastcall **)(int))(v7 + 28))(v1++);
      if ( v63 <= v1 )
        break;
      v6 = v5[1];
      ++v5;
      if ( !v6 )
        goto LABEL_46;
    }
  }
  V_LOCK(all_created_runtime);
  v8 = logfmt_raw((int)v65, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
    182,
    "start_mining_kas",
    16,
    130,
    60,
    v65);
  v9 = support_of_sleepmode(*(_DWORD *)(a1 + 64));
  if ( v9 && opt_custom_power_mode == 1 )
  {
    V_LOCK(v9);
    v55 = logfmt_raw((int)v65, 0x1000u);
    V_UNLOCK(v55);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
      182,
      "start_mining_kas",
      16,
      138,
      60,
      v65);
  }
  v10 = power_init(0, v63);
  if ( v10 )
  {
    V_LOCK(v10);
    v52 = logfmt_raw((int)v65, 0x1000u);
    V_UNLOCK(v52);
    v53 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
            182,
            "start_mining_kas",
            16,
            141,
            100,
            v65);
    V_LOCK(v53);
    v54 = logfmt_raw((int)v65, 0x1000u);
    V_UNLOCK(v54);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
      182,
      "start_mining_kas",
      16,
      142,
      100,
      v65);
    return 30;
  }
  else
  {
    V_LOCK(0);
    v11 = logfmt_raw((int)v65, 0x1000u);
    V_UNLOCK(v11);
    v12 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
            182,
            "start_mining_kas",
            16,
            145,
            40,
            v65);
    started = start_heartbeat_thread(v12);
    if ( !started )
    {
      v14 = 10;
      puts("send fake work to open cores");
      do
      {
        usleep((__useconds_t)&stru_1869C.st_value);
        if ( v63 > 0 )
        {
          v15 = v4 - 1;
          for ( i = 0; i < v63; ++i )
          {
            v65[0] = 53520981;
            v65[1] = -1996423168;
            v65[2] = 1568885659;
            v65[3] = -2022340884;
            v65[4] = 739994112;
            v65[5] = 2023104256;
            v65[6] = 504402544;
            v65[7] = 232286627;
            v65[8] = 1496646687;
            v65[9] = 295890251;
            v65[10] = 1890778236;
            v65[11] = 60442;
            v65[12] = 0;
            v66 = 13171;
            v17 = v15[1];
            ++v15;
            v18 = pthread_mutex_lock((pthread_mutex_t *)(v17 + 896));
            do
            {
              v19 = dev_ctrl(v18);
              v18 = (*(int (__fastcall **)(_DWORD))(v19 + 68))(*(_DWORD *)(*v15 + 220));
            }
            while ( v18 <= 0x35 );
            v20 = dev_ctrl(v18);
            (*(void (__fastcall **)(_DWORD, _DWORD *, int))(v20 + 52))(*(_DWORD *)(*v15 + 220), v65, 54);
            pthread_mutex_unlock((pthread_mutex_t *)(*v15 + 896));
          }
        }
        --v14;
      }
      while ( v14 );
      v21 = (*(int (__fastcall **)(int, _DWORD))(a1 + 32))(a1, *(_DWORD *)(a1 + 72));
      if ( v63 > 0 )
      {
        v22 = v4 - 1;
        do
        {
          v23 = (int (**)(void))v22[1];
          ++v22;
          v21 = (*v23)();
          if ( !v21 )
          {
            v24 = 3;
            do
            {
              v25 = dev_ctrl(v21);
              (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v25 + 24))(
                *(_DWORD *)(*v22 + 220),
                *(_DWORD *)(*v22 + 928),
                *(_DWORD *)(*v22 + 952));
              v26 = (*(int (**)(void))(*v22 + 196))();
              v21 = (*(int (**)(void))(*v22 + 208))();
              if ( !v26 )
                break;
              --v24;
            }
            while ( v24 );
          }
          ++v14;
        }
        while ( v63 > v14 );
      }
      check_and_destroy_abnormal_runtime(v21);
      v27 = get_all_created_runtime(&v63);
      v28 = (_DWORD *)v27;
      if ( v63 <= 0 )
      {
        V_LOCK(v27);
        v41 = 12;
        v61 = logfmt_raw((int)v65, 0x1000u);
        V_UNLOCK(v61);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
          182,
          "start_mining_kas",
          16,
          192,
          100,
          v65);
      }
      else
      {
        v29 = (*(int (__fastcall **)(int))(a1 + 56))(a1);
        V_LOCK(v29);
        v30 = logfmt_raw((int)v65, 0x1000u);
        V_UNLOCK(v30);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
          182,
          "start_mining_kas",
          16,
          198,
          60,
          v65);
        v31 = get_all_created_runtime(&v64);
        if ( v64 > 0 )
        {
          v32 = *(_DWORD *)(a1 + 84);
          if ( *(_DWORD *)(*(_DWORD *)v31 + 376) > v32 )
          {
            V_LOCK(v32);
            v62 = logfmt_raw((int)v65, 0x1000u);
            V_UNLOCK(v62);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
              182,
              "check_if_bringup_temp_too_low",
              29,
              102,
              100,
              v65);
          }
          else
          {
            v33 = v31;
            v34 = v31;
            v35 = 0;
            do
            {
              if ( ++v35 == v64 )
                goto LABEL_34;
              v36 = *(_DWORD *)(v34 + 4);
              v34 += 4;
            }
            while ( *(_DWORD *)(v36 + 376) <= v32 );
            V_LOCK(v32);
            v56 = v31 + 4 * v35;
            v57 = logfmt_raw((int)v65, 0x1000u);
            V_UNLOCK(v57);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
              182,
              "check_if_bringup_temp_too_low",
              29,
              102,
              100,
              v65);
            do
            {
              v58 = (*(int (**)(void))(*(_DWORD *)v33 + 20))();
              v59 = dev_ctrl(v58);
              v60 = *(_DWORD *)v33;
              v33 += 4;
              (*(void (__fastcall **)(_DWORD))(v59 + 28))(*(_DWORD *)(v60 + 220));
            }
            while ( v56 != v33 );
          }
          power_off();
          while ( 1 )
            sleep(1u);
        }
        v32 = *(_DWORD *)(a1 + 84);
LABEL_34:
        v37 = (*(int (__fastcall **)(int))(a1 + 24))(v32);
        fan_pwm_set(v37);
        if ( v63 > 0 )
        {
          v38 = v28 - 1;
          for ( j = 0; j < v63; ++j )
          {
            v40 = v38[1];
            ++v38;
            redirect_nonce_output(*v28, v40);
            (*(void (**)(void))(*v38 + 216))();
          }
        }
        v41 = (*(int (__fastcall **)(int))(a1 + 36))(a1);
        if ( v63 > 0 )
        {
          v42 = v4 - 1;
          v43 = v28 - 1;
          v44 = 0;
          do
          {
            v46 = v42[1];
            ++v42;
            v45 = v46;
            ++v44;
            v47 = v43[1];
            ++v43;
            (*(void (__fastcall **)(int))(v45 + 56))(v47);
          }
          while ( v63 > v44 );
        }
        if ( !v41 )
        {
          v41 = (*(int (__fastcall **)(int, _DWORD))(a1 + 32))(a1, *(_DWORD *)(a1 + 76));
          if ( !v41 && v63 > 0 )
          {
            v48 = v28 - 1;
            for ( k = 0; k < v63; ++k )
            {
              v50 = v48[1];
              ++v48;
              (*(void (**)(void))(v50 + 120))();
              (*(void (**)(void))(*v48 + 16))();
            }
          }
        }
      }
      return v41;
    }
    return start_heartbeat_thread(started);
  }
}
