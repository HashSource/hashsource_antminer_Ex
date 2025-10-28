int __fastcall work_2_packet_kas(int a1, int a2, _BYTE *a3, _DWORD *a4)
{
  char v5; // r3
  _BYTE v9[20]; // [sp+28h] [bp-1014h] BYREF
  __int16 v10; // [sp+102Ah] [bp-12h]
  int v11; // [sp+102Ch] [bp-10h]
  int v12; // [sp+1030h] [bp-Ch]
  _BYTE *v13; // [sp+1034h] [bp-8h]

  v13 = a3;
  v12 = a2;
  if ( !dword_C15728 )
    dword_C15728 = (int)malloc(0x450u);
  v11 = *(_DWORD *)(a1 + 864);
  if ( v11 )
  {
    *v13 = 85;
    v13[1] = -86;
    v13[2] = 32;
    v13[2] |= 0x10u;
    if ( *(_DWORD *)(a1 + 532) == 1 )
      v13[2] |= 0x10u;
    *(_QWORD *)(v11 + 8 * *(unsigned __int8 *)(v11 + 12416)) = *(_QWORD *)v12;
    *(_BYTE *)(v11 + *(unsigned __int8 *)(v11 + 12416) + 0x2000) = (unsigned int)*(double *)(v12 + 192);
    memcpy((void *)(v11 + 32 * (*(unsigned __int8 *)(v11 + 12416) + 260)), (const void *)(v12 + 64), 0x20u);
    memcpy((void *)(v11 + 8 * (*(unsigned __int8 *)(v11 + 12416) + 128)), (const void *)(v12 + 8), 8u);
    memcpy(v13 + 4, (const void *)(v12 + 16), 0x30u);
    memcpy((void *)(v11 + 48 * *(unsigned __int8 *)(v11 + 12416) + 2048), (const void *)(v12 + 16), 0x30u);
    v5 = *(_BYTE *)(v11 + 12416);
    *(_BYTE *)(v11 + 12416) = v5 + 1;
    v13[3] = v5;
    *(_BYTE *)(v11 + 12416) &= ~0x80u;
    v10 = BM_CRC16(v13 + 2, 50);
    v13[52] = HIBYTE(v10);
    v13[53] = v10;
    *a4 = 54;
    if ( *(_BYTE *)(a1 + 278) && *(_BYTE *)(a1 + 279) )
    {
      sub_1637C8(a1, 0x24u);
      set_misc_control_kas(a1);
      *(_BYTE *)(a1 + 278) = 0;
    }
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "id_map is null", "work_2_packet_kas");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
      171,
      "work_2_packet_kas",
      17,
      205,
      20,
      v9);
    return 3;
  }
}
