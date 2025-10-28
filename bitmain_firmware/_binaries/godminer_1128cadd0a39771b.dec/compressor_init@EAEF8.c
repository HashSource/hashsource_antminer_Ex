void *__fastcall compressor_init(_DWORD *a1, int a2, int a3)
{
  int v3; // r1
  int v5; // r5
  unsigned int v6; // r3
  void *v7; // r0

  v3 = a2 - a3;
  v5 = 1 << v3;
  *a1 = a3;
  v6 = (1 << v3) - 1;
  a1[1] = v3;
  a1[2] = v3 - 1;
  a1[3] = 1 << v3;
  a1[4] = v6;
  a1[5] = v6 >> 1;
  v7 = calloc(1 << v3, 4u);
  a1[7] = v7;
  if ( !v7 )
  {
    puts("calloc failed!");
    v7 = (void *)a1[7];
    v5 = a1[3];
  }
  a1[6] = 0;
  a1[8] = -1;
  return memset(v7, 255, 4 * v5);
}
