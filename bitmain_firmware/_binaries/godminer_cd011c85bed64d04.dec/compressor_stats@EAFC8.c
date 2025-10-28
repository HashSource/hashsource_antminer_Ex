int __fastcall compressor_stats(_DWORD *a1)
{
  if ( !a1 )
    return puts("compressor is NULL\n");
  printf("compressbits: %d\n", *a1);
  printf("sizebits: %d\n", a1[1]);
  printf("sizebits1: %d\n", a1[2]);
  printf("npairs: %d\n", a1[6]);
  printf("size: %08x\n", a1[3]);
  printf("mask: %08x\n", a1[4]);
  printf("mask1: %08x\n", a1[5]);
  return printf("NIL: %08x\n\n", a1[8]);
}
