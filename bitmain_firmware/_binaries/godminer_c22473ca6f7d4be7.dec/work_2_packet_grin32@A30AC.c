int __fastcall work_2_packet_grin32(int a1, int *a2, _BYTE *a3, _DWORD *a4)
{
  int v5; // r6
  int v7; // r3
  int *v9; // r10
  int *v10; // r1
  int v11; // r12
  int v12; // r0
  int v13; // r11
  _DWORD *v14; // r3
  int v15; // r2
  int v16; // r3
  int v17; // r0
  int v18; // r12
  int v19; // r2
  int v20; // r12
  unsigned int v21; // r0
  unsigned int v22; // r1

  v5 = *(_DWORD *)(a1 + 624);
  *a3 = 85;
  a3[2] = 33;
  a3[1] = -86;
  v7 = *(_DWORD *)(a1 + 304);
  a3[4] = 0;
  v9 = a2 + 4;
  v10 = a2 + 4;
  if ( v7 == 1 )
    a3[2] = 49;
  v11 = *a2;
  v12 = a2[1];
  v13 = a2[2];
  v14 = (_DWORD *)(v5 + 8 * *(unsigned __int8 *)(v5 + 57088));
  v14[257] = a2[3];
  v14[256] = v13;
  *v14 = v11;
  v14[1] = v12;
  memcpy(a3 + 5, v10, 0xEEu);
  v15 = *(int *)((char *)a2 + 254);
  v16 = *(int *)((char *)a2 + 258);
  a3[250] = v15;
  a3[246] = v16;
  a3[249] = BYTE1(v15);
  a3[247] = HIBYTE(v15);
  a3[243] = HIBYTE(v16);
  a3[248] = BYTE2(v15);
  a3[245] = BYTE1(v16);
  a3[244] = BYTE2(v16);
  v17 = *(unsigned __int8 *)(v5 + 57088);
  v18 = *(int *)((char *)a2 + 258);
  *(_DWORD *)(v5 + 8 * (v17 + 256)) = 0;
  *(_DWORD *)(v5 + 8 * (v17 + 256) + 4) = v18;
  memcpy((void *)(v5 + 246 * v17 + 4096), v9, 0xF6u);
  v19 = *(unsigned __int8 *)(v5 + 57088);
  v20 = *(int *)((char *)a2 + 266);
  *(_DWORD *)(v5 + 8 * (v19 + 384)) = *(int *)((char *)a2 + 262);
  *(_DWORD *)(v5 + 8 * (v19 + 384) + 4) = v20;
  a3[3] = v19;
  if ( (((_BYTE)v19 + 1) & 0x80) != 0 )
    *(_BYTE *)(v5 + 57088) = 0;
  else
    *(_BYTE *)(v5 + 57088) = v19 + 1;
  v21 = BM_CRC16(a3 + 2, 249);
  v22 = v21 >> 8;
  a3[252] = v21;
  a3[251] = v22;
  *a4 = 253;
  return 0;
}
