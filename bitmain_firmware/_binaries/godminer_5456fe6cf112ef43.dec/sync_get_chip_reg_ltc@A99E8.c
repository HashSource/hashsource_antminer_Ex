int __fastcall sync_get_chip_reg_ltc(int a1, int a2, int a3, int a4, _DWORD *a5, int a6, int a7, int a8)
{
  __int16 v12; // r0
  char v13; // r12
  char v14; // r2
  char v15; // r0
  _BYTE v17[2]; // [sp+8h] [bp-Ch] BYREF
  int v18; // [sp+Ah] [bp-Ah] BYREF
  char v19; // [sp+Eh] [bp-6h]

  if ( !*(_BYTE *)(a1 + 144) )
    return 4;
  v18 = 0;
  v17[0] = 85;
  v12 = *(_WORD *)(a2 + 10);
  v13 = *(_BYTE *)(a2 + 9);
  v14 = (16 * (*(_BYTE *)(a2 + 8) & 1)) & 0x1D | 0x42;
  v19 = 32 * (*(_BYTE *)(a2 + 15) & 3);
  LOBYTE(v18) = v14;
  HIBYTE(v18) = v12;
  BYTE1(v18) = 5;
  BYTE2(v18) = v13;
  v17[1] = -86;
  v15 = BM_CRC5(&v18, 32);
  v19 = v19 & 0xE0 | v15 & 0x1F;
  send_command_packet(a1, (int)v17, 7u);
  if ( !*(_BYTE *)(a2 + 8) )
    a3 = 1;
  if ( *(_BYTE *)(a1 + 144) )
    return sub_A9684(a1, a3, a4, a5, a7, a8);
  else
    return 4;
}
