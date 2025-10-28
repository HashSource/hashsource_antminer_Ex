unsigned int get_theory_hashrate()
{
  float v0; // s0
  int v1; // r4
  int v2; // r5
  int all_created_runtime; // r0
  int v4; // r7
  double v5; // d8
  int v6; // r6
  int v7; // t1
  bool v8; // zf
  bool v9; // zf
  _BYTE *v11; // r3
  double v12; // d7
  int v13; // r2
  int v14; // [sp+4h] [bp-18h]
  int v16; // [sp+Ch] [bp-10h] BYREF
  double v17; // [sp+10h] [bp-Ch]

  v1 = 0;
  v2 = 0;
  v16 = 0;
  all_created_runtime = get_all_created_runtime(&v16);
  v4 = all_created_runtime;
  v5 = 0.0;
  if ( v16 > 0 )
  {
    v6 = all_created_runtime - 4;
    do
    {
      v7 = *(_DWORD *)(v6 + 4);
      v6 += 4;
      ++v1;
      v2 |= (*(int (**)(void))(v7 + 88))();
      v5 = v5 + v17;
    }
    while ( v16 > v1 );
  }
  v8 = opt_algo == 3;
  if ( opt_algo != 3 )
    v8 = opt_algo == 0;
  if ( v8 )
    return (int)v5;
  v9 = opt_algo == 6;
  if ( opt_algo != 6 )
    v9 = opt_algo == 1;
  if ( v9 )
    return (int)(v5 / 1000.0 / 1000.0);
  switch ( opt_algo )
  {
    case 2:
      return (int)(v5 / 1000.0 / 1000.0 / 1000.0);
    case 7:
      if ( v2 )
        goto LABEL_13;
      freq_scan_status = 1;
      strcpy((char *)&search_failed_info, "unknown");
      v11 = *(_BYTE **)v4;
      if ( *(_BYTE *)(*(_DWORD *)v4 + 216) != 68 || v11[217] != 55 )
        goto LABEL_13;
      v12 = v5 / 1000.0 / 1000.0 / 1000.0;
      if ( v11[218] )
      {
        if ( v11[218] != 101 || v11[219] )
          goto LABEL_13;
        if ( v12 >= 1170.0 )
        {
          return 1157;
        }
        else if ( v12 >= 1125.0 && v12 < 1170.0 )
        {
          return 1111;
        }
        else
        {
          if ( v12 < 1078.0 || v12 >= 1125.0 )
            goto LABEL_13;
          return 1065;
        }
      }
      else if ( v12 >= 1291.0 )
      {
        return 1286;
      }
      else if ( v12 >= 1240.0 && v12 < 1291.0 )
      {
        return 1234;
      }
      else if ( v12 >= 1188.0 && v12 < 1240.0 )
      {
        return 1183;
      }
      else
      {
        if ( v12 < 1136.0 || v12 >= 1188.0 )
          goto LABEL_13;
        return 1131;
      }
    case 5:
      get_total_nonce_rate();
      v13 = (int)(v0 * v5 / 1000.0 / 1000.0);
      v14 = v13;
      if ( v13 > 2414 )
      {
        return 2400;
      }
      else
      {
        if ( (unsigned int)(v13 - 1710) > 0x2C0 )
          goto LABEL_13;
        return 60 * ((v13 - 30) / 0x3Cu);
      }
    default:
LABEL_13:
      sub_2D644();
      return v14;
  }
}
