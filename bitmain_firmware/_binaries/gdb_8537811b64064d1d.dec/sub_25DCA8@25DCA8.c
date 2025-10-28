bool __fastcall sub_25DCA8(int a1, int a2)
{
  _DWORD *v4; // r0
  int v5; // r4
  _DWORD *v6; // r0
  int v7; // r0
  const void *v9; // r6
  const void *v10; // r0

  v4 = (_DWORD *)sub_26BC98(a1);
  v5 = sub_171280(v4);
  v6 = (_DWORD *)sub_26BC98(a2);
  v7 = sub_171280(v6);
  if ( **(char **)(v5 + 24) != **(char **)(v7 + 24) || *(_DWORD *)(v5 + 20) != *(_DWORD *)(v7 + 20) )
    return 0;
  v9 = (const void *)sub_26E9A0(a1);
  v10 = (const void *)sub_26E9A0(a2);
  return memcmp(v9, v10, *(_DWORD *)(v5 + 20)) == 0;
}
