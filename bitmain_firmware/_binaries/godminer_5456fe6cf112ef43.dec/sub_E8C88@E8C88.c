int __fastcall sub_E8C88(
        int result,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        unsigned int a10,
        unsigned int a11)
{
  int v11; // lr
  int v12; // r4
  __int64 v13; // kr18_8
  unsigned int *v14; // r11
  unsigned int v15; // r3
  unsigned int v16; // r1
  unsigned __int64 v17; // kr20_8
  unsigned int v18; // r1
  unsigned int v19; // r3
  __int64 v20; // r6
  unsigned int v21; // r12
  unsigned __int64 v22; // kr30_8
  int v23; // lr
  unsigned int v24; // r1
  unsigned int v25; // r3
  unsigned __int64 v26; // kr38_8
  unsigned int v27; // r8
  unsigned int v28; // r10
  int v29; // r12
  unsigned int v30; // r5
  int v31; // r4
  unsigned int v32; // r3
  int v33; // r11
  int v34; // r2
  int v35; // r1
  int v36; // r5
  int v37; // r4
  int v38; // r1
  int v39; // [sp+0h] [bp-14h]
  int v42; // [sp+Ch] [bp-8h]

  v11 = 8 * a2;
  v12 = 8 * a4;
  v13 = (a9 ^ a6) + *(_QWORD *)(result + 8 * a3) + *(_QWORD *)(result + 8 * a2);
  *(_QWORD *)(result + v11) = v13;
  v14 = (unsigned int *)(result + 8 * a3);
  v39 = result + 8 * a5;
  v15 = (v13 ^ *(_QWORD *)v39) >> 28;
  v16 = (16 * (v13 ^ *(_DWORD *)v39)) | ((unsigned int)(HIDWORD(v13) ^ *(_DWORD *)(v39 + 4)) >> 28);
  *(_DWORD *)v39 = v16;
  *(_DWORD *)(v39 + 4) = v15;
  v17 = __PAIR64__(v15, v16) + *(_QWORD *)(result + v12);
  *(_QWORD *)(result + v12) = v17;
  v18 = (__int64)(v17 ^ *(_QWORD *)v14) >> 11;
  v19 = (((unsigned int)v17 ^ *v14) << 21) | ((HIDWORD(v17) ^ v14[1]) >> 11);
  *v14 = v19;
  LODWORD(v20) = a7 ^ a10;
  v14[1] = v18;
  HIDWORD(v20) = *(_DWORD *)(result + v11 + 4);
  v21 = (v20 + __PAIR64__(a8 ^ a11, *(_DWORD *)(result + v11))) >> 32;
  LODWORD(v20) = result + v11;
  v22 = __PAIR64__(v21, (a7 ^ a10) + *(_DWORD *)(result + v11)) + __PAIR64__(v18, v19);
  *(_QWORD *)(result + v11) = __PAIR64__(v21, (a7 ^ a10) + *(_DWORD *)(result + v11)) + __PAIR64__(v18, v19);
  v23 = result + v12;
  v24 = (__int64)(v22 ^ *(_QWORD *)v39) >> 5;
  v25 = ((unsigned int)(HIDWORD(v22) ^ *(_DWORD *)(v39 + 4)) >> 5) | (((unsigned int)v22 ^ *(_DWORD *)v39) << 27);
  *(_DWORD *)v39 = v24;
  *(_DWORD *)(v39 + 4) = v25;
  v26 = __PAIR64__(v25, v24) + *(_QWORD *)(result + v12);
  *(_QWORD *)(result + v12) = v26;
  v27 = ((HIDWORD(v26) ^ v14[1]) >> 18) | (((unsigned int)v26 ^ *v14) << 14);
  v28 = (__int64)(v26 ^ *(_QWORD *)v14) >> 18;
  *v14 = v28;
  v14[1] = v27;
  v29 = *(_DWORD *)v39
      ^ (~(*(_DWORD *)(result + 8 * a2) | *(_DWORD *)(result + 8 * a4) | v28)
       | *(_DWORD *)(result + 8 * a2) & *(_DWORD *)(result + 8 * a4) & ~v28
       | (*(_DWORD *)(result + 8 * a2) ^ *(_DWORD *)(result + 8 * a4)) & v28);
  v42 = (~(*(_DWORD *)(v20 + 4) | *(_DWORD *)(v23 + 4) | v27)
       | *(_DWORD *)(v20 + 4) & *(_DWORD *)(v23 + 4) & ~v27
       | (*(_DWORD *)(v20 + 4) ^ *(_DWORD *)(v23 + 4)) & v27)
      ^ *(_DWORD *)(v39 + 4);
  *(_DWORD *)v39 = v29;
  *(_DWORD *)(v39 + 4) = v42;
  HIDWORD(v20) = *(_DWORD *)(result + 8 * a2);
  v30 = *v14;
  v31 = *(_DWORD *)(result + 8 * a4);
  v32 = v14[1];
  v33 = *v14 & ~HIDWORD(v20);
  v34 = v30 | v31;
  v35 = (HIDWORD(v20) | v30) ^ v33;
  v36 = v30 & v31;
  v37 = v31 & ~v35;
  v38 = v42
      ^ (*(_DWORD *)(v20 + 4) & (~(v32 | *(_DWORD *)(v23 + 4)) | v32 & *(_DWORD *)(v23 + 4))
       | *(_DWORD *)(v23 + 4)
       & ~((*(_DWORD *)(v20 + 4) | v32) ^ v32 & ~*(_DWORD *)(v20 + 4))
       ^ v32
       & ~*(_DWORD *)(v20 + 4));
  *(_DWORD *)v39 = v29 ^ ((~v34 | v36) & HIDWORD(v20) | v37 ^ v33);
  *(_DWORD *)(v39 + 4) = v38;
  return result;
}
