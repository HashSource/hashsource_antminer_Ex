int __fastcall sub_1CD4B8(char **a1)
{
  int v1; // r5
  __int64 v3; // r0
  char **v4; // r2
  int v5; // r1
  int v6; // r2
  int v7; // r0
  int v8; // r0
  int result; // r0
  char **v10; // r3
  __int64 v11; // r0
  int v12; // r0

  if ( !a1 )
  {
    sub_94728(
      (int)"progspace.c",
      221,
      "%s: Assertion `%s' failed.",
      "void delete_program_space(program_space*)",
      "pspace != NULL");
LABEL_17:
    v11 = sub_94728(
            (int)"progspace.c",
            222,
            "%s: Assertion `%s' failed.",
            "void delete_program_space(program_space*)",
            "pspace != current_program_space");
    v12 = ((int (__fastcall *)(int, _DWORD))loc_1CD2B8)(v1, HIDWORD(v11));
    sub_339024(v12);
  }
  HIDWORD(v3) = &unk_487D20;
  v1 = dword_487D2C;
  if ( (char **)dword_487D2C == a1 )
    goto LABEL_17;
  v4 = (char **)dword_487D28;
  if ( dword_487D28 )
  {
    if ( a1 == (char **)dword_487D28 )
    {
      while ( 1 )
      {
        v10 = (char **)(HIDWORD(v3) + 8);
LABEL_13:
        *v10 = *v4;
        v1 = *(_DWORD *)(HIDWORD(v3) + 12);
        if ( a1 != (char **)v1 )
          break;
        v3 = sub_94728(
               (int)"progspace.c",
               147,
               "%s: Assertion `%s' failed.",
               "void release_program_space(program_space*)",
               "pspace != current_program_space");
      }
    }
    else
    {
      while ( *v4 )
      {
        if ( a1 == (char **)*v4 )
        {
          v10 = v4;
          v4 = a1;
          goto LABEL_13;
        }
        v4 = (char **)*v4;
      }
    }
  }
  ((void (__fastcall *)(char **))loc_1CD2B8)(a1);
  sub_DC364((int)a1, v5, v6);
  sub_201A68(0, 0);
  sub_94C84();
  v7 = ((int (*)(void))loc_1B7838)();
  v8 = sub_16F67C(v7);
  if ( !((int (__fastcall *)(int))loc_16D99C)(v8) )
    sub_1CCC2C(a1[5]);
  sub_948C4((int)(a1 + 10));
  sub_1CD488((int)a1);
  ((void (__fastcall *)(void *, int (__fastcall *)(int (__fastcall *)(int, int), int, int), char **, char **))loc_1E0CA4)(
    &unk_487D30,
    sub_1CCC14,
    a1,
    a1 + 16);
  free(a1);
  result = v1;
  if ( dword_487D2C != v1 )
  {
    if ( !v1 )
    {
      sub_94728(
        (int)"progspace.c",
        195,
        "%s: Assertion `%s' failed.",
        "void set_current_program_space(program_space*)",
        "pspace != NULL");
      JUMPOUT(0x1CD30C);
    }
    dword_487D2C = v1;
    return sub_15D7A0();
  }
  return result;
}
