int __fastcall sub_CD3F0(int a1)
{
  int i; // r3

  for ( i = dword_478348; i && *(_DWORD *)(i + 24) != a1; i = *(_DWORD *)(i + 8) )
    ;
  return i;
}
