int __fastcall sub_25F328(int result, int a2)
{
  int v2; // [sp+10h] [bp-Ch]
  int i; // [sp+14h] [bp-8h]

  v2 = result;
  for ( i = 0; i <= 7; ++i )
  {
    result = v2;
    *(_DWORD *)(v2 + 4 * i) = (*(_DWORD *)(a2 + 4 * i) << 24)
                            | (*(_DWORD *)(a2 + 4 * i) << 8) & 0xFF0000
                            | (*(_DWORD *)(a2 + 4 * i) >> 8) & 0xFF00
                            | HIBYTE(*(_DWORD *)(a2 + 4 * i));
  }
  return result;
}
