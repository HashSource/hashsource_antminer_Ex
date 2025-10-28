int __fastcall sync_get_ltc_base_2282(int a1, unsigned int a2, unsigned __int8 a3, int a4, unsigned int *a5, int a6)
{
  unsigned __int16 v7; // r0
  unsigned int *v8; // r4
  unsigned int v9; // r0
  _BYTE v15[24]; // [sp+4Ch] [bp-1098h] BYREF
  struct timespec v16; // [sp+104Ch] [bp-98h] BYREF
  struct timespec tp; // [sp+1054h] [bp-90h] BYREF
  unsigned int v18; // [sp+105Ch] [bp-88h] BYREF
  _DWORD v19[7]; // [sp+1060h] [bp-84h] BYREF
  int v20; // [sp+107Ch] [bp-68h]
  _DWORD v21[7]; // [sp+1080h] [bp-64h] BYREF
  int v22; // [sp+109Ch] [bp-48h]
  _DWORD v23[7]; // [sp+10A0h] [bp-44h] BYREF
  int v24; // [sp+10BCh] [bp-28h]
  int v25; // [sp+10C4h] [bp-20h]
  __int16 v26; // [sp+10CAh] [bp-1Ah]
  unsigned int i; // [sp+10CCh] [bp-18h]
  int v28; // [sp+10D0h] [bp-14h]
  int v29; // [sp+10D4h] [bp-10h]

  if ( *(_BYTE *)(a1 + 276) != 1 )
    return 4;
  v18 = 0;
  v28 = 0;
  v29 = a6;
  clock_gettime(1, &tp);
  while ( v18 < a2 )
  {
    get_ltc_package_count(&v18, *(_DWORD *)(a1 + 272), a3);
    clock_gettime(1, &v16);
    v25 = 1000000 * (v16.tv_sec - tp.tv_sec) + (v16.tv_nsec - tp.tv_nsec) / 1000;
    if ( v25 > v29 )
    {
      V_LOCK();
      sub_FBD60((int)v19, *(int *)(a1 + 272));
      logfmt_raw(
        v15,
        0x1000u,
        0,
        v20,
        v19[0],
        v19[1],
        v19[2],
        v19[3],
        v19[4],
        v19[5],
        v19[6],
        v20,
        "Timed out for chip-%d after %ld microseconds, val: %08x",
        a3,
        v25,
        v18);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "sync_get_ltc_base_2282",
        22,
        2901,
        40,
        v15);
      v18 = a2;
    }
  }
  V_LOCK();
  sub_FBD60((int)v21, *(int *)(a1 + 272));
  logfmt_raw(
    v15,
    0x1000u,
    0,
    v22,
    v21[0],
    v21[1],
    v21[2],
    v21[3],
    v21[4],
    v21[5],
    v21[6],
    v22,
    "chip-%d, val: %08x",
    a3,
    v18);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "sync_get_ltc_base_2282",
    22,
    2906,
    20,
    v15);
  for ( i = 0; i < v18; ++i )
  {
    get_ltc_138byte_data((_DWORD *)(a4 + 148 * i + 10), i, *(_DWORD *)(a1 + 272), a3);
    if ( *(unsigned __int8 *)(a4 + 148 * i + 10) != 170 || *(_BYTE *)(a4 + 148 * i + 11) != 85 )
    {
      v28 = 1;
      V_LOCK();
      sub_FBD60((int)v23, *(int *)(a1 + 272));
      logfmt_raw(
        v15,
        0x1000u,
        0,
        v24,
        v23[0],
        v23[1],
        v23[2],
        v23[3],
        v23[4],
        v23[5],
        v23[6],
        v24,
        "chip-id %d [LTC] header:%02x%02x chip_addr:%02x",
        a3,
        *(unsigned __int8 *)(a4 + 148 * i + 10),
        *(unsigned __int8 *)(a4 + 148 * i + 11),
        *(unsigned __int8 *)(a4 + 148 * i + 13));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "sync_get_ltc_base_2282",
        22,
        2918,
        40,
        v15);
      V_LOCK();
      logfmt_raw(v15, 0x1000u, 0, "package %d error!", i);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "sync_get_ltc_base_2282",
        22,
        2919,
        100,
        v15);
      break;
    }
    v7 = BM_CRC16((char *)(a4 + 148 * i + 12), 134);
    v26 = HIBYTE(v7) | (v7 << 8);
    if ( v26 == *(_WORD *)(a4 + 148 * i + 146) )
    {
      *(_BYTE *)(a4 + 148 * i + 5) = *(_BYTE *)(a4 + 148 * i + 13);
      v8 = (unsigned int *)(a4 + 148 * i);
      *v8 = reverse_byte_order_32(*(unsigned int *)((char *)v8 + 14));
      V_LOCK();
      v9 = reverse_byte_order_32(*(_DWORD *)(a4 + 148 * i + 14));
      logfmt_raw(v15, 0x1000u, 0, "data_bist_num :%d", v9);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "sync_get_ltc_base_2282",
        22,
        2931,
        20,
        v15);
    }
    else
    {
      v28 = 2;
    }
  }
  *a5 = v18;
  return v28;
}
