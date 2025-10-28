char *__fastcall sub_140B4(_DWORD *a1, int a2, int a3, int a4)
{
  size_t v4; // r5
  char *result; // r0
  char *v9; // r3

  v4 = a2 + a4 + a3;
  a1[5] = v4;
  *a1 = 0;
  a1[4] = 0;
  a1[1] = 0;
  if ( !v4 )
  {
    v4 = 1;
    a1[5] = 1;
    result = (char *)malloc(1u);
    v9 = result;
    a1[4] = result;
    if ( result )
      goto LABEL_3;
LABEL_8:
    fprintf((FILE *)stderr, "%s: out of memory (wanted %lu bytes)\n", (const char *)off_430BC, v4);
    exit(3);
  }
  result = (char *)malloc(v4);
  v9 = result;
  a1[4] = result;
  if ( !result )
    goto LABEL_8;
  if ( v4 > 7 )
  {
    result = (char *)_lzo_align_gap();
    if ( result )
    {
      fprintf((FILE *)stderr, "%s: C library problem: malloc() returned misaligned pointer!\n", (const char *)off_430BC);
      exit(3);
    }
    v9 = (char *)a1[4];
  }
LABEL_3:
  *a1 = &v9[a3];
  a1[6] = a2;
  a1[1] = a2;
  a1[2] = 1;
  a1[3] = 0;
  return result;
}
