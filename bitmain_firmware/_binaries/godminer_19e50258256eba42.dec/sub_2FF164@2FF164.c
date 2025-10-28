int __fastcall sub_2FF164(int a1, char a2, char a3, void *a4, size_t n)
{
  __int64 v6; // [sp+D30h] [bp-42Ch]
  __int64 v7; // [sp+DA0h] [bp-3BCh]
  __int64 v8; // [sp+E10h] [bp-34Ch]
  _QWORD v11[16]; // [sp+F10h] [bp-24Ch] BYREF
  __int64 v12; // [sp+F90h] [bp-1CCh]
  __int64 v13; // [sp+F98h] [bp-1C4h]
  __int64 v14; // [sp+FA0h] [bp-1BCh]
  __int64 v15; // [sp+FA8h] [bp-1B4h]
  __int64 v16; // [sp+FB0h] [bp-1ACh]
  __int64 v17; // [sp+FB8h] [bp-1A4h]
  __int64 v18; // [sp+FC0h] [bp-19Ch]
  __int64 v19; // [sp+FC8h] [bp-194h]
  __int64 v20; // [sp+FD0h] [bp-18Ch]
  __int64 v21; // [sp+FD8h] [bp-184h]
  __int64 v22; // [sp+FE0h] [bp-17Ch]
  __int64 v23; // [sp+FE8h] [bp-174h]
  __int64 v24; // [sp+FF0h] [bp-16Ch]
  __int64 v25; // [sp+FF8h] [bp-164h]
  __int64 v26; // [sp+1000h] [bp-15Ch]
  __int64 v27; // [sp+1008h] [bp-154h]
  _QWORD dest[16]; // [sp+1010h] [bp-14Ch] BYREF
  _BYTE v29[136]; // [sp+1094h] [bp-C8h] BYREF
  int v30; // [sp+111Ch] [bp-40h]
  unsigned int v31; // [sp+1120h] [bp-3Ch]
  int v32; // [sp+1124h] [bp-38h]
  int i; // [sp+1128h] [bp-34h]
  unsigned int j; // [sp+112Ch] [bp-30h]
  __int64 v35; // [sp+1130h] [bp-2Ch]
  unsigned int k; // [sp+1138h] [bp-24h]
  unsigned int v37; // [sp+113Ch] [bp-20h]

  v32 = a1;
  v31 = *(_DWORD *)(a1 + 128);
  v30 = 128 >> a3;
  v29[0] = a2 & -(128 >> a3) | (128 >> a3);
  if ( v31 > 0x77 )
  {
    v37 = 256 - v31;
    v35 = *(_QWORD *)(a1 + 264) + 2LL;
  }
  else
  {
    v37 = 128 - v31;
    v35 = *(_QWORD *)(a1 + 264) + 1LL;
  }
  memset(&v29[1], 0, v37 - 9);
  sub_2E4064(&v29[v37 - 8], (int)&v29[v37 - 8], v35, SHIDWORD(v35));
  sub_2EE9D4(a1, v29, v37);
  memcpy(dest, (const void *)(a1 + 136), sizeof(dest));
  memcpy(v11, dest, sizeof(v11));
  for ( i = 0; i <= 13; i += 2 )
  {
    v11[0] ^= i;
    v11[1] ^= i + 16;
    v11[2] ^= i + 32;
    v11[3] ^= i + 48;
    v11[4] ^= i + 64;
    v11[5] ^= i + 80;
    v11[6] ^= i + 96;
    v11[7] ^= i + 112;
    v11[8] ^= i + 128;
    v11[9] ^= i + 144;
    v11[10] ^= i + 160;
    v11[11] ^= i + 176;
    v11[12] ^= i + 192;
    v11[13] ^= i + 208;
    v11[14] ^= i + 224;
    v11[15] ^= i + 240;
    v8 = qword_5803F8[LOBYTE(v11[0])]
       ^ qword_580BF8[BYTE1(v11[1])]
       ^ qword_5813F8[BYTE2(v11[2])]
       ^ qword_581BF8[BYTE3(v11[3])]
       ^ qword_5823F8[BYTE4(v11[4])]
       ^ qword_582BF8[BYTE5(v11[5])]
       ^ qword_5833F8[BYTE6(v11[6])]
       ^ qword_583BF8[HIBYTE(HIDWORD(v11[11]))];
    v12 = v8;
    v7 = qword_5803F8[LOBYTE(v11[1])]
       ^ qword_580BF8[BYTE1(v11[2])]
       ^ qword_5813F8[BYTE2(v11[3])]
       ^ qword_581BF8[BYTE3(v11[4])]
       ^ qword_5823F8[BYTE4(v11[5])]
       ^ qword_582BF8[BYTE5(v11[6])]
       ^ qword_5833F8[BYTE6(v11[7])]
       ^ qword_583BF8[HIBYTE(HIDWORD(v11[12]))];
    v13 = v7;
    v6 = qword_5803F8[LOBYTE(v11[2])]
       ^ qword_580BF8[BYTE1(v11[3])]
       ^ qword_5813F8[BYTE2(v11[4])]
       ^ qword_581BF8[BYTE3(v11[5])]
       ^ qword_5823F8[BYTE4(v11[6])]
       ^ qword_582BF8[BYTE5(v11[7])]
       ^ qword_5833F8[BYTE6(v11[8])]
       ^ qword_583BF8[HIBYTE(HIDWORD(v11[13]))];
    v14 = v6;
    v15 = qword_5803F8[LOBYTE(v11[3])]
        ^ qword_580BF8[BYTE1(v11[4])]
        ^ qword_5813F8[BYTE2(v11[5])]
        ^ qword_581BF8[BYTE3(v11[6])]
        ^ qword_5823F8[BYTE4(v11[7])]
        ^ qword_582BF8[BYTE5(v11[8])]
        ^ qword_5833F8[BYTE6(v11[9])]
        ^ qword_583BF8[HIBYTE(HIDWORD(v11[14]))];
    v16 = qword_5803F8[LOBYTE(v11[4])]
        ^ qword_580BF8[BYTE1(v11[5])]
        ^ qword_5813F8[BYTE2(v11[6])]
        ^ qword_581BF8[BYTE3(v11[7])]
        ^ qword_5823F8[BYTE4(v11[8])]
        ^ qword_582BF8[BYTE5(v11[9])]
        ^ qword_5833F8[BYTE6(v11[10])]
        ^ qword_583BF8[HIBYTE(HIDWORD(v11[15]))];
    v17 = qword_5803F8[LOBYTE(v11[5])]
        ^ qword_580BF8[BYTE1(v11[6])]
        ^ qword_5813F8[BYTE2(v11[7])]
        ^ qword_581BF8[BYTE3(v11[8])]
        ^ qword_5823F8[BYTE4(v11[9])]
        ^ qword_582BF8[BYTE5(v11[10])]
        ^ qword_5833F8[BYTE6(v11[11])]
        ^ qword_583BF8[HIBYTE(HIDWORD(v11[0]))];
    v18 = qword_5803F8[LOBYTE(v11[6])]
        ^ qword_580BF8[BYTE1(v11[7])]
        ^ qword_5813F8[BYTE2(v11[8])]
        ^ qword_581BF8[BYTE3(v11[9])]
        ^ qword_5823F8[BYTE4(v11[10])]
        ^ qword_582BF8[BYTE5(v11[11])]
        ^ qword_5833F8[BYTE6(v11[12])]
        ^ qword_583BF8[HIBYTE(HIDWORD(v11[1]))];
    v19 = qword_5803F8[LOBYTE(v11[7])]
        ^ qword_580BF8[BYTE1(v11[8])]
        ^ qword_5813F8[BYTE2(v11[9])]
        ^ qword_581BF8[BYTE3(v11[10])]
        ^ qword_5823F8[BYTE4(v11[11])]
        ^ qword_582BF8[BYTE5(v11[12])]
        ^ qword_5833F8[BYTE6(v11[13])]
        ^ qword_583BF8[HIBYTE(HIDWORD(v11[2]))];
    v20 = qword_5803F8[LOBYTE(v11[8])]
        ^ qword_580BF8[BYTE1(v11[9])]
        ^ qword_5813F8[BYTE2(v11[10])]
        ^ qword_581BF8[BYTE3(v11[11])]
        ^ qword_5823F8[BYTE4(v11[12])]
        ^ qword_582BF8[BYTE5(v11[13])]
        ^ qword_5833F8[BYTE6(v11[14])]
        ^ qword_583BF8[HIBYTE(HIDWORD(v11[3]))];
    v21 = qword_5803F8[LOBYTE(v11[9])]
        ^ qword_580BF8[BYTE1(v11[10])]
        ^ qword_5813F8[BYTE2(v11[11])]
        ^ qword_581BF8[BYTE3(v11[12])]
        ^ qword_5823F8[BYTE4(v11[13])]
        ^ qword_582BF8[BYTE5(v11[14])]
        ^ qword_5833F8[BYTE6(v11[15])]
        ^ qword_583BF8[HIBYTE(HIDWORD(v11[4]))];
    v22 = qword_5803F8[LOBYTE(v11[10])]
        ^ qword_580BF8[BYTE1(v11[11])]
        ^ qword_5813F8[BYTE2(v11[12])]
        ^ qword_581BF8[BYTE3(v11[13])]
        ^ qword_5823F8[BYTE4(v11[14])]
        ^ qword_582BF8[BYTE5(v11[15])]
        ^ qword_5833F8[BYTE6(v11[0])]
        ^ qword_583BF8[HIBYTE(HIDWORD(v11[5]))];
    v23 = qword_5803F8[LOBYTE(v11[11])]
        ^ qword_580BF8[BYTE1(v11[12])]
        ^ qword_5813F8[BYTE2(v11[13])]
        ^ qword_581BF8[BYTE3(v11[14])]
        ^ qword_5823F8[BYTE4(v11[15])]
        ^ qword_582BF8[BYTE5(v11[0])]
        ^ qword_5833F8[BYTE6(v11[1])]
        ^ qword_583BF8[HIBYTE(HIDWORD(v11[6]))];
    v24 = qword_5803F8[LOBYTE(v11[12])]
        ^ qword_580BF8[BYTE1(v11[13])]
        ^ qword_5813F8[BYTE2(v11[14])]
        ^ qword_581BF8[BYTE3(v11[15])]
        ^ qword_5823F8[BYTE4(v11[0])]
        ^ qword_582BF8[BYTE5(v11[1])]
        ^ qword_5833F8[BYTE6(v11[2])]
        ^ qword_583BF8[HIBYTE(HIDWORD(v11[7]))];
    v25 = qword_5803F8[LOBYTE(v11[13])]
        ^ qword_580BF8[BYTE1(v11[14])]
        ^ qword_5813F8[BYTE2(v11[15])]
        ^ qword_581BF8[BYTE3(v11[0])]
        ^ qword_5823F8[BYTE4(v11[1])]
        ^ qword_582BF8[BYTE5(v11[2])]
        ^ qword_5833F8[BYTE6(v11[3])]
        ^ qword_583BF8[HIBYTE(HIDWORD(v11[8]))];
    v26 = qword_5803F8[LOBYTE(v11[14])]
        ^ qword_580BF8[BYTE1(v11[15])]
        ^ qword_5813F8[BYTE2(v11[0])]
        ^ qword_581BF8[BYTE3(v11[1])]
        ^ qword_5823F8[BYTE4(v11[2])]
        ^ qword_582BF8[BYTE5(v11[3])]
        ^ qword_5833F8[BYTE6(v11[4])]
        ^ qword_583BF8[HIBYTE(HIDWORD(v11[9]))];
    v27 = qword_5803F8[LOBYTE(v11[15])]
        ^ qword_580BF8[BYTE1(v11[0])]
        ^ qword_5813F8[BYTE2(v11[1])]
        ^ qword_581BF8[BYTE3(v11[2])]
        ^ qword_5823F8[BYTE4(v11[3])]
        ^ qword_582BF8[BYTE5(v11[4])]
        ^ qword_5833F8[BYTE6(v11[5])]
        ^ qword_583BF8[HIBYTE(HIDWORD(v11[10]))];
    v11[0] = v8 ^ (i + 1);
    v11[1] = v7 ^ (i + 17);
    v11[2] = v6 ^ (i + 33);
    v11[3] = v15 ^ (i + 49);
    v11[4] = v16 ^ (i + 65);
    v11[5] = v17 ^ (i + 81);
    v11[6] = v18 ^ (i + 97);
    v11[7] = v19 ^ (i + 113);
    v11[8] = v20 ^ (i + 129);
    v11[9] = v21 ^ (i + 145);
    v11[10] = v22 ^ (i + 161);
    v11[11] = v23 ^ (i + 177);
    v11[12] = v24 ^ (i + 193);
    v11[13] = v25 ^ (i + 209);
    v11[14] = v26 ^ (i + 225);
    v11[15] = v27 ^ (i + 241);
    v12 = qword_5803F8[(unsigned __int8)(v8 ^ (i + 1))]
        ^ qword_580BF8[BYTE1(v11[1])]
        ^ qword_5813F8[BYTE2(v11[2])]
        ^ qword_581BF8[((unsigned int)v15 ^ (i + 49)) >> 24]
        ^ qword_5823F8[BYTE4(v11[4])]
        ^ qword_582BF8[BYTE5(v11[5])]
        ^ qword_5833F8[BYTE6(v11[6])]
        ^ qword_583BF8[HIBYTE(HIDWORD(v11[11]))];
    v13 = qword_5803F8[(unsigned __int8)(v7 ^ (i + 17))]
        ^ qword_580BF8[BYTE1(v11[2])]
        ^ qword_5813F8[BYTE2(v11[3])]
        ^ qword_581BF8[((unsigned int)v16 ^ (i + 65)) >> 24]
        ^ qword_5823F8[BYTE4(v11[5])]
        ^ qword_582BF8[BYTE5(v11[6])]
        ^ qword_5833F8[BYTE6(v11[7])]
        ^ qword_583BF8[HIBYTE(HIDWORD(v11[12]))];
    v14 = qword_5803F8[(unsigned __int8)(v6 ^ (i + 33))]
        ^ qword_580BF8[BYTE1(v11[3])]
        ^ qword_5813F8[BYTE2(v11[4])]
        ^ qword_581BF8[((unsigned int)v17 ^ (i + 81)) >> 24]
        ^ qword_5823F8[BYTE4(v11[6])]
        ^ qword_582BF8[BYTE5(v11[7])]
        ^ qword_5833F8[BYTE6(v11[8])]
        ^ qword_583BF8[HIBYTE(HIDWORD(v11[13]))];
    v15 = qword_5803F8[(unsigned __int8)(v15 ^ (i + 49))]
        ^ qword_580BF8[BYTE1(v11[4])]
        ^ qword_5813F8[BYTE2(v11[5])]
        ^ qword_581BF8[((unsigned int)v18 ^ (i + 97)) >> 24]
        ^ qword_5823F8[BYTE4(v11[7])]
        ^ qword_582BF8[BYTE5(v11[8])]
        ^ qword_5833F8[BYTE6(v11[9])]
        ^ qword_583BF8[HIBYTE(HIDWORD(v11[14]))];
    v16 = qword_5803F8[(unsigned __int8)(v16 ^ (i + 65))]
        ^ qword_580BF8[BYTE1(v11[5])]
        ^ qword_5813F8[BYTE2(v11[6])]
        ^ qword_581BF8[((unsigned int)v19 ^ (i + 113)) >> 24]
        ^ qword_5823F8[BYTE4(v11[8])]
        ^ qword_582BF8[BYTE5(v11[9])]
        ^ qword_5833F8[BYTE6(v11[10])]
        ^ qword_583BF8[HIBYTE(HIDWORD(v11[15]))];
    v17 = qword_5803F8[(unsigned __int8)(v17 ^ (i + 81))]
        ^ qword_580BF8[BYTE1(v11[6])]
        ^ qword_5813F8[BYTE2(v11[7])]
        ^ qword_581BF8[((unsigned int)v20 ^ (i + 129)) >> 24]
        ^ qword_5823F8[BYTE4(v11[9])]
        ^ qword_582BF8[BYTE5(v11[10])]
        ^ qword_5833F8[BYTE6(v11[11])]
        ^ qword_583BF8[HIBYTE(HIDWORD(v11[0]))];
    v18 = qword_5803F8[(unsigned __int8)(v18 ^ (i + 97))]
        ^ qword_580BF8[BYTE1(v11[7])]
        ^ qword_5813F8[BYTE2(v11[8])]
        ^ qword_581BF8[((unsigned int)v21 ^ (i + 145)) >> 24]
        ^ qword_5823F8[BYTE4(v11[10])]
        ^ qword_582BF8[BYTE5(v11[11])]
        ^ qword_5833F8[BYTE6(v11[12])]
        ^ qword_583BF8[HIBYTE(HIDWORD(v11[1]))];
    v19 = qword_5803F8[(unsigned __int8)(v19 ^ (i + 113))]
        ^ qword_580BF8[BYTE1(v11[8])]
        ^ qword_5813F8[BYTE2(v11[9])]
        ^ qword_581BF8[((unsigned int)v22 ^ (i + 161)) >> 24]
        ^ qword_5823F8[BYTE4(v11[11])]
        ^ qword_582BF8[BYTE5(v11[12])]
        ^ qword_5833F8[BYTE6(v11[13])]
        ^ qword_583BF8[HIBYTE(HIDWORD(v11[2]))];
    v20 = qword_5803F8[(unsigned __int8)(v20 ^ (i - 127))]
        ^ qword_580BF8[BYTE1(v11[9])]
        ^ qword_5813F8[BYTE2(v11[10])]
        ^ qword_581BF8[((unsigned int)v23 ^ (i + 177)) >> 24]
        ^ qword_5823F8[BYTE4(v11[12])]
        ^ qword_582BF8[BYTE5(v11[13])]
        ^ qword_5833F8[BYTE6(v11[14])]
        ^ qword_583BF8[HIBYTE(HIDWORD(v11[3]))];
    v21 = qword_5803F8[(unsigned __int8)(v21 ^ (i - 111))]
        ^ qword_580BF8[BYTE1(v11[10])]
        ^ qword_5813F8[BYTE2(v11[11])]
        ^ qword_581BF8[((unsigned int)v24 ^ (i + 193)) >> 24]
        ^ qword_5823F8[BYTE4(v11[13])]
        ^ qword_582BF8[BYTE5(v11[14])]
        ^ qword_5833F8[BYTE6(v11[15])]
        ^ qword_583BF8[HIBYTE(HIDWORD(v11[4]))];
    v22 = qword_5803F8[(unsigned __int8)(v22 ^ (i - 95))]
        ^ qword_580BF8[BYTE1(v11[11])]
        ^ qword_5813F8[BYTE2(v11[12])]
        ^ qword_581BF8[((unsigned int)v25 ^ (i + 209)) >> 24]
        ^ qword_5823F8[BYTE4(v11[14])]
        ^ qword_582BF8[BYTE5(v11[15])]
        ^ qword_5833F8[BYTE6(v11[0])]
        ^ qword_583BF8[HIBYTE(HIDWORD(v11[5]))];
    v23 = qword_5803F8[(unsigned __int8)(v23 ^ (i - 79))]
        ^ qword_580BF8[BYTE1(v11[12])]
        ^ qword_5813F8[BYTE2(v11[13])]
        ^ qword_581BF8[((unsigned int)v26 ^ (i + 225)) >> 24]
        ^ qword_5823F8[BYTE4(v11[15])]
        ^ qword_582BF8[BYTE5(v11[0])]
        ^ qword_5833F8[BYTE6(v11[1])]
        ^ qword_583BF8[HIBYTE(HIDWORD(v11[6]))];
    v24 = qword_5803F8[(unsigned __int8)(v24 ^ (i - 63))]
        ^ qword_580BF8[BYTE1(v11[13])]
        ^ qword_5813F8[BYTE2(v11[14])]
        ^ qword_581BF8[((unsigned int)v27 ^ (i + 241)) >> 24]
        ^ qword_5823F8[BYTE4(v11[0])]
        ^ qword_582BF8[BYTE5(v11[1])]
        ^ qword_5833F8[BYTE6(v11[2])]
        ^ qword_583BF8[HIBYTE(HIDWORD(v11[7]))];
    v25 = qword_5803F8[(unsigned __int8)(v25 ^ (i - 47))]
        ^ qword_580BF8[BYTE1(v11[14])]
        ^ qword_5813F8[BYTE2(v11[15])]
        ^ qword_581BF8[((unsigned int)v8 ^ (i + 1)) >> 24]
        ^ qword_5823F8[BYTE4(v11[1])]
        ^ qword_582BF8[BYTE5(v11[2])]
        ^ qword_5833F8[BYTE6(v11[3])]
        ^ qword_583BF8[HIBYTE(HIDWORD(v11[8]))];
    v26 = qword_5803F8[(unsigned __int8)(v26 ^ (i - 31))]
        ^ qword_580BF8[BYTE1(v11[15])]
        ^ qword_5813F8[BYTE2(v11[0])]
        ^ qword_581BF8[((unsigned int)v7 ^ (i + 17)) >> 24]
        ^ qword_5823F8[BYTE4(v11[2])]
        ^ qword_582BF8[BYTE5(v11[3])]
        ^ qword_5833F8[BYTE6(v11[4])]
        ^ qword_583BF8[HIBYTE(HIDWORD(v11[9]))];
    v27 = qword_5803F8[(unsigned __int8)(v27 ^ (i - 15))]
        ^ qword_580BF8[BYTE1(v11[0])]
        ^ qword_5813F8[BYTE2(v11[1])]
        ^ qword_581BF8[((unsigned int)v6 ^ (i + 33)) >> 24]
        ^ qword_5823F8[BYTE4(v11[3])]
        ^ qword_582BF8[BYTE5(v11[4])]
        ^ qword_5833F8[BYTE6(v11[5])]
        ^ qword_583BF8[HIBYTE(HIDWORD(v11[10]))];
    v11[0] = v12;
    v11[1] = v13;
    v11[2] = v14;
    v11[3] = v15;
    v11[4] = v16;
    v11[5] = v17;
    v11[6] = v18;
    v11[7] = v19;
    v11[8] = v20;
    v11[9] = v21;
    v11[10] = v22;
    v11[11] = v23;
    v11[12] = v24;
    v11[13] = v25;
    v11[14] = v26;
    v11[15] = v27;
  }
  for ( j = 0; j <= 0xF; ++j )
    dest[j] ^= v11[j];
  for ( k = 0; k <= 7; ++k )
    sub_2E419C((int)&v29[8 * k], (int)&v29[8 * k], dest[k + 8], HIDWORD(dest[k + 8]));
  memcpy(a4, &v29[64 - n], n);
  return sub_2EE8EC(a1, 8 * n);
}
