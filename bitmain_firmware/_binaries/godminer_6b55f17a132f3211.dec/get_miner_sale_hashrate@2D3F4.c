int get_miner_sale_hashrate()
{
  double v0; // d0
  int v1; // r4
  int all_created_runtime; // r5
  time_t miner_elapsed_time; // r0
  double v4; // d8
  double v5; // d9
  int v6; // r6
  int v7; // r5
  int v8; // t1
  int v9; // r0
  int v10; // r5
  int result; // r0
  int v12; // [sp+0h] [bp-28h] BYREF
  int v13; // [sp+4h] [bp-24h]
  double v14[2]; // [sp+8h] [bp-20h] BYREF
  _BYTE v15[12]; // [sp+1Ch] [bp-Ch] BYREF

  v1 = 0;
  v12 = 0;
  all_created_runtime = get_all_created_runtime(&v12);
  v13 = 1;
  miner_elapsed_time = get_miner_elapsed_time();
  v4 = 0.0;
  v5 = v0;
  v14[0] = 0.0;
  if ( v12 > 0 )
  {
    v7 = all_created_runtime - 4;
    v6 = 0;
    do
    {
      v8 = *(_DWORD *)(v7 + 4);
      v7 += 4;
      ++v1;
      miner_elapsed_time = (*(int (**)(void))(v8 + 136))();
      v6 |= miner_elapsed_time;
      v4 = v4 + v14[1];
    }
    while ( v12 > v1 );
  }
  else
  {
    v6 = 0;
  }
  if ( opt_algo == 6 )
    v5 = v0 - 2700.0;
  if ( v5 < 1.0 )
  {
    freq_scan_status = 0;
    return 0;
  }
  if ( v6 )
  {
    miner_elapsed_time = *(_DWORD *)"R:1";
    freq_scan_status = 2;
    strcpy((char *)search_failed_info, "R:1");
  }
  v9 = frontend_runtime_instance(miner_elapsed_time);
  format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v9 + 72) + 16), v14, v15);
  v10 = v13;
  result = sub_121A48((int)v14[0], v13) * v10;
  if ( opt_algo == 6 )
  {
    result -= 50;
    if ( result > 3729 )
      return 3780;
    if ( (unsigned int)(result - 3630) <= 0x63 )
      return 3680;
    if ( (unsigned int)(result - 3530) <= 0x63 )
      return 3580;
    if ( (unsigned int)(result - 3430) <= 0x63 )
      return 3480;
    if ( (unsigned int)(result - 3330) <= 0x63 )
      return 3380;
    if ( (unsigned int)(result - 3230) <= 0x63 )
      return 3280;
    if ( (unsigned int)(result - 3130) <= 0x63 )
      return 3180;
    return sub_121A48(result, v10) * v10;
  }
  if ( opt_algo == 8 )
  {
    if ( result >= 860 )
      return 860;
    if ( (unsigned int)(result - 840) <= 0x13 )
      return 840;
    if ( (unsigned int)(result - 820) <= 0x13 )
      return 820;
    if ( (unsigned int)(result - 800) <= 0x13 )
      return 800;
    return sub_121A48(result, v10) * v10;
  }
  return result;
}
