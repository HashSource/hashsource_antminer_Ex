int sub_2D670()
{
  double v0; // d0
  int v1; // r5
  int v3; // r4
  double v4; // d0
  int v5; // r3
  int *v6; // r3
  int v7; // r1
  int v8; // s0
  int v9; // r2
  int v10; // t1
  _BOOL4 v11; // r3
  double v12; // [sp+0h] [bp-64h] BYREF
  char v13[12]; // [sp+Ch] [bp-58h] BYREF
  _DWORD v14[7]; // [sp+18h] [bp-4Ch] BYREF
  int v15; // [sp+34h] [bp-30h] BYREF
  char v16[20]; // [sp+38h] [bp-2Ch] BYREF
  float v17; // [sp+4Ch] [bp-18h]
  double v18; // [sp+50h] [bp-14h]

  v14[0] = 8050;
  v14[1] = 8300;
  v14[2] = 8550;
  v14[3] = 8800;
  v14[4] = 9050;
  v14[5] = 9300;
  v14[6] = 9500;
  v15 = 0x7FFFFFFF;
  v1 = frontend_runtime_instance();
  get_miner_elapsed_time();
  if ( v0 > 1200.0 )
  {
    v3 = 0;
    read_system_status_from_monitor(v16);
    v4 = v18;
    format_hashrate_double(*(_DWORD *)(v1 + 84), &v12, v13, v5);
    v6 = v14;
    v7 = (int)v12;
    v8 = (int)(v17 * v4);
    do
    {
      v10 = *v6++;
      v9 = v10;
      if ( v7 >= v10 && v7 < *v6 )
        v3 = v9;
    }
    while ( v6 != &v15 );
    v11 = v8 < v3;
    if ( !v3 )
      v11 = 1;
    if ( v11 )
    {
      sub_2D644();
    }
    else
    {
      freq_scan_status = 1;
      strcpy((char *)&search_failed_info, "unknown");
    }
    return v3;
  }
  else
  {
    freq_scan_status = 0;
    strcpy((char *)&search_failed_info, "searching");
    return 0;
  }
}
