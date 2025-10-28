int __fastcall work_2_packet_ae(int a1, _DWORD *a2, int a3, _DWORD *a4)
{
  int v5; // r5
  const char *v7; // r1
  int v8; // lr
  _DWORD *v9; // r12
  int v10; // r10
  _DWORD *v11; // r3
  int v12; // lr
  int v13; // r12
  int v14; // r12
  int v15; // r2
  int v16; // r10
  int v17; // r3
  int v18; // r2
  int v19; // r12
  char v20; // r3
  unsigned int v21; // r0
  unsigned int v22; // r1

  v5 = *(_DWORD *)(a1 + 624);
  *(_BYTE *)a3 = 85;
  *(_BYTE *)(a3 + 2) = 32;
  *(_BYTE *)(a3 + 1) = -86;
  v7 = (const char *)(a2 + 2);
  if ( *(_DWORD *)(a1 + 304) == 1 )
    *(_BYTE *)(a3 + 2) = 48;
  strcpy((char *)(v5 + 32 * (*(unsigned __int8 *)(v5 + 113920) + 32)), v7);
  v8 = a2[1];
  v9 = (_DWORD *)(v5 + 8 * *(unsigned __int8 *)(v5 + 113920));
  *v9 = *a2;
  v9[1] = v8;
  memset((void *)(a3 + 5), 0, 0x50u);
  v10 = a2[11];
  v11 = (_DWORD *)(v5 + 32 * (*(unsigned __int8 *)(v5 + 113920) + 232));
  v12 = a2[12];
  v13 = a2[13];
  *v11 = a2[10];
  v11[1] = v10;
  v11[2] = v12;
  v11[3] = v13;
  v14 = a2[17];
  v15 = a2[14];
  v16 = a2[15];
  v11[6] = a2[16];
  v11[7] = v14;
  v11[4] = v15;
  v11[5] = v16;
  base64_encode(a3 + 5, (int)(a2 + 10), 32);
  v17 = a2[19];
  *(_DWORD *)(a3 + 49) = a2[18];
  *(_DWORD *)(a3 + 53) = v17;
  memcpy((void *)(v5 + 80 * *(unsigned __int8 *)(v5 + 113920) + 11520), (const void *)(a3 + 5), 0x50u);
  v18 = *(unsigned __int8 *)(v5 + 113920);
  v19 = a2[34];
  v20 = v18 + 1;
  *(_DWORD *)(v5 + 8 * (v18 + 768)) = a2[33];
  *(_DWORD *)(v5 + 8 * (v18 + 768) + 4) = v19;
  if ( (((_BYTE)v18 + 1) & 0x80) != 0 )
    v20 = 0;
  *(_BYTE *)(a3 + 4) = v18;
  *(_BYTE *)(v5 + 113920) = v20;
  *(_BYTE *)(a3 + 3) = 80;
  v21 = BM_CRC16((unsigned __int8 *)(a3 + 2), 83);
  v22 = v21 >> 8;
  *(_BYTE *)(a3 + 86) = v21;
  *(_BYTE *)(a3 + 85) = v22;
  *a4 = 87;
  return 0;
}
