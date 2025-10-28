int __fastcall blake2s_final(_DWORD *a1, void *a2, unsigned __int8 a3)
{
  _DWORD src[8]; // [sp+14h] [bp-28h] BYREF
  int i; // [sp+34h] [bp-8h]

  if ( a1[44] > 0x40u )
  {
    sub_22E9D8((int)a1, 0x40u);
    blake2s_compress(a1, (int)(a1 + 12));
    a1[44] -= 64;
    memcpy(a1 + 12, a1 + 28, a1[44]);
  }
  sub_22E9D8((int)a1, a1[44]);
  sub_22E994((int)a1);
  memset((char *)a1 + a1[44] + 48, 0, 128 - a1[44]);
  blake2s_compress(a1, (int)(a1 + 12));
  for ( i = 0; i <= 7; ++i )
    sub_22E72C(&src[i], a1[i]);
  memcpy(a2, src, a3);
  return 0;
}
