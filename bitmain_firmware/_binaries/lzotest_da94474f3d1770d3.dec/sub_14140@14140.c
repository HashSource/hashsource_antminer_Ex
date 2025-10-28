void *__fastcall sub_14140(void *result)
{
  int v1; // r3
  int v2; // r1
  char **v3; // r2
  char *v4; // t1
  int *v5; // r1
  int v6; // r2
  void *v7; // t1
  int v8; // r2
  int *v9; // r1

  v1 = (int)result;
  if ( (int)result > 0 )
  {
    v2 = 21;
    v3 = &off_17108;
    result = &unk_17DF0;
    while ( v1 != v2 )
    {
      if ( v3 == (char **)&unk_17DF0 || (v4 = v3[14], v3 += 14, !v4) )
      {
        fprintf((FILE *)stdout, "%s: invalid method %d\n", (const char *)off_2A1D4, v1);
        exit(1);
      }
      v2 = (int)v3[1];
    }
    if ( dword_2A21C > 0 )
    {
      if ( v1 == dword_2A220 )
        return result;
      v5 = &dword_2A220;
      v6 = 0;
      while ( ++v6 != dword_2A21C )
      {
        v7 = (void *)v5[1];
        ++v5;
        result = v7;
        if ( v7 == (void *)v1 )
          return result;
      }
      if ( v6 > 255 )
      {
        fprintf((FILE *)stderr, "%s: too many methods\n", (const char *)off_2A1D4);
        exit(1);
      }
    }
    v8 = dword_2A21C + 1;
    v9 = &dword_2A200[dword_2A21C + 1];
    dword_2A200[dword_2A21C + 8] = v1;
    dword_2A21C = v8;
    v9[8] = 0;
    return 0;
  }
  return result;
}
