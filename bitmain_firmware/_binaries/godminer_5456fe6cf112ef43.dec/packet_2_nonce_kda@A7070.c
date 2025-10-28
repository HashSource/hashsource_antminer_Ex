int __fastcall packet_2_nonce_kda(int a1, int a2, int a3, _BYTE *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  int v9; // r9
  int v12; // r8
  int v13; // r1
  char *v14; // r0
  int v16; // r3
  int v17; // r2
  char v18; // r3
  int v19; // r0
  int v20; // r1
  int v21; // r2
  int v22; // r2
  int v23; // r0
  int v24; // r1

  if ( *(char *)(a2 + 10) >= 0 )
    return 1;
  v9 = *(_DWORD *)(a1 + 624);
  v12 = a3 + 80;
  v13 = *(unsigned __int8 *)(a2 + 9);
  v14 = (char *)(a3 + 16);
  v16 = *(_DWORD *)(v9 + 8 * v13);
  v17 = *(_DWORD *)(v9 + 8 * v13 + 4);
  *(_DWORD *)a3 = v16;
  *(_DWORD *)(a3 + 4) = v17;
  *a7 = v16;
  strcpy(v14, (const char *)(v9 + ((v13 + 16) << 6)));
  *(_DWORD *)(a3 + 80) = *(_DWORD *)(a2 + 3);
  *(_BYTE *)(v12 + 4) = *(_BYTE *)(a2 + 7);
  v18 = *(_BYTE *)(v9 + 3 * *(unsigned __int8 *)(a2 + 9) + 45826);
  *(_WORD *)(a3 + 85) = *(_WORD *)(v9 + 3 * *(unsigned __int8 *)(a2 + 9) + 45824);
  *(_BYTE *)(a3 + 87) = v18;
  *(_BYTE *)(a3 + 88) = *(_BYTE *)(a2 + 8);
  *(_BYTE *)(a3 + 89) = *(_BYTE *)(a2 + 9) & 0x7F;
  v19 = sub_12C9E0(*(unsigned __int8 *)(a2 + 3));
  if ( v19 >= *(_DWORD *)(a1 + 196) )
  {
    v23 = rand();
    sub_12CEEC(v23, *(_DWORD *)(a1 + 196));
    v19 = v24;
  }
  *a6 = v19;
  *(_DWORD *)(a3 + 8) = v19;
  *(_DWORD *)(a3 + 12) = (*(_BYTE *)(a2 + 7) & 3)
                       + 4 * ((unsigned __int8)(*(_BYTE *)(a2 + 6) << 6) | (*(unsigned __int8 *)(a2 + 7) >> 2));
  v20 = BM_CRC5(a2 + 2, 67);
  v21 = *(_BYTE *)(a2 + 10) & 0x1F;
  if ( v20 == v21 )
  {
    v22 = *(_DWORD *)(v12 + 4);
    *a5 = *(_DWORD *)v12;
    a5[1] = v22;
    *a4 = 1;
    return 0;
  }
  else
  {
    printf("get nonce crc error calc value %04x expected value %04x\n", v20, v21);
    return 2;
  }
}
