int __fastcall sub_290958(int a1)
{
  int result; // r0

  dword_48AAA0 |= 0x8000u;
  result = sub_293EC0();
  if ( (unsigned int)off_48AF34 > 1 )
    result = off_48AF34(a1);
  dword_48AAA0 &= ~0x8000u;
  return result;
}
