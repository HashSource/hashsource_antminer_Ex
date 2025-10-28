_DWORD *sub_42B94()
{
  _DWORD *result; // r0
  int v1; // [sp+0h] [bp-14h] BYREF
  _DWORD *v2; // [sp+4h] [bp-10h]
  int j; // [sp+8h] [bp-Ch]
  int i; // [sp+Ch] [bp-8h]

  v1 = 0;
  result = get_all_created_runtime(&v1);
  v2 = result;
  for ( i = 0; i < v1; ++i )
  {
    for ( j = 0; j <= 31; ++j )
      *(_BYTE *)(v2[i] + j + 576) = 1;
  }
  return result;
}
