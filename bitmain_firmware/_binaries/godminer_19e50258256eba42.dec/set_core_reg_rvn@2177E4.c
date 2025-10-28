int __fastcall set_core_reg_rvn(int a1, int a2)
{
  char v3; // r0
  int v7; // [sp+8h] [bp-14h] BYREF
  int v8; // [sp+Ch] [bp-10h]
  _BYTE v9[6]; // [sp+10h] [bp-Ch] BYREF

  if ( *(_BYTE *)(a1 + 276) != 1 )
    return 4;
  v7 = 305749;
  v8 = 0;
  memset(v9, 0, sizeof(v9));
  BYTE2(v7) = (16 * (*(_BYTE *)(a2 + 8) & 1)) & 0x1B | 0x44;
  HIBYTE(v7) = 12;
  LOBYTE(v8) = *(_BYTE *)(a2 + 9);
  *(_WORD *)((char *)&v8 + 1) = reverse_byte_order_16(*(_WORD *)(a2 + 10) & 0xFFF);
  HIBYTE(v8) = *(_BYTE *)(a2 + 12);
  v9[0] = *(_BYTE *)(a2 + 13);
  *(_DWORD *)&v9[1] = reverse_byte_order_32(*(_DWORD *)a2);
  v3 = BM_CRC5((_BYTE *)&v7 + 2, 0x58u);
  v9[5] = v9[5] & 0xE0 | v3 & 0x1F;
  send_command_packet(a1, (unsigned __int8 *)&v7, 0xEu);
  return 0;
}
