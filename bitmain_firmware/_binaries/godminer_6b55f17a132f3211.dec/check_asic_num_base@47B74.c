int __fastcall check_asic_num_base(int a1)
{
  int v1; // r4
  _DWORD *all_created_runtime; // r0
  _DWORD *v4; // r5
  int v5; // t1
  int v6; // r0
  int v7; // r0
  int v8; // r8
  void *v9; // r0
  int v10; // r0
  int v11; // r0
  int i; // r4
  int v13; // r0
  int v14; // r0
  int v15; // r5
  _DWORD *v16; // r4
  int (**v17)(void); // t1
  int v18; // r6
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  _DWORD *v26; // [sp+18h] [bp-90h]
  int v27; // [sp+24h] [bp-84h] BYREF
  _DWORD v28[32]; // [sp+28h] [bp-80h] BYREF
  _BYTE v29[4100]; // [sp+A8h] [bp+0h] BYREF

  v1 = 0;
  v27 = 0;
  all_created_runtime = (_DWORD *)get_all_created_runtime(&v27);
  v26 = all_created_runtime;
  if ( v27 > 0 )
  {
    if ( !*all_created_runtime )
    {
LABEL_25:
      printf("invalid pointer(%s)!\n", "be_runtimes[c]");
      return 3;
    }
    v4 = all_created_runtime;
    while ( 1 )
    {
      v6 = dev_ctrl(all_created_runtime);
      all_created_runtime = (_DWORD *)(*(int (__fastcall **)(int))(v6 + 28))(v1++);
      if ( v27 <= v1 )
        break;
      v5 = v4[1];
      ++v4;
      if ( !v5 )
        goto LABEL_25;
    }
  }
  V_LOCK(all_created_runtime);
  v7 = logfmt_raw((int)v29, 0x1000u);
  V_UNLOCK(v7);
  v8 = 1;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/machine_runtime/machine_runtime_base.c",
    165,
    "check_asic_num_base",
    19,
    411,
    60,
    v29);
  v9 = memset(v28, 0, sizeof(v28));
  V_LOCK(v9);
  v10 = logfmt_raw((int)v29, 0x1000u);
  V_UNLOCK(v10);
  v11 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/machine_runtime/machine_runtime_base.c",
          165,
          "check_asic_num_base",
          19,
          416,
          60,
          v29);
  while ( 1 )
  {
    if ( v27 > 0 )
    {
      for ( i = 0; i < v27; ++i )
      {
        v13 = dev_ctrl(v11);
        v11 = (*(int (__fastcall **)(int))(v13 + 40))(i);
      }
    }
    v14 = power_init((unsigned __int8)byte_165DC0);
    v15 = v14;
    if ( v14 )
      break;
    v11 = (*(int (__fastcall **)(int, _DWORD))(a1 + 28))(a1, *(_DWORD *)(a1 + 68));
    if ( v27 > 0 )
    {
      v16 = v26 - 1;
      do
      {
        v17 = (int (**)(void))v16[1];
        ++v16;
        v11 = (*v17)();
        if ( !v11 )
        {
          v18 = 3;
          while ( 1 )
          {
            v19 = dev_ctrl(v11);
            (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v19 + 24))(
              *(_DWORD *)(*v16 + 208),
              *(_DWORD *)(*v16 + 920),
              *(_DWORD *)(*v16 + 944));
            (*(void (**)(void))(*v16 + 200))();
            v11 = (*(int (**)(void))(*v16 + 192))();
            if ( !v11 )
              break;
            if ( !--v18 )
            {
              ++v28[2 * v15];
              break;
            }
          }
          v20 = (*(int (**)(void))(*v16 + 28))();
          V_LOCK(v20);
          v21 = logfmt_raw((int)v29, 0x1000u);
          V_UNLOCK(v21);
          v11 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godm"
                  "iner-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                  165,
                  "check_asic_num_base",
                  19,
                  450,
                  60,
                  v29);
        }
        ++v15;
      }
      while ( v27 > v15 );
    }
    if ( ++v8 == 1001 )
      return 0;
  }
  V_LOCK(v14);
  v23 = logfmt_raw((int)v29, 0x1000u);
  V_UNLOCK(v23);
  v24 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/machine_runtime/machine_runtime_base.c",
          165,
          "check_asic_num_base",
          19,
          424,
          100,
          v29);
  V_LOCK(v24);
  v25 = logfmt_raw((int)v29, 0x1000u);
  V_UNLOCK(v25);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/machine_runtime/machine_runtime_base.c",
    165,
    "check_asic_num_base",
    19,
    425,
    100,
    v29);
  return 30;
}
