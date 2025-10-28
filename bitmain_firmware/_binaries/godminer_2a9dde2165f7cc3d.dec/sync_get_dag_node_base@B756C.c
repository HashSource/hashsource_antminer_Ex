int __fastcall sync_get_dag_node_base(int a1, int a2, int a3, int a4, _DWORD *a5, int a6, int a7, int a8)
{
  char v11; // r1
  int v13; // r0
  void *v14; // r10
  char v15; // r0
  _BYTE v17[2]; // [sp+Ch] [bp-Ch] BYREF
  __int64 src; // [sp+Eh] [bp-Ah] BYREF

  if ( !*(_BYTE *)(a1 + 228) )
    return 4;
  src = 0;
  v11 = *(_BYTE *)(a2 + 8);
  v17[0] = 85;
  v13 = *(_DWORD *)(a2 + 4);
  src = (16 * (v11 & 1)) & 0x19 | 0x46u;
  v17[1] = -86;
  BYTE1(src) = 8;
  *(_DWORD *)((char *)&src + 3) = reverse_byte_order_32(v13);
  v14 = calloc(8u, 1u);
  memcpy(v14, &src, 7u);
  v15 = BM_CRC5(v14, 64);
  HIBYTE(src) = HIBYTE(src) & 0xE0 | v15 & 0x1F;
  free(v14);
  send_command_packet(a1, v17, 10);
  if ( !*(_BYTE *)(a2 + 8) )
    a3 = 1;
  if ( *(_BYTE *)(a1 + 228) )
    return sub_B6FE8(a1, a3, a4, a5, a7, a8);
  else
    return 4;
}
