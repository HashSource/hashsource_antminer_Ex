void __fastcall sub_5F77C(int a1, _DWORD *a2)
{
  int v4; // r4
  _DWORD *v5; // r0

  v4 = sub_26FD00(a1);
  if ( (v4 == -1 && (sub_98FA0(&dword_4878EC, &dword_475848) || sub_23F1D0(dword_4878EC, dword_4878F0, dword_4878F4))
     || (v5 = (_DWORD *)sub_23E3EC(v4)) == 0
     || sub_23F1D0(v5[2], v5[3], v5[4]))
    && (!*a2 || sub_271940(a1)) )
  {
    sub_5F31C(a1, a2[1], 0);
  }
}
