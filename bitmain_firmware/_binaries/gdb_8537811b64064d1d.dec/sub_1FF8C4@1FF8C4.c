bool __fastcall sub_1FF8C4(int a1, int a2)
{
  int v4; // r0
  const char *v5; // r7
  const char *v6; // r0
  int v7; // r0

  if ( sub_21A71C(*(_DWORD *)(*(_DWORD *)(a2 + 4) + 12), *(_DWORD *)(a1 + 8)) )
    return 1;
  v4 = *(_DWORD *)(a2 + 4);
  if ( dword_489708 )
  {
LABEL_5:
    v7 = sub_204330(v4);
    return sub_21A71C(v7, *(_DWORD *)(a1 + 8)) != 0;
  }
  v5 = (const char *)sub_3245CC(*(_DWORD *)(v4 + 12));
  v6 = (const char *)sub_3245CC(*(_DWORD *)(a1 + 8));
  if ( !j_strcmp(v5, v6) )
  {
    v4 = *(_DWORD *)(a2 + 4);
    goto LABEL_5;
  }
  return 0;
}
