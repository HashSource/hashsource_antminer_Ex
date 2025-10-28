FILE *__fastcall sub_325C04(int a1, int fd)
{
  if ( fcntl(fd, 2, 1) < 0 )
    return 0;
  else
    return fdopen(fd, "w");
}
