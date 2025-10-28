int *__fastcall sub_366F4(int *result)
{
  int *v1; // [sp+Ch] [bp-8h]

  byte_5AC202 = 1;
  v1 = result;
  if ( *result != -1 )
  {
    shutdown(*result, 2);
    result = (int *)close(*v1);
    *v1 = -1;
  }
  return result;
}
