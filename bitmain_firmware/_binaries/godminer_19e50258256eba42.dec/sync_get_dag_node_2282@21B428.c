int __fastcall sync_get_dag_node_2282(int a1, int a2, unsigned int a3, int a4, unsigned int *a5, int a6, int a7)
{
  char v8; // r0
  _DWORD v14[3]; // [sp+1Ch] [bp-10h] BYREF

  if ( *(_BYTE *)(a1 + 276) != 1 )
    return 4;
  v14[0] = 436821;
  memset(&v14[1], 0, 6);
  BYTE2(v14[0]) = (16 * (*(_BYTE *)(a2 + 8) & 1)) & 0x19 | 0x46;
  HIBYTE(v14[0]) = 8;
  LOBYTE(v14[1]) = *(_BYTE *)(a2 + 9);
  *(_DWORD *)((char *)&v14[1] + 1) = reverse_byte_order_32(*(_DWORD *)(a2 + 4));
  v8 = BM_CRC5((_BYTE *)v14 + 2, 0x38u);
  BYTE1(v14[2]) = BYTE1(v14[2]) & 0xE0 | v8 & 0x1F;
  send_command_packet(a1, (unsigned __int8 *)v14, 0xAu);
  if ( *(_BYTE *)(a2 + 8) != 1 )
    a3 = 1;
  return sync_get_dag_high_speed_2282(a1, a3, a4, a5, a7);
}
