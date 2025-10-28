void sub_CD3C4()
{
  int i; // r3

  for ( i = dword_478348; i; i = *(_DWORD *)(i + 8) )
    *(_DWORD *)(i + 120) = 0;
}
