void __fastcall sub_1A60FC(char *a1, int a2)
{
  __int64 v4; // r0
  int i; // r4

  if ( sub_59B74(a1) < 0 )
LABEL_9:
    sub_94708("Bad value for 'mt set per-command no'.", HIDWORD(v4));
  for ( i = dword_487A90; i; i = *(_DWORD *)i )
  {
    if ( (*(_BYTE *)(i + 13) & 0x1E) == 0 )
    {
      if ( (*(_WORD *)(i + 12) & 0x180) != 0x80 )
      {
        v4 = sub_94728(
               (int)"maint.c",
               922,
               "%s: Assertion `%s' failed.",
               "void set_per_command_cmd(const char*, int)",
               "list->type == set_cmd");
        goto LABEL_9;
      }
      sub_59BAC(a1, a2, i);
    }
  }
}
