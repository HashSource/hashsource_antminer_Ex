const char ***__fastcall sub_2127B4(const char ***a1, const char *a2)
{
  void *v4; // r6
  void *v5; // r8
  char *v6; // r0
  int v7; // r7
  bool v8; // zf
  const char **v9; // r0
  int v11; // r0
  const char *v12; // r0
  int v13; // r0
  const char *v14; // r0
  const char *v15; // [sp+Ch] [bp-4h] BYREF

  v4 = sub_92564((int)nullsub_39, 0);
  if ( sub_16258C(a2) )
  {
    v7 = -1;
  }
  else
  {
    v5 = (void *)sub_29B938(a2);
    v6 = getenv("PATH");
    v7 = ((int (__fastcall *)(char *, int, void *, _DWORD, const char **))loc_203B0C)(v6, 5, v5, 0, &v15);
    if ( v7 < 0 )
      sub_258B2C(v5);
    sub_92564((int)sub_210C10, (int)v15);
    a2 = v15;
    if ( v5 )
      free(v5);
  }
  ((void (__fastcall *)(const char ***, const char *, int, int))loc_1629B4)(a1, a2, dword_47ACA8, v7);
  if ( !*a1 )
  {
    v13 = sub_2A6938(0);
    v14 = (const char *)sub_2A6948(v13);
    sub_94708("`%s': can't open to read symbols: %s.", a2, v14);
  }
  v8 = !sub_1625AC(*a1);
  v9 = *a1;
  if ( v8 )
    *((_BYTE *)v9 + 43) |= 2u;
  if ( !sub_2AA894(v9, 1) )
  {
    v11 = sub_2A6938(0);
    v12 = (const char *)sub_2A6948(v11);
    sub_94708("`%s': can't read symbols: %s.", a2, v12);
  }
  sub_92648(v4);
  return a1;
}
