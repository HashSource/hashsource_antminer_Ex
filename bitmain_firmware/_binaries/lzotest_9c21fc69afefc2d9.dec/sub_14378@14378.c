void *__fastcall sub_14378(void *result)
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
    v3 = &off_2F870;
    result = &unk_30558;
    while ( v1 != v2 )
    {
      if ( v3 == (char **)&unk_30558 || (v4 = v3[14], v3 += 14, !v4) )
      {
        fprintf((FILE *)stdout, "%s: invalid method %d\n", (const char *)off_430BC, v1);
        exit(1);
      }
      v2 = (int)v3[1];
    }
    if ( dword_43104 > 0 )
    {
      if ( v1 == dword_43108 )
        return result;
      v5 = &dword_43108;
      v6 = 0;
      while ( ++v6 != dword_43104 )
      {
        v7 = (void *)v5[1];
        ++v5;
        result = v7;
        if ( v7 == (void *)v1 )
          return result;
      }
      if ( v6 > 255 )
      {
        fprintf((FILE *)stderr, "%s: too many methods\n", (const char *)off_430BC);
        exit(1);
      }
    }
    v8 = dword_43104 + 1;
    v9 = &dword_430E8[dword_43104 + 1];
    dword_430E8[dword_43104 + 8] = v1;
    dword_43104 = v8;
    v9[8] = 0;
    return 0;
  }
  return result;
}
