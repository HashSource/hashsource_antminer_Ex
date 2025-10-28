int __fastcall sync_get_dag_base(int a1, int a2, int a3, int *a4, unsigned __int64 a5)
{
  int v6; // r2
  unsigned __int16 v7; // r0
  unsigned int *v8; // r4
  __int16 *v9; // r12
  _DWORD *v10; // r5
  int v11; // r1
  int v12; // r2
  int v13; // r3
  _BYTE v19[48]; // [sp+24h] [bp-1070h] BYREF
  _DWORD v20[2]; // [sp+1024h] [bp-70h] BYREF
  unsigned __int8 v21; // [sp+102Ch] [bp-68h] BYREF
  unsigned __int8 v22; // [sp+102Dh] [bp-67h]
  char v23; // [sp+102Eh] [bp-66h] BYREF
  unsigned __int8 v24; // [sp+102Fh] [bp-65h]
  unsigned int v25; // [sp+1030h] [bp-64h]
  char v26; // [sp+1034h] [bp-60h] BYREF
  __int16 v27; // [sp+1074h] [bp-20h] BYREF
  __int16 v28; // [sp+1076h] [bp-1Eh]
  int v29; // [sp+1078h] [bp-1Ch]
  int v30; // [sp+107Ch] [bp-18h]

  if ( *(_BYTE *)(a1 + 276) != 1 )
    return 4;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 944));
  queue_clear(*(_DWORD *)(a1 + 908));
  v30 = 0;
  v29 = 0;
  sub_34579C(a5, 0x3E8u);
  v20[1] = 1000000 * v6;
  v20[0] = sub_34579C(a5, 0x3E8u);
  while ( v30 < a2 )
  {
    if ( queue_dequeue_for(*(_DWORD *)(a1 + 908), (char *)&v21, 0x4Au, v20) == 110 )
    {
      v29 = 3;
      break;
    }
    V_LOCK();
    logfmt_raw(v19, 0x1000u, 0, "[DAG] header:%02x%02x chip_addr:%02x", v21, v22, v24);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_reg_io_base.c",
      154,
      "sync_get_dag_base",
      17,
      284,
      20,
      v19);
    if ( v21 != 170 || v22 != 85 )
    {
      v29 = 1;
      break;
    }
    v7 = BM_CRC16(&v23, 70);
    v28 = HIBYTE(v7) | (v7 << 8);
    if ( v28 == v27 )
    {
      *(_BYTE *)(a3 + 76 * v30 + 4) = v24;
      v8 = (unsigned int *)(a3 + 76 * v30);
      *v8 = reverse_byte_order_32(v25);
      v9 = (__int16 *)&v26;
      v10 = (_DWORD *)(a3 + 76 * v30 + 10);
      do
      {
        v11 = *((_DWORD *)v9 + 1);
        v12 = *((_DWORD *)v9 + 2);
        v13 = *((_DWORD *)v9 + 3);
        *v10 = *(_DWORD *)v9;
        v10[1] = v11;
        v10[2] = v12;
        v10[3] = v13;
        v9 += 8;
        v10 += 4;
      }
      while ( v9 != &v27 );
      ++v30;
    }
    else
    {
      v29 = 2;
    }
  }
  *a4 = v30;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 944));
  return v29;
}
