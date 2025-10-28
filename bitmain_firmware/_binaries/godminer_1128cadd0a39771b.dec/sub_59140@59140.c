int __fastcall sub_59140(_DWORD *a1, int a2, int a3, _BYTE *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  int v8; // r6
  int v10; // r1
  int v13; // r3
  int v14; // r12
  int v15; // r2
  int v16; // r0
  int v17; // r11
  int v18; // r1
  int v19; // r3
  unsigned int v20; // r0
  int v21; // r0
  int v22; // r1
  int v23; // r2
  int v25; // r0
  _BYTE var1004[4128]; // [sp+20h] [bp-1004h] BYREF

  v8 = a1[158];
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
  *(_QWORD *)(a3 + 72) = *(_QWORD *)(8 * (v15 + 2689) + v8);
  v16 = sub_12DE60(*(unsigned __int8 *)(a2 + 2));
  v17 = v16;
  if ( v16 >= a1[51] )
  {
    V_LOCK(v16);
    v25 = logfmt_raw((int)var1004, 0x1000u);
    V_UNLOCK(v25);
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
    v18 = 0;
    *a6 = 0;
  }
  else
  {
    v18 = v16;
    *a6 = v16;
  }
  v19 = a1[62];
  *(_DWORD *)(a3 + 8) = v18;
  v20 = (bswap32(*(_DWORD *)(a2 + 2)) - ((v19 * v17) << 24)) % 0xA;
  *(_DWORD *)(a3 + 12) = v20;
  V_LOCK(v20);
  v21 = logfmt_raw((int)var1004, 0x1000u);
  V_UNLOCK(v21);
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
  v22 = BM_CRC5(a2 + 2, 51);
  v23 = *(_BYTE *)(a2 + 8) & 0x1F;
  if ( v22 == v23 )
  {
    *a5 = *(_DWORD *)(a3 + 48);
    *a4 = 1;
    return 0;
  }
  else
  {
    printf("get nonce crc error calc value %04x expected value %04x\n", v22, v23);
    return 2;
  }
}
