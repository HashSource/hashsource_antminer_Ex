int __fastcall sub_70FCC(int a1, int a2, int a3, _BYTE *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  int v10; // r0
  int v11; // r8
  int v12; // r12
  _DWORD *v13; // r3
  _DWORD *v14; // r2
  int *v15; // r12
  int v16; // r10
  int v17; // r9
  int v18; // r7
  int v19; // r10
  int v20; // r9
  int v21; // r7
  int v22; // r9
  int v23; // r7
  int v24; // r3
  int v25; // r3
  int v26; // r9
  int v27; // r7
  int v28; // r0
  int v29; // r7
  int v30; // r3
  int v31; // r9
  int v32; // r0
  int v33; // r3
  int v34; // r9
  int v35; // r0
  int v36; // r9
  int v37; // r2
  _DWORD *v38; // r10
  int v39; // lr
  int v40; // r2
  int v41; // r12
  int v42; // r5
  int v43; // r2
  int v45; // r3
  int v46; // r0
  _BYTE v48[4100]; // [sp+18h] [bp-1004h] BYREF

  v10 = BM_CRC16(a2 + 2, 39);
  if ( v10 == (*(unsigned __int8 *)(a2 + 42) | (*(unsigned __int8 *)(a2 + 41) << 8)) )
  {
    v11 = *(unsigned __int8 *)(a2 + 3);
    v12 = *(_DWORD *)(a1 + 784);
    v13 = (_DWORD *)(v12 + 40 * v11);
    v14 = (_DWORD *)(v12 + 32 * (v11 + 576));
    v15 = (int *)(v12 + 8 * v11);
    v13 += 2048;
    v16 = v13[1];
    v17 = v13[2];
    v18 = v13[3];
    *(_DWORD *)(a3 + 34) = *v13;
    *(_DWORD *)(a3 + 38) = v16;
    *(_DWORD *)(a3 + 42) = v17;
    *(_DWORD *)(a3 + 46) = v18;
    v19 = v13[5];
    v20 = v13[6];
    v21 = v13[7];
    *(_DWORD *)(a3 + 50) = v13[4];
    *(_DWORD *)(a3 + 54) = v19;
    *(_DWORD *)(a3 + 58) = v20;
    *(_DWORD *)(a3 + 62) = v21;
    v22 = v14[1];
    v23 = v14[2];
    v24 = v14[3];
    *(_DWORD *)(a3 + 66) = *v14;
    *(_DWORD *)(a3 + 70) = v22;
    *(_DWORD *)(a3 + 74) = v23;
    *(_DWORD *)(a3 + 78) = v24;
    v25 = v14[7];
    v26 = v14[5];
    v27 = v14[6];
    *(_DWORD *)(a3 + 82) = v14[4];
    *(_DWORD *)(a3 + 86) = v26;
    *(_DWORD *)(a3 + 90) = v27;
    *(_DWORD *)(a3 + 94) = v25;
    v28 = v15[1024];
    v29 = (*(unsigned __int8 *)(a2 + 6) << 16)
        + (*(unsigned __int8 *)(a2 + 7) << 8)
        + *(unsigned __int8 *)(a2 + 8)
        + (*(unsigned __int8 *)(a2 + 5) << 24);
    v15[1025] = v15[1025];
    v15[1024] = v29 | v28;
    v30 = *(_DWORD *)(a2 + 13);
    v31 = *(_DWORD *)(a2 + 17);
    v32 = *(_DWORD *)(a2 + 21);
    *(_DWORD *)(a3 + 98) = *(_DWORD *)(a2 + 9);
    *(_DWORD *)(a3 + 102) = v30;
    *(_DWORD *)(a3 + 106) = v31;
    *(_DWORD *)(a3 + 110) = v32;
    v33 = *(_DWORD *)(a2 + 29);
    v34 = *(_DWORD *)(a2 + 33);
    v35 = *(_DWORD *)(a2 + 37);
    *(_DWORD *)(a3 + 114) = *(_DWORD *)(a2 + 25);
    *(_DWORD *)(a3 + 118) = v33;
    *(_DWORD *)(a3 + 126) = v35;
    *(_DWORD *)(a3 + 122) = v34;
    v36 = v15[1024];
    v37 = v15[1025];
    *(_DWORD *)(a3 + 26) = v36;
    *(_DWORD *)(a3 + 30) = v37;
    v15[1024] = 0;
    v15[1025] = v37;
    *(_BYTE *)(a3 + 16) = v11;
    *(_BYTE *)(a3 + 17) = *(_BYTE *)(a2 + 4);
    v38 = v15 + 512;
    v39 = v15[512];
    v40 = *v15;
    v41 = v15[1];
    v42 = v38[1];
    *(_DWORD *)a3 = v40;
    *(_DWORD *)(a3 + 4) = v41;
    *(_DWORD *)(a3 + 18) = v39;
    *(_DWORD *)(a3 + 22) = v42;
    *a7 = v40;
    v43 = sub_12E934(v36 & 7, 0, *(_DWORD *)(a1 + 396), 0);
    *(_DWORD *)(a3 + 12) = (unsigned __int16)v36 >> 12;
    *(_DWORD *)(a3 + 8) = v43;
    *a6 = v43;
    v45 = *(_DWORD *)(a3 + 30);
    *a5 = *(_DWORD *)(a3 + 26);
    a5[1] = v45;
    *a4 = 1;
    return 0;
  }
  else
  {
    V_LOCK(v10);
    v46 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v46);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
      174,
      "packet_2_nonce_eth",
      18,
      1002,
      100,
      v48);
    return 11;
  }
}
