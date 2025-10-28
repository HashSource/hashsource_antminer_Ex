int __fastcall sync_get_chip_reg_base(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  char v9; // r0
  _BYTE v15[7]; // [sp+18h] [bp-14h] BYREF

  if ( *(_BYTE *)(a1 + 276) != 1 )
    return 4;
  *(_DWORD *)v15 = 174677;
  *(_DWORD *)&v15[3] = 0;
  v15[2] = (16 * (*(_BYTE *)(a2 + 8) & 1)) | 2;
  v15[2] = v15[2] & 0x1F | 0x40;
  v15[3] = 5;
  v15[4] = *(_BYTE *)(a2 + 9);
  v15[5] = *(_WORD *)(a2 + 10);
  v9 = BM_CRC5(&v15[2], 0x20u);
  v15[6] = v15[6] & 0xE0 | v9 & 0x1F;
  send_command_packet(a1, v15, 7u);
  if ( *(_BYTE *)(a2 + 8) != 1 )
    a3 = 1;
  return (*(int (__fastcall **)(int, int, int, int, int, int))(a1 + 312))(a1, a3, a4, a5, a7, a8);
}
