int check_pools_valid()
{
  int v1; // [sp+0h] [bp-Ch]
  int i; // [sp+4h] [bp-8h]

  pools_active = 0;
  update_miner_working_status();
  v1 = 0;
  for ( i = 0; i < total_pools; ++i )
  {
    if ( *(_BYTE *)(*(_DWORD *)(pools + 4 * i) + 28) && stratum_check(*(int **)(pools + 4 * i)) )
      ++v1;
  }
  if ( v1 )
    set_miner_6060info_network_lost_err(0);
  else
    set_miner_6060info_network_lost_err(1);
  return v1;
}
