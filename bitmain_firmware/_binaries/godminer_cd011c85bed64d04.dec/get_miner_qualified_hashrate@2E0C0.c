int get_miner_qualified_hashrate()
{
  double v0; // d0
  int v1; // r4
  int all_created_runtime; // r7
  int *v4; // r8
  int v5; // r5
  int v6; // r6
  double v7; // d0
  int v8; // r3
  int v9; // r0
  int v10; // r9
  int v11; // s16
  int v12; // r7
  int v13; // t1
  int v14; // r0
  _BOOL4 v15; // r5
  _BOOL4 v16; // r3
  int v17; // [sp+24h] [bp-1088h] BYREF
  double v18; // [sp+28h] [bp-1084h] BYREF
  int v19; // [sp+34h] [bp-1078h] BYREF
  _DWORD v20[8]; // [sp+40h] [bp-106Ch] BYREF
  _DWORD v21[8]; // [sp+60h] [bp-104Ch] BYREF
  char v22[20]; // [sp+80h] [bp-102Ch] BYREF
  float v23; // [sp+94h] [bp-1018h]
  double v24; // [sp+98h] [bp-1014h]
  _BYTE v25[4100]; // [sp+A8h] [bp-1004h] BYREF

  v1 = 0;
  v17 = 0;
  all_created_runtime = get_all_created_runtime(&v17);
  v20[0] = 8050;
  v20[1] = 8300;
  v20[2] = 8550;
  v20[3] = 8800;
  v20[4] = 9050;
  v20[5] = 9300;
  v20[6] = 9500;
  v20[7] = 0x7FFFFFFF;
  v21[0] = 5635;
  v21[1] = 5810;
  v21[2] = 5985;
  v21[3] = 6160;
  v21[4] = 6335;
  v21[5] = 6510;
  v21[6] = 6650;
  v21[7] = 0x7FFFFFFF;
  if ( opt_algo == 6 )
  {
    if ( *(_BYTE *)(*(_DWORD *)all_created_runtime + 788) )
      v4 = v21;
    else
      v4 = v20;
    v5 = frontend_runtime_instance();
    get_miner_elapsed_time();
    if ( v0 <= 1200.0 )
    {
      v1 = 0;
      freq_scan_status = 0;
      strcpy((char *)&search_failed_info, "searching");
    }
    else
    {
      v6 = 0;
      read_system_status_from_monitor(v22);
      v7 = v24;
      v9 = format_hashrate_double(*(_DWORD *)(v5 + 84), &v18, &v19, v8);
      v1 = 0;
      v10 = (int)v18;
      v11 = (int)(v23 * v7);
      do
      {
        V_LOCK(v9);
        v12 = *v4;
        v13 = v4[1];
        ++v4;
        ++v6;
        v14 = logfmt_raw((int)v25, 0x1000u);
        V_UNLOCK(v14);
        v9 = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmine"
               "r-origin_master/http_test.c",
               132,
               "get_miner_qualified_hashrate",
               28,
               291,
               20,
               v25);
        v15 = v13 > v10;
        if ( v12 > v10 )
          v15 = 0;
        if ( v15 )
          v1 = v12;
      }
      while ( v6 != 7 );
      v16 = v1 > v11;
      if ( !v1 )
        v16 = 1;
      if ( v16 )
      {
        sub_2DB04();
      }
      else
      {
        freq_scan_status = 1;
        strcpy((char *)&search_failed_info, "unknown");
      }
    }
  }
  return v1;
}
