int __fastcall sub_81880(int a1, char a2, int a3, int a4, int a5, int a6, void *s, _DWORD *a8, int a9)
{
  if ( sub_81268(a1, a2, a3, (a5 << 16) | (a4 << 8) | a6 | 0x1980000) )
    return 0;
  usleep(0xC350u);
  memset(s, 0, 4 * a9);
  memset(a8, 0, 4 * a9);
  return sub_814F0(a1, a2, a3, (unsigned int *)s, a8, a9);
}
