int __fastcall sync_get_dag_node_rvn(int a1, int a2, int a3, int *a4, unsigned __int64 a5)
{
  int v6; // r2
  unsigned __int16 v7; // r0
  int v8; // r4
  _BYTE v14[44]; // [sp+20h] [bp-112Ch] BYREF
  _DWORD v15[2]; // [sp+1020h] [bp-12Ch] BYREF
  unsigned __int8 v16; // [sp+1028h] [bp-124h] BYREF
  unsigned __int8 v17; // [sp+1029h] [bp-123h]
  char v18[2]; // [sp+102Ah] [bp-122h] BYREF
  unsigned __int8 v19; // [sp+102Ch] [bp-120h]
  unsigned int v20; // [sp+102Dh] [bp-11Fh]
  _BYTE v21[64]; // [sp+1031h] [bp-11Bh] BYREF
  __int16 v22; // [sp+1131h] [bp-1Bh]
  __int16 v23; // [sp+1136h] [bp-16h]
  int v24; // [sp+1138h] [bp-14h]
  int v25; // [sp+113Ch] [bp-10h]

  if ( *(_BYTE *)(a1 + 276) != 1 )
    return 4;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 944));
  queue_clear(*(_DWORD *)(a1 + 908));
  v25 = 0;
  v24 = 0;
  sub_34579C(a5, 0x3E8u);
  v15[1] = 1000000 * v6;
  v15[0] = sub_34579C(a5, 0x3E8u);
  while ( v25 < a2 )
  {
    if ( queue_dequeue_for(*(_DWORD *)(a1 + 908), (char *)&v16, 0x10Bu, v15) == 110 )
    {
      v24 = 3;
      break;
    }
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, "[DAG] header:%02x%02x chip_addr:%02x", v16, v17, v19);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_reg_io_base.c",
      154,
      "sync_get_dag_node_rvn",
      21,
      342,
      20,
      v14);
    if ( v16 != 170 || v17 != 85 )
    {
      v24 = 1;
      break;
    }
    v7 = BM_CRC16(v18, 263);
    v23 = HIBYTE(v7) | (v7 << 8);
    if ( v23 == v22 )
    {
      *(_BYTE *)(a3 + 268 * v25 + 2) = v19;
      v8 = a3 + 268 * v25;
      *(_DWORD *)(v8 + 4) = reverse_byte_order_32(v20);
      memcpy((void *)(a3 + 268 * v25++ + 8), v21, 0x40u);
    }
    else
    {
      v24 = 2;
    }
  }
  *a4 = v25;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 944));
  return v24;
}
