int __fastcall sub_17FB54(_BYTE *a1)
{
  void *v2; // r0
  int result; // r0
  int v4; // r5

  v2 = *(void **)(sub_1836B0(a1) + 56);
  if ( v2 )
    free(v2);
  if ( a1 && *a1 )
  {
    v4 = sub_1836B0(v2);
    result = sub_32727C(a1);
    *(_DWORD *)(v4 + 56) = result;
  }
  else
  {
    result = sub_1836B0(v2);
    *(_DWORD *)(result + 56) = 0;
  }
  return result;
}
