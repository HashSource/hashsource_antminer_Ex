int __fastcall set_core_reg_base2(int a1, int a2)
{
  char v3; // r0
  _BYTE v7[12]; // [sp+8h] [bp-1Ch] BYREF
  char v8; // [sp+14h] [bp-10h]
  void *s; // [sp+18h] [bp-Ch]
  size_t nmemb; // [sp+1Ch] [bp-8h]

  if ( *(_BYTE *)(a1 + 276) != 1 )
    return 4;
  *(_DWORD *)v7 = 305749;
  *(_DWORD *)&v7[4] = 0;
  *(_DWORD *)&v7[8] = 0;
  v8 = 0;
  v7[2] = (16 * (*(_BYTE *)(a2 + 8) & 1)) & 0x1B | 0x44;
  v7[3] = 11;
  v7[4] = *(_BYTE *)(a2 + 9);
  v7[5] = *(_BYTE *)(a2 + 12);
  *(_WORD *)&v7[6] = reverse_byte_order_16(*(_WORD *)(a2 + 10));
  *(_DWORD *)&v7[8] = reverse_byte_order_32(*(_DWORD *)a2);
  nmemb = 12;
  s = calloc(0xCu, 1u);
  memset(s, 0, 4u);
  memcpy(s, &v7[2], 0xAu);
  v3 = BM_CRC5(s, 8 * nmemb);
  v8 = v8 & 0xE0 | v3 & 0x1F;
  free(s);
  send_command_packet(a1, v7, 0xDu);
  return 0;
}
