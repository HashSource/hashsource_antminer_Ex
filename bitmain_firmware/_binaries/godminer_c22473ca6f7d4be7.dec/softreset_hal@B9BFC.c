unsigned int __fastcall softreset_hal(int a1)
{
  int v2; // r4
  unsigned int result; // r0
  _BYTE v4[20]; // [sp+0h] [bp-14h] BYREF

  LOWORD(v2) = -10948;
  HIWORD(v2) = (unsigned int)&unk_16C33C >> 16;
  while ( uart_receive(*(_DWORD *)(v2 + 8 * a1), (int)v4, 0x10u) )
    ;
  sleep(1u);
  do
    result = uart_receive(*(_DWORD *)(v2 + 8 * a1), (int)v4, 0x10u);
  while ( result );
  return result;
}
