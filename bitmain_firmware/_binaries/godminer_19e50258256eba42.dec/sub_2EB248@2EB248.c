int __fastcall sub_2EB248(int a1, char a2, char a3, void *a4, size_t n)
{
  __int64 v6; // [sp+5F0h] [bp-2ECh]
  __int64 v7; // [sp+660h] [bp-27Ch]
  __int64 v8; // [sp+6D0h] [bp-20Ch]
  __int64 v9; // [sp+778h] [bp-164h]
  __int64 v12; // [sp+790h] [bp-14Ch]
  __int64 v13; // [sp+798h] [bp-144h]
  __int64 v14; // [sp+7A0h] [bp-13Ch]
  __int64 v15; // [sp+7A8h] [bp-134h]
  __int64 v16; // [sp+7B0h] [bp-12Ch]
  __int64 v17; // [sp+7B8h] [bp-124h]
  __int64 v18; // [sp+7C0h] [bp-11Ch]
  __int64 v19; // [sp+7C8h] [bp-114h]
  __int64 v20; // [sp+7D0h] [bp-10Ch]
  __int64 v21; // [sp+7D8h] [bp-104h]
  __int64 v22; // [sp+7E0h] [bp-FCh]
  __int64 v23; // [sp+7E8h] [bp-F4h]
  __int64 v24; // [sp+7F0h] [bp-ECh]
  __int64 v25; // [sp+7F8h] [bp-E4h]
  __int64 v26; // [sp+800h] [bp-DCh]
  __int64 v27; // [sp+808h] [bp-D4h]
  _QWORD dest[8]; // [sp+810h] [bp-CCh] BYREF
  char v29[72]; // [sp+854h] [bp-88h] BYREF
  int v30; // [sp+89Ch] [bp-40h]
  unsigned int v31; // [sp+8A0h] [bp-3Ch]
  int v32; // [sp+8A4h] [bp-38h]
  int i; // [sp+8A8h] [bp-34h]
  unsigned int j; // [sp+8ACh] [bp-30h]
  __int64 v35; // [sp+8B0h] [bp-2Ch]
  size_t v36; // [sp+8B8h] [bp-24h]
  unsigned int k; // [sp+8BCh] [bp-20h]

  v32 = a1;
  v31 = *(_DWORD *)(a1 + 64);
  v30 = 128 >> a3;
  v29[0] = a2 & -(128 >> a3) | (128 >> a3);
  if ( v31 > 0x37 )
  {
    v36 = 128 - v31;
    v35 = *(_QWORD *)(a1 + 136) + 2LL;
  }
  else
  {
    v36 = 64 - v31;
    v35 = *(_QWORD *)(a1 + 136) + 1LL;
  }
  memset(&v29[1], 0, v36 - 9);
  sub_2E4064(&v29[v36 - 8], (int)&v29[v36 - 8], v35, SHIDWORD(v35));
  sub_2E43DC(a1, v29, v36);
  memcpy(dest, (const void *)(a1 + 72), sizeof(dest));
  v12 = dest[0];
  v13 = dest[1];
  v14 = dest[2];
  v15 = dest[3];
  v16 = dest[4];
  v17 = dest[5];
  v18 = dest[6];
  v19 = dest[7];
  for ( i = 0; i <= 9; i += 2 )
  {
    v9 = v12 ^ i;
    v13 ^= i + 16;
    v14 ^= i + 32;
    v15 ^= i + 48;
    v16 ^= i + 64;
    v17 ^= i + 80;
    v18 ^= i + 96;
    v19 ^= i + 112;
    v8 = qword_5803F8[(unsigned __int8)(v12 ^ i)]
       ^ qword_580BF8[BYTE1(v13)]
       ^ qword_5813F8[BYTE2(v14)]
       ^ qword_581BF8[BYTE3(v15)]
       ^ qword_5823F8[BYTE4(v16)]
       ^ qword_582BF8[BYTE5(v17)]
       ^ qword_5833F8[BYTE6(v18)]
       ^ qword_583BF8[HIBYTE(HIDWORD(v19))];
    v20 = v8;
    v7 = qword_5803F8[(unsigned __int8)v13]
       ^ qword_580BF8[BYTE1(v14)]
       ^ qword_5813F8[BYTE2(v15)]
       ^ qword_581BF8[BYTE3(v16)]
       ^ qword_5823F8[BYTE4(v17)]
       ^ qword_582BF8[BYTE5(v18)]
       ^ qword_5833F8[BYTE6(v19)]
       ^ qword_583BF8[HIBYTE(HIDWORD(v9))];
    v21 = v7;
    v6 = qword_5803F8[(unsigned __int8)v14]
       ^ qword_580BF8[BYTE1(v15)]
       ^ qword_5813F8[BYTE2(v16)]
       ^ qword_581BF8[BYTE3(v17)]
       ^ qword_5823F8[BYTE4(v18)]
       ^ qword_582BF8[BYTE5(v19)]
       ^ qword_5833F8[BYTE6(v9)]
       ^ qword_583BF8[HIBYTE(HIDWORD(v13))];
    v22 = v6;
    v23 = qword_5803F8[(unsigned __int8)v15]
        ^ qword_580BF8[BYTE1(v16)]
        ^ qword_5813F8[BYTE2(v17)]
        ^ qword_581BF8[BYTE3(v18)]
        ^ qword_5823F8[BYTE4(v19)]
        ^ qword_582BF8[BYTE5(v9)]
        ^ qword_5833F8[BYTE6(v13)]
        ^ qword_583BF8[HIBYTE(HIDWORD(v14))];
    v24 = qword_5803F8[(unsigned __int8)v16]
        ^ qword_580BF8[BYTE1(v17)]
        ^ qword_5813F8[BYTE2(v18)]
        ^ qword_581BF8[BYTE3(v19)]
        ^ qword_5823F8[BYTE4(v9)]
        ^ qword_582BF8[BYTE5(v13)]
        ^ qword_5833F8[BYTE6(v14)]
        ^ qword_583BF8[HIBYTE(HIDWORD(v15))];
    v25 = qword_5803F8[(unsigned __int8)v17]
        ^ qword_580BF8[BYTE1(v18)]
        ^ qword_5813F8[BYTE2(v19)]
        ^ qword_581BF8[((unsigned int)v12 ^ i) >> 24]
        ^ qword_5823F8[BYTE4(v13)]
        ^ qword_582BF8[BYTE5(v14)]
        ^ qword_5833F8[BYTE6(v15)]
        ^ qword_583BF8[HIBYTE(HIDWORD(v16))];
    v26 = qword_5803F8[(unsigned __int8)v18]
        ^ qword_580BF8[BYTE1(v19)]
        ^ qword_5813F8[BYTE2(v9)]
        ^ qword_581BF8[BYTE3(v13)]
        ^ qword_5823F8[BYTE4(v14)]
        ^ qword_582BF8[BYTE5(v15)]
        ^ qword_5833F8[BYTE6(v16)]
        ^ qword_583BF8[HIBYTE(HIDWORD(v17))];
    v27 = qword_5803F8[(unsigned __int8)v19]
        ^ qword_580BF8[BYTE1(v9)]
        ^ qword_5813F8[BYTE2(v13)]
        ^ qword_581BF8[BYTE3(v14)]
        ^ qword_5823F8[BYTE4(v15)]
        ^ qword_582BF8[BYTE5(v16)]
        ^ qword_5833F8[BYTE6(v17)]
        ^ qword_583BF8[HIBYTE(HIDWORD(v18))];
    v12 = v8 ^ (i + 1);
    v13 = v7 ^ (i + 17);
    v14 = v6 ^ (i + 33);
    v15 = v23 ^ (i + 49);
    v16 = v24 ^ (i + 65);
    v17 = v25 ^ (i + 81);
    v18 = v26 ^ (i + 97);
    v19 = v27 ^ (i + 113);
    v20 = qword_5803F8[(unsigned __int8)(v8 ^ (i + 1))]
        ^ qword_580BF8[BYTE1(v13)]
        ^ qword_5813F8[BYTE2(v14)]
        ^ qword_581BF8[((unsigned int)v23 ^ (i + 49)) >> 24]
        ^ qword_5823F8[BYTE4(v16)]
        ^ qword_582BF8[BYTE5(v17)]
        ^ qword_5833F8[BYTE6(v18)]
        ^ qword_583BF8[HIBYTE(HIDWORD(v19))];
    v21 = qword_5803F8[(unsigned __int8)(v7 ^ (i + 17))]
        ^ qword_580BF8[BYTE1(v14)]
        ^ qword_5813F8[BYTE2(v15)]
        ^ qword_581BF8[((unsigned int)v24 ^ (i + 65)) >> 24]
        ^ qword_5823F8[BYTE4(v17)]
        ^ qword_582BF8[BYTE5(v18)]
        ^ qword_5833F8[BYTE6(v19)]
        ^ qword_583BF8[HIBYTE(HIDWORD(v12))];
    v22 = qword_5803F8[(unsigned __int8)(v6 ^ (i + 33))]
        ^ qword_580BF8[BYTE1(v15)]
        ^ qword_5813F8[BYTE2(v16)]
        ^ qword_581BF8[((unsigned int)v25 ^ (i + 81)) >> 24]
        ^ qword_5823F8[BYTE4(v18)]
        ^ qword_582BF8[BYTE5(v19)]
        ^ qword_5833F8[BYTE6(v12)]
        ^ qword_583BF8[HIBYTE(HIDWORD(v13))];
    v23 = qword_5803F8[(unsigned __int8)(v23 ^ (i + 49))]
        ^ qword_580BF8[BYTE1(v16)]
        ^ qword_5813F8[BYTE2(v17)]
        ^ qword_581BF8[((unsigned int)v26 ^ (i + 97)) >> 24]
        ^ qword_5823F8[BYTE4(v19)]
        ^ qword_582BF8[BYTE5(v12)]
        ^ qword_5833F8[BYTE6(v13)]
        ^ qword_583BF8[HIBYTE(HIDWORD(v14))];
    v24 = qword_5803F8[(unsigned __int8)(v24 ^ (i + 65))]
        ^ qword_580BF8[BYTE1(v17)]
        ^ qword_5813F8[BYTE2(v18)]
        ^ qword_581BF8[((unsigned int)v27 ^ (i + 113)) >> 24]
        ^ qword_5823F8[BYTE4(v12)]
        ^ qword_582BF8[BYTE5(v13)]
        ^ qword_5833F8[BYTE6(v14)]
        ^ qword_583BF8[HIBYTE(HIDWORD(v15))];
    v25 = qword_5803F8[(unsigned __int8)(v25 ^ (i + 81))]
        ^ qword_580BF8[BYTE1(v18)]
        ^ qword_5813F8[BYTE2(v19)]
        ^ qword_581BF8[((unsigned int)v8 ^ (i + 1)) >> 24]
        ^ qword_5823F8[BYTE4(v13)]
        ^ qword_582BF8[BYTE5(v14)]
        ^ qword_5833F8[BYTE6(v15)]
        ^ qword_583BF8[HIBYTE(HIDWORD(v16))];
    v26 = qword_5803F8[(unsigned __int8)(v26 ^ (i + 97))]
        ^ qword_580BF8[BYTE1(v19)]
        ^ qword_5813F8[BYTE2(v12)]
        ^ qword_581BF8[((unsigned int)v7 ^ (i + 17)) >> 24]
        ^ qword_5823F8[BYTE4(v14)]
        ^ qword_582BF8[BYTE5(v15)]
        ^ qword_5833F8[BYTE6(v16)]
        ^ qword_583BF8[HIBYTE(HIDWORD(v17))];
    v27 = qword_5803F8[(unsigned __int8)(v27 ^ (i + 113))]
        ^ qword_580BF8[BYTE1(v12)]
        ^ qword_5813F8[BYTE2(v13)]
        ^ qword_581BF8[((unsigned int)v6 ^ (i + 33)) >> 24]
        ^ qword_5823F8[BYTE4(v15)]
        ^ qword_582BF8[BYTE5(v16)]
        ^ qword_5833F8[BYTE6(v17)]
        ^ qword_583BF8[HIBYTE(HIDWORD(v18))];
    v12 = v20;
    v13 = v21;
    v14 = v22;
    v15 = v23;
    v16 = v24;
    v17 = v25;
    v18 = v26;
    v19 = v27;
  }
  for ( j = 0; j <= 7; ++j )
    dest[j] ^= *(&v12 + j);
  for ( k = 0; k <= 3; ++k )
    sub_2E419C((int)&v29[8 * k], (int)&v29[8 * k], dest[k + 4], HIDWORD(dest[k + 4]));
  memcpy(a4, &v29[32 - n], n);
  return sub_2E4300(a1, 8 * n);
}
