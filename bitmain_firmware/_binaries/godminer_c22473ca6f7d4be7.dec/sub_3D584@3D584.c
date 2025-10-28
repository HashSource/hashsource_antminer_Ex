int __fastcall sub_3D584(int a1, pthread_mutex_t *a2)
{
  pthread_mutex_t *v2; // r7
  _QWORD *v5; // r8
  char *v6; // r5
  size_t owner; // r2
  void *v8; // r0
  unsigned int nusers; // r3
  int spins; // r12
  int v11; // lr
  size_t lock; // r1
  char *count; // r0
  signed int v14; // r5
  signed int v15; // r5
  _DWORD *v16; // lr
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r1
  int v21; // r2
  int v22; // r3
  signed int v23; // r9
  char *v24; // r2
  unsigned int *v25; // r1
  unsigned int v26; // t1
  int v27; // r1
  int v28; // r2
  int v29; // r3
  int v30; // r1
  int v31; // r2
  int v32; // r3
  void *v33; // r0
  unsigned int v34; // r3
  unsigned int v36; // [sp+4h] [bp-88h] BYREF
  int v37; // [sp+8h] [bp-84h] BYREF
  int v38; // [sp+Ch] [bp-80h]
  int v39; // [sp+10h] [bp-7Ch]
  int v40; // [sp+14h] [bp-78h]
  int v41; // [sp+18h] [bp-74h]
  int v42; // [sp+1Ch] [bp-70h]
  int v43; // [sp+20h] [bp-6Ch]
  int v44; // [sp+24h] [bp-68h]
  char v45[28]; // [sp+28h] [bp-64h] BYREF
  char v46; // [sp+44h] [bp-48h] BYREF
  int v47; // [sp+48h] [bp-44h] BYREF
  int v48; // [sp+4Ch] [bp-40h]
  int v49; // [sp+50h] [bp-3Ch]
  int v50; // [sp+54h] [bp-38h]
  int v51; // [sp+58h] [bp-34h]
  int v52; // [sp+5Ch] [bp-30h]
  int v53; // [sp+60h] [bp-2Ch]
  _DWORD v54[10]; // [sp+64h] [bp-28h] BYREF

  v2 = a2 + 73;
  v5 = (_QWORD *)(a1 + 1264);
  v6 = &a2[12].__size[16];
  pthread_mutex_lock(a2 + 73);
  owner = a2[3].__owner;
  v8 = (void *)(a2[12].__count + a2[13].__lock);
  v36 = bswap32(a2[12].__nusers);
  memcpy(v8, v6, owner);
  nusers = a2[12].__nusers;
  spins = a2[12].__spins;
  v11 = a2[3].__owner;
  lock = a2[12].__lock;
  a2[12].__nusers = nusers + 1;
  a2[12].__spins = __CFADD__(nusers, 1) + spins;
  count = (char *)a2[12].__count;
  *((_DWORD *)v5 - 2) = nusers;
  *((_DWORD *)v5 - 1) = spins;
  *(_DWORD *)(a1 + 1156) = v11;
  sha256(count, lock, &v47);
  sha256((char *)&v47, 0x20u, &v37);
  v14 = a2[13].__count;
  v47 = v37;
  v48 = v38;
  v49 = v39;
  v50 = v40;
  v51 = v41;
  v52 = v42;
  v53 = v43;
  v54[0] = v44;
  if ( v14 > 0 )
  {
    v15 = 0;
    do
    {
      v16 = *(_DWORD **)(a2[13].__owner + 4 * v15++);
      v17 = v16[1];
      v18 = v16[2];
      v19 = v16[3];
      v54[1] = *v16;
      v54[2] = v17;
      v54[3] = v18;
      v54[4] = v19;
      v20 = v16[5];
      v21 = v16[6];
      v22 = v16[7];
      v54[5] = v16[4];
      v54[6] = v20;
      v54[7] = v21;
      v54[8] = v22;
      sha256((char *)&v47, 0x40u, v45);
      sha256(v45, 0x20u, &v37);
      v23 = a2[13].__count;
      v47 = v37;
      v48 = v38;
      v49 = v39;
      v50 = v40;
      v51 = v41;
      v52 = v42;
      v53 = v43;
      v54[0] = v44;
    }
    while ( v23 > v15 );
  }
  v24 = &v46;
  v25 = &v36;
  do
  {
    v26 = *((_DWORD *)v24 + 1);
    v24 += 4;
    v25[1] = bswap32(v26);
    ++v25;
  }
  while ( v24 != (char *)v54 );
  memcpy((void *)(a1 + 8), &a2[6].__align + 4, 0x80u);
  v27 = v38;
  v28 = v39;
  v29 = v40;
  *(_DWORD *)(a1 + 44) = v37;
  *(_DWORD *)(a1 + 48) = v27;
  *(_DWORD *)(a1 + 52) = v28;
  *(_DWORD *)(a1 + 56) = v29;
  v30 = v42;
  v31 = v43;
  v32 = v44;
  *(_DWORD *)(a1 + 60) = v41;
  v33 = *(void **)(a1 + 1152);
  *(_DWORD *)(a1 + 64) = v30;
  *(_DWORD *)(a1 + 68) = v31;
  *(_DWORD *)(a1 + 72) = v32;
  *v5 = *((_QWORD *)&a2[18].__align + 1);
  if ( v33 )
  {
    free(v33);
    *(_DWORD *)(a1 + 1152) = 0;
  }
  *(_DWORD *)(a1 + 1152) = _strdup((const char *)a2[66].__nusers);
  v34 = a2[14].__nusers;
  *(_DWORD *)(a1 + 1276) = a2[14].__kind;
  *(_DWORD *)(a1 + 1280) = v34;
  *(_QWORD *)a1 = a2->__lock;
  pthread_mutex_unlock(v2);
  return 0;
}
