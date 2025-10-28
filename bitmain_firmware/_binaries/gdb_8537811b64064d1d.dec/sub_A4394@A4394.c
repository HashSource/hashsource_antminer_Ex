int (__fastcall *__fastcall sub_A4394(int a1))(const char *a1, int a2, const char **a3)
{
  if ( *(_DWORD *)a1 == 2 )
    return sub_9AA74;
  if ( *(_BYTE *)(a1 + 4) )
    return (int (__fastcall *)(const char *, int, const char **))sub_A462C;
  return (int (__fastcall *)(const char *, int, const char **))sub_A4348(a1);
}
