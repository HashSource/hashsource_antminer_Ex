int __fastcall set_sweep_frequency_ckb(int a1, int a2)
{
  float v2; // s0
  int v4; // [sp+4h] [bp-22B0h]
  _BYTE v7[56]; // [sp+3Ch] [bp-2278h] BYREF
  char v8[64]; // [sp+103Ch] [bp-1278h] BYREF
  char v9[4608]; // [sp+107Ch] [bp-1238h] BYREF
  int v10; // [sp+227Ch] [bp-38h]
  int v11; // [sp+2280h] [bp-34h]
  int domain_asic_num; // [sp+2284h] [bp-30h]
  int chain_domain_num; // [sp+2288h] [bp-2Ch]
  float v14; // [sp+228Ch] [bp-28h]
  int v15; // [sp+2290h] [bp-24h]
  int n; // [sp+2294h] [bp-20h]
  int m; // [sp+2298h] [bp-1Ch]
  int k; // [sp+229Ch] [bp-18h]
  unsigned int i; // [sp+22A0h] [bp-14h]
  int j; // [sp+22A4h] [bp-10h]
  float v21; // [sp+22A8h] [bp-Ch]
  float v22; // [sp+22ACh] [bp-8h]

  v15 = 0;
  v22 = 0.0;
  v14 = *(float *)(a1 + 1020);
  chain_domain_num = platform_get_chain_domain_num();
  domain_asic_num = platform_get_domain_asic_num();
  for ( i = 0; i < *(_DWORD *)(a1 + 372); ++i )
  {
    if ( v22 < *(float *)(a2 + 4 * i) )
      v22 = *(float *)(a2 + 4 * i);
    *(float *)&v9[4 * i + 4096] = v14;
  }
  v11 = (int)(((float)((float)(v22 - v14) + v2) - 0.001) / v2);
  for ( j = 1; j <= v11; ++j )
  {
    for ( k = 0; k < domain_asic_num; ++k )
    {
      for ( m = 0; m < chain_domain_num; ++m )
      {
        v10 = k + domain_asic_num * m;
        if ( *(float *)(a2 + 4 * v10) > *(float *)&v9[4 * v10 + 4096] )
        {
          v21 = v14 + (float)((float)j * v2);
          if ( v21 > *(float *)(a2 + 4 * v10) )
            v21 = *(float *)(a2 + 4 * v10);
          sub_CEF24(a1, v10, 0);
          *(float *)&v9[4 * v10 + 4096] = v21;
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
      (float)((float)((float)j * v2) + v14),
      v14,
      v2,
      j);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
      171,
      "set_sweep_frequency_ckb",
      23,
      437,
      20,
      v7);
  }
  memset(v9, 0, 0x1000u);
  memset(v8, 0, sizeof(v8));
  for ( n = 0; n < chain_domain_num * domain_asic_num; ++n )
  {
    sprintf(v8, "ASIC-%03d [%.2f] ", n, *(float *)&v9[4 * n + 4096]);
    strcat(v9, v8);
  }
  puts(v9);
  usleep(0x7A120u);
  return v15;
}
