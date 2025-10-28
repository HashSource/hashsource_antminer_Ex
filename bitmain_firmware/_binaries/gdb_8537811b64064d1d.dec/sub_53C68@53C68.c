int __fastcall sub_53C68(int a1, const char *a2, int a3, int a4)
{
  int result; // r0
  int *v8; // r1

  sub_25A440(a4, "%s%s -- ", a2, *(const char **)(a1 + 4));
  sub_53A60(a4, *(char **)(a1 + 28));
  result = sub_25A6E4(&word_356660, a4);
  if ( a3 )
  {
    v8 = *(int **)(a1 + 52);
    if ( v8 )
    {
      if ( (*(_BYTE *)(a1 + 12) & 0x40) == 0 )
        return sub_53B7C(*v8, -1, *(_DWORD *)(a1 + 56), 1, a4);
    }
  }
  return result;
}
