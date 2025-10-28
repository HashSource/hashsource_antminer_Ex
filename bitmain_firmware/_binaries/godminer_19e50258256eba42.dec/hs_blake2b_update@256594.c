int __fastcall hs_blake2b_update(int a1, char *a2, unsigned int a3)
{
  unsigned int v4; // [sp+4h] [bp-20h]
  size_t n; // [sp+14h] [bp-10h]
  int v7; // [sp+18h] [bp-Ch]
  char *src; // [sp+1Ch] [bp-8h]

  v4 = a3;
  src = a2;
  if ( a3 )
  {
    v7 = *(_DWORD *)(a1 + 224);
    n = 128 - v7;
    if ( a3 > 128 - v7 )
    {
      *(_DWORD *)(a1 + 224) = 0;
      memcpy((void *)(a1 + 96 + v7), a2, n);
      sub_247054(a1, 0x80u);
      sub_2474B4((_QWORD *)a1, a1 + 96);
      src += n;
      for ( v4 -= n; v4 > 0x80; v4 -= 128 )
      {
        sub_247054(a1, 0x80u);
        sub_2474B4((_QWORD *)a1, (int)src);
        src += 128;
      }
    }
    memcpy((void *)(a1 + 96 + *(_DWORD *)(a1 + 224)), src, v4);
    *(_DWORD *)(a1 + 224) += v4;
  }
  return 0;
}
