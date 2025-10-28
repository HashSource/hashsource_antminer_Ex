size_t __fastcall sub_2950C4(const char *a1, int a2, int a3)
{
  size_t v6; // r4

  sub_292720();
  if ( a2 <= a3 )
    sub_294F84(a2, a3 + 1);
  dword_4900D8 = a2;
  if ( *a1 )
    v6 = sub_294770(a1);
  else
    v6 = *(unsigned __int8 *)a1;
  sub_292770();
  return v6;
}
