int __fastcall work_2_packet_rvn(int a1, int a2, _BYTE *a3, _DWORD *a4)
{
  int v5; // r3
  _DWORD *v6; // r1
  int v7; // r3
  _DWORD *v8; // r1
  int v9; // r3
  _DWORD *v10; // r1
  _BYTE v14[20]; // [sp+20h] [bp-1014h] BYREF
  __int16 v15; // [sp+1022h] [bp-12h]
  _BYTE *v16; // [sp+1024h] [bp-10h]
  int v17; // [sp+1028h] [bp-Ch]
  int v18; // [sp+102Ch] [bp-8h]

  v16 = a3;
  v18 = a2;
  v17 = *(_DWORD *)(a1 + 864);
  if ( v17 )
  {
    *v16 = 85;
    v16[1] = -86;
    v16[2] = 32;
    v16[2] |= 0x10u;
    v5 = *(_DWORD *)(v18 + 12);
    v6 = (_DWORD *)(v17 + 8 * (*(unsigned __int8 *)(v17 + 35072) + 256));
    *v6 = *(_DWORD *)(v18 + 8);
    v6[1] = v5;
    v7 = *(_DWORD *)(v18 + 4);
    v8 = (_DWORD *)(v17 + 8 * *(unsigned __int8 *)(v17 + 35072));
    *v8 = *(_DWORD *)v18;
    v8[1] = v7;
    if ( *(unsigned __int8 *)(v18 + 88) != (unsigned __int8)byte_C258F8 )
    {
      V_LOCK();
      logfmt_raw(
        v14,
        0x1000u,
        0,
        "diff changed, last: %02x, now: %02x",
        (unsigned __int8)byte_C258F8,
        *(unsigned __int8 *)(v18 + 88));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
        171,
        "work_2_packet_rvn",
        17,
        1165,
        40,
        v14);
      set_ticketmask_rvn(a1, *(_DWORD *)(a1 + 472));
      byte_C258F8 = *(_BYTE *)(v18 + 88);
    }
    *(_BYTE *)(v17 + *(unsigned __int8 *)(v17 + 35072) + 34816) = *(_BYTE *)(v18 + 88);
    memcpy(v16 + 4, (const void *)(v18 + 16), 0x20u);
    memcpy((void *)(v17 + 40 * *(unsigned __int8 *)(v17 + 35072) + 0x2000), (const void *)(v18 + 16), 0x20u);
    memcpy((void *)(v17 + 32 * (*(unsigned __int8 *)(v17 + 35072) + 576)), (const void *)(v18 + 48), 0x20u);
    sub_1AA1B8(v16 + 36, *(_QWORD *)(v18 + 80));
    v9 = *(_DWORD *)(v18 + 80);
    v10 = (_DWORD *)(v17 + 8 * (*(unsigned __int8 *)(v17 + 35072) + 512));
    *v10 = 0;
    v10[1] = v9;
    LOBYTE(v9) = *(_BYTE *)(v17 + 35072);
    *(_BYTE *)(v17 + 35072) = v9 + 1;
    v16[3] = v9;
    *(_BYTE *)(v17 + 35072) = *(_BYTE *)(v17 + 35072);
    v15 = BM_CRC16(v16 + 2, 42);
    v16[44] = HIBYTE(v15);
    v16[45] = v15;
    *a4 = 46;
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, "id_map is null", "work_2_packet_rvn");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
      171,
      "work_2_packet_rvn",
      17,
      1152,
      20,
      v14);
    return 3;
  }
}
