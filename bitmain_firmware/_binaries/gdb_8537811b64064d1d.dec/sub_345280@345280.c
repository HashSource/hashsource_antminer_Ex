int __fastcall sub_345280(int *a1, int a2)
{
  int v3; // r3

  v3 = *a1;
  if ( *(int *)(*a1 - 4) >= 0 )
  {
    sub_3451CC(a1);
    v3 = *a1;
  }
  return v3 + a2;
}
