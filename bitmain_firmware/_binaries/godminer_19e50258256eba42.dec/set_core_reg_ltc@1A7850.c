int __fastcall set_core_reg_ltc(int a1, int a2)
{
  char v3; // r0
  _DWORD v7[3]; // [sp+8h] [bp-14h] BYREF
  unsigned int v8; // [sp+14h] [bp-8h]

  if ( *(_BYTE *)(a1 + 276) != 1 )
    return 4;
  LOWORD(v8) = *(_DWORD *)a2;
  BYTE2(v8) = BYTE2(v8) & 0xF0 | *(_WORD *)(a2 + 10) & 0xF;
  HIWORD(v8) = HIWORD(v8) & 0xF00F | (16 * *(unsigned __int8 *)(a2 + 12));
  HIBYTE(v8) = HIBYTE(v8) & 0xF | 0x40 | ((*(_BYTE *)(a2 + 14) & 1) << 7);
  v7[0] = 109141;
  memset(&v7[1], 0, 7);
  BYTE2(v7[0]) = (16 * (*(_BYTE *)(a2 + 8) & 1)) & 0x1E | 0x41;
  HIBYTE(v7[0]) = 9;
  LOBYTE(v7[1]) = *(_BYTE *)(a2 + 9);
  BYTE1(v7[1]) = 60;
  *(_DWORD *)((char *)&v7[1] + 2) = reverse_byte_order_32(v8);
  BYTE2(v7[2]) = 32 * (*(_BYTE *)(a2 + 15) & 3);
  v3 = BM_CRC5((_BYTE *)v7 + 2, 0x40u);
  BYTE2(v7[2]) = BYTE2(v7[2]) & 0xE0 | v3 & 0x1F;
  send_command_packet(a1, (unsigned __int8 *)v7, 0xBu);
  return 0;
}
