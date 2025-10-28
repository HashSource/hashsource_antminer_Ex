int __fastcall sub_292334(int a1)
{
  int v2; // r8
  int v3; // r7
  int result; // r0

  if ( a1 < 0 )
    return sub_2922D4(-a1);
  v2 = dword_4900D4;
  v3 = dword_4900D8;
  sub_295544(a1, 0);
  dword_4900D4 = dword_4900D8;
  sub_295530(a1, 0);
  result = sub_291A08(0);
  dword_4900D4 = v2;
  dword_4900D8 = v3;
  return result;
}
