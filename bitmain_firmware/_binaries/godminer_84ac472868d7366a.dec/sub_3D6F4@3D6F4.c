int __fastcall sub_3D6F4(int a1, int *a2)
{
  pthread_mutex_t *v2; // r6
  const void *v5; // r7
  size_t v6; // r2
  void *v7; // r0
  int v8; // r3
  int v9; // r12
  int v10; // lr
  int v11; // r0
  size_t v12; // r1
  int v13; // r7
  int v14; // r7
  _DWORD *v15; // lr
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // r8
  char *v23; // r2
  unsigned int *v24; // r1
  unsigned int v25; // t1
  int v26; // r1
  int v27; // r2
  int v28; // r3
  int v29; // r1
  int v30; // r2
  int v31; // r3
  void *v32; // r0
  int v33; // r3
  unsigned int v35; // [sp+4h] [bp-88h] BYREF
  int v36; // [sp+8h] [bp-84h]
  int v37; // [sp+Ch] [bp-80h]
  int v38; // [sp+10h] [bp-7Ch]
  int v39; // [sp+14h] [bp-78h]
  int v40; // [sp+18h] [bp-74h]
  int v41; // [sp+1Ch] [bp-70h]
  int v42; // [sp+20h] [bp-6Ch]
  int v43; // [sp+24h] [bp-68h]
  char v44[28]; // [sp+28h] [bp-64h] BYREF
  char v45; // [sp+44h] [bp-48h] BYREF
  int v46; // [sp+48h] [bp-44h] BYREF
  int v47; // [sp+4Ch] [bp-40h]
  int v48; // [sp+50h] [bp-3Ch]
  int v49; // [sp+54h] [bp-38h]
  int v50; // [sp+58h] [bp-34h]
  int v51; // [sp+5Ch] [bp-30h]
  int v52; // [sp+60h] [bp-2Ch]
  _DWORD v53[10]; // [sp+64h] [bp-28h] BYREF

  v2 = (pthread_mutex_t *)(a2 + 440);
  v5 = a2 + 76;
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 440));
  v6 = a2[20];
  v7 = (void *)(a2[73] + a2[78]);
  v35 = bswap32(a2[76]);
  memcpy(v7, v5, v6);
  v8 = a2[76];
  v9 = a2[77];
  v10 = a2[20];
  v11 = a2[73];
  a2[76] = v8 + 1;
  a2[77] = __CFADD__(v8, 1) + v9;
  v12 = a2[72];
  *(_DWORD *)(a1 + 1264) = v8;
  *(_DWORD *)(a1 + 1268) = v9;
  *(_DWORD *)(a1 + 1156) = v10;
  sha256(v11, v12);
  sha256((int)&v46, 0x20u);
  v13 = a2[79];
  v46 = v36;
  v47 = v37;
  v48 = v38;
  v49 = v39;
  v50 = v40;
  v51 = v41;
  v52 = v42;
  v53[0] = v43;
  if ( v13 > 0 )
  {
    v14 = 0;
    do
    {
      v15 = *(_DWORD **)(a2[80] + 4 * v14++);
      v16 = v15[1];
      v17 = v15[2];
      v18 = v15[3];
      v53[1] = *v15;
      v53[2] = v16;
      v53[3] = v17;
      v53[4] = v18;
      v19 = v15[5];
      v20 = v15[6];
      v21 = v15[7];
      v53[5] = v15[4];
      v53[6] = v19;
      v53[7] = v20;
      v53[8] = v21;
      sha256((int)&v46, 0x40u);
      sha256((int)v44, 0x20u);
      v22 = a2[79];
      v46 = v36;
      v47 = v37;
      v48 = v38;
      v49 = v39;
      v50 = v40;
      v51 = v41;
      v52 = v42;
      v53[0] = v43;
    }
    while ( v22 > v14 );
  }
  v23 = &v45;
  v24 = &v35;
  do
  {
    v25 = *((_DWORD *)v23 + 1);
    v23 += 4;
    v24[1] = bswap32(v25);
    ++v24;
  }
  while ( v23 != (char *)v53 );
  memcpy((void *)(a1 + 8), a2 + 40, 0x80u);
  v26 = v37;
  v27 = v38;
  v28 = v39;
  *(_DWORD *)(a1 + 44) = v36;
  *(_DWORD *)(a1 + 48) = v26;
  *(_DWORD *)(a1 + 52) = v27;
  *(_DWORD *)(a1 + 56) = v28;
  v29 = v41;
  v30 = v42;
  v31 = v43;
  *(_DWORD *)(a1 + 60) = v40;
  v32 = *(void **)(a1 + 1152);
  *(_DWORD *)(a1 + 64) = v29;
  *(_DWORD *)(a1 + 68) = v30;
  *(_DWORD *)(a1 + 72) = v31;
  *(_QWORD *)(a1 + 1272) = *((_QWORD *)a2 + 55);
  if ( v32 )
  {
    free(v32);
    *(_DWORD *)(a1 + 1152) = 0;
  }
  *(_DWORD *)(a1 + 1152) = _strdup((const char *)a2[400]);
  v33 = a2[88];
  *(_DWORD *)(a1 + 1284) = a2[87];
  *(_DWORD *)(a1 + 1288) = v33;
  *(_QWORD *)a1 = *a2;
  pthread_mutex_unlock(v2);
  return 0;
}
