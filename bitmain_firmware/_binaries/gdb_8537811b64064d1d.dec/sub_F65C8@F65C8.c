char *sub_F65C8()
{
  void *v0; // r0
  void *v1; // r5
  int v2; // r8
  void *v3; // r5
  int v4; // r3
  char *v5; // r5
  char v6; // r0
  __int64 v8; // kr00_8
  int v9; // r0

  byte_47AC94 = 0;
  v0 = sub_92E50();
  v1 = (void *)dword_47AC90;
  v2 = (int)v0;
  if ( dword_47AC90 )
  {
    sub_F56D8((_DWORD *)dword_47AC90);
    sub_33AC2C(v1);
  }
  v3 = sub_98394(0x6Cu);
  sub_F64E8((int)v3);
  dword_47AC90 = (int)v3;
  sub_F4AF4((int)v3, 0, dword_48AAD4, dword_4900D8, 0);
  if ( !*((_BYTE *)v3 + 88) )
  {
    v5 = (char *)dword_48AD14;
    goto LABEL_6;
  }
  v4 = *((_DWORD *)v3 + 23);
  if ( v4 > 0 )
  {
    dword_4900D8 = v4 - 1;
    v5 = &byte_47AC8C;
    v6 = *(_BYTE *)(dword_48AAD4 + v4 - 1);
    dword_48AD14 = (int)&byte_47AC8C;
    byte_47AC8C = v6;
    dword_48ACB4 = 0;
    off_47075C = 0;
LABEL_6:
    sub_92E68(v2);
    return v5;
  }
  v8 = sub_94728(
         (int)"completer.c",
         1840,
         "%s: Assertion `%s' failed.",
         "char* gdb_completion_word_break_characters_throw()",
         "tracker.custom_word_point () > 0");
  sub_92E68(v2);
  if ( HIDWORD(v8) != 1 )
  {
    sub_339EA0(v8);
    sub_92E88();
  }
  v9 = sub_339EA0(v8);
  v5 = 0;
  byte_47AC94 = 1;
  sub_339F20(v9);
  return v5;
}
