int __fastcall equihash_blake2b_update(int a1, char *a2, unsigned __int64 a3)
{
  size_t n; // [sp+10h] [bp-14h]
  int v8; // [sp+14h] [bp-10h]

  while ( a3 )
  {
    v8 = *(_DWORD *)(a1 + 352);
    n = 256 - v8;
    if ( a3 > (unsigned int)(256 - v8) )
    {
      memcpy((void *)(a1 + 96 + v8), a2, n);
      *(_DWORD *)(a1 + 352) += n;
      sub_233DE8(a1, 0x80u);
      sub_234230((_QWORD *)a1, a1 + 96);
      memcpy((void *)(a1 + 96), (const void *)(a1 + 224), 0x80u);
      *(_DWORD *)(a1 + 352) -= 128;
      a2 += n;
      a3 -= n;
    }
    else
    {
      memcpy((void *)(a1 + 96 + v8), a2, a3);
      *(_DWORD *)(a1 + 352) += a3;
      a2 += a3;
      a3 = 0;
    }
  }
  return 0;
}
