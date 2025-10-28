void __fastcall __noreturn check_working_voltage_by_mps(int a1)
{
  int v1; // r4
  _BYTE v2[40]; // [sp+1Ch] [bp-1028h] BYREF
  int v3; // [sp+101Ch] [bp-28h] BYREF
  int v4; // [sp+1020h] [bp-24h]
  signed int temp; // [sp+1024h] [bp-20h]
  _DWORD *all_created_runtime; // [sp+1028h] [bp-1Ch]
  int i; // [sp+102Ch] [bp-18h]
  int v8; // [sp+1030h] [bp-14h]
  int v9; // [sp+1034h] [bp-10h]

  v3 = 0;
  v8 = 0;
  v9 = a1;
  all_created_runtime = get_all_created_runtime(&v3);
  while ( 1 )
  {
    v8 = 0;
    for ( i = 0; i < v3; ++i )
    {
      if ( *(_BYTE *)(all_created_runtime[i] + 1228) )
        ++v8;
    }
    if ( v8 == v3 )
    {
      V_LOCK();
      logfmt_raw(v2, 0x1000u, 0, "start dynamic voltage adjustment by mps");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/eth_2282/machine_runtime_eth_2282.c",
        179,
        "check_working_voltage_by_mps",
        28,
        204,
        40,
        v2);
      while ( 1 )
      {
        temp = get_temp(4);
        v1 = *(_DWORD *)(v9 + 120);
        v4 = v1 + (*(int (__fastcall **)(int, signed int))v9)(v9, temp);
        if ( v4 != *(_DWORD *)(v9 + 124) )
        {
          V_LOCK();
          logfmt_raw(
            v2,
            0x1000u,
            0,
            "expected_vdd_core_vol: %dmV, current_vdd_core_vol: %dmV",
            v4,
            *(_DWORD *)(v9 + 124));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/machine_runtime/eth_2282/machine_runtime_eth_2282.c",
            179,
            "check_working_voltage_by_mps",
            28,
            213,
            20,
            v2);
          if ( v4 >= *(_DWORD *)(v9 + 124) )
            (*(void (__fastcall **)(int, int))(v9 + 28))(v9, *(_DWORD *)(v9 + 124) + 10);
          else
            (*(void (__fastcall **)(int, int))(v9 + 28))(v9, *(_DWORD *)(v9 + 124) - 10);
        }
        sleep(0xFu);
      }
    }
  }
}
