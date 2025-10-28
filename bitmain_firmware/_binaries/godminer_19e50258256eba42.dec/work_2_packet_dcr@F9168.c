int __fastcall work_2_packet_dcr(int a1, int a2, _BYTE *a3, _DWORD *a4)
{
  char v4; // r3
  _BYTE v8[24]; // [sp+24h] [bp-1018h] BYREF
  __int16 v9; // [sp+1026h] [bp-16h]
  int v10; // [sp+1028h] [bp-14h]
  __int16 v11; // [sp+102Eh] [bp-Eh]
  int v12; // [sp+1030h] [bp-Ch]
  _BYTE *v13; // [sp+1034h] [bp-8h]

  v13 = a3;
  v12 = a2;
  v11 = 0;
  v10 = *(_DWORD *)(a1 + 864);
  *a3 = 85;
  v13[1] = -86;
  v13[2] = 32;
  if ( *(_DWORD *)(a1 + 532) == 1 )
    v13[2] |= 0x10u;
  *(_QWORD *)(v10 + 8 * *(unsigned __int8 *)(v10 + 0x8000)) = *(_QWORD *)v12;
  strcpy((char *)(v10 + 32 * (*(unsigned __int8 *)(v10 + 0x8000) + 32)), (const char *)(v12 + 8));
  *(_DWORD *)(v10 + 4 * (*(unsigned __int8 *)(v10 + 0x8000) + 7040)) = *(_DWORD *)(v12 + 220);
  memcpy((void *)(v10 + 32 * (*(unsigned __int8 *)(v10 + 0x8000) + 896)), (const void *)(v12 + 224), 0x20u);
  memcpy((void *)(v10 + 180 * *(unsigned __int8 *)(v10 + 0x8000) + 5120), (const void *)(v12 + 40), 0xB4u);
  v4 = *(_BYTE *)(v10 + 0x8000);
  *(_BYTE *)(v10 + 0x8000) = v4 + 1;
  v13[3] = v4;
  *(_BYTE *)(v10 + 0x8000) &= ~0x80u;
  memcpy(v13 + 4, (const void *)(v12 + 40), 0xB4u);
  if ( !memcmp(&last_header_dcr, (const void *)(v12 + 40), 0xB4u) )
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "found repeat work");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_dcr_1727/backend_dcr_1727.c",
      171,
      "work_2_packet_dcr",
      17,
      120,
      80,
      v8);
  }
  memcpy(&last_header_dcr, (const void *)(v12 + 40), 0xB4u);
  v11 = 182;
  v9 = BM_CRC16(v13 + 2, 182);
  v13[184] = HIBYTE(v9);
  v13[185] = v9;
  *a4 = 186;
  if ( *(_BYTE *)(a1 + 278) && *(_BYTE *)(a1 + 279) )
  {
    memset(*(void **)(a1 + 496), 0, 48 * *(_DWORD *)(a1 + 372));
    sub_ED4CC(a1, 0x27u);
    *(_BYTE *)(a1 + 278) = 0;
  }
  sub_ECEC8(a1);
  usleep(0x14u);
  return 0;
}
