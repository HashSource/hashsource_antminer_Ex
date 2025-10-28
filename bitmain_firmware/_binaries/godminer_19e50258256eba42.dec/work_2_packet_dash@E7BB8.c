int __fastcall work_2_packet_dash(int a1, int a2, _BYTE *a3, _DWORD *a4)
{
  char v4; // r3
  unsigned int v5; // r1
  _BYTE v9[28]; // [sp+20h] [bp-101Ch] BYREF
  __int16 v10; // [sp+1022h] [bp-1Ah]
  int v11; // [sp+1024h] [bp-18h]
  int v12; // [sp+1028h] [bp-14h]
  int v13; // [sp+102Ch] [bp-10h]
  _BYTE *v14; // [sp+1030h] [bp-Ch]
  int i; // [sp+1034h] [bp-8h]

  v14 = a3;
  v13 = a2;
  v12 = 0;
  v11 = *(_DWORD *)(a1 + 864);
  *a3 = 85;
  v14[1] = -86;
  v14[2] = 32;
  if ( *(_DWORD *)(a1 + 532) == 1 )
    v14[2] |= 0x10u;
  *(_QWORD *)(v11 + 8 * *(unsigned __int8 *)(v11 + 21504)) = *(_QWORD *)v13;
  *(_DWORD *)(v11 + 4 * (*(unsigned __int8 *)(v11 + 21504) + 3840)) = *(_DWORD *)(v13 + 120);
  memcpy((void *)(v11 + 12 * *(unsigned __int8 *)(v11 + 21504) + 19968), (const void *)(v13 + 156), 8u);
  memcpy((void *)(v11 + 32 * (*(unsigned __int8 *)(v11 + 21504) + 496)), (const void *)(v13 + 124), 0x20u);
  strcpy((char *)(v11 + 32 * (*(unsigned __int8 *)(v11 + 21504) + 32)), (const char *)(v13 + 8));
  memcpy((void *)(v11 + 80 * *(unsigned __int8 *)(v11 + 21504) + 5120), (const void *)(v13 + 40), 0x50u);
  *(_QWORD *)(v11 + 8 * (*(unsigned __int8 *)(v11 + 21504) + 2689)) = *(_QWORD *)(v13 + 168);
  v4 = *(_BYTE *)(v11 + 21504);
  *(_BYTE *)(v11 + 21504) = v4 + 1;
  v14[3] = v4;
  *(_BYTE *)(v11 + 21504) &= ~0x80u;
  memcpy(v14 + 4, (const void *)(v13 + 40), 0x50u);
  for ( i = 0; i <= 19; ++i )
  {
    v14[4 * i + 7] = *(_BYTE *)(v13 + 4 * i + 40);
    v14[4 * i + 6] = *(_BYTE *)(v13 + 4 * i + 1 + 40);
    v14[4 * i + 5] = *(_BYTE *)(v13 + 4 * i + 2 + 40);
    v14[4 * i + 4] = *(_BYTE *)(v13 + 4 * i + 3 + 40);
  }
  if ( !memcmp(&last_header_dash, (const void *)(v13 + 40), 0x50u) )
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "found repeat work");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
      173,
      "work_2_packet_dash",
      18,
      126,
      80,
      v9);
    sub_E79B0(v13, v14[3]);
  }
  memcpy(&last_header_dash, (const void *)(v13 + 40), 0x50u);
  v12 = 82;
  v10 = BM_CRC16(v14 + 2, 82);
  v14[84] = HIBYTE(v10);
  v14[85] = v10;
  *a4 = 86;
  if ( *(_BYTE *)(a1 + 278) && *(_BYTE *)(a1 + 279) )
  {
    sub_DBE24(a1, 0x23u);
    *(_BYTE *)(a1 + 278) = 0;
  }
  v5 = dword_5BAB2C++;
  if ( !(v5 % 0x14) )
  {
    sub_E7B88(a1);
    sub_DB820(a1);
    usleep(0x64u);
  }
  return 0;
}
