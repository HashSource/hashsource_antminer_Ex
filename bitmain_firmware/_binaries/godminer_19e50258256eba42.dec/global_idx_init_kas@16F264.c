int __fastcall global_idx_init_kas(int a1)
{
  char *v1; // r3
  int v2; // r3
  char *s; // [sp+8h] [bp-Ch]
  int i; // [sp+Ch] [bp-8h]

  s = (char *)malloc(0x3081u);
  memset(s, 0, 0x3081u);
  *(_DWORD *)(a1 + 864) = s;
  for ( i = 0; i <= 127; ++i )
  {
    v1 = &s[8 * i];
    *v1 = -1;
    v1[1] = -1;
    v1[2] = -1;
    v1[3] = -1;
    v1[4] = -1;
    v1[5] = -1;
    v1[6] = -1;
    v1[7] = -1;
  }
  printf("__custom_data init %p\n", s);
  return v2;
}
