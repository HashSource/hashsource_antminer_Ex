int __fastcall packet_2_nonce_ae(int a1, unsigned __int8 *a2, int a3, _BYTE *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  unsigned int v7; // r4
  int v12; // r0
  int v13; // r8
  __int16 v14; // r7
  int v15; // r11
  int v16; // r1
  size_t v17; // r7
  _WORD *v18; // r10
  unsigned int v19; // r7
  bool v20; // zf
  unsigned int v21; // lr
  int v22; // r7
  int v23; // r12
  unsigned __int8 *v24; // r4
  int v25; // r3
  int v26; // r2
  int v27; // r5
  int v28; // r0
  int v29; // r1
  int v30; // r5
  int *v31; // r11
  _DWORD *v32; // r8
  int v33; // r3
  unsigned int v34; // r7
  int v35; // r0
  int v36; // lr
  int v37; // r1
  int v38; // r2
  int v39; // r5
  int v40; // lr
  int v41; // r1
  int v42; // r0
  int v44; // [sp+18h] [bp-100Ch]
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
      v17 = (unsigned __int16)(v14 - 10);
      v16 = 10;
      *(_DWORD *)(v13 + 4 * (v15 + 1408)) = (a2[7] << 16) + (a2[8] << 8) + a2[9] + (a2[6] << 24);
    }
    else
    {
      v16 = 6;
      v17 = (unsigned __int16)(v14 - 6);
    }
    v18 = (_WORD *)(v13 + 2 * (__int16)v15 + 7168);
    v44 = 720 * v15 + 21760;
    memcpy((void *)(v13 + (unsigned __int16)*v18 + v44), &a2[v16], v17);
    v19 = (unsigned __int16)(v17 + *v18);
    *v18 = v19;
    if ( a2[4] == a2[5] )
    {
      v21 = v19 >> 2;
      v20 = v19 >> 2 == 0;
      *(_WORD *)(a3 + 85) = v19;
      v22 = v13 + 4 * (__int16)v15 + 4096;
      *(_DWORD *)(a3 + 81) = *(_DWORD *)(v13 + 4 * (__int16)v15 + 5632);
      if ( !v20 )
      {
        v23 = 0;
        v24 = (unsigned __int8 *)(v13 + 720 * v15 + 21761);
        do
        {
          v25 = *v24;
          v26 = a3 + 4 * v23;
          v27 = v24[1];
          ++v23;
          v28 = v24[2];
          v29 = *(v24 - 1);
          v24 += 4;
          *(_DWORD *)(v26 + 87) = (v25 << 16) + (v27 << 8) + v28 + (v29 << 24);
        }
        while ( v23 != v21 );
      }
      *v18 = 0;
      v30 = 32 * (v15 + 32);
      memset((void *)(v13 + v44), 0, 0x2D0u);
      *(_BYTE *)(a3 + 48) = v15;
      v31 = (int *)(v13 + 8 * v15);
      strcpy((char *)(a3 + 49), (const char *)(v13 + v30));
      v32 = (_DWORD *)(v13 + v30 + 6400);
      v33 = *v31;
      *(_DWORD *)(a3 + 4) = v31[1];
      *(_DWORD *)a3 = v33;
      *a7 = v33;
      v34 = *(_DWORD *)(v22 + 1536);
      v35 = sub_12DE60(HIBYTE(v34));
      *(_DWORD *)(a3 + 12) = v34 & 1;
      *(_DWORD *)(a3 + 8) = v35;
      v36 = v32[1];
      v37 = v32[2];
      v38 = v32[3];
      *(_DWORD *)(a3 + 16) = *v32;
      *(_DWORD *)(a3 + 20) = v36;
      *(_DWORD *)(a3 + 24) = v37;
      *(_DWORD *)(a3 + 28) = v38;
      v39 = v32[4];
      v40 = v32[5];
      v41 = v32[6];
      *(_DWORD *)(a3 + 44) = v32[7];
      *(_DWORD *)(a3 + 32) = v39;
      *(_DWORD *)(a3 + 36) = v40;
      *(_DWORD *)(a3 + 40) = v41;
      *a6 = v35;
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
    V_LOCK(v12);
    v42 = logfmt_raw((int)var1004, 0x1000u);
    V_UNLOCK(v42);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_ae/backend_ae.c",
      152,
      "packet_2_nonce_ae",
      17,
      184,
      20,
      var1004);
    return 2;
  }
}
