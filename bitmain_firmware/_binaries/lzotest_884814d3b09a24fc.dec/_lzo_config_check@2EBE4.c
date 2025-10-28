int lzo_config_check()
{
  int v0; // r3
  unsigned __int16 *v1; // r0
  char v2; // r2
  char v3; // r3
  int v4; // r12
  int v5; // r1
  bool v6; // zf
  int v7; // r12
  int v8; // lr
  char v9; // r3
  char v10; // r3
  int v11; // lr
  int v12; // r12
  int v13; // lr
  int v14; // r1
  int v15; // r2
  char v16; // r0
  int v17; // r0
  int v18; // r1
  unsigned int v19; // r2
  unsigned int i; // r0
  int v21; // r12
  unsigned int v22; // r3
  unsigned int v23; // r2
  int v24; // r1
  unsigned int v25; // r3
  int v27; // [sp+0h] [bp-10h] BYREF
  int v28; // [sp+4h] [bp-Ch]

  v27 = 0;
  v28 = 0;
  sub_2EBDC((int)&v27, 0);
  v27 = 33554433;
  v1 = (unsigned __int16 *)sub_2EBDC(v0, 1);
  v4 = *v1;
  v5 = v4;
  BYTE1(v27) = v2;
  v6 = v4 == 0;
  v7 = *v1;
  if ( !v6 )
    v3 = 0;
  BYTE2(v27) = -127;
  if ( v5 )
    v3 = 0;
  v8 = *v1;
  if ( v7 == 128 )
    v9 = v3 & 1;
  else
    v9 = 0;
  if ( *v1 == 33152 )
    v10 = v9 & 1;
  else
    v10 = 0;
  v27 = 3;
  if ( v8 != 33152 )
    v10 = 0;
  BYTE1(v28) = 4;
  v11 = *(_DWORD *)v1;
  v12 = *(_DWORD *)v1;
  BYTE1(v27) = v2;
  v6 = v11 == 0;
  v13 = *(_DWORD *)v1;
  if ( !v6 )
    v10 = 0;
  LOBYTE(v28) = -125;
  HIWORD(v27) = -32127;
  if ( v12 )
    v10 = 0;
  v14 = *(_DWORD *)v1;
  LOWORD(v15) = -32384;
  if ( v13 != 128 )
    v10 = 0;
  HIWORD(v15) = -31870;
  if ( *(_DWORD *)v1 == v15 )
    v16 = v10;
  else
    v16 = 0;
  if ( v14 == v15 )
    v17 = v16 & 1;
  else
    v17 = 0;
  if ( v17 )
  {
    v18 = 31;
    v19 = 1;
    for ( i = 31; ; i = __clz(v19) )
    {
      v19 *= 2;
      v21 = v18 - 1;
      v22 = i == v18 && v19 != 0;
      if ( !v22 )
        break;
      --v18;
    }
    if ( i == v18 )
    {
      v23 = 1;
      v24 = 0;
      do
      {
        v23 *= 2;
        v17 = v22 == v24;
        if ( !v23 )
          v21 = 0;
        v25 = __rbit32(v23);
        if ( v23 )
          v21 = v17;
        ++v24;
        v22 = __clz(v25);
      }
      while ( v21 );
    }
    else
    {
      v17 = 0;
    }
  }
  return v17 - 1;
}
