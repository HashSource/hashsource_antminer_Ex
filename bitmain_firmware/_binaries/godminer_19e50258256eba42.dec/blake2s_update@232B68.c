int __fastcall blake2s_update(_DWORD *a1, char *a2, unsigned __int64 a3)
{
  size_t n; // [sp+10h] [bp-14h]
  int v8; // [sp+14h] [bp-10h]

  while ( a3 )
  {
    v8 = a1[44];
    n = 128 - v8;
    if ( a3 > (unsigned int)(128 - v8) )
    {
      memcpy((char *)a1 + v8 + 48, a2, n);
      a1[44] += n;
      sub_22E9D8((int)a1, 0x40u);
      blake2s_compress(a1, (int)(a1 + 12));
      memcpy(a1 + 12, a1 + 28, 0x40u);
      a1[44] -= 64;
      a2 += n;
      a3 -= n;
    }
    else
    {
      memcpy((char *)a1 + v8 + 48, a2, a3);
      a1[44] += a3;
      a2 += a3;
      a3 = 0;
    }
  }
  return 0;
}
