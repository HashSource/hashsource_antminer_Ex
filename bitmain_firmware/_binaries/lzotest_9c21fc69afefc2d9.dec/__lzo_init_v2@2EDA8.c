int __fastcall _lzo_init_v2(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  bool v10; // zf
  bool v11; // zf
  bool v12; // zf
  bool v13; // zf
  bool v14; // zf
  bool v15; // zf
  bool v16; // zf
  bool v17; // zf
  bool v18; // zf

  if ( !a1 )
    return -1;
  v10 = a2 == -1;
  if ( a2 != -1 )
    v10 = a2 == 2;
  if ( !v10 )
    return -1;
  v11 = a3 == -1;
  if ( a3 != -1 )
    v11 = a3 == 4;
  if ( !v11 )
    return -1;
  v12 = a4 == -1;
  if ( a4 != -1 )
    v12 = a4 == 4;
  if ( !v12 )
    return -1;
  v13 = a5 == -1;
  if ( a5 != -1 )
    v13 = a5 == 4;
  if ( !v13 )
    return -1;
  v14 = a6 == -1;
  if ( a6 != -1 )
    v14 = a6 == 4;
  if ( !v14 )
    return -1;
  v15 = a7 == -1;
  if ( a7 != -1 )
    v15 = a7 == 4;
  if ( !v15 )
    return -1;
  v16 = a8 == -1;
  if ( a8 != -1 )
    v16 = a8 == 4;
  if ( !v16 )
    return -1;
  v17 = a9 == -1;
  if ( a9 != -1 )
    v17 = a9 == 4;
  if ( !v17 )
    return -1;
  v18 = a10 == -1;
  if ( a10 != -1 )
    v18 = a10 == 24;
  if ( v18 )
    return lzo_config_check();
  else
    return -1;
}
