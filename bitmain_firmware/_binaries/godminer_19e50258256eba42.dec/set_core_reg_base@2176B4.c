int __fastcall set_core_reg_base(int a1, int a2)
{
  char v3; // r0
  int v6; // [sp+Ch] [bp-10h] BYREF
  __int64 v7; // [sp+10h] [bp-Ch]

  if ( *(_BYTE *)(a1 + 276) != 1 )
    return 4;
  v6 = 305749;
  v7 = 0;
  BYTE2(v6) = (16 * (*(_BYTE *)(a2 + 8) & 1)) & 0x1B | 0x44;
  HIBYTE(v6) = 10;
  LOBYTE(v7) = *(_BYTE *)(a2 + 9);
  BYTE1(v7) = *(_WORD *)(a2 + 10);
  BYTE2(v7) = *(_BYTE *)(a2 + 12);
  *(_DWORD *)((char *)&v7 + 3) = reverse_byte_order_32(*(_DWORD *)a2);
  v3 = BM_CRC5((_BYTE *)&v6 + 2, 0x48u);
  HIBYTE(v7) = HIBYTE(v7) & 0xE0 | v3 & 0x1F;
  send_command_packet(a1, (unsigned __int8 *)&v6, 0xCu);
  return 0;
}
