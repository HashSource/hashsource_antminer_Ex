int __fastcall sub_13934(int a1, const char *a2, __gnuc_va_list *a3)
{
  fprintf((FILE *)stderr, "%s: ", *(const char **)(a1 + 4));
  if ( a3 )
    vfprintf((FILE *)stderr, a2, *a3);
  else
    fwrite("UNKNOWN GETOPT ERROR", 1u, 0x14u, (FILE *)stderr);
  return fputc(10, (FILE *)stderr);
}
