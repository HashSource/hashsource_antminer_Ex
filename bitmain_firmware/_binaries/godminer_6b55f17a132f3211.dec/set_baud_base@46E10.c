int __fastcall set_baud_base(int a1, int a2)
{
  int all_created_runtime; // r0
  int v4; // r8
  int v5; // r8
  int i; // r4
  int v7; // t1
  int v8; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int chain_domain_num; // r0
  int v17; // r7
  int v18; // r10
  int v19; // r6
  int v20; // r4
  int v21; // r0
  int v22; // t1
  int v23; // [sp+14h] [bp-1008h] BYREF
  _BYTE v24[4100]; // [sp+18h] [bp-1004h] BYREF

  v23 = 0;
  all_created_runtime = get_all_created_runtime(&v23);
  v4 = all_created_runtime;
  if ( a2 > 3000000 )
  {
    v10 = V_LOCK(all_created_runtime);
    platform_get_chain_domain_num(v10);
    v11 = logfmt_raw((int)v24, 0x1000u);
    V_UNLOCK(v11);
    v12 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-o"
            "rigin_godminer-new/machine_runtime/machine_runtime_base.c",
            165,
            "set_baud_base",
            13,
            111,
            20,
            v24);
    v13 = V_LOCK(v12);
    platform_get_domain_asic_num(v13);
    v14 = logfmt_raw((int)v24, 0x1000u);
    V_UNLOCK(v14);
    v15 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-o"
            "rigin_godminer-new/machine_runtime/machine_runtime_base.c",
            165,
            "set_baud_base",
            13,
            112,
            20,
            v24);
    chain_domain_num = platform_get_chain_domain_num(v15);
    if ( chain_domain_num > 2 )
    {
      v17 = 18;
      v18 = chain_domain_num + 15;
      do
      {
        chain_domain_num = platform_get_domain_asic_num(chain_domain_num);
        if ( v23 > 0 )
        {
          v19 = v4 - 4;
          v20 = 0;
          do
          {
            v21 = v20++;
            platform_get_asic_addr_interval(v21);
            v22 = *(_DWORD *)(v19 + 4);
            v19 += 4;
            chain_domain_num = (*(int (**)(void))(v22 + 100))();
          }
          while ( v23 > v20 );
        }
        v17 += 3;
      }
      while ( v18 - v17 >= 0 );
    }
    all_created_runtime = usleep((__useconds_t)&stru_186A0);
  }
  if ( v23 > 0 )
  {
    v5 = v4 - 4;
    for ( i = 0; i < v23; ++i )
    {
      v7 = *(_DWORD *)(v5 + 4);
      v5 += 4;
      (*(void (**)(void))(v7 + 84))();
      all_created_runtime = usleep(0x2710u);
    }
  }
  v8 = dev_ctrl(all_created_runtime);
  (*(void (__fastcall **)(int))(v8 + 16))(a2);
  usleep(0x2710u);
  return 0;
}
