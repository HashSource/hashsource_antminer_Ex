int __fastcall hs_blake2b_final(int a1, void *a2, unsigned int a3)
{
  _QWORD s[8]; // [sp+14h] [bp-48h] BYREF
  unsigned int i; // [sp+54h] [bp-8h]

  memset(s, 0, sizeof(s));
  if ( !a2 || a3 < *(_DWORD *)(a1 + 228) )
    return -1;
  if ( sub_246FD4(a1) )
    return -1;
  sub_247054(a1, *(unsigned int *)(a1 + 224));
  sub_247010(a1);
  memset((void *)(a1 + 96 + *(_DWORD *)(a1 + 224)), 0, 128 - *(_DWORD *)(a1 + 224));
  sub_2474B4((_QWORD *)a1, a1 + 96);
  for ( i = 0; i <= 7; ++i )
    sub_246EB0(&s[i], *(_QWORD *)(a1 + 8 * i));
  memcpy(a2, s, *(_DWORD *)(a1 + 228));
  sub_246F68(s, 0x40u);
  return 0;
}
