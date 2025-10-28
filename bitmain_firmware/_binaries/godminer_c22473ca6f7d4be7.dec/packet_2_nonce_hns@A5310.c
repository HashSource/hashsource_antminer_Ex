int __fastcall packet_2_nonce_hns(unsigned int *a1, int a2, int a3, _BYTE *a4, _DWORD *a5, signed int *a6, _DWORD *a7)
{
  unsigned int v9; // r6
  char *v12; // r0
  int v13; // r1
  int v15; // r3
  int v16; // r2
  unsigned int v17; // r6
  signed int v18; // r0
  int v19; // r1
  int v20; // r2
  int v21; // r0
  signed int v22; // r1

  if ( *(char *)(a2 + 11) >= 0 )
    return 1;
  v9 = a1[156];
  v12 = (char *)(a3 + 16);
  v13 = *(unsigned __int8 *)(a2 + 10);
  v15 = *(_DWORD *)(v9 + 8 * v13);
  v16 = *(_DWORD *)(v9 + 8 * v13 + 4);
  *(_DWORD *)a3 = v15;
  *(_DWORD *)(a3 + 4) = v16;
  *a7 = v15;
  strcpy(v12, (const char *)(v9 + 32 * (v13 + 32)));
  v17 = v9 + (*(unsigned __int8 *)(a2 + 10) << 8);
  *(_BYTE *)(a3 + 52) = *(_BYTE *)(v17 + 5241);
  *(_BYTE *)(a3 + 53) = *(_BYTE *)(v17 + 5240);
  *(_BYTE *)(a3 + 54) = *(_BYTE *)(a2 + 4);
  *(_BYTE *)(a3 + 55) = *(_BYTE *)(a2 + 3);
  *(_DWORD *)(a3 + 48) = *(_DWORD *)(a2 + 5);
  *(_BYTE *)(a3 + 56) = *(_BYTE *)(a2 + 9);
  *(_BYTE *)(a3 + 57) = *(_BYTE *)(a2 + 10) & 0x7F;
  v18 = *(unsigned __int8 *)(a2 + 3) / a1[60];
  if ( v18 >= (int)a1[49] )
  {
    v21 = rand();
    sub_12CD64(v21, a1[49]);
    v18 = v22;
  }
  *a6 = v18;
  *(_DWORD *)(a3 + 8) = v18;
  *(_DWORD *)(a3 + 12) = *(unsigned __int8 *)(a2 + 4);
  v19 = BM_CRC5((_BYTE *)(a2 + 2), 75);
  v20 = *(_BYTE *)(a2 + 11) & 0x1F;
  if ( v19 == v20 )
  {
    *a5 = *(_DWORD *)(a3 + 48);
    *a4 = 1;
    return 0;
  }
  else
  {
    printf("get nonce crc error calc value %04x expected value %04x\n", v19, v20);
    return 2;
  }
}
