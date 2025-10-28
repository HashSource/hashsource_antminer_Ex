int __fastcall sync_get_dag_node_base_2282(int a1, int a2, int a3, int a4, int *a5, int a6, unsigned int a7)
{
  char v10; // r1
  unsigned int v12; // r0
  _BYTE *v13; // r11
  char v14; // r0
  unsigned __int8 v16[2]; // [sp+Ch] [bp-10h] BYREF
  __int64 src; // [sp+Eh] [bp-Eh] BYREF

  if ( !*(_BYTE *)(a1 + 252) )
    return 4;
  src = 0;
  v10 = *(_BYTE *)(a2 + 8);
  v16[0] = 85;
  v12 = *(_DWORD *)(a2 + 4);
  src = (16 * (v10 & 1)) & 0x19 | 0x46u;
  v16[1] = -86;
  BYTE1(src) = 8;
  *(_DWORD *)((char *)&src + 3) = reverse_byte_order_32(v12);
  v13 = calloc(8u, 1u);
  memcpy(v13, &src, 7u);
  v14 = BM_CRC5(v13, 64);
  HIBYTE(src) = HIBYTE(src) & 0xE0 | v14 & 0x1F;
  free(v13);
  send_command_packet(a1, v16, 0xAu);
  if ( !*(_BYTE *)(a2 + 8) )
    a3 = 1;
  if ( *(_BYTE *)(a1 + 252) )
    return sub_CC384(a1, a3, a4, a5, a7);
  else
    return 4;
}
