int __fastcall work_2_packet_ltc(int a1, int a2, _BYTE *a3, _DWORD *a4)
{
  char v4; // r3
  _BYTE v8[24]; // [sp+24h] [bp-1018h] BYREF
  __int16 v9; // [sp+1026h] [bp-16h]
  int v10; // [sp+1028h] [bp-14h]
  int v11; // [sp+102Ch] [bp-10h]
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
  *(_QWORD *)(v10 + 8 * *(unsigned __int8 *)(v10 + 27136)) = *(_QWORD *)v12;
  *(_DWORD *)(v10 + 4 * (*(unsigned __int8 *)(v10 + 27136) + 4864)) = *(_DWORD *)(v12 + 152);
  memcpy((void *)(v10 + 32 * (*(unsigned __int8 *)(v10 + 27136) + 624)), (const void *)(v12 + 156), 0x20u);
  strcpy((char *)(v10 + ((*(unsigned __int8 *)(v10 + 27136) + 16) << 6)), (const char *)(v12 + 8));
  memcpy((void *)(v10 + 80 * *(unsigned __int8 *)(v10 + 27136) + 9216), (const void *)(v12 + 72), 0x50u);
  memcpy(
    (void *)(v10 + 16 * (*(unsigned __int8 *)(v10 + 27136) + 1504)),
    (const void *)(v12 + 188),
    *(_DWORD *)(v12 + 204));
  *(_DWORD *)(v10 + 4 * (*(unsigned __int8 *)(v10 + 27136) + 6528)) = *(_DWORD *)(v12 + 204);
  *(_DWORD *)(v10 + 4 * (*(unsigned __int8 *)(v10 + 27136) + 6656)) = *(_DWORD *)(v12 + 208);
  v4 = *(_BYTE *)(v10 + 27136);
  *(_BYTE *)(v10 + 27136) = v4 + 1;
  v13[3] = v4;
  *(_BYTE *)(v10 + 27136) &= ~0x80u;
  memcpy(v13 + 4, (const void *)(v12 + 72), 0x50u);
  rev((int)(v13 + 4), 80);
  if ( !memcmp(&last_work_ltc, (const void *)(v12 + 72), 0x50u) )
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "found repeat work");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
      171,
      "work_2_packet_ltc",
      17,
      198,
      80,
      v8);
    sub_1A3A84(v12, v13[3]);
  }
  memcpy(&last_work_ltc, (const void *)(v12 + 72), 0x50u);
  v11 = 82;
  v9 = BM_CRC16(v13 + 2, 82);
  v13[84] = HIBYTE(v9);
  v13[85] = v9;
  *a4 = 86;
  if ( *(_BYTE *)(a1 + 278) && *(_BYTE *)(a1 + 279) )
  {
    memset(*(void **)(a1 + 496), 0, 48 * *(_DWORD *)(a1 + 372));
    chip_setting_ticket_mask_ltc(a1, 0x7FFu);
    *(_BYTE *)(a1 + 278) = 0;
  }
  return 0;
}
