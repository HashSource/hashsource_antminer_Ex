void __fastcall __noreturn sub_1BFE98(_DWORD *a1, const char **a2, int a3)
{
  int v5; // r5
  const char *v6; // r2

  v5 = sub_171280(a1);
  sub_25A440(a3, "type ");
  if ( dword_46D448 )
    v6 = (const char *)sub_21B3EC(a2);
  else
    v6 = *a2;
  sub_25A440(a3, "%s = ", v6);
  sub_255DD8(v5, "", a3, 0);
}
