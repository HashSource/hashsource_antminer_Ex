int __fastcall sub_17CB48(int a1, int fd, int *a3)
{
  int result; // r0

  result = close(fd);
  if ( result == -1 )
  {
    sub_17CA5C(a3);
    return -1;
  }
  return result;
}
