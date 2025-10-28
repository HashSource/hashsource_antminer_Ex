int __fastcall sub_1D73C8(int a1)
{
  int v1; // r4
  _DWORD v3[3]; // [sp+4h] [bp-Ch] BYREF

  v1 = sub_1D4A14(a1);
  sub_E17B8(v3, v1 + 252);
  while ( !((int (__fastcall *)(_DWORD *))loc_E16D4)(v3) )
  {
    if ( !((int (__fastcall *)(_DWORD *, int))loc_E1830)(v3, 1) )
      sub_94708("No trace.");
  }
  return sub_1D728C(v1, v3);
}
