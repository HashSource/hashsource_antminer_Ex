int __fastcall pakcet_2_nonce_vbk(int a1, int a2, int a3, _BYTE *a4, _DWORD *a5, unsigned int *a6, _DWORD *a7)
{
  int v8; // r12
  int v10; // r3
  int v13; // r2
  int v14; // r3
  int v15; // lr
  int v16; // r3
  int *v17; // r3
  int v18; // r2
  int v19; // lr
  int v20; // r12
  int v21; // r3
  unsigned int v22; // r0
  int v23; // r1
  int v24; // r2

  if ( *(_BYTE *)(a2 + 2) != 8 || *(char *)(a2 + 9) >= 0 )
    return 1;
  v8 = *(_DWORD *)(a1 + 624);
  v10 = *(unsigned __int8 *)(a2 + 8);
  v13 = *(_DWORD *)(v8 + 8 * v10);
  v14 = v8 + 8 * v10;
  v15 = *(_DWORD *)(v14 + 4);
  *(_DWORD *)a3 = v13;
  *(_DWORD *)(a3 + 4) = v15;
  *a7 = v13;
  *(_QWORD *)(a3 + 16) = *(_QWORD *)(v14 + 2048);
  *(_DWORD *)(a3 + 24) = *(_DWORD *)(a2 + 3);
  *(_DWORD *)(a3 + 24) = bswap32(*(_DWORD *)(a2 + 3));
  *(_BYTE *)(a3 + 28) = *(_BYTE *)(a2 + 7) & 0x7F;
  v16 = *(unsigned __int8 *)(a2 + 8);
  *(_BYTE *)(a3 + 29) = v16;
  *(_DWORD *)(a3 + 36) = *(_DWORD *)(v8 + 4 * (v16 + 5120));
  v17 = (int *)(v8 + (v16 << 6) + 4132);
  v18 = v17[2];
  v19 = *v17;
  v20 = v17[1];
  v21 = v17[3];
  *(_DWORD *)(a3 + 40) = v19;
  *(_DWORD *)(a3 + 44) = v20;
  *(_DWORD *)(a3 + 48) = v18;
  *(_DWORD *)(a3 + 52) = v21;
  v22 = (unsigned int)*(unsigned __int8 *)(a2 + 3) / *(_DWORD *)(a1 + 240);
  *a6 = v22;
  *(_DWORD *)(a3 + 8) = v22;
  *(_DWORD *)(a3 + 12) = 0;
  v23 = BM_CRC5((_BYTE *)(a2 + 2), 8 * *(unsigned __int8 *)(a2 + 2) - 5);
  v24 = *(_BYTE *)(a2 + 9) & 0x1F;
  if ( v23 == v24 )
  {
    *a5 = *(_DWORD *)(a3 + 24);
    *a4 = 1;
    return 0;
  }
  else
  {
    printf("get nonce crc error calc value %04x expected value %04x\n", v23, v24);
    return 2;
  }
}
