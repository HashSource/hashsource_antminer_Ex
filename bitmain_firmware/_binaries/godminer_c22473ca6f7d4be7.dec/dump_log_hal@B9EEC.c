int __fastcall dump_log_hal(const char *a1, int a2, int a3, int a4)
{
  const char *v7; // r0
  int v9; // r4
  const char *v10; // r6
  int v11; // r5
  int v12; // t1

  LOWORD(v7) = -376;
  HIWORD(v7) = (unsigned int)"OOM\n" >> 16;
  printf(v7, a1, a2);
  if ( a4 > 0 )
  {
    v9 = a3 - 1;
    LOWORD(v10) = 25416;
    v11 = v9 + a4;
    do
    {
      v12 = *(unsigned __int8 *)++v9;
      HIWORD(v10) = (unsigned int)" no sensor chip temp exceed limit! (%d)" >> 16;
      printf(v10, v12);
    }
    while ( v9 != v11 );
  }
  return putchar(10);
}
