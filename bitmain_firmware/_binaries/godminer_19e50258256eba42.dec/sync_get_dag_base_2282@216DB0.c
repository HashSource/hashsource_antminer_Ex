int __fastcall sync_get_dag_base_2282(int a1, int a2, int a3, int *a4, unsigned int a5)
{
  unsigned __int16 v6; // r0
  unsigned int *v7; // r4
  unsigned int v8; // r0
  _BYTE v14[40]; // [sp+24h] [bp-10A8h] BYREF
  _DWORD v15[2]; // [sp+1024h] [bp-A8h] BYREF
  unsigned __int8 v16; // [sp+102Ch] [bp-A0h] BYREF
  unsigned __int8 v17; // [sp+102Dh] [bp-9Fh]
  char v18; // [sp+102Eh] [bp-9Eh] BYREF
  unsigned __int8 v19; // [sp+102Fh] [bp-9Dh]
  unsigned int v20; // [sp+1030h] [bp-9Ch]
  _BYTE src[128]; // [sp+1034h] [bp-98h] BYREF
  __int16 v22; // [sp+10B4h] [bp-18h]
  __int16 v23; // [sp+10B6h] [bp-16h]
  int v24; // [sp+10B8h] [bp-14h]
  int v25; // [sp+10BCh] [bp-10h]

  if ( *(_BYTE *)(a1 + 276) != 1 )
    return 4;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 944));
  queue_clear(*(_DWORD *)(a1 + 908));
  v24 = 0;
  v25 = 0;
  v15[1] = 1000000 * (a5 % 0x3E8);
  v15[0] = a5 / 0x3E8;
  while ( v24 < a2 )
  {
    if ( queue_dequeue_for(*(_DWORD *)(a1 + 908), (char *)&v16, 0x8Au, v15) == 110 )
    {
      v25 = 3;
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
      "sync_get_dag_base_2282",
      22,
      476,
      20,
      v14);
    if ( v16 != 170 || v17 != 85 )
    {
      v25 = 1;
      break;
    }
    v6 = BM_CRC16(&v18, 134);
    v23 = HIBYTE(v6) | (v6 << 8);
    if ( v23 == v22 )
    {
      *(_BYTE *)(a3 + 148 * v24 + 5) = v19;
      v7 = (unsigned int *)(a3 + 148 * v24);
      *v7 = reverse_byte_order_32(v20);
      V_LOCK();
      v8 = reverse_byte_order_32(v20);
      logfmt_raw(v14, 0x1000u, 0, "data_bist_num :%d", v8);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_reg_io_base.c",
        154,
        "sync_get_dag_base_2282",
        22,
        490,
        40,
        v14);
      memcpy((void *)(a3 + 148 * v24++ + 18), src, 0x80u);
    }
    else
    {
      v25 = 2;
    }
  }
  *a4 = v24;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 944));
  return v25;
}
