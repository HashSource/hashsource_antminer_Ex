int __fastcall packet_2_nonce_dash(int *a1, int a2, int a3, _BYTE *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  _BYTE v11[40]; // [sp+34h] [bp-1028h] BYREF
  unsigned __int16 v12; // [sp+1036h] [bp-26h]
  unsigned __int16 v13; // [sp+1038h] [bp-24h]
  __int16 v14; // [sp+103Ah] [bp-22h]
  int v15; // [sp+103Ch] [bp-20h]
  int v16; // [sp+1040h] [bp-1Ch]
  unsigned __int8 v17; // [sp+1047h] [bp-15h]
  int v18; // [sp+1048h] [bp-14h]
  int v19; // [sp+104Ch] [bp-10h]

  v19 = a2;
  v18 = a3;
  v17 = 0;
  if ( *(char *)(a2 + 9) >= 0 )
    return 10;
  v16 = a1[216];
  v15 = *(_BYTE *)(v19 + 8) & 0x7F;
  *(_QWORD *)v18 = *(_QWORD *)(v16 + 8 * v15);
  *a7 = *(_DWORD *)(v16 + 8 * v15);
  strcpy((char *)(v18 + 16), (const char *)(v16 + 32 * (v15 + 32)));
  *(_DWORD *)(v18 + 48) = *(_DWORD *)(v19 + 3);
  *(_BYTE *)(v18 + 52) = *(_BYTE *)(v19 + 7) & 0x7F;
  *(_BYTE *)(v18 + 53) = v15;
  *(_QWORD *)(v18 + 72) = *(_QWORD *)(v16 + 8 * (v15 + 2689));
  v17 = *(unsigned __int8 *)(v19 + 3) / (unsigned int)a1[117];
  if ( v17 >= a1[93] )
    *a6 = 0;
  else
    *a6 = v17;
  *(_DWORD *)(v18 + 8) = *a6;
  *(_DWORD *)(v18 + 12) = (*(_BYTE *)(v19 + 6) & 0xF) % 12;
  V_LOCK();
  logfmt_raw(
    v11,
    0x1000u,
    0,
    "%s Nonce: %02x%02x%02x%02x chipid:%d coreid:%d",
    "packet_2_nonce_dash",
    *(unsigned __int8 *)(v19 + 3),
    *(unsigned __int8 *)(v19 + 4),
    *(unsigned __int8 *)(v19 + 5),
    *(unsigned __int8 *)(v19 + 6),
    *(_DWORD *)(v18 + 8),
    *(_DWORD *)(v18 + 12));
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_dash_1766/backend_dash_1766.c",
    173,
    "packet_2_nonce_dash",
    19,
    220,
    20,
    v11);
  v14 = 8;
  v13 = BM_CRC5((_BYTE *)(v19 + 2), 0x3Bu);
  v12 = *(_BYTE *)(v19 + 9) & 0x1F;
  if ( v13 == v12 )
  {
    *a5 = *(_DWORD *)(v18 + 48);
    *a4 = 1;
    return 0;
  }
  else
  {
    printf("get nonce crc error calc value %04x expected value %04x\n", v13, v12);
    return 11;
  }
}
