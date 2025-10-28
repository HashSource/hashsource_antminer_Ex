int __fastcall sub_2613B4(const char **a1)
{
  int v2; // r0
  int v3; // r4
  int v4; // r5
  int v5; // r4
  _DWORD *v6; // r0
  int *v8; // r0
  int v9; // r0
  int v10; // r5
  _DWORD *v11; // r0
  const char *v12; // r0
  const char *v13; // r4
  const char *v14; // r1
  const char *v15; // r1

  sub_2611B4();
  v3 = v2;
  v4 = sub_26BC98(v2);
  if ( (*(_DWORD *)nullsub_31(v3) != 1 || !sub_26BF74(v3)) && **(_BYTE **)(v4 + 24) != 7 )
  {
    if ( *(_DWORD *)nullsub_31(v3) == 2 )
    {
      v8 = (int *)sub_26C1C4(v3);
      v9 = sub_15FEB4(*v8, v8[1], v8[2], v8[3], v8[4]);
      if ( v9 )
      {
        v10 = sub_15ECDC(v9);
        v11 = (_DWORD *)sub_26C1E0(v3);
        v12 = (const char *)((int (__fastcall *)(int, _DWORD))loc_1677E8)(v10, *v11);
        v13 = v12;
        if ( !v12 || !*v12 )
          sub_94728(
            (int)"valops.c",
            1339,
            "%s: Assertion `%s' failed.",
            "value* address_of_variable(symbol*, const block*)",
            "regname && *regname");
        if ( dword_46D448 )
          v14 = (const char *)sub_21B3EC((int)a1);
        else
          v14 = *a1;
        sub_94708("Address requested for identifier \"%s\" which is in register $%s", v14, v13);
      }
      sub_94728(
        (int)"valops.c",
        1335,
        "%s: Assertion `%s' failed.",
        "value* address_of_variable(symbol*, const block*)",
        "frame");
    }
    if ( dword_46D448 )
      v15 = (const char *)sub_21B3EC((int)a1);
    else
      v15 = *a1;
    sub_94708("Can't take address of \"%s\" which isn't an lvalue.", v15);
  }
  v5 = ((int (__fastcall *)(int))loc_26C0C4)(v3);
  v6 = sub_1700E8((_DWORD *)v4);
  return sub_26DCC4(v6, v5);
}
