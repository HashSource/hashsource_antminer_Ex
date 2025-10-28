int __fastcall dump_work_packet_ae(int a1)
{
  int v1; // r4
  int v2; // r5
  int v3; // t1

  v1 = a1 - 1;
  v2 = a1 + 86;
  printf("the work packet ");
  do
  {
    v3 = *(unsigned __int8 *)++v1;
    printf("%02x ", v3);
  }
  while ( v1 != v2 );
  return putchar(10);
}
