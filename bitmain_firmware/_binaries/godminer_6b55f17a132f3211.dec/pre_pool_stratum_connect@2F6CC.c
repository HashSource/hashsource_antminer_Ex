int pre_pool_stratum_connect()
{
  int v0; // r4
  int v1; // r0
  _DWORD *i; // r5
  int v3; // r7
  int v4; // r0

  v0 = 0;
  pools_active = 0;
  update_miner_working_status();
  v1 = set_current_pool(*(_DWORD *)pools);
  if ( total_pools <= 0 )
    return 0;
  for ( i = &stratum_thr_info; ; i += 12 )
  {
    v3 = *(_DWORD *)(pools + 4 * v0);
    if ( *(_BYTE *)(v3 + 24) )
      break;
LABEL_3:
    if ( total_pools <= ++v0 )
      return 0;
  }
  *i = v0 + 4;
  v4 = tq_new(v1);
  i[11] = v4;
  if ( v4 )
  {
    tq_push(v4, v3);
    v1 = pre_stratum_connect(i);
    goto LABEL_3;
  }
  return -1;
}
