int __fastcall sub_17FBCC(void *a1)
{
  void *v1; // r4
  void *v2; // r0
  int v3; // r0
  int v4; // r0
  int result; // r0

  v1 = a1;
  v2 = *(void **)(sub_1836B0(a1) + 40);
  if ( v2 )
    free(v2);
  if ( v1 )
  {
    v2 = (void *)sub_32727C(v1);
    v1 = v2;
  }
  v3 = sub_1836B0(v2);
  *(_DWORD *)(v3 + 40) = v1;
  v4 = sub_1836B0(v3);
  *(_DWORD *)(v4 + 44) = 0;
  result = sub_1836B0(v4);
  *(_DWORD *)(result + 48) = 0;
  return result;
}
