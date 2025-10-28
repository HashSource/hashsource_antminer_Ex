int __fastcall packet_2_nonce_ae(int a1, unsigned __int8 *a2, int a3, _BYTE *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  unsigned int v7; // r4
  unsigned int v12; // r7
  int v13; // r4
  int v14; // r8
  __int16 v15; // r7
  int v16; // r11
  int v17; // r1
  size_t v18; // r7
  _WORD *v19; // r10
  unsigned int v20; // r7
  bool v21; // zf
  unsigned int v22; // lr
  int v23; // r7
  int v24; // r12
  unsigned __int8 *v25; // r4
  int v26; // r3
  int v27; // r2
  int v28; // r5
  int v29; // r0
  int v30; // r1
  int v31; // r5
  int *v32; // r11
  _DWORD *v33; // r8
  int v34; // r3
  unsigned int v35; // r7
  int v36; // r0
  int v37; // lr
  int v38; // r1
  int v39; // r2
  int v40; // r5
  int v41; // lr
  int v42; // r1
  int v43; // r3
  _DWORD *v44; // r3
  int v45; // r1
  int v47; // [sp+18h] [bp-100Ch]
  char var1004[4128]; // [sp+20h] [bp-1004h] BYREF

  v7 = a2[2];
  if ( v7 <= 9 )
    return 1;
  v12 = BM_CRC16(a2 + 2, (unsigned __int8)(v7 - 2));
  v13 = (unsigned __int16)(a2[v7 + 1] + (a2[v7] << 8));
  if ( v12 == v13 )
  {
    v14 = *(_DWORD *)(a1 + 624);
    v15 = a2[2];
    v16 = a2[3];
    if ( a2[5] == 1 )
    {
      v18 = (unsigned __int16)(v15 - 10);
      v17 = 10;
      *(_DWORD *)(v14 + 4 * (v16 + 1408)) = (a2[7] << 16) + (a2[8] << 8) + a2[9] + (a2[6] << 24);
    }
    else
    {
      v17 = 6;
      v18 = (unsigned __int16)(v15 - 6);
    }
    v19 = (_WORD *)(v14 + 2 * (__int16)v16 + 7168);
    v47 = 720 * v16 + 21760;
    memcpy((void *)(v14 + (unsigned __int16)*v19 + v47), &a2[v17], v18);
    v20 = (unsigned __int16)(v18 + *v19);
    *v19 = v20;
    if ( a2[4] == a2[5] )
    {
      v22 = v20 >> 2;
      v21 = v20 >> 2 == 0;
      *(_WORD *)(a3 + 85) = v20;
      v23 = v14 + 4 * (__int16)v16 + 4096;
      *(_DWORD *)(a3 + 81) = *(_DWORD *)(v14 + 4 * (__int16)v16 + 5632);
      if ( !v21 )
      {
        v24 = 0;
        v25 = (unsigned __int8 *)(v14 + 720 * v16 + 21761);
        do
        {
          v26 = *v25;
          v27 = a3 + 4 * v24;
          v28 = v25[1];
          ++v24;
          v29 = v25[2];
          v30 = *(v25 - 1);
          v25 += 4;
          *(_DWORD *)(v27 + 87) = (v26 << 16) + (v28 << 8) + v29 + (v30 << 24);
        }
        while ( v24 != v22 );
      }
      *v19 = 0;
      v31 = 32 * (v16 + 32);
      memset((void *)(v14 + v47), 0, 0x2D0u);
      *(_BYTE *)(a3 + 48) = v16;
      v32 = (int *)(v14 + 8 * v16);
      strcpy((char *)(a3 + 49), (const char *)(v14 + v31));
      v33 = (_DWORD *)(v14 + v31 + 6400);
      v34 = *v32;
      *(_DWORD *)(a3 + 4) = v32[1];
      *(_DWORD *)a3 = v34;
      *a7 = v34;
      v35 = *(_DWORD *)(v23 + 1536);
      v36 = HIBYTE(v35) / *(_DWORD *)(a1 + 240);
      *(_DWORD *)(a3 + 12) = v35 & 1;
      *(_DWORD *)(a3 + 8) = v36;
      v37 = v33[1];
      v38 = v33[2];
      v39 = v33[3];
      *(_DWORD *)(a3 + 16) = *v33;
      *(_DWORD *)(a3 + 20) = v37;
      *(_DWORD *)(a3 + 24) = v38;
      *(_DWORD *)(a3 + 28) = v39;
      v40 = v33[4];
      v41 = v33[5];
      v42 = v33[6];
      *(_DWORD *)(a3 + 44) = v33[7];
      *(_DWORD *)(a3 + 32) = v40;
      *(_DWORD *)(a3 + 36) = v41;
      *(_DWORD *)(a3 + 40) = v42;
      *a6 = v36;
      *a5 = *(_DWORD *)(a3 + 81);
      *a4 = 0;
      return 0;
    }
    else
    {
      return 5;
    }
  }
  else
  {
    V_LOCK();
    LOWORD(v43) = 24672;
    HIWORD(v43) = (unsigned int)"d/godminer-origin_master/miner_util/miner_monitor/update_miner_status/update_chip_status.c" >> 16;
    logfmt_raw(var1004, 0x1000u, 0, v43, v12, v13);
    V_UNLOCK();
    LOWORD(v44) = -14512;
    HIWORD(v44) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v45) = 24724;
    HIWORD(v45) = (unsigned int)"date_miner_status/update_chip_status.c" >> 16;
    zlog(*v44, v45, 152, "packet_2_nonce_ae", 17, 184, 20, var1004);
    return 2;
  }
}
