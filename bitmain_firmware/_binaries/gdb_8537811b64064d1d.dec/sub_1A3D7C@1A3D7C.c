_DWORD *__fastcall sub_1A3D7C(int *a1, int a2, const char *a3)
{
  _DWORD *v5; // r4
  void *v6; // r6

  v5 = sub_1A2F68(a3, (int)a1, a2);
  if ( v5 )
  {
    v6 = (void *)sub_1A37C8(a1);
    v5 = (_DWORD *)sub_1A31E4((int)v6, a2, v5[1]);
    if ( v6 )
      free(v6);
  }
  return v5;
}
