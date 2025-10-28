int __fastcall set_single_chipaddr_base(int a1, int a2, int a3)
{
  char v4; // r0
  _BYTE v9[7]; // [sp+10h] [bp-Ch] BYREF

  if ( *(_BYTE *)(a1 + 276) != 1 )
    return 4;
  (*(void (__fastcall **)(int))(a1 + 292))(a1);
  usleep(0x4E20u);
  *(_DWORD *)v9 = 4237909;
  *(_DWORD *)&v9[3] = 5;
  v9[4] = *(_BYTE *)(a2 + a3);
  v4 = BM_CRC5(&v9[2], 0x20u);
  v9[6] = v9[6] & 0xE0 | v4 & 0x1F;
  send_command_packet(a1, v9, 7u);
  usleep(0x4E20u);
  return 0;
}
