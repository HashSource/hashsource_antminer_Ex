int __fastcall sub_11DBA0(int a1, int a2, int a3, _DWORD *a4)
{
  void *v6; // r4
  int v7; // r5
  int v9; // r6

  v6 = (void *)sub_11D898(a1, a4);
  if ( a3 )
  {
    v7 = sub_1A3810(a3, a2, v6);
  }
  else
  {
    v9 = ((int (*)(void))loc_E61B8)();
    v7 = ((int (__fastcall *)(int, void *))loc_1A3470)(v9, v6);
    sub_1A3B70(v9);
  }
  if ( v6 )
    free(v6);
  return v7;
}
