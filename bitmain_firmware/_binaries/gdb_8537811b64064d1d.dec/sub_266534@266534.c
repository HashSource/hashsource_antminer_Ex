void __fastcall sub_266534(int a1, int a2)
{
  unsigned int v3; // r5
  int v4; // r4

  if ( a1 )
  {
    v3 = sub_14CC28(a1);
    v4 = v3;
    sub_266488(0, v3);
    if ( v3 <= 1 )
    {
      dword_46DEAC = dword_46DE54;
      sub_94708("Nonsense input radix ``decimal %u''; input radix unchanged.", v3);
    }
  }
  else
  {
    v4 = 10;
    sub_266488(0, 10);
  }
  dword_46DE54 = v4;
  dword_46DEAC = v4;
  if ( a2 )
    sub_259F38("Input and output radices now set to decimal %u, hex %x, octal %o.\n", v4, v4, v4);
}
