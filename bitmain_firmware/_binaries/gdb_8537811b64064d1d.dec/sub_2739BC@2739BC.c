void __fastcall sub_2739BC(int a1, int *a2)
{
  int v2; // r3
  int v3; // r1

  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 == *(_DWORD *)(a1 + 8) )
  {
    sub_273720((_DWORD *)a1, *(char **)(a1 + 4), a2);
  }
  else
  {
    if ( v2 )
    {
      v3 = *a2;
      *(_BYTE *)(v2 + 4) = 0;
      *(_BYTE *)(v2 + 5) = 0;
      *(_DWORD *)v2 = v3;
      *(_BYTE *)(v2 + 6) = 0;
      *(_DWORD *)(v2 + 8) = 0;
      *(_BYTE *)(v2 + 12) = 0;
      *(_DWORD *)(v2 + 16) = 0;
      *(_DWORD *)(v2 + 20) = 0;
      *(_DWORD *)(v2 + 24) = 0;
    }
    *(_DWORD *)(a1 + 4) = v2 + 28;
  }
}
