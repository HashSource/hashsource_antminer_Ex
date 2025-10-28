int __fastcall packet_2_nonce_grin29(int a1, unsigned __int8 *a2, int a3, _BYTE *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  unsigned int v7; // r5
  unsigned int v12; // r7
  int v13; // r5
  int v14; // r8
  __int16 v15; // r7
  int v16; // r9
  size_t v17; // r7
  int v18; // r1
  unsigned __int16 *v19; // r5
  unsigned __int16 v20; // r7
  int v21; // r11
  unsigned int *v22; // r7
  unsigned int v23; // r3
  int v24; // lr
  unsigned __int8 *v25; // r0
  int v26; // r3
  int v27; // r2
  int v28; // r10
  int v29; // r12
  int v30; // r1
  unsigned int v31; // lr
  unsigned __int64 v32; // r0
  unsigned int v33; // r12
  unsigned __int64 v34; // r2
  unsigned int v35; // r5
  int v36; // r2
  int v37; // r3
  int v38; // r0
  int v39; // lr
  int v40; // r3
  int *v41; // r3
  int v42; // r0
  int v43; // r1
  unsigned int v45; // [sp+1Ch] [bp-1008h]
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
      v38 = v14 + 8 * (__int16)v16;
      v17 = (unsigned __int16)(v15 - 10);
      v39 = *(_DWORD *)(v38 + 2052);
      v18 = 10;
      *(_DWORD *)(v38 + 2048) |= (a2[7] << 16) + (a2[8] << 8) + a2[9] + (a2[6] << 24);
      *(_DWORD *)(v38 + 2052) = v39;
    }
    else
    {
      v17 = (unsigned __int16)(v15 - 6);
      v18 = 6;
    }
    v19 = (unsigned __int16 *)(v14 + 2 * v16 + 4096);
    memcpy((void *)(v14 + *v19 + 720 * v16 + 35840), &a2[v18], v17);
    v20 = v17 + *v19;
    *v19 = v20;
    if ( a2[4] == a2[5] )
    {
      v21 = v20 >> 2;
      *(_WORD *)(a3 + 33) = v20;
      v22 = (unsigned int *)(v14 + 8 * v16);
      v23 = v22[513];
      *(_DWORD *)(a3 + 25) = v22[512];
      v45 = v23;
      *(_DWORD *)(a3 + 29) = v23;
      if ( v21 )
      {
        v24 = 0;
        v25 = (unsigned __int8 *)(v14 + 720 * v16 + 35841);
        do
        {
          v26 = *v25;
          v27 = a3 + 4 * v24;
          v28 = v25[1];
          ++v24;
          v29 = v25[2];
          v30 = *(v25 - 1);
          v25 += 4;
          *(_DWORD *)(v27 + 35) = (v26 << 16) + (v28 << 8) + v29 + (v30 << 24);
        }
        while ( v24 != v21 );
      }
      *v19 = 0;
      v22[512] = 0;
      v22[513] = v45;
      memset((void *)(v14 + 720 * v16 + 35840), 0, 0x2D0u);
      *(_BYTE *)(a3 + 16) = v16;
      v31 = v22[256];
      v32 = *v22;
      v33 = v22[1];
      v34 = v22[257];
      *(_DWORD *)a3 = *v22;
      *(_DWORD *)(a3 + 17) = v31;
      *(_DWORD *)(a3 + 21) = v34;
      *(_DWORD *)(a3 + 4) = v33;
      *a7 = v32;
      v35 = *(_DWORD *)(a3 + 25);
      LODWORD(v34) = *(_DWORD *)(a1 + 240);
      LODWORD(v32) = HIBYTE(v35);
      v36 = sub_12D3B4(v32, v34);
      *(_DWORD *)(a3 + 12) = v35 & 1;
      *(_DWORD *)(a3 + 8) = v36;
      *a6 = v36;
      v37 = *(_DWORD *)(a3 + 29);
      *a5 = *(_DWORD *)(a3 + 25);
      a5[1] = v37;
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
    LOWORD(v40) = 24672;
    HIWORD(v40) = (unsigned int)"d/godminer-origin_master/miner_util/miner_monitor/update_miner_status/update_chip_status.c" >> 16;
    logfmt_raw(var1004, 0x1000u, 0, v40, v12, v13);
    V_UNLOCK();
    LOWORD(v41) = -14512;
    HIWORD(v41) = (unsigned int)&unk_16B55C >> 16;
    v42 = *v41;
    LOWORD(v41) = -21728;
    LOWORD(v43) = -20480;
    HIWORD(v41) = (unsigned int)"2x core %02x reg 0x87 mac bist err cnt %08x" >> 16;
    HIWORD(v43) = (unsigned int)"02x addr %04x, %08x, cmn lock failed" >> 16;
    zlog(v42, v43, 160, v41, 21, 189, 20, var1004);
    return 2;
  }
}
