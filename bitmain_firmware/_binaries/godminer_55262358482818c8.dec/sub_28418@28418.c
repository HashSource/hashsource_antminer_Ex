int *__fastcall sub_28418(int *result)
{
  int v1; // r2
  int *v2; // r4

  v1 = *result;
  byte_194984 = 1;
  if ( v1 != -1 )
  {
    v2 = result;
    shutdown(v1, 2);
    result = (int *)close(*v2);
    *v2 = -1;
  }
  return result;
}
