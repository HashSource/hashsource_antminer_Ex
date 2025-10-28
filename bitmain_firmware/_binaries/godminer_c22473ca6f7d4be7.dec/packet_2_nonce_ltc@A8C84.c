int __fastcall packet_2_nonce_ltc(_DWORD *a1, _BYTE *a2, int a3, _BYTE *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  int v12; // r2
  int v13; // r8
  int v14; // r1
  int v15; // r3
  int v16; // r2
  int v17; // r3
  int v18; // r3
  unsigned int v19; // r8
  int v20; // r0
  int v21; // r2
  const char *v22; // r0
  int v23; // r0
  int v24; // r1

  if ( (unsigned __int8)a2[8] >> 5 != 4 )
    return 1;
  v12 = BM_CRC5(a2 + 2, 51);
  if ( v12 == (a2[8] & 0x1F) )
  {
    v13 = a1[156];
    v14 = (unsigned __int8)a2[7];
    v15 = *(_DWORD *)(v13 + 8 * v14);
    v16 = *(_DWORD *)(v13 + 8 * v14 + 4);
    *(_DWORD *)a3 = v15;
    *(_DWORD *)(a3 + 4) = v16;
    *a7 = v15;
    strcpy((char *)(a3 + 16), (const char *)(v13 + ((v14 + 16) << 6)));
    *(_DWORD *)(a3 + 80) = *(_DWORD *)(a2 + 2);
    *(_BYTE *)(a3 + 84) = a2[6] & 0x3F;
    v17 = (unsigned __int8)a2[7];
    *(_BYTE *)(a3 + 85) = v17;
    memcpy((void *)(a3 + 86), (const void *)(v13 + 16 * (v17 + 1504)), *(_DWORD *)(v13 + 4 * (v17 + 6528)));
    v18 = (unsigned __int8)a2[7];
    *(_DWORD *)(a3 + 104) = *(_DWORD *)(v13 + 4 * (v18 + 6528));
    *(_DWORD *)(a3 + 108) = *(_DWORD *)(v13 + 4 * (v18 + 6656));
    v19 = (unsigned __int8)a2[2];
    v20 = ((unsigned __int8)((_BYTE)v19 << 7) | ((unsigned __int8)a2[3] >> 1)) / a1[60];
    if ( v20 >= a1[49] )
    {
      v23 = rand();
      sub_12CD64(v23, a1[49]);
      v20 = v24;
      *a6 = v24;
      v19 = (unsigned __int8)a2[2];
    }
    else
    {
      *a6 = v20;
    }
    v21 = *(_DWORD *)(a3 + 80);
    *(_DWORD *)(a3 + 8) = v20;
    *(_DWORD *)(a3 + 12) = v19 >> 1;
    *a5 = v21;
    *a4 = 1;
    return 0;
  }
  else
  {
    LOWORD(v22) = -14172;
    HIWORD(v22) = (unsigned int)"k jobid %s, work count %d" >> 16;
    printf(v22, a1[34], v12);
    return 2;
  }
}
