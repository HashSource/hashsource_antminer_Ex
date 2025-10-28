_DWORD *__fastcall sub_FBFB4(int a1)
{
  _DWORD *result; // r0

  result = sub_FBF28(*(_DWORD **)(a1 + 4), *(_DWORD *)a1);
  *(_DWORD *)a1 = a1;
  *(_DWORD *)(a1 + 4) = a1;
  return result;
}
