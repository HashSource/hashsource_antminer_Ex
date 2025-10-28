void *__fastcall sub_2E43DC(int a1, char *a2, size_t a3)
{
  void *result; // r0
  __int64 v4; // r0
  __int64 v5; // r2
  __int64 v6; // [sp+388h] [bp-D4Ch]
  __int64 v7; // [sp+398h] [bp-D3Ch]
  __int64 v8; // [sp+3A8h] [bp-D2Ch]
  __int64 v9; // [sp+3B8h] [bp-D1Ch]
  __int64 v10; // [sp+3C8h] [bp-D0Ch]
  __int64 v11; // [sp+3D8h] [bp-CFCh]
  __int64 v12; // [sp+3E8h] [bp-CECh]
  __int64 v13; // [sp+3F8h] [bp-CDCh]
  __int64 v14; // [sp+410h] [bp-CC4h]
  __int64 v15; // [sp+478h] [bp-C5Ch]
  __int64 v16; // [sp+4E8h] [bp-BECh]
  __int64 v17; // [sp+558h] [bp-B7Ch]
  __int64 v18; // [sp+5C8h] [bp-B0Ch]
  __int64 v19; // [sp+638h] [bp-A9Ch]
  __int64 v20; // [sp+6A8h] [bp-A2Ch]
  __int64 v21; // [sp+718h] [bp-9BCh]
  __int64 v22; // [sp+788h] [bp-94Ch]
  int v23; // [sp+794h] [bp-940h]
  __int64 v24; // [sp+798h] [bp-93Ch]
  int v25; // [sp+7A4h] [bp-930h]
  __int64 v26; // [sp+7A8h] [bp-92Ch]
  int v27; // [sp+7B4h] [bp-920h]
  __int64 v28; // [sp+7B8h] [bp-91Ch]
  int v29; // [sp+7C4h] [bp-910h]
  __int64 v30; // [sp+7C8h] [bp-90Ch]
  int v31; // [sp+7D4h] [bp-900h]
  __int64 v32; // [sp+7D8h] [bp-8FCh]
  int v33; // [sp+7E4h] [bp-8F0h]
  __int64 v34; // [sp+7E8h] [bp-8ECh]
  int v35; // [sp+7F4h] [bp-8E0h]
  __int64 v36; // [sp+7F8h] [bp-8DCh]
  __int64 v37; // [sp+DF8h] [bp-2DCh]
  __int64 v38; // [sp+E68h] [bp-26Ch]
  __int64 v39; // [sp+ED8h] [bp-1FCh]
  unsigned int n; // [sp+F94h] [bp-140h]
  char *src; // [sp+F98h] [bp-13Ch]
  __int64 v43; // [sp+FA0h] [bp-134h]
  __int64 v44; // [sp+FA8h] [bp-12Ch] BYREF
  __int64 v45; // [sp+FB0h] [bp-124h]
  __int64 v46; // [sp+FB8h] [bp-11Ch]
  __int64 v47; // [sp+FC0h] [bp-114h]
  __int64 v48; // [sp+FC8h] [bp-10Ch]
  __int64 v49; // [sp+FD0h] [bp-104h]
  __int64 v50; // [sp+FD8h] [bp-FCh]
  __int64 v51; // [sp+FE0h] [bp-F4h]
  __int64 v52; // [sp+FE8h] [bp-ECh]
  __int64 v53; // [sp+FF0h] [bp-E4h]
  __int64 v54; // [sp+FF8h] [bp-DCh]
  __int64 v55; // [sp+1000h] [bp-D4h]
  __int64 v56; // [sp+1008h] [bp-CCh]
  __int64 v57; // [sp+1010h] [bp-C4h]
  __int64 v58; // [sp+1018h] [bp-BCh]
  __int64 v59; // [sp+1020h] [bp-B4h]
  __int64 v60; // [sp+1028h] [bp-ACh]
  __int64 v61; // [sp+1030h] [bp-A4h]
  __int64 v62; // [sp+1038h] [bp-9Ch]
  __int64 v63; // [sp+1040h] [bp-94h]
  __int64 v64; // [sp+1048h] [bp-8Ch]
  __int64 v65; // [sp+1050h] [bp-84h]
  __int64 v66; // [sp+1058h] [bp-7Ch]
  _QWORD dest[8]; // [sp+1060h] [bp-74h] BYREF
  int v68; // [sp+10A0h] [bp-34h]
  int k; // [sp+10A4h] [bp-30h]
  int j; // [sp+10A8h] [bp-2Ch]
  unsigned int i; // [sp+10ACh] [bp-28h]
  size_t v72; // [sp+10B0h] [bp-24h]
  int v73; // [sp+10B4h] [bp-20h]

  src = a2;
  n = a3;
  v68 = a1;
  v73 = *(_DWORD *)(a1 + 64);
  if ( a3 >= 64 - v73 )
  {
    memcpy(dest, (const void *)(a1 + 72), sizeof(dest));
    while ( n )
    {
      v72 = 64 - v73;
      if ( 64 - v73 > n )
        v72 = n;
      memcpy((void *)(v68 + v73), src, v72);
      v73 += v72;
      src += v72;
      n -= v72;
      if ( v73 == 64 )
      {
        for ( i = 0; i <= 7; ++i )
        {
          v4 = sub_2E42D4(v68 + 8 * i);
          *(&v51 + i) = v4;
          *(&v44 + i - 1) = *(&v51 + i) ^ dest[i];
        }
        for ( j = 0; j <= 9; j += 2 )
        {
          v43 ^= j;
          v44 ^= j + 16;
          v45 ^= j + 32;
          v46 ^= j + 48;
          v47 ^= j + 64;
          v48 ^= j + 80;
          v49 ^= j + 96;
          v50 ^= j + 112;
          v39 = qword_5803F8[(unsigned __int8)v43]
              ^ qword_580BF8[BYTE1(v44)]
              ^ qword_5813F8[BYTE2(v45)]
              ^ qword_581BF8[BYTE3(v46)]
              ^ qword_5823F8[BYTE4(v47)]
              ^ qword_582BF8[BYTE5(v48)]
              ^ qword_5833F8[BYTE6(v49)]
              ^ qword_583BF8[HIBYTE(HIDWORD(v50))];
          v59 = v39;
          v38 = qword_5803F8[(unsigned __int8)v44]
              ^ qword_580BF8[BYTE1(v45)]
              ^ qword_5813F8[BYTE2(v46)]
              ^ qword_581BF8[BYTE3(v47)]
              ^ qword_5823F8[BYTE4(v48)]
              ^ qword_582BF8[BYTE5(v49)]
              ^ qword_5833F8[BYTE6(v50)]
              ^ qword_583BF8[HIBYTE(HIDWORD(v43))];
          v60 = v38;
          v37 = qword_5803F8[(unsigned __int8)v45]
              ^ qword_580BF8[BYTE1(v46)]
              ^ qword_5813F8[BYTE2(v47)]
              ^ qword_581BF8[BYTE3(v48)]
              ^ qword_5823F8[BYTE4(v49)]
              ^ qword_582BF8[BYTE5(v50)]
              ^ qword_5833F8[BYTE6(v43)]
              ^ qword_583BF8[HIBYTE(HIDWORD(v44))];
          v61 = v37;
          v62 = qword_5803F8[(unsigned __int8)v46]
              ^ qword_580BF8[BYTE1(v47)]
              ^ qword_5813F8[BYTE2(v48)]
              ^ qword_581BF8[BYTE3(v49)]
              ^ qword_5823F8[BYTE4(v50)]
              ^ qword_582BF8[BYTE5(v43)]
              ^ qword_5833F8[BYTE6(v44)]
              ^ qword_583BF8[HIBYTE(HIDWORD(v45))];
          v63 = qword_5803F8[(unsigned __int8)v47]
              ^ qword_580BF8[BYTE1(v48)]
              ^ qword_5813F8[BYTE2(v49)]
              ^ qword_581BF8[BYTE3(v50)]
              ^ qword_5823F8[BYTE4(v43)]
              ^ qword_582BF8[BYTE5(v44)]
              ^ qword_5833F8[BYTE6(v45)]
              ^ qword_583BF8[HIBYTE(HIDWORD(v46))];
          v64 = qword_5803F8[(unsigned __int8)v48]
              ^ qword_580BF8[BYTE1(v49)]
              ^ qword_5813F8[BYTE2(v50)]
              ^ qword_581BF8[BYTE3(v43)]
              ^ qword_5823F8[BYTE4(v44)]
              ^ qword_582BF8[BYTE5(v45)]
              ^ qword_5833F8[BYTE6(v46)]
              ^ qword_583BF8[HIBYTE(HIDWORD(v47))];
          v65 = qword_5803F8[(unsigned __int8)v49]
              ^ qword_580BF8[BYTE1(v50)]
              ^ qword_5813F8[BYTE2(v43)]
              ^ qword_581BF8[BYTE3(v44)]
              ^ qword_5823F8[BYTE4(v45)]
              ^ qword_582BF8[BYTE5(v46)]
              ^ qword_5833F8[BYTE6(v47)]
              ^ qword_583BF8[HIBYTE(HIDWORD(v48))];
          v66 = qword_5803F8[(unsigned __int8)v50]
              ^ qword_580BF8[BYTE1(v43)]
              ^ qword_5813F8[BYTE2(v44)]
              ^ qword_581BF8[BYTE3(v45)]
              ^ qword_5823F8[BYTE4(v46)]
              ^ qword_582BF8[BYTE5(v47)]
              ^ qword_5833F8[BYTE6(v48)]
              ^ qword_583BF8[HIBYTE(HIDWORD(v49))];
          v43 = v39 ^ (j + 1);
          v44 = v38 ^ (j + 17);
          v45 = v37 ^ (j + 33);
          v46 = v62 ^ (j + 49);
          v47 = v63 ^ (j + 65);
          v48 = v64 ^ (j + 81);
          v49 = v65 ^ (j + 97);
          v50 = v66 ^ (j + 113);
          v59 = qword_5803F8[(unsigned __int8)(v39 ^ (j + 1))]
              ^ qword_580BF8[BYTE1(v44)]
              ^ qword_5813F8[BYTE2(v45)]
              ^ qword_581BF8[((unsigned int)v62 ^ (j + 49)) >> 24]
              ^ qword_5823F8[BYTE4(v47)]
              ^ qword_582BF8[BYTE5(v48)]
              ^ qword_5833F8[BYTE6(v49)]
              ^ qword_583BF8[HIBYTE(HIDWORD(v50))];
          v60 = qword_5803F8[(unsigned __int8)(v38 ^ (j + 17))]
              ^ qword_580BF8[BYTE1(v45)]
              ^ qword_5813F8[BYTE2(v46)]
              ^ qword_581BF8[((unsigned int)v63 ^ (j + 65)) >> 24]
              ^ qword_5823F8[BYTE4(v48)]
              ^ qword_582BF8[BYTE5(v49)]
              ^ qword_5833F8[BYTE6(v50)]
              ^ qword_583BF8[HIBYTE(HIDWORD(v43))];
          v61 = qword_5803F8[(unsigned __int8)(v37 ^ (j + 33))]
              ^ qword_580BF8[BYTE1(v46)]
              ^ qword_5813F8[BYTE2(v47)]
              ^ qword_581BF8[((unsigned int)v64 ^ (j + 81)) >> 24]
              ^ qword_5823F8[BYTE4(v49)]
              ^ qword_582BF8[BYTE5(v50)]
              ^ qword_5833F8[BYTE6(v43)]
              ^ qword_583BF8[HIBYTE(HIDWORD(v44))];
          v62 = qword_5803F8[(unsigned __int8)(v62 ^ (j + 49))]
              ^ qword_580BF8[BYTE1(v47)]
              ^ qword_5813F8[BYTE2(v48)]
              ^ qword_581BF8[((unsigned int)v65 ^ (j + 97)) >> 24]
              ^ qword_5823F8[BYTE4(v50)]
              ^ qword_582BF8[BYTE5(v43)]
              ^ qword_5833F8[BYTE6(v44)]
              ^ qword_583BF8[HIBYTE(HIDWORD(v45))];
          v63 = qword_5803F8[(unsigned __int8)(v63 ^ (j + 65))]
              ^ qword_580BF8[BYTE1(v48)]
              ^ qword_5813F8[BYTE2(v49)]
              ^ qword_581BF8[((unsigned int)v66 ^ (j + 113)) >> 24]
              ^ qword_5823F8[BYTE4(v43)]
              ^ qword_582BF8[BYTE5(v44)]
              ^ qword_5833F8[BYTE6(v45)]
              ^ qword_583BF8[HIBYTE(HIDWORD(v46))];
          v64 = qword_5803F8[(unsigned __int8)(v64 ^ (j + 81))]
              ^ qword_580BF8[BYTE1(v49)]
              ^ qword_5813F8[BYTE2(v50)]
              ^ qword_581BF8[((unsigned int)v39 ^ (j + 1)) >> 24]
              ^ qword_5823F8[BYTE4(v44)]
              ^ qword_582BF8[BYTE5(v45)]
              ^ qword_5833F8[BYTE6(v46)]
              ^ qword_583BF8[HIBYTE(HIDWORD(v47))];
          v65 = qword_5803F8[(unsigned __int8)(v65 ^ (j + 97))]
              ^ qword_580BF8[BYTE1(v50)]
              ^ qword_5813F8[BYTE2(v43)]
              ^ qword_581BF8[((unsigned int)v38 ^ (j + 17)) >> 24]
              ^ qword_5823F8[BYTE4(v45)]
              ^ qword_582BF8[BYTE5(v46)]
              ^ qword_5833F8[BYTE6(v47)]
              ^ qword_583BF8[HIBYTE(HIDWORD(v48))];
          v66 = qword_5803F8[(unsigned __int8)(v66 ^ (j + 113))]
              ^ qword_580BF8[BYTE1(v43)]
              ^ qword_5813F8[BYTE2(v44)]
              ^ qword_581BF8[((unsigned int)v37 ^ (j + 33)) >> 24]
              ^ qword_5823F8[BYTE4(v46)]
              ^ qword_582BF8[BYTE5(v47)]
              ^ qword_5833F8[BYTE6(v48)]
              ^ qword_583BF8[HIBYTE(HIDWORD(v49))];
          v43 = v59;
          v44 = v60;
          v45 = v61;
          v46 = v62;
          v47 = v63;
          v48 = v64;
          v49 = v65;
          v50 = v66;
        }
        for ( k = 0; k <= 9; k += 2 )
        {
          LODWORD(v36) = ~(_DWORD)v51;
          HIDWORD(v36) = HIDWORD(v51) ^ ~(k << 24);
          v51 = v36;
          v35 = HIDWORD(v52) ^ (k << 24);
          LODWORD(v34) = ~(_DWORD)v52;
          HIDWORD(v34) = v35 ^ 0xEFFFFFFF;
          v52 = v34;
          v33 = HIDWORD(v53) ^ (k << 24);
          LODWORD(v32) = ~(_DWORD)v53;
          HIDWORD(v32) = v33 ^ 0xDFFFFFFF;
          v53 = v32;
          v31 = HIDWORD(v54) ^ (k << 24);
          LODWORD(v30) = ~(_DWORD)v54;
          HIDWORD(v30) = v31 ^ 0xCFFFFFFF;
          v54 = v30;
          v29 = HIDWORD(v55) ^ (k << 24);
          LODWORD(v28) = ~(_DWORD)v55;
          HIDWORD(v28) = v29 ^ 0xBFFFFFFF;
          v55 = v28;
          v27 = HIDWORD(v56) ^ (k << 24);
          LODWORD(v26) = ~(_DWORD)v56;
          HIDWORD(v26) = v27 ^ 0xAFFFFFFF;
          v56 = v26;
          v25 = HIDWORD(v57) ^ (k << 24);
          LODWORD(v24) = ~(_DWORD)v57;
          HIDWORD(v24) = v25 ^ 0x9FFFFFFF;
          v57 = v24;
          v23 = HIDWORD(v58) ^ (k << 24);
          LODWORD(v22) = ~(_DWORD)v58;
          HIDWORD(v22) = v23 ^ 0x8FFFFFFF;
          v58 = v22;
          v21 = qword_5803F8[(unsigned __int8)v34]
              ^ qword_580BF8[BYTE1(v30)]
              ^ qword_5813F8[BYTE2(v26)]
              ^ qword_581BF8[BYTE3(v22)]
              ^ qword_5823F8[BYTE4(v36)]
              ^ qword_582BF8[(unsigned __int8)((unsigned __int16)~(_WORD)v33 >> 8)]
              ^ qword_5833F8[(unsigned __int8)((v29 ^ 0xBFFFFFFF) >> 16)]
              ^ qword_583BF8[(v25 ^ 0x9FFFFFFF) >> 24];
          v59 = v21;
          v20 = qword_5803F8[(unsigned __int8)v32]
              ^ qword_580BF8[BYTE1(v28)]
              ^ qword_5813F8[BYTE2(v24)]
              ^ qword_581BF8[BYTE3(v36)]
              ^ qword_5823F8[(unsigned __int8)~(_BYTE)v35]
              ^ qword_582BF8[(unsigned __int8)((unsigned __int16)~(_WORD)v31 >> 8)]
              ^ qword_5833F8[(unsigned __int8)((v27 ^ 0xAFFFFFFF) >> 16)]
              ^ qword_583BF8[(v23 ^ 0x8FFFFFFF) >> 24];
          v60 = v20;
          v19 = qword_5803F8[(unsigned __int8)v30]
              ^ qword_580BF8[BYTE1(v26)]
              ^ qword_5813F8[BYTE2(v22)]
              ^ qword_581BF8[BYTE3(v34)]
              ^ qword_5823F8[(unsigned __int8)~(_BYTE)v33]
              ^ qword_582BF8[(unsigned __int8)((unsigned __int16)~(_WORD)v29 >> 8)]
              ^ qword_5833F8[(unsigned __int8)((v25 ^ 0x9FFFFFFF) >> 16)]
              ^ qword_583BF8[HIBYTE(HIDWORD(v36))];
          v61 = v19;
          v18 = qword_5803F8[(unsigned __int8)v28]
              ^ qword_580BF8[BYTE1(v24)]
              ^ qword_5813F8[BYTE2(v36)]
              ^ qword_581BF8[BYTE3(v32)]
              ^ qword_5823F8[(unsigned __int8)~(_BYTE)v31]
              ^ qword_582BF8[(unsigned __int8)((unsigned __int16)~(_WORD)v27 >> 8)]
              ^ qword_5833F8[(unsigned __int8)((v23 ^ 0x8FFFFFFF) >> 16)]
              ^ qword_583BF8[(v35 ^ 0xEFFFFFFF) >> 24];
          v62 = v18;
          v17 = qword_5803F8[(unsigned __int8)v26]
              ^ qword_580BF8[BYTE1(v22)]
              ^ qword_5813F8[BYTE2(v34)]
              ^ qword_581BF8[BYTE3(v30)]
              ^ qword_5823F8[(unsigned __int8)~(_BYTE)v29]
              ^ qword_582BF8[(unsigned __int8)((unsigned __int16)~(_WORD)v25 >> 8)]
              ^ qword_5833F8[BYTE6(v36)]
              ^ qword_583BF8[(v33 ^ 0xDFFFFFFF) >> 24];
          v63 = v17;
          v16 = qword_5803F8[(unsigned __int8)v24]
              ^ qword_580BF8[BYTE1(v36)]
              ^ qword_5813F8[BYTE2(v32)]
              ^ qword_581BF8[BYTE3(v28)]
              ^ qword_5823F8[(unsigned __int8)~(_BYTE)v27]
              ^ qword_582BF8[(unsigned __int8)((unsigned __int16)~(_WORD)v23 >> 8)]
              ^ qword_5833F8[(unsigned __int8)((v35 ^ 0xEFFFFFFF) >> 16)]
              ^ qword_583BF8[(v31 ^ 0xCFFFFFFF) >> 24];
          v64 = v16;
          v15 = qword_5803F8[(unsigned __int8)v22]
              ^ qword_580BF8[BYTE1(v34)]
              ^ qword_5813F8[BYTE2(v30)]
              ^ qword_581BF8[BYTE3(v26)]
              ^ qword_5823F8[(unsigned __int8)~(_BYTE)v25]
              ^ qword_582BF8[BYTE5(v36)]
              ^ qword_5833F8[(unsigned __int8)((v33 ^ 0xDFFFFFFF) >> 16)]
              ^ qword_583BF8[(v29 ^ 0xBFFFFFFF) >> 24];
          v65 = v15;
          v14 = qword_5803F8[(unsigned __int8)v36]
              ^ qword_580BF8[BYTE1(v32)]
              ^ qword_5813F8[BYTE2(v28)]
              ^ qword_581BF8[BYTE3(v24)]
              ^ qword_5823F8[(unsigned __int8)~(_BYTE)v23]
              ^ qword_582BF8[(unsigned __int8)((unsigned __int16)~(_WORD)v35 >> 8)]
              ^ qword_5833F8[(unsigned __int8)((v31 ^ 0xCFFFFFFF) >> 16)];
          v5 = qword_583BF8[(v27 ^ 0xAFFFFFFF) >> 24];
          v66 = v14 ^ v5;
          LODWORD(v13) = ~(_DWORD)v21;
          HIDWORD(v13) = HIDWORD(v21) ^ ~((k + 1) << 24);
          v51 = v13;
          LODWORD(v12) = ~(_DWORD)v20;
          HIDWORD(v12) = HIDWORD(v20) ^ ((k + 1) << 24) ^ 0xEFFFFFFF;
          v52 = v12;
          LODWORD(v11) = ~(_DWORD)v19;
          HIDWORD(v11) = HIDWORD(v19) ^ ((k + 1) << 24) ^ 0xDFFFFFFF;
          v53 = v11;
          LODWORD(v10) = ~(_DWORD)v18;
          HIDWORD(v10) = HIDWORD(v18) ^ ((k + 1) << 24) ^ 0xCFFFFFFF;
          v54 = v10;
          LODWORD(v9) = ~(_DWORD)v17;
          HIDWORD(v9) = HIDWORD(v17) ^ ((k + 1) << 24) ^ 0xBFFFFFFF;
          v55 = v9;
          LODWORD(v8) = ~(_DWORD)v16;
          HIDWORD(v8) = HIDWORD(v16) ^ ((k + 1) << 24) ^ 0xAFFFFFFF;
          v56 = v8;
          LODWORD(v7) = ~(_DWORD)v15;
          HIDWORD(v7) = HIDWORD(v15) ^ ((k + 1) << 24) ^ 0x9FFFFFFF;
          v57 = v7;
          LODWORD(v6) = ~(v14 ^ v5);
          HIDWORD(v6) = HIDWORD(v14) ^ HIDWORD(v5) ^ ((k + 1) << 24) ^ 0x8FFFFFFF;
          v58 = v6;
          v59 = qword_5803F8[(unsigned __int8)~(_BYTE)v20]
              ^ qword_580BF8[(unsigned __int8)((unsigned __int16)~(_WORD)v18 >> 8)]
              ^ qword_5813F8[(unsigned __int8)((unsigned int)~(_DWORD)v16 >> 16)]
              ^ qword_581BF8[BYTE3(v6)]
              ^ qword_5823F8[(unsigned __int8)~BYTE4(v21)]
              ^ qword_582BF8[(unsigned __int8)((unsigned __int16)~WORD2(v19) >> 8)]
              ^ qword_5833F8[BYTE6(v9)]
              ^ qword_583BF8[HIBYTE(HIDWORD(v7))];
          v60 = qword_5803F8[(unsigned __int8)~(_BYTE)v19]
              ^ qword_580BF8[(unsigned __int8)((unsigned __int16)~(_WORD)v17 >> 8)]
              ^ qword_5813F8[(unsigned __int8)((unsigned int)~(_DWORD)v15 >> 16)]
              ^ qword_581BF8[(unsigned int)~(_DWORD)v21 >> 24]
              ^ qword_5823F8[(unsigned __int8)~BYTE4(v20)]
              ^ qword_582BF8[(unsigned __int8)((unsigned __int16)~WORD2(v18) >> 8)]
              ^ qword_5833F8[BYTE6(v8)]
              ^ qword_583BF8[HIBYTE(HIDWORD(v6))];
          v61 = qword_5803F8[(unsigned __int8)~(_BYTE)v18]
              ^ qword_580BF8[(unsigned __int8)((unsigned __int16)~(_WORD)v16 >> 8)]
              ^ qword_5813F8[BYTE2(v6)]
              ^ qword_581BF8[(unsigned int)~(_DWORD)v20 >> 24]
              ^ qword_5823F8[(unsigned __int8)~BYTE4(v19)]
              ^ qword_582BF8[(unsigned __int8)((unsigned __int16)~WORD2(v17) >> 8)]
              ^ qword_5833F8[BYTE6(v7)]
              ^ qword_583BF8[HIBYTE(HIDWORD(v13))];
          v62 = qword_5803F8[(unsigned __int8)~(_BYTE)v17]
              ^ qword_580BF8[(unsigned __int8)((unsigned __int16)~(_WORD)v15 >> 8)]
              ^ qword_5813F8[(unsigned __int8)((unsigned int)~(_DWORD)v21 >> 16)]
              ^ qword_581BF8[(unsigned int)~(_DWORD)v19 >> 24]
              ^ qword_5823F8[(unsigned __int8)~BYTE4(v18)]
              ^ qword_582BF8[(unsigned __int8)((unsigned __int16)~WORD2(v16) >> 8)]
              ^ qword_5833F8[BYTE6(v6)]
              ^ qword_583BF8[HIBYTE(HIDWORD(v12))];
          v63 = qword_5803F8[(unsigned __int8)~(_BYTE)v16]
              ^ qword_580BF8[BYTE1(v6)]
              ^ qword_5813F8[(unsigned __int8)((unsigned int)~(_DWORD)v20 >> 16)]
              ^ qword_581BF8[(unsigned int)~(_DWORD)v18 >> 24]
              ^ qword_5823F8[(unsigned __int8)~BYTE4(v17)]
              ^ qword_582BF8[(unsigned __int8)((unsigned __int16)~WORD2(v15) >> 8)]
              ^ qword_5833F8[BYTE6(v13)]
              ^ qword_583BF8[HIBYTE(HIDWORD(v11))];
          v64 = qword_5803F8[(unsigned __int8)~(_BYTE)v15]
              ^ qword_580BF8[(unsigned __int8)((unsigned __int16)~(_WORD)v21 >> 8)]
              ^ qword_5813F8[(unsigned __int8)((unsigned int)~(_DWORD)v19 >> 16)]
              ^ qword_581BF8[(unsigned int)~(_DWORD)v17 >> 24]
              ^ qword_5823F8[(unsigned __int8)~BYTE4(v16)]
              ^ qword_582BF8[(unsigned __int8)((unsigned __int16)~(WORD2(v14) ^ WORD2(v5)) >> 8)]
              ^ qword_5833F8[BYTE6(v12)]
              ^ qword_583BF8[HIBYTE(HIDWORD(v10))];
          v65 = qword_5803F8[(unsigned __int8)~(v14 ^ v5)]
              ^ qword_580BF8[(unsigned __int8)((unsigned __int16)~(_WORD)v20 >> 8)]
              ^ qword_5813F8[(unsigned __int8)((unsigned int)~(_DWORD)v18 >> 16)]
              ^ qword_581BF8[(unsigned int)~(_DWORD)v16 >> 24]
              ^ qword_5823F8[(unsigned __int8)~BYTE4(v15)]
              ^ qword_582BF8[(unsigned __int8)((unsigned __int16)~WORD2(v21) >> 8)]
              ^ qword_5833F8[BYTE6(v11)]
              ^ qword_583BF8[HIBYTE(HIDWORD(v9))];
          v66 = qword_5803F8[(unsigned __int8)~(_BYTE)v21]
              ^ qword_580BF8[(unsigned __int8)((unsigned __int16)~(_WORD)v19 >> 8)]
              ^ qword_5813F8[(unsigned __int8)((unsigned int)~(_DWORD)v17 >> 16)]
              ^ qword_581BF8[(unsigned int)~(_DWORD)v15 >> 24]
              ^ qword_5823F8[(unsigned __int8)~(BYTE4(v14) ^ BYTE4(v5))]
              ^ qword_582BF8[(unsigned __int8)((unsigned __int16)~WORD2(v20) >> 8)]
              ^ qword_5833F8[BYTE6(v10)]
              ^ qword_583BF8[HIBYTE(HIDWORD(v8))];
          v51 = v59;
          v52 = v60;
          v53 = v61;
          v54 = v62;
          v55 = v63;
          v56 = v64;
          v57 = v65;
          v58 = v66;
        }
        for ( i = 0; i <= 7; ++i )
          dest[i] ^= *(&v44 + i - 1) ^ *(&v51 + i);
        ++*(_QWORD *)(a1 + 136);
        v73 = 0;
      }
    }
    result = memcpy((void *)(a1 + 72), dest, 0x40u);
    *(_DWORD *)(a1 + 64) = v73;
  }
  else
  {
    result = memcpy((void *)(v68 + v73), a2, a3);
    *(_DWORD *)(a1 + 64) = v73 + n;
  }
  return result;
}
