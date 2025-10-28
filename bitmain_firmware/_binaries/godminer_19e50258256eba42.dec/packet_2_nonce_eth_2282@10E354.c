int __fastcall packet_2_nonce_eth_2282(int a1, int a2, int a3, _BYTE *a4, void *dest, _DWORD *a6, _DWORD *a7)
{
  int *v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r5
  _DWORD *v13; // r3
  int *v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r1
  int *v18; // r1
  int v19; // r2
  int v20; // r3
  int v21; // r1
  _BYTE v26[48]; // [sp+24h] [bp-1030h] BYREF
  char v27; // [sp+1025h] [bp-2Fh]
  char v28; // [sp+1026h] [bp-2Eh]
  unsigned __int8 v29; // [sp+1027h] [bp-2Dh]
  int v30; // [sp+1028h] [bp-2Ch]
  unsigned __int16 v31; // [sp+102Ch] [bp-28h]
  unsigned __int16 v32; // [sp+102Eh] [bp-26h]
  int v33; // [sp+1030h] [bp-24h]
  unsigned __int8 *v34; // [sp+1034h] [bp-20h]
  unsigned __int8 v35; // [sp+103Ah] [bp-1Ah]
  unsigned __int8 v36; // [sp+103Bh] [bp-19h]
  int v37; // [sp+103Ch] [bp-18h]

  v37 = a3;
  v36 = 0;
  v35 = 0;
  if ( *(_BYTE *)(a2 + 2) != 45 )
    return 10;
  if ( *(_BYTE *)(a1 + 279) != 1 && *(_BYTE *)(a1 + 278) != 1 )
    return 14;
  v34 = (unsigned __int8 *)a2;
  v33 = 43;
  v32 = BM_CRC16((char *)(a2 + 2), 43);
  v31 = _byteswap_ushort(*(_WORD *)(a2 + 45));
  if ( v32 == v31 )
  {
    v30 = *(_DWORD *)(a1 + 864);
    v29 = v34[12];
    memcpy((void *)(v37 + 34), (const void *)(v30 + 40 * v29 + 0x2000), 0x20u);
    memcpy((void *)(v37 + 66), (const void *)(v30 + 32 * (v29 + 576)), 0x20u);
    *(_QWORD *)(v30 + 8 * (v29 + 512)) = sub_FC3E0(v34 + 3);
    memcpy((void *)(v37 + 98), v34 + 13, 0x20u);
    v8 = (int *)(v30 + 8 * (v29 + 512));
    v9 = *v8;
    v10 = v8[1];
    v11 = v37;
    *(_DWORD *)(v37 + 26) = v9;
    *(_DWORD *)(v11 + 30) = v10;
    v12 = *(_DWORD *)(v30 + 8 * (v29 + 512) + 4);
    v13 = (_DWORD *)(v30 + 8 * (v29 + 512));
    *v13 = 0;
    v13[1] = v12;
    *(_BYTE *)(v37 + 16) = v29;
    *(_BYTE *)(v37 + 17) = v34[11];
    v14 = (int *)(v30 + 8 * (v29 + 256));
    v15 = *v14;
    v16 = v14[1];
    v17 = v37;
    *(_DWORD *)(v37 + 18) = v15;
    *(_DWORD *)(v17 + 22) = v16;
    v18 = (int *)(v30 + 8 * v29);
    v19 = *v18;
    v20 = v18[1];
    v21 = v37;
    *(_DWORD *)v37 = v19;
    *(_DWORD *)(v21 + 4) = v20;
    *a7 = *(_DWORD *)(v30 + 8 * v29);
    *a7 = 0;
    v35 = BYTE1(*(_DWORD *)(v37 + 26));
    v28 = v35 >> 4;
    v27 = ((int)v35 >> 1) & 7;
    v35 = 8 * (v35 >> 4) + v27;
    v36 = *(_DWORD *)(v37 + 30) & 0xF;
    if ( v36 > 5u )
      v36 = 5;
    *(_DWORD *)(v37 + 8) = v36;
    *(_DWORD *)(v37 + 12) = v35;
    *a6 = v36;
    memcpy(dest, (const void *)(v37 + 26), 8u);
    *a4 = 1;
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v26, 0x1000u, 0, "get nonce crc error calc value %04x resp value %04x", v32, v31);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "packet_2_nonce_eth_2282",
      23,
      1213,
      100,
      v26);
    return 11;
  }
}
