int __fastcall sub_4A9CC(int result)
{
  int *v1; // r4
  char *v2; // r0

  v1 = (int *)result;
  if ( result )
  {
    sub_CDB08();
    v2 = sub_4A8EC(v1);
    return sub_D80AC(v2);
  }
  return result;
}
