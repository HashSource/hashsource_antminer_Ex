int __fastcall set_baud_base(int a1, int a2)
{
  int chain_domain_num; // r0
  int domain_asic_num; // r0
  int v4; // r4
  char asic_addr_interval; // r0
  int (**v6)(); // r0
  _BYTE v9[52]; // [sp+18h] [bp-1034h] BYREF
  int v10; // [sp+1018h] [bp-34h] BYREF
  char v11; // [sp+101Fh] [bp-2Dh]
  int v12; // [sp+1020h] [bp-2Ch]
  int v13; // [sp+1024h] [bp-28h]
  int v14; // [sp+1028h] [bp-24h]
  _DWORD *all_created_runtime; // [sp+102Ch] [bp-20h]
  int i; // [sp+1030h] [bp-1Ch]
  int v17; // [sp+1034h] [bp-18h]
  int j; // [sp+1038h] [bp-14h]
  int v19; // [sp+103Ch] [bp-10h]

  v19 = 0;
  v10 = 0;
  all_created_runtime = get_all_created_runtime(&v10);
  if ( a2 > 3000000 )
  {
    v14 = 3;
    v17 = 0;
    V_LOCK();
    chain_domain_num = platform_get_chain_domain_num();
    logfmt_raw(v9, 0x1000u, 0, "chain_domain_num:%d", chain_domain_num);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "set_baud_base",
      13,
      193,
      20,
      v9);
    V_LOCK();
    domain_asic_num = platform_get_domain_asic_num();
    logfmt_raw(v9, 0x1000u, 0, "domain_asic_num :%d", domain_asic_num);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "set_baud_base",
      13,
      194,
      20,
      v9);
    for ( i = platform_get_chain_domain_num() - v14; i >= 0; i -= v14 )
    {
      v4 = i + 1;
      v13 = platform_get_domain_asic_num() * v4 - 1;
      ++v17;
      v12 = 3 * v17 + 15;
      for ( j = 0; j < v10; ++j )
      {
        asic_addr_interval = platform_get_asic_addr_interval(j);
        v11 = asic_addr_interval * v13;
        (*(void (__fastcall **)(_DWORD, _DWORD, int))(all_created_runtime[j] + 116))(
          all_created_runtime[j],
          (unsigned __int8)(asic_addr_interval * v13),
          v12);
      }
    }
    usleep((__useconds_t)&stru_186A0);
  }
  for ( j = 0; j < v10; ++j )
  {
    (*(void (__fastcall **)(_DWORD, int))(all_created_runtime[j] + 100))(all_created_runtime[j], a2);
    usleep(0x2710u);
  }
  v6 = dev_ctrl();
  ((void (__fastcall *)(int))v6[5])(a2);
  usleep(0x2710u);
  return v19;
}
