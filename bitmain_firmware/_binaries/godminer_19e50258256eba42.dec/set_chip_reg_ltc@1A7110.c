int __fastcall set_chip_reg_ltc(int a1, int a2)
{
  char v3; // r0
  _DWORD v7[3]; // [sp+Ch] [bp-10h] BYREF

  if ( *(_BYTE *)(a1 + 276) != 1 )
    return 4;
  v7[0] = 109141;
  memset(&v7[1], 0, 7);
  BYTE2(v7[0]) = (16 * (*(_BYTE *)(a2 + 8) & 1)) & 0x1E | 0x41;
  HIBYTE(v7[0]) = 9;
  LOBYTE(v7[1]) = *(_BYTE *)(a2 + 9);
  BYTE1(v7[1]) = *(_WORD *)(a2 + 10);
  *(_DWORD *)((char *)&v7[1] + 2) = reverse_byte_order_32(*(_DWORD *)a2);
  BYTE2(v7[2]) = 32 * (*(_BYTE *)(a2 + 15) & 3);
  v3 = BM_CRC5((_BYTE *)v7 + 2, 0x40u);
  BYTE2(v7[2]) = BYTE2(v7[2]) & 0xE0 | v3 & 0x1F;
  send_command_packet(a1, (unsigned __int8 *)v7, 0xBu);
  return 0;
}
