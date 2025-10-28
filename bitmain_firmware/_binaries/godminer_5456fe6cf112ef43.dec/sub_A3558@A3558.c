int __fastcall sub_A3558(int a1, _BYTE *a2, int a3, _BYTE *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  int v11; // r0
  unsigned __int8 v12; // r8
  const void *v13; // r1
  int v14; // r3
  int v15; // r2
  int v16; // r12
  int v17; // lr
  int v18; // r6
  int *v19; // r5
  int v20; // t1
  int v21; // r11
  int v22; // r2
  int v23; // lr
  void *v24; // r6
  int v25; // r2
  unsigned __int8 *v26; // lr
  unsigned int v27; // r1
  int v28; // r11
  int v29; // r12
  int v30; // r0
  int v31; // r3
  int v32; // r3
  int v33; // lr
  int v34; // r0
  int v35; // r12
  int v36; // r2
  unsigned int v37; // r5
  int v38; // r2
  int v40; // r3
  int v41; // r0
  int v42; // [sp+14h] [bp-1008h]
  _BYTE v43[4100]; // [sp+18h] [bp-1004h] BYREF

  v11 = BM_CRC16(a2 + 2, 175);
  if ( v11 == ((unsigned __int8)a2[178] | ((unsigned __int8)a2[177] << 8)) )
  {
    v12 = a2[3];
    v13 = a2 + 9;
    v14 = *(_DWORD *)(a1 + 624);
    v15 = (unsigned __int8)a2[6];
    v16 = (unsigned __int8)a2[7];
    v17 = (unsigned __int8)a2[8];
    v18 = (unsigned __int8)a2[5];
    v19 = (int *)(v14 + 8 * v12);
    v42 = v14;
    v20 = v19[512];
    v21 = 168 * v12;
    v22 = (v15 << 16) + (v16 << 8) + v17 + (v18 << 24);
    v23 = v19[513];
    v24 = (void *)(v14 + v21 + 35584);
    v19[513] = v23;
    v19[512] = v22 | v20;
    *(_DWORD *)(a3 + 29) = v23;
    *(_DWORD *)(a3 + 25) = v22 | v20;
    memcpy(v24, v13, 0xA8u);
    v25 = 0;
    v26 = (unsigned __int8 *)(v42 + v21 + 35585);
    do
    {
      v27 = v25 & 0xFFFFFFFC;
      v28 = v26[1];
      v25 += 4;
      v29 = v26[2];
      v30 = *(v26 - 1);
      v31 = *v26 << 16;
      v26 += 4;
      *(_DWORD *)(a3 + v27 + 35) = v31 + (v28 << 8) + v29 + (v30 << 24);
    }
    while ( v25 != 168 );
    v32 = v19[513];
    v19[512] = 0;
    v19[513] = v32;
    memset(v24, 0, 0xA8u);
    *(_BYTE *)(a3 + 16) = v12;
    v33 = v19[256];
    v34 = *v19;
    v35 = v19[1];
    v36 = v19[257];
    *(_DWORD *)a3 = *v19;
    *(_DWORD *)(a3 + 17) = v33;
    *(_DWORD *)(a3 + 21) = v36;
    *(_DWORD *)(a3 + 4) = v35;
    *a7 = v34;
    v37 = *(_DWORD *)(a3 + 25);
    v38 = sub_12D53C(HIBYTE(v37), 0, *(_DWORD *)(a1 + 240), 0);
    *(_DWORD *)(a3 + 12) = v37 & 1;
    *(_DWORD *)(a3 + 8) = v38;
    *a6 = v38;
    v40 = *(_DWORD *)(a3 + 29);
    *a5 = *(_DWORD *)(a3 + 25);
    a5[1] = v40;
    *a4 = 0;
    return 0;
  }
  else
  {
    V_LOCK(v11);
    v41 = logfmt_raw((int)v43, 0x1000u);
    V_UNLOCK(v41);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_grin32/backend_grin32.c",
      160,
      "packet_2_nonce_grin32",
      21,
      167,
      20,
      v43);
    return 2;
  }
}
