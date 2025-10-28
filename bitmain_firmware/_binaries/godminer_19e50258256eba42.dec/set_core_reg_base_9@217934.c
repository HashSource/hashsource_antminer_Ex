int __fastcall set_core_reg_base_9(int a1, int a2)
{
  char v3; // r0
  _DWORD v6[3]; // [sp+Ch] [bp-10h] BYREF

  if ( *(_BYTE *)(a1 + 276) != 1 )
    return 4;
  v6[0] = 305749;
  memset(&v6[1], 0, 7);
  BYTE2(v6[0]) = (16 * (*(_BYTE *)(a2 + 8) & 1)) | 4;
  BYTE2(v6[0]) = BYTE2(v6[0]) & 0x1F | 0x40;
  HIBYTE(v6[0]) = 9;
  LOBYTE(v6[1]) = *(_BYTE *)(a2 + 9);
  BYTE1(v6[1]) = *(_WORD *)(a2 + 10);
  BYTE2(v6[1]) = *(_BYTE *)(a2 + 12);
  HIBYTE(v6[1]) = BYTE2(*(_DWORD *)a2);
  LOBYTE(v6[2]) = BYTE1(*(_DWORD *)a2);
  BYTE1(v6[2]) = *(_DWORD *)a2;
  v3 = BM_CRC5((_BYTE *)v6 + 2, 0x40u);
  BYTE2(v6[2]) = BYTE2(v6[2]) & 0xE0 | v3 & 0x1F;
  send_command_packet(a1, (unsigned __int8 *)v6, 0xBu);
  return 0;
}
