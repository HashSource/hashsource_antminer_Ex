int __fastcall sub_53DE8(int a1, char *s, int a3, int a4)
{
  size_t v7; // r0
  size_t v9; // r6
  size_t v10; // r6
  unsigned int v11; // [sp+8h] [bp-34h] BYREF
  size_t v12; // [sp+Ch] [bp-30h] BYREF
  unsigned int v13; // [sp+10h] [bp-2Ch]
  int v14; // [sp+14h] [bp-28h]

  v14 = a1;
  v7 = strlen(s);
  v13 = ((unsigned int)&v12 + 3) >> 3;
  LOBYTE(v11) = 0;
  if ( v7 )
  {
    v9 = v7;
    v12 = v7 - 1;
    v11 = ((unsigned int)&v12 + 3) >> 3;
    memcpy((char *)&v11 + 1, s, v7 - 1);
    *(_BYTE *)(v9 + 8 * v11) = 0;
    v10 = v12;
    memcpy(&v11, s, v12);
    *(_DWORD *)(v10 + 8 * v13) = *(_DWORD *)" sub";
    *((_BYTE *)&v11 + v10 + 4) = aSub[4];
  }
  if ( a3 == -2 )
  {
    sub_25A440(a4, "List of classes of %scommands:\n\n", (const char *)&v11);
    sub_53B7C(v14, -2, (int)s, 0, a4);
    sub_25A440(a4, "\nType \"help%s\" followed by a class name for a list of commands in ", (const char *)&v11);
    sub_259B80("");
    sub_25A440(a4, "that class.");
    sub_25A440(a4, "\nType \"help all\" for the list of all commands.");
  }
  else
  {
    sub_25A440(a4, aListOfScommand, &v11);
    sub_53B7C(v14, a3, (int)s, a3 >= 0, a4);
  }
  sub_25A440(a4, "\nType \"help%s\" followed by %scommand name ", (const char *)&v11, (const char *)&v11);
  sub_259B80("");
  sub_25A6E4("for ", a4);
  sub_259B80("");
  sub_25A6E4("full ", a4);
  sub_259B80("");
  sub_25A6E4("documentation.\n", a4);
  sub_25A6E4("Type \"apropos word\" to search for commands related to \"word\".\n", a4);
  return sub_25A6E4("Command name abbreviations are allowed if unambiguous.\n", a4);
}
