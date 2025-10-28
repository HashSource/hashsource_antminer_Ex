int __fastcall sync_get_dag_high_speed_2282(int a1, unsigned int a2, int a3, unsigned int *a4, int a5)
{
  unsigned __int16 v6; // r0
  unsigned int *v7; // r4
  unsigned int v8; // r0
  _DWORD v13[35]; // [sp+24h] [bp-1150h] BYREF
  _BYTE v14[68]; // [sp+B0h] [bp-10C4h] BYREF
  struct timespec v15; // [sp+10B0h] [bp-C4h] BYREF
  struct timespec tp; // [sp+10B8h] [bp-BCh] BYREF
  unsigned int v17; // [sp+10C0h] [bp-B4h] BYREF
  unsigned int dest[35]; // [sp+10C4h] [bp-B0h] BYREF
  int v19; // [sp+1150h] [bp-24h]
  unsigned __int16 v20; // [sp+1156h] [bp-1Eh]
  int v21; // [sp+1158h] [bp-1Ch]
  unsigned int i; // [sp+115Ch] [bp-18h]
  int v23; // [sp+1160h] [bp-14h]
  int v24; // [sp+1164h] [bp-10h]

  v24 = 0;
  if ( *(_BYTE *)(a1 + 276) != 1 )
    return 4;
  v23 = 0;
  v17 = 0;
  v21 = a5;
  clock_gettime(1, &tp);
  while ( v17 < a2 )
  {
    usleep(2u);
    get_ltc_package_count_evb(&v17);
    clock_gettime(1, &v15);
    v19 = 1000000 * (v15.tv_sec - tp.tv_sec) + (v15.tv_nsec - tp.tv_nsec) / 1000;
    if ( v19 > v21 )
    {
      V_LOCK();
      logfmt_raw(v14, 0x1000u, 0, "Timed out after %ld microseconds", v19);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_reg_io_base.c",
        154,
        "sync_get_dag_high_speed_2282",
        28,
        405,
        40,
        v14);
      goto LABEL_17;
    }
  }
  ltc_dev_init();
  for ( i = 0; i < a2; ++i )
  {
    memset(v13, 0, 0x8Au);
    get_ltc_138byte_data(v13, i, 0, 0);
    memcpy(dest, v13, 0x8Au);
    V_LOCK();
    logfmt_raw(
      v14,
      0x1000u,
      0,
      "[LTC] header:%02x%02x chip_addr:%02x",
      LOBYTE(dest[0]),
      BYTE1(dest[0]),
      HIBYTE(dest[0]));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_reg_io_base.c",
      154,
      "sync_get_dag_high_speed_2282",
      28,
      417,
      20,
      v14);
    if ( LOBYTE(dest[0]) != 170 || BYTE1(dest[0]) != 85 )
    {
      v24 = 1;
      goto LABEL_17;
    }
    v6 = BM_CRC16((char *)dest + 2, 134);
    v20 = HIBYTE(v6) | (v6 << 8);
    if ( v20 == LOWORD(dest[34]) )
    {
      *(_BYTE *)(a3 + 148 * v23 + 5) = HIBYTE(dest[0]);
      v7 = (unsigned int *)(a3 + 148 * v23);
      *v7 = reverse_byte_order_32(dest[1]);
      V_LOCK();
      v8 = reverse_byte_order_32(dest[1]);
      logfmt_raw(v14, 0x1000u, 0, "data_bist_num :%d", v8);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_reg_io_base.c",
        154,
        "sync_get_dag_high_speed_2282",
        28,
        431,
        40,
        v14);
      memcpy((void *)(a3 + 148 * v23 + 18), &dest[2], 0x80u);
    }
    else
    {
      v24 = 2;
    }
  }
  ltc_dev_uninit();
LABEL_17:
  *a4 = v17;
  return v24;
}
