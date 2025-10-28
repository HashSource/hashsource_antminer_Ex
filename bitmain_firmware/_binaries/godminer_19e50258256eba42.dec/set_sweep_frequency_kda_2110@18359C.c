int __fastcall set_sweep_frequency_kda_2110(int a1, int a2)
{
  float v2; // s0
  int v4; // [sp+4h] [bp-1268h]
  _BYTE v7[4608]; // [sp+38h] [bp-1234h] BYREF
  int v8; // [sp+1238h] [bp-34h]
  int v9; // [sp+123Ch] [bp-30h]
  int domain_asic_num; // [sp+1240h] [bp-2Ch]
  int chain_domain_num; // [sp+1244h] [bp-28h]
  float v12; // [sp+1248h] [bp-24h]
  int v13; // [sp+124Ch] [bp-20h]
  int m; // [sp+1250h] [bp-1Ch]
  int k; // [sp+1254h] [bp-18h]
  unsigned int i; // [sp+1258h] [bp-14h]
  int j; // [sp+125Ch] [bp-10h]
  float v18; // [sp+1260h] [bp-Ch]
  float v19; // [sp+1264h] [bp-8h]

  v13 = 0;
  v19 = 0.0;
  v12 = *(float *)(a1 + 1020);
  chain_domain_num = platform_get_chain_domain_num();
  domain_asic_num = platform_get_domain_asic_num();
  for ( i = 0; i < *(_DWORD *)(a1 + 372); ++i )
  {
    if ( v19 < *(float *)(a2 + 4 * i) )
      v19 = *(float *)(a2 + 4 * i);
    *(float *)&v7[4 * i + 4096] = v12;
  }
  v9 = (int)(((float)((float)(v19 - v12) + v2) - 0.001) / v2);
  for ( j = 1; j <= v9; ++j )
  {
    for ( k = 0; k < domain_asic_num; ++k )
    {
      for ( m = 0; m < chain_domain_num; ++m )
      {
        v8 = k + domain_asic_num * m;
        if ( *(float *)(a2 + 4 * v8) > *(float *)&v7[4 * v8 + 4096] )
        {
          v18 = v12 + (float)((float)j * v2);
          if ( v18 > *(float *)(a2 + 4 * v8) )
            v18 = *(float *)(a2 + 4 * v8);
          sub_179644(a1, v8, 0);
          *(float *)&v7[4 * v8 + 4096] = v18;
        }
      }
    }
    V_LOCK();
    logfmt_raw(
      v7,
      0x1000u,
      0,
      "Chain [%d] set sweep %f, start_freq = %f, sweep_step %f, step_id %d ",
      *(_DWORD *)(a1 + 264),
      v4,
      (float)((float)((float)j * v2) + v12),
      v12,
      v2,
      j);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
      171,
      "set_sweep_frequency_kda_2110",
      28,
      446,
      20,
      v7);
  }
  usleep(0x7A120u);
  return v13;
}
