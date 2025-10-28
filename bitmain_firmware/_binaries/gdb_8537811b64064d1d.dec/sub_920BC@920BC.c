int __fastcall sub_920BC(int *a1)
{
  int result; // r0

  result = *a1;
  a1[1] = 0;
  *a1 = 0;
  a1[2] = 0;
  return result;
}
