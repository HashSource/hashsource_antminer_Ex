void __fastcall sub_E1560(_BYTE *a1)
{
  int v1; // r0

  if ( a1 && *a1 )
    sub_94708("Invalid argument.");
  v1 = sub_23E430(dword_4878EC, dword_4878F0, dword_4878F4);
  if ( !v1 )
    sub_94708("No thread.");
  sub_E13A0(v1);
}
