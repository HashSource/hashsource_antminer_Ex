int sub_4BA58()
{
  int v0; // r5
  _DWORD *all_created_runtime; // r0
  _DWORD *v2; // r6
  _DWORD *v3; // r6
  int v4; // r4
  int v5; // t1
  int *v6; // r3
  int v7; // r2
  int v8; // t1
  int *v9; // r3
  int v10; // r2
  int v11; // t1
  int v13; // [sp+4h] [bp-D4h] BYREF
  _DWORD v14[2]; // [sp+8h] [bp-D0h] BYREF
  int *v15; // [sp+10h] [bp-C8h]
  int v16; // [sp+20h] [bp-B8h]
  int v17; // [sp+24h] [bp-B4h]

  v0 = 0;
  v13 = 0;
  all_created_runtime = (_DWORD *)get_all_created_runtime(&v13);
  if ( v13 <= 0 )
    return 0x7FFFFFFF;
  v2 = all_created_runtime;
  read_status_from_monitor(v14, *all_created_runtime);
  if ( v13 <= 0 )
    return 0x7FFFFFFF;
  v3 = v2 - 1;
  v4 = 0x7FFFFFFF;
  do
  {
    v5 = v3[1];
    ++v3;
    read_status_from_monitor(v14, v5);
    if ( v16 > 0 )
    {
      v6 = (int *)v14[0];
      do
      {
        v8 = *v6++;
        v7 = v8;
        if ( v4 >= v8 )
          v4 = v7;
      }
      while ( v6 != (int *)(v14[0] + 4 * v16) );
    }
    if ( v17 > 0 )
    {
      v9 = v15;
      do
      {
        v11 = *v9++;
        v10 = v11;
        if ( v4 >= v11 )
          v4 = v10;
      }
      while ( &v15[v17] != v9 );
    }
    ++v0;
  }
  while ( v13 > v0 );
  return v4;
}
