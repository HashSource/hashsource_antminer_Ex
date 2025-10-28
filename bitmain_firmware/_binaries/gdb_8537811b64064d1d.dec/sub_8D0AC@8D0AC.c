int __fastcall sub_8D0AC(int a1, int a2)
{
  int result; // r0

  result = sub_15B3B0(a1);
  if ( result )
  {
    if ( !dword_487CE0 || (result = sub_C2388(a2)) != 0 )
      dword_487CE0 = a2;
  }
  return result;
}
