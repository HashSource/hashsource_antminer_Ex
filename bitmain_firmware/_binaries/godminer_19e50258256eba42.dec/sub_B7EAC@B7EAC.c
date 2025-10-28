void sub_B7EAC()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r3
  int v4; // [sp+10h] [bp-1244h] BYREF
  int v5; // [sp+1010h] [bp-244h]
  __int16 v6; // [sp+1014h] [bp-240h]
  char v7[512]; // [sp+1018h] [bp-23Ch] BYREF
  int v8; // [sp+1218h] [bp-3Ch] BYREF
  int v9; // [sp+121Ch] [bp-38h]
  int v10; // [sp+1220h] [bp-34h]
  int v11; // [sp+1224h] [bp-30h]
  _DWORD *all_created_runtime; // [sp+1228h] [bp-2Ch]
  int jj; // [sp+122Ch] [bp-28h]
  int ii; // [sp+1230h] [bp-24h]
  int n; // [sp+1234h] [bp-20h]
  int m; // [sp+1238h] [bp-1Ch]
  char v17; // [sp+123Eh] [bp-16h]
  unsigned __int8 v18; // [sp+123Fh] [bp-15h]
  int j; // [sp+1240h] [bp-14h]
  int i; // [sp+1244h] [bp-10h]
  int v21; // [sp+1248h] [bp-Ch]
  int k; // [sp+124Ch] [bp-8h]

  if ( !no_connection_with_pool )
  {
    v8 = 0;
    all_created_runtime = get_all_created_runtime(&v8);
    v21 = 0;
    v0 = snprintf(v7, 0x200u, "debug:");
    v21 += v0;
    for ( i = 0; i < v8; ++i )
    {
      v9 = *(_DWORD *)(all_created_runtime[i] + 372);
      for ( j = 0; j < v9; ++j )
      {
        v1 = snprintf(&v7[v21], 512 - v21, "%.2f ", reject_nonce_rate[6 * i + j]);
        v21 += v1;
      }
      v2 = snprintf(&v7[v21], 4096 - v21, " ");
      v21 += v2;
    }
    V_LOCK();
    logfmt_raw(&v4, 0x1000u, 0, "\n%s", v7);
    V_UNLOCK();
    zlog(
      g_hash_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/miner_monitor.c",
      168,
      "task_reset_chip_die_e11",
      23,
      186,
      40,
      &v4);
    for ( k = 0; k < v8; ++k )
    {
      v11 = *(_DWORD *)(all_created_runtime[k] + 372);
      v5 = 0;
      v6 = 0;
      v18 = 0;
      v17 = 0;
      for ( m = 0; m < v11; ++m )
      {
        if ( !chip_detail_last[6 * k + m] )
        {
          v3 = v18++;
          *((_BYTE *)&v5 + v3) = m;
        }
        if ( reject_nonce_rate[6 * k + m] >= 5.0 )
        {
          v17 = 1;
          V_LOCK();
          logfmt_raw(&v4, 0x1000u, 0, "chain-%d, chip-%d, reject_nonce_rate:%.2f", k, m, reject_nonce_rate[6 * k + m]);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/miner_monitor.c",
            168,
            "task_reset_chip_die_e11",
            23,
            217,
            40,
            &v4);
        }
      }
      if ( !*(_BYTE *)(all_created_runtime[k] + 1229) && *(_BYTE *)(all_created_runtime[k] + 1228) && (v18 || v17) )
      {
        if ( no_connection_with_pool )
          return;
        (*(void (__fastcall **)(_DWORD))(all_created_runtime[k] + 68))(all_created_runtime[k]);
        *(_BYTE *)(all_created_runtime[k] + 277) = 0;
        *(_BYTE *)(all_created_runtime[k] + 1229) = 1;
        for ( n = 0; n < v18; ++n )
        {
          freq_array_f[6 * k + *((unsigned __int8 *)&v5 + n)] = (float)(unsigned __int16)freq_select;
          target_freq_array_f[6 * k + *((unsigned __int8 *)&v5 + n)] = (float)(unsigned __int16)freq_select;
        }
        *(_BYTE *)(all_created_runtime[k] + 1228) = 0;
        break;
      }
    }
    for ( ii = 0; ii < v8; ++ii )
    {
      v10 = *(_DWORD *)(all_created_runtime[ii] + 372);
      for ( jj = 0; jj < v10; ++jj )
      {
        if ( *(_BYTE *)(all_created_runtime[ii] + 1228) != 1 )
          reject_nonce_rate[6 * ii + jj] = 0.0;
      }
    }
  }
}
