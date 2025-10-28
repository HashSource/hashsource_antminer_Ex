void __fastcall __noreturn sub_16558(const char *a1)
{
  _DWORD *v2; // r0

  if ( dword_487668 )
  {
    v2 = (_DWORD *)sub_242FDC();
    sub_256878(a1, *v2);
  }
  else
  {
    fputs(a1, (FILE *)stderr);
  }
  abort();
}
