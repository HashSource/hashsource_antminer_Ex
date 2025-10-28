int __fastcall sync_get_core_reg_base5(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  char v7; // r0
  int v8; // r2
  int v9; // r4
  _BYTE v15[60]; // [sp+28h] [bp-103Ch] BYREF
  _DWORD v16[2]; // [sp+1028h] [bp-3Ch] BYREF
  unsigned __int8 v17; // [sp+1030h] [bp-34h] BYREF
  unsigned __int8 v18; // [sp+1031h] [bp-33h]
  _BYTE v19[2]; // [sp+1032h] [bp-32h] BYREF
  int v20; // [sp+1034h] [bp-30h]
  unsigned __int8 v21; // [sp+1038h] [bp-2Ch]
  unsigned __int16 v22; // [sp+1039h] [bp-2Bh]
  char v23; // [sp+103Bh] [bp-29h]
  int v24; // [sp+103Ch] [bp-28h] BYREF
  int v25; // [sp+1040h] [bp-24h]
  __int16 v26; // [sp+1044h] [bp-20h]
  int v27; // [sp+1048h] [bp-1Ch]
  int v28; // [sp+104Ch] [bp-18h]
  void *s; // [sp+1050h] [bp-14h]
  size_t nmemb; // [sp+1054h] [bp-10h]

  if ( *(_BYTE *)(a1 + 276) != 1 )
    return 4;
  v24 = 371285;
  v25 = 0;
  v26 = 0;
  BYTE2(v24) = (16 * (*(_BYTE *)(a2 + 8) & 1)) | 5;
  BYTE2(v24) = BYTE2(v24) & 0x1F | 0x40;
  HIBYTE(v24) = 8;
  LOBYTE(v25) = *(_BYTE *)(a2 + 9);
  *(_WORD *)((char *)&v25 + 1) = reverse_byte_order_16(*(_WORD *)(a2 + 10));
  HIBYTE(v25) = *(_BYTE *)(a2 + 12);
  LOBYTE(v26) = *(_BYTE *)(a2 + 13);
  nmemb = HIBYTE(v24) - 1;
  s = calloc(nmemb, 1u);
  memset(s, 0, 4u);
  memcpy(s, (char *)&v24 + 2, HIBYTE(v24) - 1);
  v7 = BM_CRC5(s, 8 * nmemb);
  HIBYTE(v26) = HIBYTE(v26) & 0xE0 | v7 & 0x1F;
  free(s);
  if ( *(_BYTE *)(a2 + 8) != 1 && *(unsigned __int8 *)(a2 + 12) != 255 && a3 != 72 )
    a3 = 1;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 944));
  queue_clear(*(_DWORD *)(a1 + 908));
  send_command_packet(a1, (unsigned __int8 *)&v24, 0xAu);
  v27 = 0;
  v28 = 0;
  sub_34579C(a6, 0x3E8u);
  v16[1] = 1000000 * v8;
  v16[0] = sub_34579C(a6, 0x3E8u);
  while ( v27 < a3 )
  {
    if ( queue_dequeue_for(*(_DWORD *)(a1 + 908), (char *)&v17, 0xCu, v16) == 110 )
    {
      v28 = 3;
      break;
    }
    if ( v17 != 170 || v18 != 85 )
    {
      v28 = 1;
      V_LOCK();
      logfmt_raw(
        v15,
        0x1000u,
        0,
        "header[0] %02x, header[1] %02x, length %02x, reg_value %08x, chip_addr %02x, reg_addr %02x",
        v17,
        v18,
        v19[0],
        v20,
        v21,
        v22);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_reg_io_base.c",
        154,
        "sync_get_core_reg_base5",
        23,
        1949,
        20,
        v15);
      break;
    }
    v9 = v23 & 0x1F;
    if ( v9 == BM_CRC5(v19, 0x4Bu) )
    {
      V_LOCK();
      logfmt_raw(
        v15,
        0x1000u,
        0,
        "header[0] %02x, header[1] %02x, length %02x, reg_value %08x, chip_addr %02x, reg_addr %02x",
        v17,
        v18,
        v19[0],
        v20,
        v21,
        v22);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_reg_io_base.c",
        154,
        "sync_get_core_reg_base5",
        23,
        1956,
        20,
        v15);
      *(_BYTE *)(a4 + 12 * v27 + 4) = v21;
      V_LOCK();
      logfmt_raw(v15, 0x1000u, 0, "ret_array[%d].chip_addr %02x", v27, *(unsigned __int8 *)(a4 + 12 * v27 + 4));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_reg_io_base.c",
        154,
        "sync_get_core_reg_base5",
        23,
        1958,
        20,
        v15);
      *(_WORD *)(a4 + 12 * v27 + 6) = v22;
      V_LOCK();
      logfmt_raw(v15, 0x1000u, 0, "ret_array[%d].reg_addr %02x", v27, *(unsigned __int16 *)(a4 + 12 * v27 + 6));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_reg_io_base.c",
        154,
        "sync_get_core_reg_base5",
        23,
        1960,
        20,
        v15);
      *(_BYTE *)(a4 + 12 * v27 + 8) = v19[1];
      V_LOCK();
      logfmt_raw(v15, 0x1000u, 0, "ret_array[%d].core_id %02x", v27, *(unsigned __int8 *)(a4 + 12 * v27 + 8));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_reg_io_base.c",
        154,
        "sync_get_core_reg_base5",
        23,
        1962,
        20,
        v15);
      *(_DWORD *)(a4 + 12 * v27) = v20;
      V_LOCK();
      logfmt_raw(v15, 0x1000u, 0, "ret_array[%d].reg_data %08x", v27, *(_DWORD *)(a4 + 12 * v27));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_reg_io_base.c",
        154,
        "sync_get_core_reg_base5",
        23,
        1964,
        20,
        v15);
      ++v27;
    }
    else
    {
      v28 = 2;
    }
  }
  *a5 = v27;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 944));
  return v28;
}
