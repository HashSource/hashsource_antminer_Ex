int __fastcall sub_A8720(int a1, int a2, int a3)
{
  int v5; // r4
  int v6; // r3
  int v7; // r8
  int v8; // r0
  int v10; // r0
  int v11; // r4

  v5 = a1;
  if ( sub_A0D24(a1) )
    v5 = sub_A82A8(v5);
  if ( !v5 || !sub_A0A2C(v5) )
    return -a3;
  v6 = *(_DWORD *)(v5 + 24);
  if ( *(_BYTE *)v6 == 1 )
  {
    v5 = *(_DWORD *)(v6 + 20);
    v6 = *(_DWORD *)(v5 + 24);
  }
  if ( (*(_BYTE *)(v6 + 2) & 8) != 0
    || (v7 = sub_A0E60(v5, (const char *)&dword_375E58), ((void (*)(void))loc_A0950)(), !v7) )
  {
    v10 = sub_171280(v5);
    if ( a2 > 1 )
    {
      v11 = 1;
      do
      {
        ++v11;
        v10 = sub_171280(*(_DWORD *)(*(_DWORD *)(v10 + 24) + 20));
      }
      while ( a2 != v11 );
    }
    v8 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v10 + 24) + 24) + 12);
  }
  else
  {
    v8 = ((int (__fastcall *)(_DWORD, _DWORD))loc_A7DB8)(
           *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v7 + 24) + 24) + 24 * a2 - 12),
           0);
  }
  if ( a3 )
    return sub_9E814(v8);
  else
    return sub_9E910(v8);
}
