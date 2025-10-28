int __fastcall sync_get_chip_reg_base3(int a1, int a2, int a3, int a4, _DWORD *a5, unsigned __int64 a6)
{
  char v7; // r0
  _BYTE v13[7]; // [sp+18h] [bp-Ch] BYREF

  if ( *(_BYTE *)(a1 + 276) != 1 )
    return 4;
  *(_DWORD *)v13 = 174677;
  *(_DWORD *)&v13[3] = 0;
  v13[2] = (16 * (*(_BYTE *)(a2 + 8) & 1)) | 2;
  v13[2] = v13[2] & 0x1F | 0x40;
  v13[3] = 5;
  v13[4] = *(_BYTE *)(a2 + 9);
  v13[5] = *(_WORD *)(a2 + 10);
  v7 = BM_CRC5(&v13[2], 0x20u);
  v13[6] = v13[6] & 0xE0 | v7 & 0x1F;
  send_command_packet(a1, v13, 7u);
  if ( *(_BYTE *)(a2 + 8) != 1 )
    a3 = 1;
  return sync_get_status_base4(a1, a3, a4, a5, a6);
}
