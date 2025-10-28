int __fastcall sync_get_status_base5(int a1, int a2, int a3, int *a4, unsigned __int64 a5)
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
  unsigned __int8 v20; // [sp+103Ch] [bp-18h]
  char v21; // [sp+103Dh] [bp-17h]
  int v22; // [sp+1040h] [bp-14h]
  int v23; // [sp+1044h] [bp-10h]

  if ( *(_BYTE *)(a1 + 276) != 1 )
    return 4;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 944));
  queue_clear(*(_DWORD *)(a1 + 908));
  v22 = 0;
  v23 = 0;
  sub_34579C(a5, 0x3E8u);
  v14[1] = 1000000 * v6;
  v14[0] = sub_34579C(a5, 0x3E8u);
  while ( v22 < a2 )
  {
    if ( queue_dequeue_for(*(_DWORD *)(a1 + 908), (char *)&v15, 0xAu, v14) == 110 )
    {
      V_LOCK();
      logfmt_raw(v13, 0x1000u, 0, "queue_dequeue end for timeout");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_reg_io_base.c",
        154,
        "sync_get_status_base5",
        21,
        1821,
        40,
        v13);
      v23 = 3;
      break;
    }
    if ( v15 != 170 || v16 != 85 )
    {
      v23 = 1;
      break;
    }
    v7 = v21 & 0x1F;
    if ( v7 == BM_CRC5(&v17, 0x3Bu) )
    {
      V_LOCK();
      logfmt_raw(
        v13,
        0x1000u,
        0,
        "header[0] %02x, header[1] %02x, length %02x, reg_value %08x, chip_addr %02x, reg_addr %02x",
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_reg_io_base.c",
        154,
        "sync_get_status_base5",
        21,
        1810,
        20,
        v13);
      *(_BYTE *)(a3 + 12 * v22 + 4) = v19;
      V_LOCK();
      logfmt_raw(v13, 0x1000u, 0, "ret_array[%d].chip_addr %02x", v22, *(unsigned __int8 *)(a3 + 12 * v22 + 4));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_reg_io_base.c",
        154,
        "sync_get_status_base5",
        21,
        1812,
        20,
        v13);
      *(_WORD *)(a3 + 12 * v22 + 6) = v20;
      V_LOCK();
      logfmt_raw(v13, 0x1000u, 0, "ret_array[%d].reg_addr %04x", v22, *(unsigned __int16 *)(a3 + 12 * v22 + 6));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_reg_io_base.c",
        154,
        "sync_get_status_base5",
        21,
        1814,
        20,
        v13);
      *(_DWORD *)(a3 + 12 * v22) = v18;
      V_LOCK();
      logfmt_raw(v13, 0x1000u, 0, "ret_array[%d].reg_data %08x", v22, *(_DWORD *)(a3 + 12 * v22));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_reg_io_base.c",
        154,
        "sync_get_status_base5",
        21,
        1816,
        20,
        v13);
      ++v22;
    }
    else
    {
      v23 = 2;
    }
  }
  *a4 = v22;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 944));
  return v23;
}
