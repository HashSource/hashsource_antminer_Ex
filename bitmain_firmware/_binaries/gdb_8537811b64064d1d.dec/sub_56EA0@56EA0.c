int __fastcall sub_56EA0(int a1, int *a2, int a3)
{
  int v3; // r5
  int result; // r0
  int v7; // r8

  v3 = *a2;
  if ( a3 )
  {
    result = *a2;
    *a2 = 0;
  }
  else
  {
    v7 = sub_98394(16);
    sub_2569C4(v7, a1, 0, v3, 1);
    *a2 = 0;
    return v7;
  }
  return result;
}
