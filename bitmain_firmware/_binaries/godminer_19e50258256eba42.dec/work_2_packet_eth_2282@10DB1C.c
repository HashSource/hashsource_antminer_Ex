int __fastcall work_2_packet_eth_2282(int a1, int a2, _BYTE *a3, _DWORD *a4)
{
  int v4; // r3
  _DWORD *v5; // r1
  int v6; // r3
  _DWORD *v7; // r1
  int v8; // r5
  _DWORD *v9; // r3
  char v12; // [sp+15h] [bp-1Fh]
  __int16 v13; // [sp+16h] [bp-1Eh]
  int v14; // [sp+18h] [bp-1Ch]
  int i; // [sp+24h] [bp-10h]

  v14 = *(_DWORD *)(a1 + 864);
  *a3 = 85;
  a3[1] = -86;
  a3[2] = 32;
  if ( *(_DWORD *)(a1 + 532) == 1 )
    a3[2] |= 0x10u;
  v4 = *(_DWORD *)(a2 + 12);
  v5 = (_DWORD *)(v14 + 8 * (*(unsigned __int8 *)(v14 + 35072) + 256));
  *v5 = *(_DWORD *)(a2 + 8);
  v5[1] = v4;
  v6 = *(_DWORD *)(a2 + 4);
  v7 = (_DWORD *)(v14 + 8 * *(unsigned __int8 *)(v14 + 35072));
  *v7 = *(_DWORD *)a2;
  v7[1] = v6;
  a3[3] = *(_BYTE *)(v14 + 35072);
  *(_BYTE *)(v14 + *(unsigned __int8 *)(v14 + 35072) + 34816) = *(_BYTE *)(a2 + 88);
  memcpy(a3 + 4, (const void *)(a2 + 16), 0x20u);
  memcpy((void *)(v14 + 40 * *(unsigned __int8 *)(v14 + 35072) + 0x2000), (const void *)(a2 + 16), 0x28u);
  memcpy((void *)(v14 + 32 * (*(unsigned __int8 *)(v14 + 35072) + 576)), (const void *)(a2 + 48), 0x20u);
  sub_FC5A8(a3 + 36, *(_QWORD *)(a2 + 80));
  for ( i = 0; i <= 3; ++i )
  {
    v12 = a3[i + 36];
    a3[i + 36] = a3[i + 40];
    a3[i + 40] = v12;
  }
  v8 = *(_DWORD *)(a2 + 84);
  v9 = (_DWORD *)(v14 + 8 * (*(unsigned __int8 *)(v14 + 35072) + 512));
  *v9 = 0;
  v9[1] = v8;
  ++*(_BYTE *)(v14 + 35072);
  *(_BYTE *)(v14 + 35072) = *(_BYTE *)(v14 + 35072);
  v13 = BM_CRC16(a3 + 2, 42);
  a3[44] = HIBYTE(v13);
  a3[45] = v13;
  *a4 = 46;
  if ( case_select == 12 )
  {
    sub_1094FC((_DWORD *)a2);
    sub_10ADE0((int)a3);
  }
  return 0;
}
