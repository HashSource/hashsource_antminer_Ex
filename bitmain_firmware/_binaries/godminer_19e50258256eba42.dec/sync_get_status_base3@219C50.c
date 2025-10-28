int __fastcall sync_get_status_base3(int a1, int a2, int a3, int *a4, unsigned __int64 a5)
{
  int v6; // r2
  int v7; // r4
  _BYTE v13[40]; // [sp+2Ch] [bp-1028h] BYREF
  _DWORD v14[2]; // [sp+102Ch] [bp-28h] BYREF
  unsigned __int8 v15; // [sp+1034h] [bp-20h] BYREF
  unsigned __int8 v16; // [sp+1035h] [bp-1Fh]
  unsigned __int8 v17; // [sp+1036h] [bp-1Eh] BYREF
  int v18; // [sp+1037h] [bp-1Dh]
  unsigned __int8 v19; // [sp+103Bh] [bp-19h]
  char v20; // [sp+103Ch] [bp-18h]
  int v21; // [sp+1040h] [bp-14h]
  int v22; // [sp+1044h] [bp-10h]

  if ( *(_BYTE *)(a1 + 276) != 1 )
    return 4;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 944));
  queue_clear(*(_DWORD *)(a1 + 908));
  v22 = 0;
  v21 = 0;
  sub_34579C(a5, 0x3E8u);
  v14[1] = 1000000 * v6;
  v14[0] = sub_34579C(a5, 0x3E8u);
  while ( v22 < a2 )
  {
    if ( queue_dequeue_for(*(_DWORD *)(a1 + 908), (char *)&v15, 9u, v14) == 110 )
    {
      v21 = 3;
      break;
    }
    V_LOCK();
    logfmt_raw(
      v13,
      0x1000u,
      0,
      "header:%02x%02x chip_addr:%02x, reg value:%08x, reg addr:%02x",
      v15,
      v16,
      v19,
      v18,
      v17);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_reg_io_base.c",
      154,
      "sync_get_status_base3",
      21,
      1596,
      20,
      v13);
    if ( v15 != 170 || v16 != 85 )
    {
      v21 = 1;
      break;
    }
    v7 = v20 & 0x1F;
    if ( v7 == BM_CRC5(&v17, 0x33u) )
    {
      *(_BYTE *)(a3 + 12 * v22 + 4) = v19;
      *(_WORD *)(a3 + 12 * v22 + 6) = v17;
      *(_DWORD *)(a3 + 12 * v22++) = v18;
    }
    else
    {
      v21 = 2;
    }
  }
  *a4 = v22;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 944));
  return v21;
}
