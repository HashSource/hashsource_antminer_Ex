void sub_284120()
{
  FILE *v0; // r0
  int v1; // r5

  if ( dword_48ABE8 )
  {
    sub_290E4C();
    v0 = (FILE *)dword_48AAAC;
    if ( !dword_48AAAC )
      v0 = (FILE *)stdout;
    v1 = fileno(v0);
    if ( dword_490118 )
      sub_2946B4(0);
    fflush((FILE *)dword_48AAB0);
    if ( sub_283FCC(v1, &termios_p) >= 0 )
    {
      dword_48ABE8 = 0;
      dword_48AAA0 &= ~4u;
    }
    sub_290E9C();
  }
}
