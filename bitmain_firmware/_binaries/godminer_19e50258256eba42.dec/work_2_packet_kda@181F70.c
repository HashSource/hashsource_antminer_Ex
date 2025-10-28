int __fastcall work_2_packet_kda(int a1, int a2, char *a3, _DWORD *a4)
{
  char v4; // r3
  _BYTE v8[28]; // [sp+20h] [bp-101Ch] BYREF
  __int16 v9; // [sp+1022h] [bp-1Ah]
  int v10; // [sp+1024h] [bp-18h]
  int v11; // [sp+1028h] [bp-14h]
  int v12; // [sp+102Ch] [bp-10h]
  char *v13; // [sp+1030h] [bp-Ch]
  int i; // [sp+1034h] [bp-8h]

  v13 = a3;
  v12 = a2;
  v11 = 0;
  v10 = *(_DWORD *)(a1 + 864);
  *a3 = 85;
  v13[1] = -86;
  v13[2] = 32;
  if ( *(_DWORD *)(a1 + 532) == 1 )
    v13[2] |= 0x10u;
  *(_QWORD *)(v10 + 8 * *(unsigned __int8 *)(v10 + 50816)) = *(_QWORD *)v12;
  *(_DWORD *)(v10 + 4 * (*(unsigned __int8 *)(v10 + 50816) + 11552)) = *(_DWORD *)(v12 + 360);
  memcpy((void *)(v10 + 32 * (*(unsigned __int8 *)(v10 + 50816) + 1460)), (const void *)(v12 + 364), 0x20u);
  strcpy((char *)(v10 + ((*(unsigned __int8 *)(v10 + 50816) + 16) << 6)), (const char *)(v12 + 8));
  memcpy((void *)(v10 + 286 * *(unsigned __int8 *)(v10 + 50816) + 9216), (const void *)(v12 + 72), 0x11Eu);
  memcpy((void *)(v10 + 3 * *(unsigned __int8 *)(v10 + 50816) + 45824), (const void *)(v12 + 396), 3u);
  v4 = *(_BYTE *)(v10 + 50816);
  *(_BYTE *)(v10 + 50816) = v4 + 1;
  v13[3] = v4;
  *(_BYTE *)(v10 + 50816) &= ~0x80u;
  memset(v13 + 4, 0, 0x11Eu);
  memcpy(v13 + 4, (const void *)(v12 + 396), 3u);
  for ( i = 0; i <= 277; ++i )
    v13[i + 7] = *(_BYTE *)(v12 + 277 - i + 72);
  if ( *(_DWORD *)(a1 + 532) == 1 )
    memcpy(v13 + 285, (const void *)(v12 + 350), 5u);
  if ( !memcmp(&last_header_kda, (const void *)(v12 + 72), 0x11Eu) )
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "found repeat work");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
      171,
      "work_2_packet_kda",
      17,
      133,
      20,
      v8);
    sub_181C80((int)v13, v12, v13[3]);
  }
  memcpy(&last_header_kda, (const void *)(v12 + 72), 0x11Eu);
  v11 = 288;
  v9 = BM_CRC16(v13 + 2, 288);
  v13[290] = HIBYTE(v9);
  v13[291] = v9;
  *a4 = 292;
  if ( *(_BYTE *)(a1 + 278) && *(_BYTE *)(a1 + 279) )
  {
    memset(*(void **)(a1 + 496), 0, 48 * *(_DWORD *)(a1 + 372));
    sub_1761BC(a1, 0x28u);
    *(_BYTE *)(a1 + 278) = 0;
  }
  sub_175BB8(a1);
  usleep(0x14u);
  return 0;
}
