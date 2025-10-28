int sub_78FC4()
{
  int v1; // r0
  FILE *s[8]; // [sp+8h] [bp-34h] BYREF
  FILE *stream; // [sp+28h] [bp-14h]
  int j; // [sp+2Ch] [bp-10h]
  int i; // [sp+30h] [bp-Ch]
  int v7; // [sp+34h] [bp-8h]

  v7 = 0;
  memset(s, 0, sizeof(s));
  stream = fopen("/nvdata/vdd.txt", "r");
  if ( stream )
  {
    for ( i = 0; i <= 3; ++i )
    {
      for ( j = 0; j <= 1; ++j )
      {
        if ( _isoc99_fscanf(stream, "%d", &s[2 * i] + j) != 1 )
        {
          printf("read %d-%d failed\n", i, j);
          return 1;
        }
      }
    }
    fclose(stream);
  }
  else
  {
    puts("vdd.txt not exit!");
    for ( i = 0; i <= 3; ++i )
    {
      s[2 * i] = (FILE *)700;
      s[2 * i + 1] = (FILE *)1200;
    }
  }
  for ( i = 0; i <= 3; ++i )
  {
    for ( j = 0; j <= 1; ++j )
      printf("%d ", *(&s[2 * i] + j));
    putchar(10);
    v1 = set_voltage_MP2973_base(i + 1, (unsigned int)s[2 * i], (unsigned int)s[2 * i + 1]);
    v7 |= v1;
  }
  return v7;
}
