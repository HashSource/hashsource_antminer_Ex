int __fastcall sub_214804(unsigned int a1, int *a2)
{
  bool v3; // zf
  int v6; // r0
  int *v7; // r1

  v3 = a2 == 0;
  if ( a2 )
    v3 = dword_489690 == 0;
  if ( v3 )
    return a1;
  v6 = sub_2117CC(a2);
  if ( !v6 || sub_2142F8(v7) )
    return a1;
  else
    return sub_21473C(a1, a2);
}
