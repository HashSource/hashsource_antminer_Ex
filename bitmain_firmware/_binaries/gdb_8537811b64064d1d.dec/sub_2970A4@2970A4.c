int __fastcall sub_2970A4(int a1, int a2)
{
  bool v3; // zf

  sub_28D37C();
  dword_490154 = 0;
  v3 = (dword_48AAA0 & 0x80000) == 0;
  dword_48AAA0 |= 0x400u;
  if ( v3 )
  {
    sub_293324(a2);
    return sub_296F98();
  }
  else
  {
    sub_296D70(0, a2);
    sub_28D3EC("(arg: %d) ", dword_46DEDC * dword_46DEE0);
    return 0;
  }
}
