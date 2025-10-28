void *__fastcall init_temp_senor_info(int a1)
{
  void *result; // r0
  int v3; // [sp+Ch] [bp-30h]
  int v4; // [sp+14h] [bp-28h]
  int v5; // [sp+28h] [bp-14h] BYREF
  int v6; // [sp+2Ch] [bp-10h]
  void *v7; // [sp+30h] [bp-Ch]
  int i; // [sp+34h] [bp-8h]

  result = get_all_created_runtime(&v5);
  v7 = result;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  if ( v5 > 0 )
  {
    v3 = *(_DWORD *)(*(_DWORD *)v7 + 424);
    v4 = *(_DWORD *)(*(_DWORD *)v7 + 432);
    result = *(void **)(*(_DWORD *)v7 + 440);
    for ( i = 0; i < v4; ++i )
    {
      v6 = v3 + 24 * i;
      if ( *(_DWORD *)(v6 + 12) )
      {
        if ( *(_DWORD *)(v6 + 12) == 1 )
          ++*(_DWORD *)(a1 + 28);
      }
      else
      {
        ++*(_DWORD *)(a1 + 24);
      }
    }
  }
  return result;
}
