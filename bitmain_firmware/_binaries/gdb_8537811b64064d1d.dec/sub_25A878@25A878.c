void __fastcall sub_25A878(int a1, _BYTE *a2, int a3, int a4)
{
  char **v7; // r0
  _BYTE *v8; // r0
  void *v9; // r6

  if ( a2 )
  {
    if ( dword_46D448 && (v7 = sub_194460(a3), v8 = (_BYTE *)sub_1944D8((int)v7, (int)a2, a4), (v9 = v8) != 0) )
    {
      sub_259C4C(v8, a1);
      free(v9);
    }
    else
    {
      sub_259C4C(a2, a1);
    }
  }
}
