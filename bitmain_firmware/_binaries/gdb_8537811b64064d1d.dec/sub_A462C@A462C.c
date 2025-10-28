int __fastcall sub_A462C(char *s1, int a2, _DWORD *a3)
{
  int v6; // r5

  v6 = a2 + 32;
  if ( !*(_BYTE *)(a2 + 60) )
  {
    sub_A3CBC(a2 + 32, a2);
    *(_BYTE *)(a2 + 60) = 1;
  }
  return sub_A00E4(v6, s1, *(_DWORD *)a2, a3);
}
