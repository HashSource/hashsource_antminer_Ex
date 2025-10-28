int __fastcall start_mining_base(int a1)
{
  int (**v2)(); // r0
  int (__fastcall *v3)(int, int); // r4
  int v4; // r0
  int (**v5)(); // r0
  __int64 v6; // r0
  __int64 v7; // r0
  _BYTE v10[44]; // [sp+18h] [bp-102Ch] BYREF
  int v11; // [sp+1018h] [bp-2Ch] BYREF
  unsigned int v12; // [sp+101Ch] [bp-28h]
  int *v13; // [sp+1020h] [bp-24h]
  int j; // [sp+1024h] [bp-20h]
  int v15; // [sp+1028h] [bp-1Ch]
  _DWORD *all_created_runtime; // [sp+102Ch] [bp-18h]
  int i; // [sp+1030h] [bp-14h]
  int v18; // [sp+1034h] [bp-10h]

  v15 = 0;
  v11 = 0;
  all_created_runtime = get_all_created_runtime(&v11);
  v18 = 3;
  for ( i = 0; i < v11; ++i )
  {
    if ( !all_created_runtime[i] )
    {
      printf("invalid pointer(%s)!\n", "be_runtimes[c]");
      return 3;
    }
    v2 = dev_ctrl();
    ((void (__fastcall *)(int))v2[8])(i);
  }
  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, "all backend runtimes have been poweroff.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/machine_runtime_base.c",
    166,
    "start_mining_base",
    17,
    807,
    60,
    v10);
  if ( support_of_sleepmode(*(_DWORD *)(a1 + 72)) && opt_custom_power_mode == 1 )
  {
    byte_5AD338 = 1;
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, "sleep on!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "start_mining_base",
      17,
      813,
      60,
      v10);
  }
  if ( power_init(byte_5AD338, v11) )
  {
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, ">> power init error, check PSU please <<");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "start_mining_base",
      17,
      816,
      100,
      v10);
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, "Sweep error string = %s.", "V:1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "start_mining_base",
      17,
      817,
      100,
      v10);
    return 30;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, ">> power init success <<");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "start_mining_base",
      17,
      820,
      40,
      v10);
    if ( start_heartbeat_thread() )
    {
      return start_heartbeat_thread();
    }
    else if ( opt_algo == 9
           && (v3 = *(int (__fastcall **)(int, int))(a1 + 28),
               v4 = platfrom_get_check_asic_voltage(),
               (v15 = v3(a1, v4)) != 0) )
    {
      return v15;
    }
    else
    {
      (*(void (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 80));
      for ( i = 0; i < v11; ++i )
      {
        v15 = (*(int (__fastcall **)(_DWORD))all_created_runtime[i])(all_created_runtime[i]);
        if ( !v15 )
        {
          if ( opt_algo == 7 )
            v18 = 1;
          for ( j = 0; j < v18; ++j )
          {
            v5 = dev_ctrl();
            ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))v5[7])(
              *(_DWORD *)(all_created_runtime[i] + 264),
              *(_DWORD *)(all_created_runtime[i] + 1036),
              *(_DWORD *)(all_created_runtime[i] + 1056));
            (*(void (__fastcall **)(_DWORD))(all_created_runtime[i] + 232))(all_created_runtime[i]);
            v15 = (*(int (__fastcall **)(_DWORD))(all_created_runtime[i] + 220))(all_created_runtime[i]);
            if ( v15 )
              break;
          }
        }
      }
      check_and_destroy_abnormal_runtime();
      v13 = (int *)get_all_created_runtime(&v11);
      if ( v11 > 0 )
      {
        if ( opt_algo == 7 )
        {
          (*(void (__fastcall **)(int, int))(a1 + 28))(a1, 690);
          sleep(0xAu);
          (*(void (__fastcall **)(int, int))(a1 + 28))(a1, 700);
          sleep(0xAu);
          (*(void (__fastcall **)(int, int))(a1 + 28))(a1, 710);
          sleep(0xAu);
          (*(void (__fastcall **)(int, int))(a1 + 28))(a1, 720);
        }
        if ( *(_DWORD *)(a1 + 72) == 7
          || (v15 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 84))) == 0 )
        {
          (*(void (__fastcall **)(int))(a1 + 64))(a1);
          if ( *(_DWORD *)(a1 + 72) != 9 )
          {
            V_LOCK();
            logfmt_raw(v10, 0x1000u, 0, "check bringup temperature %d C", *(_DWORD *)(a1 + 92));
            V_UNLOCK();
            v6 = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/go"
                   "dminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                   166,
                   "start_mining_base",
                   17,
                   885,
                   60,
                   v10);
          }
          v12 = (*(int (__fastcall **)(_DWORD, _DWORD))(a1 + 24))(*(_DWORD *)(a1 + 92), HIDWORD(v6));
          fan_pwm_set(v12);
          for ( i = 0; i < v11; ++i )
          {
            redirect_nonce_output(*v13, v13[i]);
            (*(void (__fastcall **)(int))(v13[i] + 240))(v13[i]);
          }
          if ( *(_DWORD *)(a1 + 72) == 9 )
          {
            (*(void (__fastcall **)(int))(a1 + 64))(a1);
            V_LOCK();
            logfmt_raw(v10, 0x1000u, 0, "check bringup temperature %d C", *(_DWORD *)(a1 + 92));
            V_UNLOCK();
            v7 = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/go"
                   "dminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                   166,
                   "start_mining_base",
                   17,
                   901,
                   60,
                   v10);
          }
          if ( *(_DWORD *)(a1 + 72) == 7 || (v15 = (*(int (__fastcall **)(int, _DWORD))(a1 + 44))(a1, HIDWORD(v7))) == 0 )
          {
            if ( *(_DWORD *)(a1 + 72) == 7 )
            {
              if ( *(int *)(a1 + 92) >= 0 )
              {
                low_temp_start_up = 0;
                has_re_dag_gen = 1;
                ready_to_restart_dag_gen = 0;
                case_select = 100;
                printf(
                  "set freq_select: %d, low_temp_start_up: %d, has_re_dag_gen: %d, ready_to_restart_dag_gen: %d\n",
                  (unsigned __int16)freq_select,
                  0,
                  1,
                  0);
              }
              else
              {
                V_LOCK();
                logfmt_raw(
                  v10,
                  0x1000u,
                  0,
                  "bringup temp: %d is lower than 0C, set freq_select: %d, case_select: %d",
                  *(_DWORD *)(a1 + 92),
                  (unsigned __int16)freq_select,
                  (unsigned __int8)case_select);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                  166,
                  "start_mining_base",
                  17,
                  924,
                  40,
                  v10);
                low_temp_start_up = 1;
                has_re_dag_gen = 1;
                ready_to_restart_dag_gen = 0;
                case_select = 100;
                (*(void (__fastcall **)(int, int))(a1 + 28))(a1, 690);
                sleep(0xFu);
                (*(void (__fastcall **)(int, int))(a1 + 28))(a1, 700);
                sleep(0xFu);
                (*(void (__fastcall **)(int, int))(a1 + 28))(a1, 710);
                sleep(0xFu);
                (*(void (__fastcall **)(int, int))(a1 + 28))(a1, 720);
              }
            }
            for ( i = 0; i < v11; ++i )
            {
              (*(void (__fastcall **)(int))(v13[i] + 4))(v13[i]);
              (*(void (__fastcall **)(int, _DWORD))(v13[i] + 136))(v13[i], *(_DWORD *)(a1 + 76));
              (*(void (__fastcall **)(int))(v13[i] + 16))(v13[i]);
            }
            return v15;
          }
          else
          {
            return v15;
          }
        }
        else
        {
          return v15;
        }
      }
      else
      {
        V_LOCK();
        logfmt_raw(v10, 0x1000u, 0, "there is no qualified device remain after check abnormal runtime!");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/machine_runtime/machine_runtime_base.c",
          166,
          "start_mining_base",
          17,
          856,
          100,
          v10);
        return 12;
      }
    }
  }
}
