int get_miner_qualified_hashrate()
{
  int system_status_from_monitor; // r0
  int v1; // r0
  double v2; // d0
  float v3; // s16
  double v4; // d9
  double v7; // [sp+0h] [bp-54h] BYREF
  _BYTE v8[12]; // [sp+Ch] [bp-48h] BYREF
  _BYTE v9[24]; // [sp+18h] [bp-3Ch] BYREF
  float v10; // [sp+30h] [bp-24h]
  double v11; // [sp+40h] [bp-14h]

  system_status_from_monitor = read_system_status_from_monitor(v9);
  v1 = frontend_runtime_instance(system_status_from_monitor);
  v2 = v11;
  format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v1 + 72) + 16), &v7, v8);
  v3 = v10;
  v4 = v7;
  get_miner_elapsed_time();
  if ( v2 < 1200.0 )
  {
    freq_scan_status = 0;
    return get_miner_sale_hashrate();
  }
  else
  {
    if ( (int)(v3 * v2) < (int)v4 && v2 > 1200.0 )
    {
      freq_scan_status = 2;
      strcpy((char *)search_failed_info, "R:1");
    }
    else
    {
      freq_scan_status = 1;
    }
    return get_miner_sale_hashrate();
  }
}
