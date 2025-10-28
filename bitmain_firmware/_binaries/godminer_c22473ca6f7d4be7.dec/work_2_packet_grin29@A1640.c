int __fastcall work_2_packet_grin29(int a1, int *a2, _BYTE *a3, _DWORD *a4)
{
  int v5; // r6
  int *v8; // r10
  int v9; // r7
  int v10; // lr
  int v11; // r12
  _DWORD *v12; // r3
  int v13; // r2
  int v14; // r3
  int v15; // r0
  int v16; // r12
  int v17; // r2
  int v18; // r12
  unsigned int v19; // r0
  unsigned int v20; // r1

  v5 = *(_DWORD *)(a1 + 624);
  *a3 = 85;
  a3[2] = 32;
  a3[1] = -86;
  v8 = a2 + 4;
  if ( *(_DWORD *)(a1 + 304) == 1 )
    a3[2] = 48;
  v9 = a2[3];
  v10 = *a2;
  v11 = a2[1];
  v12 = (_DWORD *)(v5 + 8 * *(unsigned __int8 *)(v5 + 128000));
  v12[256] = a2[2];
  v12[257] = v9;
  *v12 = v10;
  v12[1] = v11;
  memcpy(a3 + 5, a2 + 4, 0xEEu);
  v13 = *(int *)((char *)a2 + 254);
  v14 = *(int *)((char *)a2 + 258);
  a3[250] = v13;
  a3[246] = v14;
  a3[249] = BYTE1(v13);
  a3[247] = HIBYTE(v13);
  a3[243] = HIBYTE(v14);
  a3[248] = BYTE2(v13);
  a3[245] = BYTE1(v14);
  a3[244] = BYTE2(v14);
  v15 = *(unsigned __int8 *)(v5 + 128000);
  v16 = *(int *)((char *)a2 + 258);
  *(_DWORD *)(v5 + 8 * (v15 + 256)) = 0;
  *(_DWORD *)(v5 + 8 * (v15 + 256) + 4) = v16;
  memcpy((void *)(v5 + 246 * v15 + 4352), v8, 0xF6u);
  v17 = *(unsigned __int8 *)(v5 + 128000);
  v18 = *(int *)((char *)a2 + 266);
  *(_DWORD *)(v5 + 8 * (v17 + 384)) = *(int *)((char *)a2 + 262);
  *(_DWORD *)(v5 + 8 * (v17 + 384) + 4) = v18;
  a3[4] = v17;
  if ( (((_BYTE)v17 + 1) & 0x80) != 0 )
    *(_BYTE *)(v5 + 128000) = 0;
  else
    *(_BYTE *)(v5 + 128000) = v17 + 1;
  a3[3] = -10;
  v19 = BM_CRC16(a3 + 2, 249);
  v20 = v19 >> 8;
  a3[252] = v19;
  a3[251] = v20;
  *a4 = 253;
  return 0;
}
