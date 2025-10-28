int sub_284734()
{
  int result; // r0
  int v1; // r0

  result = dword_48AC38;
  if ( dword_48AC38 )
  {
    v1 = fileno((FILE *)dword_48AAAC);
    result = sub_283FCC(v1, (struct termios *)&unk_48AC3C);
    if ( !result )
      dword_48AC38 = 0;
  }
  return result;
}
