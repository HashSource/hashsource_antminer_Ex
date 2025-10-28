signed int __fastcall sub_2845EC(int a1)
{
  int v2; // r4
  signed int result; // r0
  struct termios termios_p; // [sp+Ch] [bp-40h] BYREF

  v2 = fileno((FILE *)dword_48AAAC);
  sub_283F94(v2);
  *_errno_location() = 0;
  result = sub_2840B8(v2, &termios_p);
  if ( result >= 0 )
    return sub_28401C(a1, termios_p.c_cc[2], termios_p.c_cc[3], termios_p.c_cc[14], termios_p.c_cc[15]);
  return result;
}
