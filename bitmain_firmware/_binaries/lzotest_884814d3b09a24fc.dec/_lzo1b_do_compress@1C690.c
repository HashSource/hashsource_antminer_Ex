int __fastcall lzo1b_do_compress(
        void *src,
        unsigned int a2,
        _BYTE *a3,
        unsigned int *a4,
        int a5,
        int (__fastcall *a6)(void *))
{
  _BYTE *v7; // r4
  int result; // r0
  int v10; // r0
  unsigned int v11; // r4

  v7 = a3;
  if ( a2 )
  {
    if ( a2 <= 0xA )
    {
      v10 = lzo1b_store_run((int)a3, src);
      v11 = v10 - (_DWORD)v7;
      *a4 = v11;
      if ( v11 <= a2 )
        return -1;
      v7 = (_BYTE *)v10;
    }
    else
    {
      result = a6(src);
      if ( result )
        return result;
      v7 += *a4;
    }
  }
  else
  {
    *a4 = 0;
  }
  *v7 = 33;
  result = 0;
  v7[1] = 0;
  v7[2] = 0;
  *a4 += 3;
  return result;
}
