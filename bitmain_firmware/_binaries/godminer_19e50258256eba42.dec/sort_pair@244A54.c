int __fastcall sort_pair(int result, unsigned int a2)
{
  int v2; // [sp+8h] [bp-14h]
  int v3; // [sp+Ch] [bp-10h]
  unsigned int i; // [sp+10h] [bp-Ch]
  int v5; // [sp+14h] [bp-8h]

  v3 = result + 4 * a2;
  v5 = 0;
  for ( i = 0; i < a2; ++i )
  {
    if ( v5 || *(_DWORD *)(result + 4 * i) > *(_DWORD *)(v3 + 4 * i) )
    {
      v5 = 1;
      v2 = *(_DWORD *)(result + 4 * i);
      *(_DWORD *)(result + 4 * i) = *(_DWORD *)(v3 + 4 * i);
      *(_DWORD *)(v3 + 4 * i) = v2;
    }
    else if ( *(_DWORD *)(result + 4 * i) < *(_DWORD *)(v3 + 4 * i) )
    {
      return result;
    }
  }
  return result;
}
