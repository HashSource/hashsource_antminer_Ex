int __fastcall sync_get_chip_reg_base3(int a1, int a2, int a3, int a4, _DWORD *a5, int a6, int a7, int a8)
{
  char v11; // r12
  __int16 v13; // lr
  char v14; // r0
  _BYTE v16[2]; // [sp+8h] [bp-Ch] BYREF
  int v17; // [sp+Ah] [bp-Ah] BYREF
  char v18; // [sp+Eh] [bp-6h]

  if ( !*(_BYTE *)(a1 + 228) )
    return 4;
  v17 = 0;
  v11 = *(_BYTE *)(a2 + 8);
  v18 = 0;
  v16[0] = 85;
  v13 = *(_WORD *)(a2 + 10);
  BYTE2(v17) = *(_BYTE *)(a2 + 9);
  BYTE1(v17) = 5;
  LOBYTE(v17) = (16 * (v11 & 1)) & 0x1D | 0x42;
  HIBYTE(v17) = v13;
  v16[1] = -86;
  v14 = BM_CRC5(&v17, 32);
  v18 = v18 & 0xE0 | v14 & 0x1F;
  send_command_packet(a1, v16, 7);
  if ( !*(_BYTE *)(a2 + 8) )
    a3 = 1;
  if ( *(_BYTE *)(a1 + 228) )
    return sub_B7304(a1, a3, a4, a5, a7, a8);
  else
    return 4;
}
