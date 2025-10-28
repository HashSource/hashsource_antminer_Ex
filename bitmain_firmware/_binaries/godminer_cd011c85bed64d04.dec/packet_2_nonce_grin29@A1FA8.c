int __fastcall packet_2_nonce_grin29(int a1, unsigned __int8 *a2, int a3, _BYTE *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  unsigned int v7; // r5
  int v12; // r0
  int v13; // r8
  __int16 v14; // r7
  int v15; // r9
  size_t v16; // r7
  int v17; // r1
  unsigned __int16 *v18; // r5
  unsigned __int16 v19; // r7
  int v20; // r11
  int *v21; // r7
  int v22; // r3
  int v23; // lr
  unsigned __int8 *v24; // r0
  int v25; // r3
  int v26; // r2
  int v27; // r10
  int v28; // r12
  int v29; // r1
  int v30; // lr
  int v31; // r0
  int v32; // r12
  int v33; // r2
  unsigned int v34; // r5
  int v35; // r2
  int v36; // r3
  int v37; // r0
  int v38; // lr
  int v39; // r0
  int v41; // [sp+1Ch] [bp-1008h]
  _BYTE var1004[4128]; // [sp+20h] [bp-1004h] BYREF

  v7 = a2[2];
  if ( v7 <= 9 )
    return 1;
  v12 = BM_CRC16(a2 + 2, (unsigned __int8)(v7 - 2));
  if ( v12 == (unsigned __int16)(a2[v7 + 1] + (a2[v7] << 8)) )
  {
    v13 = *(_DWORD *)(a1 + 632);
    v14 = a2[2];
    v15 = a2[3];
    if ( a2[5] == 1 )
    {
      v37 = v13 + 8 * (__int16)v15;
      v16 = (unsigned __int16)(v14 - 10);
      v38 = *(_DWORD *)(v37 + 2052);
      v17 = 10;
      *(_DWORD *)(v37 + 2048) |= (a2[7] << 16) + (a2[8] << 8) + a2[9] + (a2[6] << 24);
      *(_DWORD *)(v37 + 2052) = v38;
    }
    else
    {
      v16 = (unsigned __int16)(v14 - 6);
      v17 = 6;
    }
    v18 = (unsigned __int16 *)(v13 + 2 * v15 + 4096);
    memcpy((void *)(v13 + *v18 + 720 * v15 + 35840), &a2[v17], v16);
    v19 = v16 + *v18;
    *v18 = v19;
    if ( a2[4] == a2[5] )
    {
      v20 = v19 >> 2;
      *(_WORD *)(a3 + 33) = v19;
      v21 = (int *)(v13 + 8 * v15);
      v22 = v21[513];
      *(_DWORD *)(a3 + 25) = v21[512];
      v41 = v22;
      *(_DWORD *)(a3 + 29) = v22;
      if ( v20 )
      {
        v23 = 0;
        v24 = (unsigned __int8 *)(v13 + 720 * v15 + 35841);
        do
        {
          v25 = *v24;
          v26 = a3 + 4 * v23;
          v27 = v24[1];
          ++v23;
          v28 = v24[2];
          v29 = *(v24 - 1);
          v24 += 4;
          *(_DWORD *)(v26 + 35) = (v25 << 16) + (v27 << 8) + v28 + (v29 << 24);
        }
        while ( v23 != v20 );
      }
      *v18 = 0;
      v21[512] = 0;
      v21[513] = v41;
      memset((void *)(v13 + 720 * v15 + 35840), 0, 0x2D0u);
      *(_BYTE *)(a3 + 16) = v15;
      v30 = v21[256];
      v31 = *v21;
      v32 = v21[1];
      v33 = v21[257];
      *(_DWORD *)a3 = *v21;
      *(_DWORD *)(a3 + 17) = v30;
      *(_DWORD *)(a3 + 21) = v33;
      *(_DWORD *)(a3 + 4) = v32;
      *a7 = v31;
      v34 = *(_DWORD *)(a3 + 25);
      v35 = sub_12E9C4(HIBYTE(v34), 0, *(_DWORD *)(a1 + 248), 0);
      *(_DWORD *)(a3 + 12) = v34 & 1;
      *(_DWORD *)(a3 + 8) = v35;
      *a6 = v35;
      v36 = *(_DWORD *)(a3 + 29);
      *a5 = *(_DWORD *)(a3 + 25);
      a5[1] = v36;
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
    V_LOCK(v12);
    v39 = logfmt_raw((int)var1004, 0x1000u);
    V_UNLOCK(v39);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_grin29/backend_grin29.c",
      160,
      "packet_2_nonce_grin29",
      21,
      189,
      20,
      var1004);
    return 2;
  }
}
