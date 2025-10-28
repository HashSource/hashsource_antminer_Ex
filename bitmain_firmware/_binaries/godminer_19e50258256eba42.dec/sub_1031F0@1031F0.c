int __fastcall sub_1031F0(int a1, int a2, _DWORD *a3, int a4)
{
  int v9; // [sp+28h] [bp-14h]
  _DWORD *ptr; // [sp+2Ch] [bp-10h]
  _DWORD *s; // [sp+30h] [bp-Ch]
  int i; // [sp+34h] [bp-8h]

  s = malloc(4 * a4);
  ptr = malloc(4 * a4);
  *a3 = 0;
  v9 = sub_102FCC(a1, 1, 0, 0, s, ptr, a4);
  for ( i = 0; i < v9; ++i )
  {
    *(_DWORD *)(a2 + 4 * i) = HIBYTE(s[i]) - 64;
    a3[i] = ptr[i];
  }
  free(ptr);
  free(s);
  return v9;
}
