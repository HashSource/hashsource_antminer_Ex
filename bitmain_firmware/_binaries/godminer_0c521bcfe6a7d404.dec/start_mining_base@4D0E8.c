int __fastcall start_mining_base(int a1)
{
  int v1; // r4
  _DWORD *all_created_runtime; // r0
  _DWORD *v4; // r5
  _DWORD *v5; // r6
  int v6; // t1
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int started; // r0
  int v14; // r0
  _DWORD *v15; // r5
  int i; // r10
  int (**v17)(void); // t1
  int v18; // r4
  int v19; // r6
  int v20; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  _DWORD *v27; // r6
  int v28; // r0
  int v29; // r0
  _DWORD *v30; // r5
  int j; // r4
  int v32; // t1
  int v33; // r0
  int v34; // r0
  _DWORD *v35; // r5
  int v36; // r6
  int v37; // t1
  int v38; // r0
  int (__fastcall *v39)(int, int); // r4
  int v40; // r0
  int v41; // r0
  int v42; // [sp+14h] [bp-4h] BYREF
  _BYTE v43[4100]; // [sp+18h] [bp+0h] BYREF

  v1 = 0;
  v42 = 0;
  all_created_runtime = (_DWORD *)get_all_created_runtime(&v42);
  v4 = all_created_runtime;
  if ( v42 > 0 )
  {
    if ( !*all_created_runtime )
    {
LABEL_22:
      printf(aInvalidPointer, "be_runtimes[c]");
      return 3;
    }
    v5 = all_created_runtime;
    while ( 1 )
    {
      v7 = dev_ctrl(all_created_runtime);
      all_created_runtime = (_DWORD *)(*(int (__fastcall **)(int))(v7 + 28))(v1++);
      if ( v42 <= v1 )
        break;
      v6 = v5[1];
      ++v5;
      if ( !v6 )
        goto LABEL_22;
    }
  }
  V_LOCK(all_created_runtime);
  v8 = logfmt_raw((int)v43, 0x1000u);
  V_UNLOCK(v8);
  v9 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-"
         "origin_godminer-new/machine_runtime/machine_runtime_base.c",
         169,
         "start_mining_base",
         17,
         692,
         60,
         v43);
  if ( *(_DWORD *)(a1 + 64) <= 5u && opt_custom_power_mode == 1 )
  {
    byte_1740E0 = 1;
    V_LOCK(v9);
    v22 = logfmt_raw((int)v43, 0x1000u);
    V_UNLOCK(v22);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/machine_runtime/machine_runtime_base.c",
      169,
      "start_mining_base",
      17,
      698,
      60,
      v43);
  }
  v10 = power_init((unsigned __int8)byte_1740E0, v42);
  if ( v10 )
  {
    V_LOCK(v10);
    v23 = logfmt_raw((int)v43, 0x1000u);
    V_UNLOCK(v23);
    v24 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/machine_runtime/machine_runtime_base.c",
            169,
            "start_mining_base",
            17,
            701,
            100,
            v43);
    V_LOCK(v24);
    v25 = logfmt_raw((int)v43, 0x1000u);
    V_UNLOCK(v25);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/machine_runtime/machine_runtime_base.c",
      169,
      "start_mining_base",
      17,
      702,
      100,
      v43);
    return 30;
  }
  else
  {
    V_LOCK(0);
    v11 = logfmt_raw((int)v43, 0x1000u);
    V_UNLOCK(v11);
    v12 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/machine_runtime/machine_runtime_base.c",
            169,
            "start_mining_base",
            17,
            705,
            40,
            v43);
    started = start_heartbeat_thread(v12);
    if ( started )
    {
      return start_heartbeat_thread(started);
    }
    else
    {
      if ( opt_algo != 9
        || (v39 = *(int (__fastcall **)(int, int))(a1 + 28),
            v40 = platfrom_get_check_asic_voltage(),
            (v18 = v39(a1, v40)) == 0) )
      {
        v14 = (*(int (__fastcall **)(int, _DWORD))(a1 + 32))(a1, *(_DWORD *)(a1 + 72));
        if ( v42 <= 0 )
          goto LABEL_24;
        v15 = v4 - 1;
        for ( i = 0; i < v42; ++i )
        {
          v17 = (int (**)(void))v15[1];
          ++v15;
          v14 = (*v17)();
          v18 = v14;
          if ( !v14 )
          {
            v19 = 3;
            do
            {
              v20 = dev_ctrl(v14);
              (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v20 + 24))(
                *(_DWORD *)(*v15 + 220),
                *(_DWORD *)(*v15 + 928),
                *(_DWORD *)(*v15 + 952));
              (*(void (**)(void))(*v15 + 208))();
              v14 = (*(int (**)(void))(*v15 + 196))();
              --v19;
              v18 |= v14;
            }
            while ( v19 );
          }
        }
        if ( !v18 )
        {
LABEL_24:
          check_and_destroy_abnormal_runtime(v14);
          v26 = get_all_created_runtime(&v42);
          v27 = (_DWORD *)v26;
          if ( v42 <= 0 )
          {
            V_LOCK(v26);
            v18 = 12;
            v41 = logfmt_raw((int)v43, 0x1000u);
            V_UNLOCK(v41);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/machine_runtime/machine_runtime_base.c",
              169,
              "start_mining_base",
              17,
              736,
              100,
              v43);
          }
          else
          {
            v18 = (*(int (__fastcall **)(int, _DWORD))(a1 + 32))(a1, *(_DWORD *)(a1 + 76));
            if ( !v18 )
            {
              v28 = (*(int (__fastcall **)(int))(a1 + 56))(a1);
              if ( *(_DWORD *)(a1 + 64) != 9 )
              {
                V_LOCK(v28);
                v38 = logfmt_raw((int)v43, 0x1000u);
                V_UNLOCK(v38);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/"
                  "godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                  169,
                  "start_mining_base",
                  17,
                  750,
                  60,
                  v43);
              }
              v29 = (*(int (__fastcall **)(_DWORD))(a1 + 24))(*(_DWORD *)(a1 + 84));
              fan_pwm_set(v29);
              if ( v42 > 0 )
              {
                v30 = v27 - 1;
                for ( j = 0; j < v42; ++j )
                {
                  v32 = v30[1];
                  ++v30;
                  redirect_nonce_output(*v27, v32);
                  (*(void (**)(void))(*v30 + 216))();
                }
              }
              if ( *(_DWORD *)(a1 + 64) == 9 )
              {
                v33 = (*(int (__fastcall **)(int))(a1 + 56))(a1);
                V_LOCK(v33);
                v34 = logfmt_raw((int)v43, 0x1000u);
                V_UNLOCK(v34);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/"
                  "godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                  169,
                  "start_mining_base",
                  17,
                  766,
                  60,
                  v43);
              }
              v18 = (*(int (__fastcall **)(int))(a1 + 36))(a1);
              if ( !v18 && v42 > 0 )
              {
                v35 = v27 - 1;
                v36 = 0;
                do
                {
                  v37 = v35[1];
                  ++v35;
                  ++v36;
                  (*(void (**)(void))(v37 + 4))();
                  (*(void (**)(void))(*v35 + 120))();
                  (*(void (**)(void))(*v35 + 16))();
                }
                while ( v42 > v36 );
              }
            }
          }
        }
      }
      return v18;
    }
  }
}
