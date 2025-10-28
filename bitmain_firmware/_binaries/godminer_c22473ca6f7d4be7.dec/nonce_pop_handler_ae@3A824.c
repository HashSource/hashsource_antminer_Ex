int __fastcall nonce_pop_handler_ae(int a1, int a2, int a3)
{
  int v5; // r4
  int v7; // r2
  _BYTE *v8; // r3
  int v9; // r2
  int v10; // r3

  v5 = memcmp((const void *)(a3 + 16), (const void *)(a1 + 456), 0x20u);
  if ( v5 )
    return 1;
  *(_DWORD *)(a2 + 1164) = malloc(0xA8u);
  v7 = *(_DWORD *)(a3 + 81);
  v8 = *(_BYTE **)(a2 + 1160);
  v8[3] = v7;
  v8[2] = BYTE1(v7);
  v8[1] = BYTE2(v7);
  *v8 = HIBYTE(v7);
  v9 = *(_DWORD *)(a2 + 1164) - 4;
  do
  {
    v10 = v5 + 20;
    ++v5;
    *(_DWORD *)(v9 + 4) = *(_DWORD *)(a3 + 4 * v10 + 7);
    v9 += 4;
  }
  while ( v5 != 42 );
  return 0;
}
