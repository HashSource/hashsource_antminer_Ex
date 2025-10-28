int __fastcall sub_1F0FE0(int a1, int a2)
{
  int v4; // [sp+Ch] [bp-4h] BYREF

  if ( !a1 )
LABEL_8:
    sub_51EC4("file to delete");
  v4 = 0;
  sub_25B104(&v4, a1);
  if ( !v4 )
  {
    sub_94728((int)"utils.h", 203, "%s: Assertion `%s' failed.", "char* gdb_argv::operator[](int)", "m_argv != NULL");
    goto LABEL_8;
  }
  if ( !*(_DWORD *)v4 || *(_DWORD *)(v4 + 4) )
    sub_94708("Invalid parameters to remote delete");
  sub_1F0F5C(*(const char **)v4, a2);
  return sub_31DAF8(v4);
}
