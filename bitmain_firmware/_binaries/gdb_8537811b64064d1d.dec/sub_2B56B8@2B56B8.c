char *__fastcall sub_2B56B8(int a1)
{
  unsigned int v1; // r0

  if ( a1 == 160 )
    return (char *)&unk_41377C;
  v1 = a1 - 252;
  if ( v1 > 3 )
    return 0;
  else
    return (char *)&unk_4137B0 + 52 * v1;
}
