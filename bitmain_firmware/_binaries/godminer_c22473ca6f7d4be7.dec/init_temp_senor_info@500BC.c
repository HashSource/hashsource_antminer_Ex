void *__fastcall init_temp_senor_info(int a1)
{
  void *result; // r0
  int v3; // r2
  int *v4; // r3
  int v5; // r1
  int v6; // r3
  int v7; // r1
  int v8; // r2
  int v9; // [sp+4h] [bp-4h] BYREF

  result = get_all_created_runtime(&v9);
  v3 = v9;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  if ( v3 > 0 )
  {
    v4 = *(int **)(*(_DWORD *)result + 212);
    v5 = v4[1];
    if ( v5 > 0 )
    {
      v6 = *v4;
      v7 = v6 + 20 * v5;
      do
      {
        while ( 1 )
        {
          v8 = *(_DWORD *)(v6 + 8);
          if ( v8 )
            break;
          v6 += 20;
          ++*(_DWORD *)(a1 + 24);
          if ( v6 == v7 )
            return result;
        }
        v6 += 20;
        if ( v8 == 1 )
          ++*(_DWORD *)(a1 + 28);
      }
      while ( v6 != v7 );
    }
  }
  return result;
}
