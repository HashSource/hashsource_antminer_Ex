int __fastcall sub_58930(_DWORD *a1, int a2, int a3, _BYTE *a4, _DWORD *a5, signed int *a6, _DWORD *a7)
{
  int v8; // r6
  int v10; // r1
  int v13; // r3
  int v14; // r12
  int v15; // r2
  unsigned int v16; // r1
  signed int v17; // r0
  signed int v18; // r11
  unsigned int v19; // r1
  int v20; // r3
  int v21; // r1
  int v22; // r2
  char var1004[4128]; // [sp+20h] [bp-1004h] BYREF

  v8 = a1[156];
  v10 = *(unsigned __int8 *)(a2 + 7);
  v13 = *(_DWORD *)(v8 + 8 * v10);
  v14 = *(_DWORD *)(v8 + 8 * v10 + 4);
  *(_DWORD *)a3 = v13;
  *(_DWORD *)(a3 + 4) = v14;
  *a7 = v13;
  strcpy((char *)(a3 + 16), (const char *)(v8 + 32 * (v10 + 32)));
  *(_DWORD *)(a3 + 48) = *(_DWORD *)(a2 + 2);
  *(_BYTE *)(a3 + 52) = *(_BYTE *)(a2 + 6) & 0x7F;
  v15 = *(unsigned __int8 *)(a2 + 7);
  *(_BYTE *)(a3 + 53) = v15;
  v16 = a1[60];
  *(_QWORD *)(a3 + 72) = *(_QWORD *)(8 * (v15 + 2689) + v8);
  v17 = *(unsigned __int8 *)(a2 + 2) / v16;
  v18 = v17;
  if ( v17 >= a1[49] )
  {
    V_LOCK();
    logfmt_raw(var1004, 0x1000u, 0, "Nonce error, wrong source chip number");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_dash/backend_dash.c",
      156,
      "packet_2_nonce_dash",
      19,
      187,
      100,
      var1004);
    v19 = 0;
    *a6 = 0;
  }
  else
  {
    v19 = *(unsigned __int8 *)(a2 + 2) / v16;
    *a6 = v17;
  }
  v20 = a1[60];
  *(_DWORD *)(a3 + 8) = v19;
  *(_DWORD *)(a3 + 12) = (bswap32(*(_DWORD *)(a2 + 2)) - ((v20 * v18) << 24)) % 0xA;
  V_LOCK();
  logfmt_raw(
    var1004,
    0x1000u,
    0,
    "%s Nonce: %02x%02x%02x%02x  chipid:%d  coreid:%d",
    "packet_2_nonce_dash",
    *(unsigned __int8 *)(a2 + 2),
    *(unsigned __int8 *)(a2 + 3),
    *(unsigned __int8 *)(a2 + 4),
    *(unsigned __int8 *)(a2 + 5),
    *(_DWORD *)(a3 + 8),
    *(_DWORD *)(a3 + 12));
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_dash/backend_dash.c",
    156,
    "packet_2_nonce_dash",
    19,
    201,
    20,
    var1004);
  v21 = BM_CRC5((_BYTE *)(a2 + 2), 51);
  v22 = *(_BYTE *)(a2 + 8) & 0x1F;
  if ( v21 == v22 )
  {
    *a5 = *(_DWORD *)(a3 + 48);
    *a4 = 1;
    return 0;
  }
  else
  {
    printf("get nonce crc error calc value %04x expected value %04x\n", v21, v22);
    return 2;
  }
}
