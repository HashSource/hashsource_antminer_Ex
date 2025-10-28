int *__fastcall sub_11E0EC(int **a1)
{
  int v1; // r3
  int *result; // r0

  v1 = *((unsigned __int8 *)a1 + 17);
  result = *a1;
  if ( v1 )
  {
    if ( *((_BYTE *)result + 17) )
    {
      ((void (__fastcall *)(int *))loc_15DC8)(result);
      JUMPOUT(0x11E120);
    }
    result = (int *)*result;
  }
  if ( result )
    return (int *)result[1];
  return result;
}
