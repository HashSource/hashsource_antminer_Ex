int __fastcall sub_A5800(const char *a1, int a2, int a3)
{
  int v3; // r4
  int v4; // r6
  int v5; // t1

  v3 = a2 - 1;
  v4 = a2 - 1 + a3;
  printf("%s[%3d] ", a1, a3);
  do
  {
    v5 = *(unsigned __int8 *)++v3;
    printf("%02x", v5);
  }
  while ( v3 != v4 );
  return putchar(10);
}
