int __fastcall sub_1A0214(int a1, int a2, int a3)
{
  int v5; // r4
  char *v6; // r5
  int result; // r0
  char *v8; // r5
  _DWORD *v9; // r0

  v5 = a2;
  v6 = (char *)sub_1A37C8(a2);
  sub_25A440(a1, "%s:%d\n", v6, a3);
  if ( v6 )
    free(v6);
  for ( result = *(_DWORD *)(v5 + 8); result; result = *(_DWORD *)(v5 + 8) )
  {
    v8 = (char *)sub_1A37C8(result);
    v9 = (_DWORD *)sub_242FB4(v8);
    sub_25A440(*v9, "  included at %s:%d\n", v8, *(_DWORD *)(v5 + 12));
    if ( v8 )
      free(v8);
    v5 = *(_DWORD *)(v5 + 8);
  }
  return result;
}
