_DWORD *__fastcall sub_2FCD54(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r4
  void *v5; // r0

  v2 = sub_2AB390(44);
  v3 = v2;
  if ( v2 && !sub_2FC8C4(v2, a1, (int)sub_2FC870, 36) )
  {
    v5 = v3;
    v3 = 0;
    free(v5);
  }
  return v3;
}
