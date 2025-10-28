unsigned int __fastcall vblake_hash(_BYTE *a1, int a2)
{
  int v3; // r2
  _BYTE *v4; // r4
  _BYTE *v5; // r3
  char v6; // t1
  _BYTE *v7; // r6
  __int64 *v8; // lr
  __int64 v9; // r0
  __int64 *v10; // r12
  __int64 v11; // r2
  __int64 v12; // t1
  __int64 v13; // t1
  _DWORD *v14; // r12
  int v15; // r2
  int v16; // r3
  int v17; // r9
  int v18; // r8
  int v19; // r5
  int v20; // r2
  int v21; // r7
  char *v22; // r4
  int v23; // r6
  unsigned __int64 v24; // r10
  int v25; // r12
  int v26; // r0
  int v27; // r3
  int *v28; // lr
  _DWORD *v29; // r2
  int v30; // t1
  int v31; // r1
  int v32; // r1
  _BYTE *v33; // r3
  unsigned int v34; // r2
  __int64 *v35; // r8
  unsigned int result; // r0
  int v37; // t1
  int v38; // [sp+2Ch] [bp-230h]
  int v39; // [sp+30h] [bp-22Ch]
  int v40; // [sp+34h] [bp-228h]
  int v41; // [sp+38h] [bp-224h]
  int v42; // [sp+3Ch] [bp-220h]
  int v43; // [sp+40h] [bp-21Ch]
  int v44; // [sp+44h] [bp-218h]
  __int64 v45; // [sp+48h] [bp-214h]
  __int64 v46; // [sp+50h] [bp-20Ch]
  unsigned __int64 v47; // [sp+58h] [bp-204h]
  __int64 v48; // [sp+60h] [bp-1FCh]
  __int64 v49; // [sp+68h] [bp-1F4h]
  __int64 v50; // [sp+70h] [bp-1ECh]
  __int64 v51; // [sp+78h] [bp-1E4h]
  __int64 v52; // [sp+80h] [bp-1DCh]
  __int64 v53; // [sp+88h] [bp-1D4h]
  __int64 v54; // [sp+90h] [bp-1CCh]
  __int64 v55; // [sp+98h] [bp-1C4h]
  __int64 v56; // [sp+A0h] [bp-1BCh]
  unsigned __int64 v57; // [sp+A8h] [bp-1B4h]
  __int64 v58; // [sp+B0h] [bp-1ACh]
  unsigned __int64 v59; // [sp+B8h] [bp-1A4h]
  int v60; // [sp+C0h] [bp-19Ch]
  int v61; // [sp+C4h] [bp-198h]
  _DWORD *v62; // [sp+C8h] [bp-194h]
  __int64 v64; // [sp+D8h] [bp-184h] BYREF
  __int64 v65; // [sp+E0h] [bp-17Ch]
  unsigned __int64 v66; // [sp+E8h] [bp-174h]
  unsigned __int64 v67; // [sp+F0h] [bp-16Ch]
  unsigned __int64 v68; // [sp+F8h] [bp-164h]
  __int64 v69; // [sp+100h] [bp-15Ch]
  unsigned __int64 v70; // [sp+108h] [bp-154h]
  __int64 v71; // [sp+110h] [bp-14Ch] BYREF
  _BYTE s[64]; // [sp+118h] [bp-144h] BYREF
  _DWORD v73[65]; // [sp+158h] [bp-104h] BYREF

  memset(s, 0, sizeof(s));
  v65 = 0x5D11A8C3B5AEB12ELL;
  v3 = a2 - 1;
  v66 = 0xA64AB78DC2774652LL;
  v4 = s;
  v67 = 0xC67595724658F253LL;
  v5 = (char *)&v71 + 7;
  v68 = 0xB8864E79CB891E56LL;
  v69 = 0x12ED593E29FB41A1LL;
  v70 = 0xB1DA3AB63C60BAA8LL;
  v71 = 0x6D20E50C1F954DEDLL;
  v64 = 0x4BBF42C1F107AD85LL;
  do
  {
    v6 = *(_BYTE *)++v3;
    *++v5 = v6;
  }
  while ( &s[63] != v5 );
  v7 = &s[56];
  memset(v73, 0, 256);
  v8 = (__int64 *)&unk_14BEF0;
  v9 = 0x4BBF42C1F006AD9DLL;
  v10 = &v64;
  v11 = 0x4BBF42C1F107AD85LL;
  while ( 1 )
  {
    *((_QWORD *)v7 + 1) = v11;
    v7 += 8;
    *((_QWORD *)v7 + 8) = v9;
    if ( &v73[14] == (_DWORD *)v7 )
      break;
    v12 = v10[1];
    ++v10;
    v11 = v12;
    v13 = *v8++;
    v9 = v13;
  }
  v14 = &v73[30];
  v62 = v7;
  v73[24] ^= 0x40u;
  v73[28] = ~v73[28];
  v73[29] = ~v73[29];
  do
  {
    v15 = (unsigned __int8)v4[6];
    v4 += 8;
    v16 = (v15 << 16)
        ^ ((unsigned __int8)*(v4 - 1) << 24)
        ^ ((unsigned __int8)*(v4 - 3) << 8)
        ^ (unsigned __int8)*(v4 - 4);
    v14[2] = (unsigned __int8)*(v4 - 8)
           ^ ((unsigned __int8)*(v4 - 5) << 24)
           ^ ((unsigned __int8)*(v4 - 6) << 16)
           ^ ((unsigned __int8)*(v4 - 7) << 8);
    v14 += 2;
    v14[1] = v16;
  }
  while ( v73 != (_DWORD *)v4 );
  v17 = 4;
  v54 = 0x98A7B5496226F800LL;
  v18 = 6;
  v19 = 12;
  v59 = 0xD859E6F081AAE000LL;
  v38 = 14;
  v53 = 0x531655D90C59EB1BLL;
  v40 = 16;
  v58 = 0x63D980597B560E6BLL;
  v52 = 0xD1A00BA6DAE5B800LL;
  v39 = 18;
  v51 = 0x4606AD364DC879DDLL;
  v42 = 20;
  v41 = 22;
  v50 = 0xBBA055B53D47C800LL;
  v57 = 0xBAFCD004F92CA000LL;
  v61 = 24;
  v49 = 0x4F452FEC309911EBLL;
  v43 = 26;
  v48 = 0x3CFCC66F74E1022CLL;
  v60 = 28;
  v56 = 0x64A39957839525E7LL;
  v47 = 0xA47B39A2AE9F9000LL;
  v45 = 0xD35B2E0E0B723800LL;
  v55 = 0x2FE452DA9632463ELL;
  v20 = 2;
  v46 = 0xC0EFA33E77E6488LL;
  v21 = 8;
  v22 = (char *)&unk_14BF38;
  v23 = 10;
  v24 = 0xA51B6A89D489E800LL;
  v25 = 0;
  v44 = 30;
  while ( 1 )
  {
    v22 += 16;
    sub_EA110((int)v73, 0, 4, 8, 12, *(_QWORD *)&v73[v20 + 32], v73[v25 + 32], v73[v25 + 33], v45, v24, HIDWORD(v24));
    sub_EA110((int)v73, 1, 5, 9, 13, *(_QWORD *)&v73[v18 + 32], v73[v17 + 32], v73[v17 + 33], v46, v47, HIDWORD(v47));
    sub_EA110((int)v73, 2, 6, 10, 14, *(_QWORD *)&v73[v23 + 32], v73[v21 + 32], v73[v21 + 33], v48, v49, HIDWORD(v49));
    sub_EA110((int)v73, 3, 7, 11, 15, *(_QWORD *)&v73[v38 + 32], v73[v19 + 32], v73[v19 + 33], v50, v51, HIDWORD(v51));
    sub_EA110((int)v73, 0, 5, 10, 15, *(_QWORD *)&v73[v39 + 32], v73[v40 + 32], v73[v40 + 33], v52, v53, HIDWORD(v53));
    sub_EA110((int)v73, 1, 6, 11, 12, *(_QWORD *)&v73[v41 + 32], v73[v42 + 32], v73[v42 + 33], v54, v55, HIDWORD(v55));
    sub_EA110((int)v73, 2, 7, 8, 13, *(_QWORD *)&v73[v43 + 32], v73[v61 + 32], v73[v61 + 33], v56, v57, HIDWORD(v57));
    sub_EA110((int)v73, 3, 4, 9, 14, *(_QWORD *)&v73[v44 + 32], v73[v60 + 32], v73[v60 + 33], v58, v59, HIDWORD(v59));
    if ( &unk_14C038 == (_UNKNOWN *)v22 )
      break;
    v38 = 2 * (unsigned __int8)*(v22 - 9);
    v20 = 2 * (unsigned __int8)*(v22 - 15);
    v40 = 2 * (unsigned __int8)*(v22 - 8);
    v18 = 2 * (unsigned __int8)*(v22 - 13);
    v42 = 2 * (unsigned __int8)*(v22 - 6);
    v41 = 2 * (unsigned __int8)*(v22 - 5);
    v43 = 2 * (unsigned __int8)*(v22 - 3);
    v17 = 2 * (unsigned __int8)*(v22 - 14);
    v39 = 2 * (unsigned __int8)*(v22 - 7);
    v45 = *(_QWORD *)((char *)&unk_14C028 + v20 * 4);
    v25 = 2 * (unsigned __int8)*(v22 - 16);
    v23 = 2 * (unsigned __int8)*(v22 - 11);
    v46 = *(_QWORD *)((char *)&unk_14C028 + v18 * 4);
    v44 = 2 * (unsigned __int8)*(v22 - 1);
    v21 = 2 * (unsigned __int8)*(v22 - 12);
    v60 = 2 * (unsigned __int8)*(v22 - 2);
    v19 = 2 * (unsigned __int8)*(v22 - 10);
    v61 = 2 * (unsigned __int8)*(v22 - 4);
    v24 = *(_QWORD *)((char *)&unk_14C028 + v25 * 4);
    v47 = *(_QWORD *)((char *)&unk_14C028 + v17 * 4);
    v48 = *(_QWORD *)((char *)&unk_14C028 + v23 * 4);
    v49 = *(_QWORD *)((char *)&unk_14C028 + v21 * 4);
    v50 = *(_QWORD *)((char *)&unk_14C028 + v38 * 4);
    v51 = *(_QWORD *)((char *)&unk_14C028 + v19 * 4);
    v52 = *(_QWORD *)((char *)&unk_14C028 + v39 * 4);
    v53 = *(_QWORD *)((char *)&unk_14C028 + v40 * 4);
    v54 = *(_QWORD *)((char *)&unk_14C028 + v41 * 4);
    v55 = *(_QWORD *)((char *)&unk_14C028 + v42 * 4);
    v56 = *(_QWORD *)((char *)&unk_14C028 + v43 * 4);
    v57 = *(_QWORD *)((char *)&unk_14C028 + v61 * 4);
    v58 = *(_QWORD *)((char *)&unk_14C028 + v44 * 4);
    v59 = *(_QWORD *)((char *)&unk_14C028 + v60 * 4);
  }
  v26 = -251155067;
  v27 = 1270825665;
  v28 = (int *)&v64;
  v29 = &s[56];
  while ( 1 )
  {
    v30 = v29[2];
    v29 += 2;
    v28 += 2;
    v31 = v29[1] ^ v29[17];
    *(v28 - 2) = v26 ^ v30 ^ v29[16];
    *(v28 - 1) = v27 ^ v31;
    if ( v62 == v29 )
      break;
    v26 = *v28;
    v27 = v28[1];
  }
  v32 = v64 ^ v67 ^ v70;
  v33 = a1;
  v34 = HIDWORD(v64) ^ HIDWORD(v67) ^ HIDWORD(v70);
  v35 = &v64;
  v65 ^= v68 ^ v71;
  v64 ^= v67 ^ v70;
  v66 ^= v69;
  while ( 1 )
  {
    result = HIBYTE(v34);
    *v33 = v32;
    v33[4] = v34;
    v33 += 8;
    *(v33 - 7) = BYTE1(v32);
    *(v33 - 6) = BYTE2(v32);
    *(v33 - 5) = HIBYTE(v32);
    *(v33 - 3) = BYTE1(v34);
    *(v33 - 2) = BYTE2(v34);
    *(v33 - 1) = HIBYTE(v34);
    if ( a1 + 24 == v33 )
      break;
    v37 = *((_DWORD *)v35++ + 2);
    v32 = v37;
    v34 = *((_DWORD *)v35 + 1);
  }
  return result;
}
