int sub_27E4CC()
{
  int v0; // r7
  int result; // r0
  int v2; // r6
  int v3; // r5
  void *v4; // r0

  v0 = sub_1836B0();
  result = sub_27E2C0(v0);
  v2 = dword_48AA74;
  *(_DWORD *)(result + 8) = *(_DWORD *)(v0 + 12);
  if ( v2 )
  {
    v3 = result;
    v4 = *(void **)(result + 4);
    if ( v4 )
      free(v4);
    result = sub_1FE0FC(dword_48AA78);
    *(_DWORD *)(v3 + 4) = result;
    dword_48AA70 = 1;
  }
  return result;
}
