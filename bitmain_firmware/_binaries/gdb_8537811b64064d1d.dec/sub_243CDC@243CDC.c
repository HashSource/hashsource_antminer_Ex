int __fastcall sub_243CDC(char *a1)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r0
  int *v4; // r3
  int v5; // r6
  int v6; // r2
  int v7; // r0
  int v8; // r3
  void *v9; // r0
  int v10; // r3
  void *v11; // r7
  int v12; // r6
  char *v13; // r0
  int v14; // r4
  int v16; // r0

  v2 = (_DWORD *)dword_487668;
  v3 = sub_93050(0xCu);
  v4 = &dword_242DB0;
  v5 = (int)v3;
  v6 = v2[7];
  *v3 = v2[6];
  v2[6] = &dword_242DB0;
  if ( v6 )
    v4 = &dword_48AABC;
  else
    v3[1] = 0;
  if ( v6 )
    v3[1] = *v4;
  v7 = off_489AFC(&dword_4899A0);
  v8 = v2[10];
  *(_DWORD *)(v5 + 8) = v7;
  v2[10] = v8 + 1;
  v9 = sub_92564(2370732, v5);
  v10 = *(_DWORD *)(v5 + 8);
  v11 = v9;
  v12 = dword_487668;
  if ( v10 )
    sub_23293C(0);
  v13 = "";
  if ( a1 )
    v13 = a1;
  sub_153E08(v13);
  if ( v2[7] )
    dword_48AABC = 1;
  if ( off_487664 )
  {
    ((void (*)(void))off_487664)();
    if ( off_487664 )
    {
      v16 = sub_94728(
              (int)"top.c",
              1001,
              "%s: Assertion `%s' failed.",
              "char* gdb_readline_wrapper(const char*)",
              "after_char_processing_hook == NULL");
      dword_487668 = v12;
      sub_339024(v16);
    }
  }
  while ( sub_152C8C() >= 0 && !dword_48A500 )
    ;
  v14 = dword_48A4FC;
  sub_92648(v11);
  dword_487668 = v12;
  return v14;
}
