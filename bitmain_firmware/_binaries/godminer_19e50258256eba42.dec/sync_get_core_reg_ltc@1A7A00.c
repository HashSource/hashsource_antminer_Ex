int __fastcall sync_get_core_reg_ltc(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  char v7; // r0
  int v8; // r2
  int v9; // r4
  _BYTE v15[56]; // [sp+24h] [bp-1038h] BYREF
  _DWORD v16[2]; // [sp+1024h] [bp-38h] BYREF
  char v17[2]; // [sp+102Ch] [bp-30h] BYREF
  _BYTE v18[4]; // [sp+102Eh] [bp-2Eh] BYREF
  unsigned __int8 v19; // [sp+1032h] [bp-2Ah]
  unsigned __int8 v20; // [sp+1033h] [bp-29h]
  char v21; // [sp+1034h] [bp-28h]
  _DWORD v22[3]; // [sp+1038h] [bp-24h] BYREF
  unsigned int v23; // [sp+1044h] [bp-18h]
  int v24; // [sp+1048h] [bp-14h]
  int v25; // [sp+104Ch] [bp-10h]

  if ( *(_BYTE *)(a1 + 276) != 1 )
    return 4;
  LOWORD(v23) = 0;
  BYTE2(v23) = BYTE2(v23) & 0xF0 | *(_WORD *)(a2 + 10) & 0xF;
  HIWORD(v23) = HIWORD(v23) & 0xF00F | (16 * *(unsigned __int8 *)(a2 + 12));
  HIBYTE(v23) &= ~0x10u;
  HIBYTE(v23) &= ~0x20u;
  HIBYTE(v23) &= ~0x40u;
  HIBYTE(v23) = HIBYTE(v23) & 0x7F | ((*(_BYTE *)(a2 + 14) & 1) << 7);
  v22[0] = 109141;
  memset(&v22[1], 0, 7);
  BYTE2(v22[0]) = (16 * (*(_BYTE *)(a2 + 8) & 1)) | 1;
  BYTE2(v22[0]) = BYTE2(v22[0]) & 0x1F | 0x40;
  HIBYTE(v22[0]) = 9;
  LOBYTE(v22[1]) = *(_BYTE *)(a2 + 9);
  BYTE1(v22[1]) = 60;
  *(_DWORD *)((char *)&v22[1] + 2) = reverse_byte_order_32(v23);
  BYTE2(v22[2]) = BYTE2(v22[2]) & 0x9F | (32 * (*(_BYTE *)(a2 + 15) & 3));
  v7 = BM_CRC5((_BYTE *)v22 + 2, 8 * (HIBYTE(v22[0]) - 1));
  BYTE2(v22[2]) = BYTE2(v22[2]) & 0xE0 | v7 & 0x1F;
  if ( *(_BYTE *)(a2 + 8) != 1 && *(_BYTE *)(a2 + 14) != 1 )
    a3 = 1;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 944));
  queue_clear(*(_DWORD *)(a1 + 908));
  send_command_packet(a1, (unsigned __int8 *)v22, 0xBu);
  v24 = 0;
  v25 = 0;
  sub_34579C(a6, 0x3E8u);
  v16[1] = 1000000 * v8;
  v16[0] = sub_34579C(a6, 0x3E8u);
  while ( v24 < a3 )
  {
    if ( queue_dequeue_for(*(_DWORD *)(a1 + 908), v17, 9u, v16) == 110 )
    {
      v25 = 3;
      break;
    }
    if ( (unsigned __int8)v17[0] != 170 || v17[1] != 85 || (v21 & 0x20) != 0 || (v21 & 0x40) == 0 || (v21 & 0x80) == 0 )
    {
      v25 = 1;
      break;
    }
    if ( (v20 & 0x10) != 0 )
    {
      V_LOCK();
      logfmt_raw(v15, 0x1000u, 0, "core %d get parity", v19);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_ltc_1489/chip_reg_io_ltc_1489.c",
        175,
        "sync_get_core_reg_ltc",
        21,
        370,
        100,
        v15);
    }
    v9 = v21 & 0x1F;
    if ( v9 == BM_CRC5(v18, 0x33u) )
    {
      *(_BYTE *)(a4 + 12 * v24 + 4) = v18[3];
      *(_WORD *)(a4 + 12 * v24 + 6) = v20 & 0xF;
      *(_BYTE *)(a4 + 12 * v24 + 8) = v19;
      *(_DWORD *)(a4 + 12 * v24) = (((v20 & 0x20) != 0) << 24) | (v18[0] << 16) | (v18[1] << 8) | v18[2];
      *(_BYTE *)(a4 + 12 * v24++ + 9) = v20 >> 6;
    }
    else
    {
      v25 = 2;
    }
  }
  *a5 = v24;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 944));
  return v25;
}
