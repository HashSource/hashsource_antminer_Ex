int __fastcall check_asic_num_base(int a1)
{
  int (**v2)(); // r0
  int (**v3)(); // r0
  int (**v4)(); // r0
  _BYTE v7[28]; // [sp+18h] [bp-109Ch] BYREF
  _QWORD s[16]; // [sp+1018h] [bp-9Ch] BYREF
  int v9; // [sp+1098h] [bp-1Ch] BYREF
  int j; // [sp+109Ch] [bp-18h]
  int k; // [sp+10A0h] [bp-14h]
  int v12; // [sp+10A4h] [bp-10h]
  int i; // [sp+10A8h] [bp-Ch]
  _DWORD *all_created_runtime; // [sp+10ACh] [bp-8h]

  v12 = 0;
  v9 = 0;
  all_created_runtime = get_all_created_runtime(&v9);
  for ( i = 0; i < v9; ++i )
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
  logfmt_raw(v7, 0x1000u, 0, "all backend runtimes have been poweroff.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/machine_runtime_base.c",
    166,
    "check_asic_num_base",
    19,
    661,
    60,
    v7);
  memset(s, 0, sizeof(s));
  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, "start to check asic num test loop");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/machine_runtime_base.c",
    166,
    "check_asic_num_base",
    19,
    666,
    60,
    v7);
  for ( j = 1; j <= 1000; ++j )
  {
    for ( i = 0; i < v9; ++i )
    {
      v3 = dev_ctrl();
      ((void (__fastcall *)(int))v3[13])(i);
    }
    if ( power_init(byte_5AD338, v9) )
    {
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, "power init error!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/machine_runtime_base.c",
        166,
        "check_asic_num_base",
        19,
        674,
        100,
        v7);
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, "Sweep error string = %s.", "V:1");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/machine_runtime_base.c",
        166,
        "check_asic_num_base",
        19,
        675,
        100,
        v7);
      return 30;
    }
    (*(void (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 80));
    for ( i = 0; i < v9; ++i )
    {
      v12 = (*(int (__fastcall **)(_DWORD))all_created_runtime[i])(all_created_runtime[i]);
      if ( !v12 )
      {
        for ( k = 0; k <= 2; ++k )
        {
          v4 = dev_ctrl();
          ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))v4[7])(
            *(_DWORD *)(all_created_runtime[i] + 264),
            *(_DWORD *)(all_created_runtime[i] + 1036),
            *(_DWORD *)(all_created_runtime[i] + 1056));
          (*(void (__fastcall **)(_DWORD))(all_created_runtime[i] + 232))(all_created_runtime[i]);
          v12 = (*(int (__fastcall **)(_DWORD))(all_created_runtime[i] + 220))(all_created_runtime[i]);
          if ( !v12 )
            break;
        }
        if ( v12 )
          ++LODWORD(s[i]);
        (*(void (__fastcall **)(_DWORD))(all_created_runtime[i] + 32))(all_created_runtime[i]);
        V_LOCK();
        logfmt_raw(
          v7,
          0x1000u,
          0,
          "chain[%d] check asic num test, loop:%d done, total failed times:%d",
          i,
          j,
          LODWORD(s[i]));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/machine_runtime/machine_runtime_base.c",
          166,
          "check_asic_num_base",
          19,
          700,
          60,
          v7);
      }
    }
  }
  return 0;
}
