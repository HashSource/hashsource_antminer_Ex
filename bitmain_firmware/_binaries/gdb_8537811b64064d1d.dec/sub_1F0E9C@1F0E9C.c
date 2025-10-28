int __fastcall sub_1F0E9C(int a1, int a2)
{
  int v3; // r1
  int v5; // [sp+Ch] [bp-4h] BYREF

  if ( !a1 )
LABEL_9:
    sub_51EC4("file to get");
  v5 = 0;
  sub_25B104(&v5, a1);
  if ( !v5 )
  {
    sub_94728((int)"utils.h", 203, "%s: Assertion `%s' failed.", "char* gdb_argv::operator[](int)", "m_argv != NULL");
    goto LABEL_9;
  }
  if ( !*(_DWORD *)v5 || (v3 = *(_DWORD *)(v5 + 4)) == 0 || *(_DWORD *)(v5 + 8) )
    sub_94708("Invalid parameters to remote get");
  sub_1F0CD4(*(const char **)v5, v3, a2);
  return sub_31DAF8(v5);
}
