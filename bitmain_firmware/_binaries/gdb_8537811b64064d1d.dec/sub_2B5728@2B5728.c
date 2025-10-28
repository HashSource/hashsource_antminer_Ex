char *__fastcall sub_2B5728(int a1, int a2)
{
  int v2; // r2
  int v3; // r3
  unsigned int v4; // r0

  v2 = 72;
  v3 = 0;
  while ( a2 != v2 )
  {
    if ( ++v3 == 90 )
      return 0;
    v2 = dword_413880[2 * v3];
  }
  v4 = LOBYTE(dword_413394[2 * v3 + 316]);
  if ( v4 > 0x87 )
    return sub_2B56B8(v4);
  else
    return (char *)&unk_415334 + 52 * v4;
}
