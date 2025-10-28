int __fastcall sub_1F0C14(int a1, int a2)
{
  const char *v3; // r1
  int v5; // [sp+Ch] [bp-4h] BYREF

  if ( !a1 )
LABEL_9:
    sub_51EC4("file to put");
  v5 = 0;
  sub_25B104(&v5, a1);
  if ( !v5 )
  {
    sub_94728((int)"utils.h", 203, "%s: Assertion `%s' failed.", "char* gdb_argv::operator[](int)", "m_argv != NULL");
    goto LABEL_9;
  }
  if ( !*(_DWORD *)v5 || (v3 = *(const char **)(v5 + 4)) == 0 || *(_DWORD *)(v5 + 8) )
    sub_94708("Invalid parameters to remote put");
  sub_1F09CC(*(const char **)v5, v3, a2);
  return sub_31DAF8(v5);
}
