int __fastcall dump_work_vbk(int a1, int a2)
{
  int v2; // r4
  int v3; // r5
  int v4; // t1

  v2 = a1 + 15;
  v3 = a1 + 79;
  printf("dump work wc %d:", a2);
  do
  {
    v4 = *(unsigned __int8 *)++v2;
    printf("%02x ", v4);
  }
  while ( v2 != v3 );
  return putchar(10);
}
