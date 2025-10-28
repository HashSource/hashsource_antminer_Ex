int __fastcall sync_get_dag_node_base(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  char v7; // r0
  _BYTE v13[10]; // [sp+1Ch] [bp-18h] BYREF
  void *s; // [sp+28h] [bp-Ch]
  size_t nmemb; // [sp+2Ch] [bp-8h]

  if ( *(_BYTE *)(a1 + 276) != 1 )
    return 4;
  *(_DWORD *)v13 = 436821;
  *(_DWORD *)&v13[4] = 0;
  *(_WORD *)&v13[8] = 0;
  v13[2] = (16 * (*(_BYTE *)(a2 + 8) & 1)) & 0x19 | 0x46;
  v13[3] = 8;
  v13[4] = *(_BYTE *)(a2 + 9);
  *(_DWORD *)&v13[5] = reverse_byte_order_32(*(_DWORD *)(a2 + 4));
  nmemb = 8;
  s = calloc(8u, 1u);
  memset(s, 0, 8u);
  memcpy(s, &v13[2], 7u);
  v7 = BM_CRC5(s, 8 * nmemb);
  v13[9] = v13[9] & 0xE0 | v7 & 0x1F;
  free(s);
  send_command_packet(a1, v13, 0xAu);
  if ( *(_BYTE *)(a2 + 8) != 1 )
    a3 = 1;
  return sync_get_dag_base(a1, a3, a4, a5, a6);
}
