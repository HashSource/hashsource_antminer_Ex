int __fastcall sub_1D7D44(int a1)
{
  _DWORD *v1; // r0
  int v2; // r4
  int v3; // r0

  if ( dword_487D4C )
  {
    v1 = (_DWORD *)sub_242FF0(a1);
    sub_2594D8(*v1, "[record-btrace] attach thread observer\n");
  }
  dword_487D98 = (int)sub_1B97DC((int)sub_1D4128);
  sub_231BA0(algn_487D9C);
  dword_487D94 = (int)sub_153298((int)sub_1D411C, 0);
  dword_487D68 = 0;
  v2 = ((int (__fastcall *)(int))loc_91CC0)(dword_487D6C);
  v3 = sub_1836B0();
  return sub_1B9478(v3, 1, (int)"btrace", v2);
}
