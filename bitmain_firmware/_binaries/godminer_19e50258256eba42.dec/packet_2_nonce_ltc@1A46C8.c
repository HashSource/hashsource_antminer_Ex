int __fastcall packet_2_nonce_ltc(_DWORD *a1, _BYTE *a2, int a3, _BYTE *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  int v8; // r0
  int v9; // r1
  _BYTE v15[24]; // [sp+24h] [bp-1018h] BYREF
  int v16; // [sp+1024h] [bp-18h]
  unsigned __int16 v17; // [sp+1028h] [bp-14h]
  unsigned __int16 v18; // [sp+102Ah] [bp-12h]
  __int16 v19; // [sp+102Ch] [bp-10h]
  unsigned __int8 v20; // [sp+102Fh] [bp-Dh]
  int v21; // [sp+1030h] [bp-Ch]
  _BYTE *v22; // [sp+1034h] [bp-8h]

  V_LOCK();
  logfmt_raw(v15, 0x1000u, 0, "packet_2_nonce_ltc() in");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    171,
    "packet_2_nonce_ltc",
    18,
    239,
    40,
    v15);
  v22 = a2;
  v21 = a3;
  v20 = 0;
  if ( a2[8] >> 5 != 4 )
    return 10;
  v19 = 7;
  v18 = BM_CRC5(v22 + 2, 0x33u);
  v17 = v22[8] & 0x1F;
  if ( v18 == v17 )
  {
    v16 = a1[216];
    *(_QWORD *)v21 = *(_QWORD *)(v16 + 8 * (unsigned __int8)v22[7]);
    *a7 = *(_DWORD *)(v16 + 8 * (unsigned __int8)v22[7]);
    strcpy((char *)(v21 + 16), (const char *)(v16 + (((unsigned __int8)v22[7] + 16) << 6)));
    *(_DWORD *)(v21 + 80) = *(_DWORD *)(v22 + 2);
    *(_BYTE *)(v21 + 84) = v22[6] & 0x3F;
    *(_BYTE *)(v21 + 85) = v22[7];
    memcpy(
      (void *)(v21 + 86),
      (const void *)(v16 + 16 * ((unsigned __int8)v22[7] + 1504)),
      *(_DWORD *)(v16 + 4 * ((unsigned __int8)v22[7] + 6528)));
    *(_DWORD *)(v21 + 104) = *(_DWORD *)(v16 + 4 * ((unsigned __int8)v22[7] + 6528));
    *(_DWORD *)(v21 + 108) = *(_DWORD *)(v16 + 4 * ((unsigned __int8)v22[7] + 6656));
    v20 = ((unsigned __int8)(v22[2] << 7) | (unsigned int)(v22[3] >> 1)) / a1[117];
    if ( v20 >= (int)a1[93] )
    {
      v8 = rand();
      sub_34514C(v8, a1[93]);
      *a6 = v9;
    }
    else
    {
      *a6 = v20;
    }
    *(_DWORD *)(v21 + 8) = *a6;
    *(_DWORD *)(v21 + 12) = v22[2] >> 1;
    *a5 = *(_DWORD *)(v21 + 80);
    *a4 = 1;
    V_LOCK();
    logfmt_raw(v15, 0x1000u, 0, "packet_2_nonce_ltc() out");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
      171,
      "packet_2_nonce_ltc",
      18,
      286,
      40,
      v15);
    return 0;
  }
  else
  {
    printf("chain[%d] get nonce crc error calc value %04x expected value %04x\n", a1[66], v18, v17);
    return 11;
  }
}
