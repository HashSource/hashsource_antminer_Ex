int __fastcall get_chip_dag_packet_num(int a1)
{
  int v2; // r4
  unsigned int v3; // r0
  int v4; // r0
  int v5; // r7
  unsigned int v6; // r0
  int v7; // r10
  int v8; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r8
  _DWORD *v14; // r4
  char *v15; // r7
  unsigned int v16; // r3
  unsigned __int64 v17; // r10
  int v18; // r0
  int v19; // r0
  unsigned __int64 s; // [sp+38h] [bp-10F4h]
  _DWORD *ptr; // [sp+40h] [bp-10ECh]
  char *v22; // [sp+44h] [bp-10E8h]
  int v23; // [sp+60h] [bp-10CCh]
  int v24; // [sp+64h] [bp-10C8h]
  char v25[32]; // [sp+68h] [bp-10C4h] BYREF
  int v26; // [sp+88h] [bp-10A4h] BYREF
  char v27[32]; // [sp+A8h] [bp-1084h] BYREF
  int v28; // [sp+C8h] [bp-1064h] BYREF
  char v29[32]; // [sp+E8h] [bp-1044h] BYREF
  int v30; // [sp+108h] [bp-1024h] BYREF
  _BYTE v31[4100]; // [sp+128h] [bp-1004h] BYREF

  v2 = 0;
  ptr = malloc(0x60u);
  v22 = (char *)malloc(0x60u);
  while ( 1 )
  {
    v3 = sub_7022C(a1, 86, ptr);
    if ( v3 == 8 )
      break;
    V_LOCK(v3);
    V_INT((int)v25, "chain");
    ++v2;
    v4 = logfmt_raw((int)v31, 0x1000u);
    V_UNLOCK(v4);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
      174,
      "get_chip_dag_packet_num",
      23,
      1572,
      100,
      v31);
    if ( v2 == 5 )
    {
      v24 = 12;
      goto LABEL_6;
    }
    usleep(0x2710u);
  }
  v24 = 0;
LABEL_6:
  v5 = 0;
  while ( 1 )
  {
    v6 = sub_7022C(a1, 83, v22);
    v7 = v6;
    if ( v6 == 8 )
      goto LABEL_14;
    V_LOCK(v6);
    V_INT((int)&v26, "chain");
    ++v5;
    v8 = logfmt_raw((int)v31, 0x1000u);
    V_UNLOCK(v8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
      174,
      "get_chip_dag_packet_num",
      23,
      1586,
      100,
      v31);
    if ( v5 == 5 )
      break;
    usleep(0x2710u);
  }
  if ( !v7 )
  {
LABEL_11:
    v24 = 12;
    goto LABEL_12;
  }
  V_LOCK(10000);
  v24 = 12;
  V_INT((int)v27, "chain");
  v10 = logfmt_raw((int)v31, 0x1000u);
  V_UNLOCK(v10);
  v6 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-"
         "origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
         174,
         "get_chip_dag_packet_num",
         23,
         1599,
         100,
         v31);
LABEL_14:
  s = (unsigned __int64)(bswap32(*ptr) & 0x7FFFFFFF) << 6;
  if ( s )
  {
    V_LOCK(v6);
    V_INT((int)v29, "chain");
    v11 = logfmt_raw((int)v31, 0x1000u);
    V_UNLOCK(v11);
    v12 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
            174,
            "get_chip_dag_packet_num",
            23,
            1611,
            60,
            v31);
    if ( v7 > 1 )
    {
      v13 = 1;
      v14 = ptr;
      v15 = v22;
      v23 = v7;
      do
      {
        v16 = v14[3];
        ++v13;
        v15 += 12;
        v14 += 3;
        v17 = (unsigned __int64)(bswap32(v16) & 0x7FFFFFFF) << 6;
        V_LOCK(v12);
        V_INT((int)&v30, "chain");
        v18 = logfmt_raw((int)v31, 0x1000u);
        V_UNLOCK(v18);
        v12 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/go"
                "dminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
                174,
                "get_chip_dag_packet_num",
                23,
                1617,
                60,
                v31);
        if ( s != v17 )
          goto LABEL_11;
      }
      while ( v13 != v23 );
    }
  }
  else
  {
    V_LOCK(v6);
    v24 = 12;
    V_INT((int)&v28, "chain");
    v19 = logfmt_raw((int)v31, 0x1000u);
    V_UNLOCK(v19);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
      174,
      "get_chip_dag_packet_num",
      23,
      1607,
      100,
      v31);
  }
LABEL_12:
  free(ptr);
  free(v22);
  return v24;
}
