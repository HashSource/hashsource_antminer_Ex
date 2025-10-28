int __fastcall sub_1E7808(int a1, char a2, int a3, int a4, _DWORD *s, _DWORD *a6, char a7)
{
  if ( sub_1E7338(a1, a2, a3, a4 | 0x1980000) )
    return 0;
  usleep(0xC350u);
  memset(s, 0, 4 * (unsigned __int8)a7);
  memset(a6, 0, 4 * (unsigned __int8)a7);
  return sub_1E73BC(a1, a2, a3, s, a6, (unsigned __int8)a7);
}
