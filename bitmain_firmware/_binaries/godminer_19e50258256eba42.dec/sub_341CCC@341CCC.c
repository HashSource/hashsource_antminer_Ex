int __fastcall sub_341CCC(int a1, char a2, int a3, int a4, unsigned int a5)
{
  int result; // r0
  unsigned int i; // [sp+24h] [bp-8h]

  if ( *(_DWORD *)(a1 + 64) || a3 )
  {
    memset((void *)(a1 + *(_DWORD *)(a1 + 64)), 0, 64 - *(_DWORD *)(a1 + 64));
    *(_BYTE *)(a1 + *(_DWORD *)(a1 + 64)) = a2 & (255 << (8 - a3));
    sub_32DD20((unsigned __int8 *)a1, 0);
  }
  memset((void *)a1, 0, 0x40u);
  sub_341BBC(a1, *(_DWORD *)(a1 + 132), *(_DWORD *)(a1 + 136), *(_DWORD *)(a1 + 64), a3);
  result = sub_32DD20((unsigned __int8 *)a1, 1);
  for ( i = 0; i < a5; ++i )
    result = sub_32BAF8(a4 + 4 * i, *(_DWORD *)(a1 + 4 * (i + 16) + 4));
  return result;
}
