int __fastcall set_core_reg_base10(int a1, int a2)
{
  char v3; // r0
  _DWORD v7[4]; // [sp+8h] [bp-1Ch] BYREF
  void *s; // [sp+18h] [bp-Ch]
  size_t nmemb; // [sp+1Ch] [bp-8h]

  if ( *(_BYTE *)(a1 + 276) != 1 )
    return 4;
  v7[0] = 305749;
  memset(&v7[1], 0, 10);
  BYTE2(v7[0]) = (16 * (*(_BYTE *)(a2 + 8) & 1)) & 0x1B | 0x44;
  HIBYTE(v7[0]) = 12;
  LOBYTE(v7[1]) = *(_BYTE *)(a2 + 9);
  *(_WORD *)((char *)&v7[1] + 1) = reverse_byte_order_16(*(_WORD *)(a2 + 10));
  HIBYTE(v7[1]) = *(_BYTE *)(a2 + 12);
  LOBYTE(v7[2]) = *(_BYTE *)(a2 + 13);
  *(_DWORD *)((char *)&v7[2] + 1) = reverse_byte_order_32(*(_DWORD *)a2);
  nmemb = 11;
  s = calloc(0xBu, 1u);
  memset(s, 0, 4u);
  memcpy(s, (char *)v7 + 2, 0xBu);
  v3 = BM_CRC5(s, 8 * nmemb);
  BYTE1(v7[3]) = BYTE1(v7[3]) & 0xE0 | v3 & 0x1F;
  free(s);
  send_command_packet(a1, (unsigned __int8 *)v7, 0xEu);
  return 0;
}
