int get_theory_hashrate()
{
  float v0; // s0
  int v1; // r4
  int v2; // r5
  char *all_created_runtime; // r0
  char *v4; // r7
  double v5; // d8
  char *v6; // r6
  int v7; // t1
  bool v8; // zf
  bool v9; // zf
  int *v11; // r3
  _DWORD *v12; // r2
  int v13; // r0
  int v14; // r1
  _BYTE *v15; // r3
  double v16; // d7
  int v17; // r2
  int v18; // [sp+4h] [bp-18h]
  int v20; // [sp+Ch] [bp-10h] BYREF
  double v21; // [sp+10h] [bp-Ch]

  v1 = 0;
  v2 = 0;
  v20 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v20);
  v4 = all_created_runtime;
  v5 = 0.0;
  if ( v20 > 0 )
  {
    v6 = all_created_runtime - 4;
    do
    {
      v7 = *((_DWORD *)v6 + 1);
      v6 += 4;
      ++v1;
      v2 |= (*(int (**)(void))(v7 + 88))();
      v5 = v5 + v21;
    }
    while ( v20 > v1 );
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
      LOWORD(v11) = -1096;
      LOWORD(v12) = -12432;
      HIWORD(v11) = (unsigned int)"ns" >> 16;
      HIWORD(v12) = (unsigned int)&unk_16CE78 >> 16;
      v13 = *v11;
      v14 = v11[1];
      freq_scan_status = 1;
      *v12 = v13;
      v12[1] = v14;
      v15 = *(_BYTE **)v4;
      if ( *(_BYTE *)(*(_DWORD *)v4 + 216) != 68 || v15[217] != 55 )
        goto LABEL_13;
      v16 = v5 / 1000.0 / 1000.0 / 1000.0;
      if ( v15[218] )
      {
        if ( v15[218] != 101 || v15[219] )
          goto LABEL_13;
        if ( v16 >= 1170.0 )
        {
          return 1157;
        }
        else if ( v16 >= 1125.0 && v16 < 1170.0 )
        {
          return 1111;
        }
        else
        {
          if ( v16 < 1078.0 || v16 >= 1125.0 )
            goto LABEL_13;
          return 1065;
        }
      }
      else if ( v16 >= 1291.0 )
      {
        return 1286;
      }
      else if ( v16 >= 1240.0 && v16 < 1291.0 )
      {
        return 1234;
      }
      else if ( v16 >= 1188.0 && v16 < 1240.0 )
      {
        return 1183;
      }
      else
      {
        if ( v16 < 1136.0 || v16 >= 1188.0 )
          goto LABEL_13;
        return 1131;
      }
    case 5:
      get_total_nonce_rate();
      v17 = (int)(v0 * v5 / 1000.0 / 1000.0);
      v18 = v17;
      if ( v17 > 2414 )
      {
        return 2400;
      }
      else
      {
        if ( (unsigned int)(v17 - 1710) > 0x2C0 )
          goto LABEL_13;
        return 60 * ((v17 - 30) / 0x3Cu);
      }
    default:
LABEL_13:
      sub_2D534();
      return v18;
  }
}
