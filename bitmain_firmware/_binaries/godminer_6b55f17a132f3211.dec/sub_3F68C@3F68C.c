int __fastcall sub_3F68C(int a1, int a2)
{
  void *v2; // r0
  void *v4; // r4

  v2 = *(void **)(a2 + 1580);
  if ( v2 )
    free(v2);
  v4 = calloc(1u, 0x68u);
  *(_DWORD *)(a2 + 1580) = v4;
  if ( v4 )
    return 1;
  printf("invalid pointer(%s)!\n", "work->private");
  return 0;
}
