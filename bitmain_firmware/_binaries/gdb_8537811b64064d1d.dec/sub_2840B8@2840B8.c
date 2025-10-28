tcflag_t __fastcall sub_2840B8(int fd, struct termios *termios_p)
{
  tcflag_t result; // r0

  while ( tcgetattr(fd, termios_p) < 0 )
  {
    if ( *_errno_location() != 4 )
      return -1;
  }
  result = termios_p->c_lflag & 0x1000;
  if ( result )
  {
    sub_29155C("warning: turning off output flushing");
    result = 0;
    termios_p->c_lflag &= ~0x1000u;
  }
  return result;
}
