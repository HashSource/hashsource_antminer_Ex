int __fastcall sub_2147A0(unsigned int a1, int *a2)
{
  bool v3; // zf
  int v6; // r0
  int *v7; // r1

  v3 = dword_489690 == 0;
  if ( dword_489690 )
    v3 = a2 == 0;
  if ( !v3 && (v6 = sub_2117CC(a2), v6 && sub_21460C(a1, v7)) )
    return a1 + *(_DWORD *)(*a2 + 28) - *(_DWORD *)(*a2 + 32);
  else
    return a1;
}
