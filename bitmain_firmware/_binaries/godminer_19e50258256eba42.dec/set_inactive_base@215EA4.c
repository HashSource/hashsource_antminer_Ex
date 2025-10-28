int __fastcall set_inactive_base(int a1)
{
  char v2; // r0
  _BYTE v5[7]; // [sp+8h] [bp-Ch] BYREF

  if ( *(_BYTE *)(a1 + 276) != 1 )
    return 4;
  *(_DWORD *)v5 = 5483093;
  *(_DWORD *)&v5[3] = 5;
  v2 = BM_CRC5(&v5[2], 0x20u);
  v5[6] = v5[6] & 0xE0 | v2 & 0x1F;
  send_command_packet(a1, v5, 7u);
  return 0;
}
