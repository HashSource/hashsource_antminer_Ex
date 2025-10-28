int __fastcall start_mining_ks5(int a1)
{
  int (**v2)(); // r0
  int (**v3)(); // r0
  _BYTE v6[36]; // [sp+18h] [bp-1024h] BYREF
  int v7; // [sp+1018h] [bp-24h] BYREF
  unsigned int v8; // [sp+101Ch] [bp-20h]
  int *v9; // [sp+1020h] [bp-1Ch]
  int j; // [sp+1024h] [bp-18h]
  int v11; // [sp+1028h] [bp-14h]
  _DWORD *all_created_runtime; // [sp+102Ch] [bp-10h]
  int i; // [sp+1030h] [bp-Ch]
  char v14; // [sp+1036h] [bp-6h]
  char v15; // [sp+1037h] [bp-5h]

  v11 = 0;
  v7 = 0;
  all_created_runtime = get_all_created_runtime(&v7);
  for ( i = 0; i < v7; ++i )
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
  logfmt_raw(v6, 0x1000u, 0, "all backend runtimes have been poweroff.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
    179,
    "start_mining_ks5",
    16,
    145,
    60,
    v6);
  v14 = 0;
  if ( support_of_sleepmode(*(_DWORD *)(a1 + 72)) && opt_custom_power_mode == 1 )
  {
    v15 = 1;
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "sleep on!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
      179,
      "start_mining_ks5",
      16,
      153,
      60,
      v6);
  }
  if ( power_init(v14, v7) )
  {
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, ">> power init error, check PSU please <<");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
      179,
      "start_mining_ks5",
      16,
      156,
      100,
      v6);
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "Sweep error string = %s.", "V:1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
      179,
      "start_mining_ks5",
      16,
      157,
      100,
      v6);
    return 30;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, ">> power init success <<");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
      179,
      "start_mining_ks5",
      16,
      160,
      40,
      v6);
    if ( start_heartbeat_thread() )
    {
      return start_heartbeat_thread();
    }
    else
    {
      (*(void (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 80));
      for ( i = 0; i < v7; ++i )
      {
        v11 = (*(int (__fastcall **)(_DWORD))all_created_runtime[i])(all_created_runtime[i]);
        if ( !v11 )
        {
          for ( j = 0; j <= 2; ++j )
          {
            v3 = dev_ctrl();
            ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))v3[7])(
              *(_DWORD *)(all_created_runtime[i] + 264),
              *(_DWORD *)(all_created_runtime[i] + 1036),
              *(_DWORD *)(all_created_runtime[i] + 1056));
            v11 = (*(int (__fastcall **)(_DWORD))(all_created_runtime[i] + 220))(all_created_runtime[i]);
            (*(void (__fastcall **)(_DWORD))(all_created_runtime[i] + 232))(all_created_runtime[i]);
            if ( !v11 )
              break;
          }
        }
      }
      check_and_destroy_abnormal_runtime();
      v9 = (int *)get_all_created_runtime(&v7);
      if ( v7 > 0 )
      {
        (*(void (__fastcall **)(int))(a1 + 64))(a1);
        V_LOCK();
        logfmt_raw(v6, 0x1000u, 0, "check bringup temperature %d C", *(_DWORD *)(a1 + 92));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
          179,
          "start_mining_ks5",
          16,
          194,
          60,
          v6);
        check_if_bringup_temp_too_low(a1);
        v8 = (*(int (__fastcall **)(_DWORD))(a1 + 24))(*(_DWORD *)(a1 + 92));
        fan_pwm_set(v8);
        for ( i = 0; i < v7; ++i )
        {
          redirect_nonce_output(*v9, v9[i]);
          (*(void (__fastcall **)(int))(v9[i] + 240))(v9[i]);
        }
        v11 = (*(int (__fastcall **)(int))(a1 + 44))(a1);
        for ( i = 0; i < v7; ++i )
          (*(void (__fastcall **)(int))(all_created_runtime[i] + 60))(v9[i]);
        if ( v11 )
        {
          return v11;
        }
        else
        {
          v11 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 84));
          if ( v11 )
          {
            return v11;
          }
          else
          {
            for ( i = 0; i < v7; ++i )
            {
              (*(void (__fastcall **)(int, _DWORD))(v9[i] + 136))(v9[i], *(_DWORD *)(a1 + 76));
              (*(void (__fastcall **)(int))(v9[i] + 16))(v9[i]);
            }
            return v11;
          }
        }
      }
      else
      {
        V_LOCK();
        logfmt_raw(v6, 0x1000u, 0, "there is no qualified device remain after check abnormal runtime!");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
          179,
          "start_mining_ks5",
          16,
          188,
          100,
          v6);
        return 12;
      }
    }
  }
}
