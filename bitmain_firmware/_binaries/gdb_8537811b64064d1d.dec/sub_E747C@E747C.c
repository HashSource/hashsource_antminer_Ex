int __fastcall sub_E747C(unsigned int a1, int a2)
{
  _DWORD *v3; // r0
  int v4; // r4

  v3 = sub_E71CC(a1, 0, 0);
  v4 = (int)v3;
  if ( v3 )
    v4 = ((int (__fastcall *)(_DWORD *, int, _DWORD))loc_E5010)(v3, a2, 0);
  sub_E4870();
  return v4;
}
