int __fastcall sub_4837C(int a1, int *a2, int a3)
{
  size_t v5; // r6
  int v6; // r6
  int v7; // r6
  _DWORD *v8; // lr
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r7
  char *v16; // r2
  int *v17; // r1
  unsigned int v18; // t1
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // r1
  int v23; // r2
  int v24; // r3
  int v26; // r1
  int v27; // r2
  int v28; // r3
  int v29; // r12
  int v30; // r1
  int v31; // r3
  size_t v32; // r2
  int v33; // [sp+0h] [bp-84h] BYREF
  int v34; // [sp+4h] [bp-80h]
  int v35; // [sp+8h] [bp-7Ch]
  int v36; // [sp+Ch] [bp-78h]
  int v37; // [sp+10h] [bp-74h]
  int v38; // [sp+14h] [bp-70h]
  int v39; // [sp+18h] [bp-6Ch]
  int v40; // [sp+1Ch] [bp-68h]
  char v41[28]; // [sp+20h] [bp-64h] BYREF
  char v42; // [sp+3Ch] [bp-48h] BYREF
  int v43; // [sp+40h] [bp-44h] BYREF
  int v44; // [sp+44h] [bp-40h]
  int v45; // [sp+48h] [bp-3Ch]
  int v46; // [sp+4Ch] [bp-38h]
  int v47; // [sp+50h] [bp-34h]
  int v48; // [sp+54h] [bp-30h]
  int v49; // [sp+58h] [bp-2Ch]
  _DWORD v50[10]; // [sp+5Ch] [bp-28h] BYREF

  v5 = *(_DWORD *)(a1 + 1156);
  if ( a3 && *((_BYTE *)a2 + 436) )
    *(_QWORD *)&dword_166260 = 0;
  memset(*(void **)(a1 + 1160), 0, v5);
  if ( v5 )
  {
    if ( v5 >= 8 )
      v32 = 8;
    else
      v32 = v5;
    memcpy(*(void **)(a1 + 1160), &dword_166260, v32);
    ++*(_QWORD *)&dword_166260;
  }
  memcpy((void *)(a2[73] + a2[21]), *(const void **)(a1 + 1160), *(_DWORD *)(a1 + 1156));
  sha256((char *)a2[73], a2[72], &v43);
  sha256((char *)&v43, 0x20u, &v33);
  v6 = a2[79];
  v43 = v33;
  v44 = v34;
  v45 = v35;
  v46 = v36;
  v47 = v37;
  v48 = v38;
  v49 = v39;
  v50[0] = v40;
  if ( v6 > 0 )
  {
    v7 = 0;
    do
    {
      v8 = *(_DWORD **)(a2[80] + 4 * v7++);
      v9 = v8[1];
      v10 = v8[2];
      v11 = v8[3];
      v50[1] = *v8;
      v50[2] = v9;
      v50[3] = v10;
      v50[4] = v11;
      v12 = v8[5];
      v13 = v8[6];
      v14 = v8[7];
      v50[5] = v8[4];
      v50[6] = v12;
      v50[7] = v13;
      v50[8] = v14;
      sha256((char *)&v43, 0x40u, v41);
      sha256(v41, 0x20u, &v33);
      v15 = a2[79];
      v43 = v33;
      v44 = v34;
      v45 = v35;
      v46 = v36;
      v47 = v37;
      v48 = v38;
      v49 = v39;
      v50[0] = v40;
    }
    while ( v15 > v7 );
  }
  v16 = &v42;
  v17 = &v33 - 1;
  do
  {
    v18 = *((_DWORD *)v16 + 1);
    v16 += 4;
    v17[1] = bswap32(v18);
    ++v17;
  }
  while ( v50 != (_DWORD *)v16 );
  memcpy((void *)(a1 + 8), a2 + 114, 0x50u);
  v19 = v34;
  v20 = v35;
  v21 = v36;
  *(_DWORD *)(a1 + 44) = v33;
  *(_DWORD *)(a1 + 48) = v19;
  *(_DWORD *)(a1 + 52) = v20;
  *(_DWORD *)(a1 + 56) = v21;
  v22 = v38;
  v23 = v39;
  v24 = v40;
  *(_DWORD *)(a1 + 60) = v37;
  *(_DWORD *)(a1 + 64) = v22;
  *(_DWORD *)(a1 + 68) = v23;
  *(_DWORD *)(a1 + 72) = v24;
  v26 = a2[371];
  v27 = a2[372];
  v28 = a2[373];
  *(_DWORD *)(a1 + 1032) = a2[370];
  *(_DWORD *)(a1 + 1036) = v26;
  *(_DWORD *)(a1 + 1040) = v27;
  *(_DWORD *)(a1 + 1044) = v28;
  v29 = a2[374];
  v30 = a2[375];
  v31 = a2[377];
  *(_DWORD *)(a1 + 1056) = a2[376];
  *(_DWORD *)(a1 + 1048) = v29;
  *(_DWORD *)(a1 + 1052) = v30;
  *(_DWORD *)(a1 + 1060) = v31;
  *(_DWORD *)(a1 + 1240) = a2[87];
  *(_QWORD *)a1 = *a2;
  return 0;
}
