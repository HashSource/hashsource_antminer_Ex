int sub_2D560()
{
  double v0; // d0
  int v1; // r5
  int v3; // r4
  double v4; // d0
  int *v5; // r3
  int v6; // r1
  int v7; // s0
  int v8; // r2
  int v9; // t1
  _BOOL4 v10; // r3
  double v11; // [sp+0h] [bp-64h] BYREF
  char v12[12]; // [sp+Ch] [bp-58h] BYREF
  _DWORD v13[7]; // [sp+18h] [bp-4Ch] BYREF
  int v14; // [sp+34h] [bp-30h] BYREF
  char v15[20]; // [sp+38h] [bp-2Ch] BYREF
  float v16; // [sp+4Ch] [bp-18h]
  double v17; // [sp+50h] [bp-14h]

  v13[0] = 8050;
  v13[1] = 8300;
  v13[2] = 8550;
  v13[3] = 8800;
  v13[4] = 9050;
  v13[5] = 9300;
  v13[6] = 9500;
  v14 = 0x7FFFFFFF;
  v1 = frontend_runtime_instance();
  get_miner_elapsed_time();
  if ( v0 > 1200.0 )
  {
    v3 = 0;
    read_system_status_from_monitor((int)v15);
    v4 = v17;
    format_hashrate_double(*(const char **)(v1 + 84), &v11, v12);
    v5 = v13;
    v6 = (int)v11;
    v7 = (int)(v16 * v4);
    do
    {
      v9 = *v5++;
      v8 = v9;
      if ( v6 >= v9 && v6 < *v5 )
        v3 = v8;
    }
    while ( v5 != &v14 );
    v10 = v7 < v3;
    if ( !v3 )
      v10 = 1;
    if ( v10 )
    {
      sub_2D534();
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
