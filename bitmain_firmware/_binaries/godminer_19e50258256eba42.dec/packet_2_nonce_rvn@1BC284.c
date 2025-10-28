int __fastcall packet_2_nonce_rvn(int a1, int a2, int a3, _BYTE *a4, void *dest, _DWORD *a6, _DWORD *a7)
{
  int *v8; // r3
  int v9; // r8
  int v10; // r9
  int v11; // r0
  int *v12; // r3
  int *v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r1
  int v17; // r5
  _DWORD *v18; // r3
  int *v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // r1
  int *v23; // r1
  int v24; // r2
  int v25; // r3
  int v26; // r1
  _BYTE v31[60]; // [sp+20h] [bp-103Ch] BYREF
  unsigned __int8 v32; // [sp+1023h] [bp-39h]
  int v33; // [sp+1024h] [bp-38h]
  unsigned __int16 v34; // [sp+1028h] [bp-34h]
  unsigned __int16 v35; // [sp+102Ah] [bp-32h]
  int v36; // [sp+102Ch] [bp-30h]
  unsigned __int8 *v37; // [sp+1030h] [bp-2Ch]
  char v38; // [sp+1037h] [bp-25h]
  int v39; // [sp+1038h] [bp-24h]
  unsigned __int8 v40; // [sp+103Fh] [bp-1Dh]

  v39 = a3;
  v40 = 0;
  v38 = 0;
  if ( *(_BYTE *)(a2 + 2) != 45 )
    return 10;
  if ( *(_BYTE *)(a1 + 279) != 1 )
    return 14;
  v37 = (unsigned __int8 *)a2;
  v36 = 43;
  v35 = BM_CRC16((char *)(a2 + 2), 43);
  v34 = _byteswap_ushort(*(_WORD *)(a2 + 45));
  if ( v35 == v34 )
  {
    v33 = *(_DWORD *)(a1 + 864);
    v32 = v37[12];
    memcpy((void *)(v39 + 34), (const void *)(v33 + 40 * v32 + 0x2000), 0x20u);
    memcpy((void *)(v39 + 66), (const void *)(v33 + 32 * (v32 + 576)), 0x20u);
    v8 = (int *)(v33 + 8 * (v32 + 512));
    v9 = *v8;
    v10 = v8[1];
    v11 = sub_1AA148(v37 + 7);
    v12 = (int *)(v33 + 8 * (v32 + 512));
    *v12 = v9 | v11;
    v12[1] = v10;
    memcpy((void *)(v39 + 98), v37 + 13, 0x20u);
    v13 = (int *)(v33 + 8 * (v32 + 512));
    v14 = *v13;
    v15 = v13[1];
    v16 = v39;
    *(_DWORD *)(v39 + 26) = v14;
    *(_DWORD *)(v16 + 30) = v15;
    v17 = *(_DWORD *)(v33 + 8 * (v32 + 512) + 4);
    v18 = (_DWORD *)(v33 + 8 * (v32 + 512));
    *v18 = 0;
    v18[1] = v17;
    *(_BYTE *)(v39 + 16) = v32;
    *(_BYTE *)(v39 + 17) = v37[11];
    v19 = (int *)(v33 + 8 * (v32 + 256));
    v20 = *v19;
    v21 = v19[1];
    v22 = v39;
    *(_DWORD *)(v39 + 18) = v20;
    *(_DWORD *)(v22 + 22) = v21;
    v23 = (int *)(v33 + 8 * v32);
    v24 = *v23;
    v25 = v23[1];
    v26 = v39;
    *(_DWORD *)v39 = v24;
    *(_DWORD *)(v26 + 4) = v25;
    *a7 = *(_DWORD *)(v33 + 8 * v32);
    *(_DWORD *)(v39 + 12) = (*(_DWORD *)(v39 + 26) >> 10) & 0xF;
    *a6 = v40;
    memcpy(dest, (const void *)(v39 + 26), 8u);
    *a4 = 1;
    sub_1BBE54(a1, v39, dword_C25900);
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v31, 0x1000u, 0, "get nonce crc error calc value %04x resp value %04x", v35, v34);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
      171,
      "packet_2_nonce_rvn",
      18,
      1237,
      100,
      v31);
    return 11;
  }
}
