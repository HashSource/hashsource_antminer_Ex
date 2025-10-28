int __fastcall sub_17CB14(int a1, int a2, char *name, int *a4)
{
  int result; // r0

  result = unlink(name);
  if ( result == -1 )
  {
    sub_17CA5C(a4);
    return -1;
  }
  return result;
}
