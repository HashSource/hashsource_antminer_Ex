int __fastcall sub_1D733C(int a1, int a2, unsigned int a3, int a4)
{
  bool v4; // zf
  int v6; // r5
  _DWORD v8[4]; // [sp+4h] [bp-10h] BYREF

  v4 = a4 == 0;
  if ( !a4 )
    v4 = 1;
  if ( !v4 )
    sub_94708("Instruction number out of range.");
  v6 = sub_1D4A14(a1);
  if ( !sub_E1A9C(v8, v6 + 252, a3) || !((int (__fastcall *)(_DWORD *))loc_E16D4)(v8) )
    sub_94708("No such instruction.");
  return sub_1D728C(v6, v8);
}
