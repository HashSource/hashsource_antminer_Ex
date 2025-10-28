int __fastcall sub_341E34(int a1, char a2, int a3, int a4, unsigned int a5)
{
  int result; // r0
  unsigned int i; // [sp+24h] [bp-8h]

  if ( *(_DWORD *)(a1 + 128) || a3 )
  {
    memset((void *)(a1 + *(_DWORD *)(a1 + 128)), 0, 128 - *(_DWORD *)(a1 + 128));
    *(_BYTE *)(a1 + *(_DWORD *)(a1 + 128)) = a2 & (255 << (8 - a3));
    sub_336B60((unsigned __int8 *)a1, 0);
  }
  memset((void *)a1, 0, 0x80u);
  sub_341C44(a1, *(_DWORD *)(a1 + 260), *(_DWORD *)(a1 + 264), *(_DWORD *)(a1 + 128), a3);
  result = sub_336B60((unsigned __int8 *)a1, 1);
  for ( i = 0; i < a5; ++i )
    result = sub_32BAF8(a4 + 4 * i, *(_DWORD *)(a1 + 4 * (i + 32) + 4));
  return result;
}
