int __fastcall PrintState(int a1)
{
  int i; // [sp+14h] [bp-8h]

  for ( i = 0; i <= 15; ++i )
    printf(
      "0x%02x%02x%02x%02x ",
      HIBYTE(*(_DWORD *)(a1 + 4 * i)),
      (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 4 * i)),
      BYTE1(*(_DWORD *)(a1 + 4 * i)),
      (unsigned __int8)*(_DWORD *)(a1 + 4 * i));
  return putchar(10);
}
