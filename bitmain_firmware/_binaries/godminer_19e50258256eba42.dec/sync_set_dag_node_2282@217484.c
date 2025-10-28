int __fastcall sync_set_dag_node_2282(int a1, int a2)
{
  _DWORD *v3; // r12
  _DWORD *v4; // r4
  int v5; // r1
  int v6; // r2
  int v7; // r3
  unsigned __int16 v8; // r0
  _DWORD *v9; // r12
  _DWORD *v10; // r4
  int v11; // r1
  int v12; // r2
  int v13; // r3
  unsigned __int16 v14; // r0
  _DWORD s[19]; // [sp+8h] [bp-5Ch] BYREF
  unsigned int v19; // [sp+54h] [bp-10h]

  if ( *(_BYTE *)(a1 + 276) != 1 )
    return 4;
  memset(s, 0, 0x4Au);
  LOWORD(s[0]) = -21931;
  BYTE2(s[0]) = BYTE2(s[0]) & 0xEF | (16 * (*(_BYTE *)(a2 + 4) & 1));
  BYTE2(s[0]) = BYTE2(s[0]) & 0x1F | 0x80;
  HIBYTE(s[0]) = *(_BYTE *)(a2 + 5);
  s[1] = reverse_byte_order_32(*(_DWORD *)a2);
  v19 = *(_DWORD *)a2;
  s[1] = reverse_byte_order_32(v19 & 0xFBFFFFFF);
  v3 = (_DWORD *)(a2 + 18);
  v4 = &s[2];
  do
  {
    v5 = v3[1];
    v6 = v3[2];
    v7 = v3[3];
    *v4 = *v3;
    v4[1] = v5;
    v4[2] = v6;
    v4[3] = v7;
    v3 += 4;
    v4 += 4;
  }
  while ( v3 != (_DWORD *)(a2 + 82) );
  v8 = BM_CRC16((char *)s + 2, 70);
  LOWORD(s[18]) = HIBYTE(v8) | (v8 << 8);
  send_command_packet_1(a1, (unsigned __int8 *)s, 0x4Au);
  s[1] = reverse_byte_order_32(v19 | 0x4000000);
  v9 = (_DWORD *)(a2 + 82);
  v10 = &s[2];
  do
  {
    v11 = v9[1];
    v12 = v9[2];
    v13 = v9[3];
    *v10 = *v9;
    v10[1] = v11;
    v10[2] = v12;
    v10[3] = v13;
    v9 += 4;
    v10 += 4;
  }
  while ( v9 != (_DWORD *)(a2 + 146) );
  v14 = BM_CRC16((char *)s + 2, 70);
  LOWORD(s[18]) = HIBYTE(v14) | (v14 << 8);
  send_command_packet_1(a1, (unsigned __int8 *)s, 0x4Au);
  return 0;
}
