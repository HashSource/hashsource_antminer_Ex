int __fastcall sub_19164C(char *a1)
{
  int *v2; // r0

  v2 = (int *)sub_1915B0(dword_487668, a1);
  if ( !v2 )
    sub_94708("Interpreter `%s' unrecognized", a1);
  return sub_1912DC(v2, 1);
}
