int __fastcall packet_2_nonce_ckb(int a1, int a2, int a3, _BYTE *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  int v9; // r4
  _DWORD *v11; // r9
  int v13; // r1
  char *v14; // r0
  int v16; // r3
  int v17; // r2
  int v18; // r1
  int v19; // r3
  int v20; // r2
  int v21; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r12
  int v25; // r1
  int v26; // r2
  int v27; // r0
  int v28; // r1

  if ( *(char *)(a2 + 9) >= 0 )
    return 1;
  v9 = *(_DWORD *)(a1 + 624);
  v11 = (_DWORD *)(a3 + 48);
  v13 = *(unsigned __int8 *)(a2 + 8);
  v14 = (char *)(a3 + 16);
  v16 = *(_DWORD *)(v9 + 8 * v13);
  v17 = *(_DWORD *)(v9 + 8 * v13 + 4);
  *(_DWORD *)a3 = v16;
  *(_DWORD *)(a3 + 4) = v17;
  *a7 = v16;
  strcpy(v14, (const char *)(v9 + 32 * (v13 + 64)));
  v18 = *(_DWORD *)(v9 + 48 * *(unsigned __int8 *)(a2 + 8) + 10276);
  v19 = *(_DWORD *)(v9 + 48 * *(unsigned __int8 *)(a2 + 8) + 10284);
  v20 = *(_DWORD *)(v9 + 48 * *(unsigned __int8 *)(a2 + 8) + 10280);
  *(_DWORD *)(a3 + 48) = *(_DWORD *)(v9 + 48 * *(unsigned __int8 *)(a2 + 8) + 10272);
  v11[1] = v18;
  v11[2] = v20;
  v11[3] = v19;
  *(_DWORD *)(a3 + 59) = *(_DWORD *)(a2 + 2);
  *(_BYTE *)(a3 + 63) = *(_BYTE *)(a2 + 6);
  *(_BYTE *)(a3 + 64) = *(_BYTE *)(a2 + 7) & 0x7F;
  *(_BYTE *)(a3 + 65) = *(_BYTE *)(a2 + 8);
  v21 = sub_12C9E0(*(unsigned __int8 *)(a2 + 2));
  if ( v21 >= *(_DWORD *)(a1 + 196) )
  {
    v27 = rand();
    sub_12CEEC(v27, *(_DWORD *)(a1 + 196));
    v21 = v28;
  }
  *a6 = v21;
  *(_DWORD *)(a3 + 8) = v21;
  *(_DWORD *)(a3 + 12) = *(_BYTE *)(a2 + 6) & 0x1F;
  v22 = BM_CRC5(a2 + 2, 59);
  v23 = *(_BYTE *)(a2 + 9) & 0x1F;
  if ( v22 == v23 )
  {
    v24 = v11[1];
    v25 = v11[2];
    v26 = v11[3];
    *a5 = *v11;
    a5[1] = v24;
    a5[2] = v25;
    a5[3] = v26;
    *a4 = 1;
    return 0;
  }
  else
  {
    printf("get nonce crc error calc value %04x expected value %04x\n", v22, v23);
    return 2;
  }
}
