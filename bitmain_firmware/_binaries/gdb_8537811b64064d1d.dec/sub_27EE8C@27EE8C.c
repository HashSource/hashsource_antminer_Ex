int __fastcall sub_27EE8C(int a1)
{
  int result; // r0

  if ( a1 == 27 )
  {
    dword_48AAA0 |= 0x50u;
    result = sub_293374();
    dword_48AAA0 &= 0xFFFFFFAF;
  }
  else
  {
    dword_48AAA0 |= 0x40u;
    result = sub_293374();
    dword_48AAA0 &= ~0x40u;
  }
  return result;
}
