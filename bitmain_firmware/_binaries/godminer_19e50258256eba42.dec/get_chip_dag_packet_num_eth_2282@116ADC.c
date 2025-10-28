int __fastcall get_chip_dag_packet_num_eth_2282(int a1)
{
  const char *v2; // r3
  const char *v3; // r3
  _BYTE v6[76]; // [sp+40h] [bp-10CCh] BYREF
  _DWORD v7[7]; // [sp+1040h] [bp-CCh] BYREF
  int v8; // [sp+105Ch] [bp-B0h]
  _DWORD v9[7]; // [sp+1060h] [bp-ACh] BYREF
  int v10; // [sp+107Ch] [bp-90h]
  _DWORD v11[7]; // [sp+1080h] [bp-8Ch] BYREF
  int v12; // [sp+109Ch] [bp-70h]
  _DWORD v13[7]; // [sp+10A0h] [bp-6Ch] BYREF
  int v14; // [sp+10BCh] [bp-50h]
  __int64 v15; // [sp+10C0h] [bp-4Ch]
  __int64 v16; // [sp+10C8h] [bp-44h]
  __int64 v17; // [sp+10D0h] [bp-3Ch]
  int i; // [sp+10DCh] [bp-30h]
  int v19; // [sp+10E0h] [bp-2Ch]
  signed int v20; // [sp+10E4h] [bp-28h]
  void *ptr; // [sp+10E8h] [bp-24h]
  void *v22; // [sp+10ECh] [bp-20h]

  v19 = 0;
  ptr = malloc(0x48u);
  v22 = malloc(0x48u);
  v20 = sub_1062CC(a1, 86, ptr);
  if ( v20 != 6 )
  {
    V_LOCK();
    sub_FBD60((int)v7, *(int *)(a1 + 272));
    logfmt_raw(
      v6,
      0x1000u,
      0,
      v8,
      v7[0],
      v7[1],
      v7[2],
      v7[3],
      v7[4],
      v7[5],
      v7[6],
      v8,
      "get chip dag packet num failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "get_chip_dag_packet_num_eth_2282",
      32,
      2735,
      100,
      v6);
    v19 = 12;
  }
  v20 = sub_1062CC(a1, 83, v22);
  if ( v20 != 6 )
  {
    V_LOCK();
    sub_FBD60((int)v9, *(int *)(a1 + 272));
    logfmt_raw(
      v6,
      0x1000u,
      0,
      v10,
      v9[0],
      v9[1],
      v9[2],
      v9[3],
      v9[4],
      v9[5],
      v9[6],
      v10,
      "get chip dag crc status failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "get_chip_dag_packet_num_eth_2282",
      32,
      2742,
      100,
      v6);
    v19 = 12;
  }
  v17 = sub_FC76C(*(_DWORD *)ptr) & 0x7FFFFFFF;
  v16 = v17 << 6;
  if ( !(v17 << 6) )
    return 12;
  V_LOCK();
  sub_FBD60((int)v11, *(int *)(a1 + 272));
  if ( *(_DWORD *)v22 )
    v2 = "yes";
  else
    v2 = "no";
  logfmt_raw(
    v6,
    0x1000u,
    0,
    v12,
    v11[0],
    v11[1],
    v11[2],
    v11[3],
    v11[4],
    v11[5],
    v11[6],
    v12,
    "chip[%d] received dag size: %lld, crc error: %s",
    *((unsigned __int8 *)ptr + 4),
    v16,
    v2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "get_chip_dag_packet_num_eth_2282",
    32,
    2752,
    60,
    v6);
  for ( i = 1; i < v20; ++i )
  {
    v17 = sub_FC76C(*((_DWORD *)ptr + 3 * i)) & 0x7FFFFFFF;
    v15 = v17 << 6;
    V_LOCK();
    sub_FBD60((int)v13, *(int *)(a1 + 272));
    if ( *((_DWORD *)v22 + 3 * i) )
      v3 = "yes";
    else
      v3 = "no";
    logfmt_raw(
      v6,
      0x1000u,
      0,
      v14,
      v13[0],
      v13[1],
      v13[2],
      v13[3],
      v13[4],
      v13[5],
      v13[6],
      v14,
      "chip[%d] received dag size: %lld, crc error: %s",
      *((unsigned __int8 *)ptr + 12 * i + 4),
      v15,
      v3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "get_chip_dag_packet_num_eth_2282",
      32,
      2758,
      60,
      v6);
    if ( v16 != v15 )
      return 12;
  }
  if ( ptr )
    free(ptr);
  if ( v22 )
    free(v22);
  return v19;
}
