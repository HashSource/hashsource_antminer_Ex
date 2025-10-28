int __fastcall get_chip_dag_packet_num_rvn(int a1)
{
  const char *v1; // r3
  _BYTE v4[28]; // [sp+40h] [bp-109Ch] BYREF
  _DWORD v5[7]; // [sp+1040h] [bp-9Ch] BYREF
  int v6; // [sp+105Ch] [bp-80h]
  _DWORD v7[7]; // [sp+1060h] [bp-7Ch] BYREF
  int v8; // [sp+107Ch] [bp-60h]
  _DWORD v9[7]; // [sp+1080h] [bp-5Ch] BYREF
  int v10; // [sp+109Ch] [bp-40h]
  __int64 v11; // [sp+10A0h] [bp-3Ch]
  __int64 v12; // [sp+10A8h] [bp-34h]
  signed int i; // [sp+10B4h] [bp-28h]
  int v14; // [sp+10B8h] [bp-24h]
  signed int v15; // [sp+10BCh] [bp-20h]
  void *ptr; // [sp+10C0h] [bp-1Ch]
  void *v17; // [sp+10C4h] [bp-18h]

  v14 = 0;
  ptr = malloc(0x60u);
  v17 = malloc(0x60u);
  v15 = sub_1B3EC4(a1, 115, ptr);
  if ( v15 != 8 )
  {
    V_LOCK();
    sub_1A9DE8((int)v5, *(int *)(a1 + 272));
    logfmt_raw(
      v4,
      0x1000u,
      0,
      v6,
      v5[0],
      v5[1],
      v5[2],
      v5[3],
      v5[4],
      v5[5],
      v5[6],
      v6,
      "get chip dag packet num failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
      171,
      "get_chip_dag_packet_num_rvn",
      27,
      2091,
      100,
      v4);
    v14 = 12;
  }
  v15 = sub_1B3EC4(a1, 116, v17);
  if ( v15 != 8 )
  {
    V_LOCK();
    sub_1A9DE8((int)v7, *(int *)(a1 + 272));
    logfmt_raw(
      v4,
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
      "get chip dag crc status failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
      171,
      "get_chip_dag_packet_num_rvn",
      27,
      2098,
      100,
      v4);
    v14 = 12;
  }
  for ( i = 0; i < v15; ++i )
  {
    v12 = sub_1AA37C(*((_DWORD *)ptr + 3 * i)) & 0x7FFFFFFF;
    v11 = v12 << 6;
    V_LOCK();
    sub_1A9DE8((int)v9, *(int *)(a1 + 272));
    if ( *((_DWORD *)v17 + 3 * i) )
      v1 = "yes";
    else
      v1 = "no";
    logfmt_raw(
      v4,
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
      "chip[%d] received dag size: %lld, crc error: %s",
      *((unsigned __int8 *)ptr + 12 * i + 4),
      v11,
      v1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
      171,
      "get_chip_dag_packet_num_rvn",
      27,
      2107,
      60,
      v4);
  }
  free(ptr);
  free(v17);
  return v14;
}
