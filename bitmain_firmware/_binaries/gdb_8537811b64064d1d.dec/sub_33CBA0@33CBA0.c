int __fastcall sub_33CBA0(int a1, char *s, int a3)
{
  unsigned int v6; // r5

  v6 = strlen(s);
  *(_DWORD *)a1 = a1 + 8;
  *(_DWORD *)(a1 + 4) = 0;
  *(_BYTE *)(a1 + 8) = 0;
  sub_33B7D8((_DWORD *)a1, *(_DWORD *)(a3 + 4) + v6);
  if ( 0x7FFFFFFF - *(_DWORD *)(a1 + 4) < v6 )
    sub_33D1AC("basic_string::append");
  sub_33C348((_DWORD *)a1, s, v6);
  sub_33C348((_DWORD *)a1, *(_BYTE **)a3, *(_DWORD *)(a3 + 4));
  return a1;
}
