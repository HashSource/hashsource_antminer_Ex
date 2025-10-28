int __fastcall sub_A3498(int a1, unsigned __int8 *a2, int a3, _BYTE *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  unsigned int v11; // r0
  int v12; // r6
  unsigned __int8 v13; // r8
  unsigned __int8 *v14; // r1
  int v15; // r3
  int v16; // r2
  int v17; // r12
  int v18; // lr
  int v19; // r6
  unsigned int *v20; // r5
  unsigned int v21; // t1
  int v22; // r11
  int v23; // r2
  unsigned int v24; // lr
  void *v25; // r6
  int v26; // r2
  unsigned __int8 *v27; // lr
  unsigned int v28; // r1
  int v29; // r11
  int v30; // r12
  int v31; // r0
  int v32; // r3
  unsigned int v33; // r3
  unsigned int v34; // lr
  unsigned __int64 v35; // r0
  unsigned int v36; // r12
  unsigned __int64 v37; // r2
  unsigned int v38; // r5
  int v39; // r2
  int v41; // r3
  unsigned int v42; // r8
  int v43; // [sp+14h] [bp-1008h]
  char v44[4100]; // [sp+18h] [bp-1004h] BYREF

  v11 = BM_CRC16(a2 + 2, 175);
  v12 = a2[178] | (a2[177] << 8);
  if ( v11 == v12 )
  {
    v13 = a2[3];
    v14 = a2 + 9;
    v15 = *(_DWORD *)(a1 + 624);
    v16 = a2[6];
    v17 = a2[7];
    v18 = a2[8];
    v19 = a2[5];
    v20 = (unsigned int *)(v15 + 8 * v13);
    v43 = v15;
    v21 = v20[512];
    v22 = 168 * v13;
    v23 = (v16 << 16) + (v17 << 8) + v18 + (v19 << 24);
    v24 = v20[513];
    v25 = (void *)(v15 + v22 + 35584);
    v20[513] = v24;
    v20[512] = v23 | v21;
    *(_DWORD *)(a3 + 29) = v24;
    *(_DWORD *)(a3 + 25) = v23 | v21;
    memcpy(v25, v14, 0xA8u);
    v26 = 0;
    v27 = (unsigned __int8 *)(v43 + v22 + 35585);
    do
    {
      v28 = v26 & 0xFFFFFFFC;
      v29 = v27[1];
      v26 += 4;
      v30 = v27[2];
      v31 = *(v27 - 1);
      v32 = *v27 << 16;
      v27 += 4;
      *(_DWORD *)(a3 + v28 + 35) = v32 + (v29 << 8) + v30 + (v31 << 24);
    }
    while ( v26 != 168 );
    v33 = v20[513];
    v20[512] = 0;
    v20[513] = v33;
    memset(v25, 0, 0xA8u);
    *(_BYTE *)(a3 + 16) = v13;
    v34 = v20[256];
    v35 = *v20;
    v36 = v20[1];
    v37 = v20[257];
    *(_DWORD *)a3 = *v20;
    *(_DWORD *)(a3 + 17) = v34;
    *(_DWORD *)(a3 + 21) = v37;
    *(_DWORD *)(a3 + 4) = v36;
    *a7 = v35;
    v38 = *(_DWORD *)(a3 + 25);
    LODWORD(v37) = *(_DWORD *)(a1 + 240);
    LODWORD(v35) = HIBYTE(v38);
    v39 = sub_12D3B4(v35, v37);
    *(_DWORD *)(a3 + 12) = v38 & 1;
    *(_DWORD *)(a3 + 8) = v39;
    *a6 = v39;
    v41 = *(_DWORD *)(a3 + 29);
    *a5 = *(_DWORD *)(a3 + 25);
    a5[1] = v41;
    *a4 = 0;
    return 0;
  }
  else
  {
    v42 = v11;
    V_LOCK();
    logfmt_raw(v44, 0x1000u, 0, "get nonce crc error calc value %04x resp value %04x", v42, v12);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_grin32/backend_grin32.c",
      160,
      "packet_2_nonce_grin32",
      21,
      167,
      20,
      v44);
    return 2;
  }
}
