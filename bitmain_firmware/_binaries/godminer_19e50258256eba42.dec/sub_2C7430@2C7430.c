int __fastcall sub_2C7430(_DWORD *a1, int *a2)
{
  int result; // r0

  result = sub_2C73F8((int)a1, *a2);
  a2[2] = *(_DWORD *)(*a1 + 4 * result);
  *(_DWORD *)(*a1 + 4 * result) = a2;
  return result;
}
