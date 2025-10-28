int __fastcall packet_2_nonce_dcr(unsigned int *a1, int a2, int a3, _BYTE *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  int v8; // r0
  int v9; // r1
  _BYTE v13[40]; // [sp+24h] [bp-1028h] BYREF
  unsigned __int16 v14; // [sp+1026h] [bp-26h]
  unsigned __int16 v15; // [sp+1028h] [bp-24h]
  __int16 v16; // [sp+102Ah] [bp-22h]
  int v17; // [sp+102Ch] [bp-20h]
  int v18; // [sp+1030h] [bp-1Ch]
  int v19; // [sp+1034h] [bp-18h]
  unsigned int v20; // [sp+1038h] [bp-14h]
  unsigned __int8 v21; // [sp+103Fh] [bp-Dh]
  int v22; // [sp+1040h] [bp-Ch]
  int v23; // [sp+1044h] [bp-8h]

  v23 = a2;
  v22 = a3;
  v21 = 0;
  if ( *(char *)(a2 + 10) >= 0 )
    return 10;
  v20 = a1[216];
  v19 = *(_BYTE *)(v23 + 9) & 0x7F;
  *(_QWORD *)v22 = *(_QWORD *)(v20 + 8 * v19);
  *a7 = *(_DWORD *)(v20 + 8 * v19);
  strcpy((char *)(v22 + 16), (const char *)(v20 + 32 * (v19 + 32)));
  *(_BYTE *)(v22 + 52) = *(_BYTE *)(v23 + 3);
  memcpy((void *)(v22 + 53), (const void *)(v20 + 180 * v19 + 5260), 0xBu);
  *(_DWORD *)(v22 + 48) = *(_DWORD *)(v23 + 4);
  *(_BYTE *)(v22 + 64) = *(_BYTE *)(v23 + 8);
  *(_BYTE *)(v22 + 65) = v19;
  v21 = *(unsigned __int8 *)(v23 + 3) / a1[117];
  if ( v21 >= (int)a1[93] )
  {
    v8 = rand();
    sub_34514C(v8, a1[93]);
    *a6 = v9;
  }
  else
  {
    *a6 = v21;
  }
  *(_DWORD *)(v22 + 8) = *a6;
  v18 = *(unsigned __int8 *)(v23 + 4);
  v17 = *(_BYTE *)(v23 + 5) >> 6;
  *(_DWORD *)(v22 + 12) = 4 * v18 + v17;
  v16 = 9;
  v15 = BM_CRC5((_BYTE *)(v23 + 2), 0x43u);
  v14 = *(_BYTE *)(v23 + 10) & 0x1F;
  if ( v15 == v14 )
  {
    *a5 = *(_DWORD *)(v22 + 48);
    *a4 = 1;
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "get nonce crc error calc value %04x expected value %04x", v15, v14);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_dcr_1727/backend_dcr_1727.c",
      171,
      "packet_2_nonce_dcr",
      18,
      212,
      80,
      v13);
    return 11;
  }
}
