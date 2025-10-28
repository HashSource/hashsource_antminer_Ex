int __fastcall sub_19D7E4(int a1, char a2, char a3, int a4, int a5, int a6)
{
  if ( sub_19D250(a1, a2, a3, (a5 << 16) | (a4 << 8) | a6 | 0x1980000) )
    return -1;
  usleep(0xC350u);
  return 0;
}
