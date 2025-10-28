void __fastcall sub_D80AC(int a1, int a2, int a3)
{
  int i; // r4

  for ( i = dword_478348; i; i = *(_DWORD *)(i + 8) )
  {
    while ( (unsigned int)(*(_DWORD *)(i + 12) - 7) > 2 )
    {
      i = *(_DWORD *)(i + 8);
      if ( !i )
        goto LABEL_6;
    }
    sub_C9704(i, 0);
  }
LABEL_6:
  sub_D7314(2, a2, a3);
}
