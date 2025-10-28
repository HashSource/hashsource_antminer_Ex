int get_theory_hashrate()
{
  double v0; // d0
  int v1; // r4
  int all_created_runtime; // r5
  double v3; // d8
  time_t miner_elapsed_time; // r0
  double v5; // d9
  int v6; // r6
  int v7; // r5
  int v8; // t1
  bool v9; // cc
  int v10; // r0
  int v12; // [sp+4h] [bp-2Ch]
  int v13; // [sp+Ch] [bp-24h] BYREF
  double v14[2]; // [sp+10h] [bp-20h] BYREF
  _BYTE v15[12]; // [sp+24h] [bp-Ch] BYREF

  v1 = 0;
  v13 = 0;
  all_created_runtime = get_all_created_runtime(&v13);
  v3 = 0.0;
  miner_elapsed_time = get_miner_elapsed_time();
  v5 = v0;
  v14[0] = 0.0;
  if ( v13 > 0 )
  {
    v7 = all_created_runtime - 4;
    v6 = 0;
    do
    {
      v8 = *(_DWORD *)(v7 + 4);
      v7 += 4;
      ++v1;
      miner_elapsed_time = (*(int (**)(void))(v8 + 132))();
      v6 |= miner_elapsed_time;
      v3 = v3 + v14[1];
    }
    while ( v13 > v1 );
  }
  else
  {
    v6 = 0;
  }
  v9 = (unsigned int)opt_algo > 0xA;
  if ( opt_algo != 10 )
    v9 = (unsigned int)(opt_algo - 6) > 1;
  if ( !v9 )
    v5 = v0 - 2700.0;
  if ( v5 < 1.0 )
  {
    freq_scan_status = 0;
    return (int)v14[0];
  }
  else
  {
    v10 = frontend_runtime_instance(miner_elapsed_time);
    format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v10 + 72) + 16), v14, v15);
    if ( v6 )
    {
      freq_scan_status = 2;
      strcpy((char *)search_failed_info, "R:1");
      return v12;
    }
    else
    {
      freq_scan_status = 1;
      return (int)v14[0];
    }
  }
}
