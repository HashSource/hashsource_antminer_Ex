int __fastcall packet_2_nonce_dcr(int a1, int a2, int a3, _BYTE *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  int v9; // r5
  char *v12; // r0
  int v13; // r1
  int v15; // r3
  int v16; // r2
  int v17; // r5
  int v18; // r2
  int v19; // r0
  int v20; // r1
  int v21; // r2
  int v22; // r0
  int v23; // r1

  if ( *(char *)(a2 + 10) >= 0 )
    return 1;
  v9 = *(_DWORD *)(a1 + 632);
  v12 = (char *)(a3 + 16);
  v13 = *(unsigned __int8 *)(a2 + 9);
  v15 = *(_DWORD *)(v9 + 8 * v13);
  v16 = *(_DWORD *)(v9 + 8 * v13 + 4);
  *(_DWORD *)a3 = v15;
  *(_DWORD *)(a3 + 4) = v16;
  *a7 = v15;
  strcpy(v12, (const char *)(v9 + 32 * (v13 + 32)));
  *(_BYTE *)(a3 + 52) = *(_BYTE *)(a2 + 3);
  v17 = v9 + 180 * *(unsigned __int8 *)(a2 + 9) + 5260;
  v18 = *(_DWORD *)(v17 + 4);
  *(_DWORD *)(a3 + 53) = *(_DWORD *)v17;
  *(_DWORD *)(a3 + 57) = v18;
  LOBYTE(v18) = *(_BYTE *)(v17 + 10);
  *(_WORD *)(a3 + 61) = *(_WORD *)(v17 + 8);
  *(_BYTE *)(a3 + 63) = v18;
  *(_DWORD *)(a3 + 48) = *(_DWORD *)(a2 + 4);
  *(_BYTE *)(a3 + 64) = *(_BYTE *)(a2 + 8);
  *(_BYTE *)(a3 + 65) = *(_BYTE *)(a2 + 9) & 0x7F;
  v19 = sub_12DE68(*(unsigned __int8 *)(a2 + 3));
  if ( v19 >= *(_DWORD *)(a1 + 204) )
  {
    v22 = rand();
    sub_12E374(v22, *(_DWORD *)(a1 + 204));
    v19 = v23;
  }
  *a6 = v19;
  *(_DWORD *)(a3 + 8) = v19;
  *(_DWORD *)(a3 + 12) = *(unsigned __int8 *)(a2 + 4);
  v20 = BM_CRC5(a2 + 2, 67);
  v21 = *(_BYTE *)(a2 + 10) & 0x1F;
  if ( v20 == v21 )
  {
    *a5 = *(_DWORD *)(a3 + 48);
    *a4 = 1;
    return 0;
  }
  else
  {
    printf("get nonce crc error calc value %04x expected value %04x\n", v20, v21);
    return 2;
  }
}
