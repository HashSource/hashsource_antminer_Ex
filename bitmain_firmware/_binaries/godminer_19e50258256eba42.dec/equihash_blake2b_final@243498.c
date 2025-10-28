int __fastcall equihash_blake2b_final(int a1, void *a2, unsigned __int8 a3)
{
  _QWORD s[8]; // [sp+14h] [bp-48h] BYREF
  int i; // [sp+54h] [bp-8h]

  memset(s, 0, sizeof(s));
  i = 0;
  if ( !a2 || !a3 || a3 > 0x40u )
    return -1;
  if ( sub_233D64(a1) )
    return -1;
  if ( *(_DWORD *)(a1 + 352) > 0x80u )
  {
    sub_233DE8(a1, 0x80u);
    sub_234230((_QWORD *)a1, a1 + 96);
    *(_DWORD *)(a1 + 352) -= 128;
    memcpy((void *)(a1 + 96), (const void *)(a1 + 224), *(_DWORD *)(a1 + 352));
  }
  sub_233DE8(a1, *(unsigned int *)(a1 + 352));
  sub_233DA0(a1);
  memset((void *)(a1 + 96 + *(_DWORD *)(a1 + 352)), 0, 256 - *(_DWORD *)(a1 + 352));
  sub_234230((_QWORD *)a1, a1 + 96);
  for ( i = 0; i <= 7; ++i )
    sub_233AE0((int)&s[i], *(_QWORD *)(a1 + 8 * i));
  memcpy(a2, s, a3);
  return 0;
}
