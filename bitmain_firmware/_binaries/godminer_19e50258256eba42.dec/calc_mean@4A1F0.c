int __fastcall calc_mean(int result, int a2)
{
  int i; // [sp+8h] [bp-Ch]
  int v3; // [sp+Ch] [bp-8h]

  v3 = 0;
  for ( i = 0; i < a2; ++i )
    v3 += *(_DWORD *)(result + 4 * i);
  return result;
}
