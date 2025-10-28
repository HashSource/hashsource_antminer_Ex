int sub_296D1C()
{
  int result; // r0

  sub_28D3EC("(arg: %d) ", dword_46DEDC * dword_46DEE0);
  dword_48AAA0 |= 0x40u;
  result = sub_293374();
  dword_48AAA0 &= ~0x40u;
  return result;
}
