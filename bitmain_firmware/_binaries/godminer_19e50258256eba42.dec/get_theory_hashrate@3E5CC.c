int get_theory_hashrate()
{
  double v0; // d0
  int v1; // r0
  double v4; // [sp+0h] [bp-64h] BYREF
  char v5[12]; // [sp+8h] [bp-5Ch] BYREF
  int v6; // [sp+14h] [bp-50h] BYREF
  double v7; // [sp+18h] [bp-4Ch] BYREF
  double v8; // [sp+20h] [bp-44h] BYREF
  int v9; // [sp+2Ch] [bp-38h]
  double v10; // [sp+30h] [bp-34h]
  _DWORD *all_created_runtime; // [sp+3Ch] [bp-28h]
  int j; // [sp+40h] [bp-24h]
  int i; // [sp+44h] [bp-20h]
  double v14; // [sp+48h] [bp-1Ch]
  int v15; // [sp+50h] [bp-14h]
  int v16; // [sp+54h] [bp-10h]
  double v17; // [sp+58h] [bp-Ch]

  v6 = 0;
  all_created_runtime = get_all_created_runtime(&v6);
  v15 = 0;
  get_miner_elapsed_time();
  v10 = v0;
  v14 = 0.0;
  v17 = 0.0;
  v8 = 0.0;
  for ( i = 0; i < v6; ++i )
  {
    v1 = (*(int (__fastcall **)(_DWORD, double *))(all_created_runtime[i] + 148))(all_created_runtime[i], &v7);
    v15 |= v1;
    v17 = v17 + v7;
  }
  if ( opt_algo == 7 )
  {
    v4 = 0.0;
    sub_3CF14(&v4);
    v17 = v4;
  }
  if ( opt_algo == 6 || opt_algo == 10 )
    v14 = 2700.0;
  else
    v14 = 0.0;
  if ( v10 - v14 >= 1.0 )
  {
    v9 = frontend_runtime_instance();
    format_hashrate_double(*(const char **)(*(_DWORD *)(v9 + 72) + 16), &v8, v5);
    if ( v15 )
    {
      sub_3CC10(2, 0);
    }
    else
    {
      v16 = (int)v8;
      sub_3CC10(1, 0);
      for ( j = 0; j < v6; ++j )
      {
        if ( *(_BYTE *)(all_created_runtime[j] + 1025) )
          sub_3CC10(48, j);
      }
    }
    return v16;
  }
  else
  {
    sub_3CC10(0, 0);
    return (int)v8;
  }
}
