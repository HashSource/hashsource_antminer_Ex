int __fastcall dump_work_packet(int a1)
{
  const char *v2; // r0
  const char *v3; // r6
  int v4; // r4
  int v5; // r5
  int v6; // t1

  LOWORD(v2) = -20052;
  LOWORD(v3) = 25416;
  HIWORD(v2) = (unsigned int)"channel %1x, chip_id %02x core_id %02x tx bist is running" >> 16;
  v4 = a1 - 1;
  v5 = a1 + 252;
  printf(v2);
  do
  {
    v6 = *(unsigned __int8 *)++v4;
    HIWORD(v3) = (unsigned int)" no sensor chip temp exceed limit! (%d)" >> 16;
    printf(v3, v6);
  }
  while ( v4 != v5 );
  return putchar(10);
}
