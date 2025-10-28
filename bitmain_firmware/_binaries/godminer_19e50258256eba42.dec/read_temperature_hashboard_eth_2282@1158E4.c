int __fastcall read_temperature_hashboard_eth_2282(int a1, int a2)
{
  _BYTE v5[40]; // [sp+3Ch] [bp-1128h] BYREF
  char src[4]; // [sp+103Ch] [bp-128h] BYREF
  char s[32]; // [sp+1040h] [bp-124h] BYREF
  int v8; // [sp+1060h] [bp-104h] BYREF
  int v9; // [sp+1064h] [bp-100h] BYREF
  int v10; // [sp+1068h] [bp-FCh] BYREF
  int v11; // [sp+106Ch] [bp-F8h] BYREF
  int v12; // [sp+1070h] [bp-F4h] BYREF
  int v13; // [sp+1074h] [bp-F0h] BYREF
  _DWORD v14[7]; // [sp+1078h] [bp-ECh] BYREF
  int v15; // [sp+1094h] [bp-D0h]
  _DWORD v16[7]; // [sp+1098h] [bp-CCh] BYREF
  int v17; // [sp+10B4h] [bp-B0h]
  _DWORD v18[7]; // [sp+10B8h] [bp-ACh] BYREF
  int v19; // [sp+10D4h] [bp-90h]
  _DWORD v20[7]; // [sp+10D8h] [bp-8Ch] BYREF
  int v21; // [sp+10F4h] [bp-70h]
  _DWORD v22[7]; // [sp+10F8h] [bp-6Ch] BYREF
  int v23; // [sp+1114h] [bp-50h]
  _DWORD v24[7]; // [sp+1118h] [bp-4Ch] BYREF
  int v25; // [sp+1134h] [bp-30h]
  int n; // [sp+1138h] [bp-2Ch]
  int ii; // [sp+113Ch] [bp-28h]
  int v28; // [sp+1140h] [bp-24h]
  void *ptr; // [sp+1144h] [bp-20h]
  int i; // [sp+1148h] [bp-1Ch]
  int k; // [sp+114Ch] [bp-18h]
  int j; // [sp+1150h] [bp-14h]
  int m; // [sp+1154h] [bp-10h]

  v13 = 0;
  v12 = 0;
  v11 = 0;
  v28 = -2;
  v9 = -64;
  v8 = -64;
  memset(s, 0, sizeof(s));
  *(_DWORD *)src = 0;
  ptr = malloc(0x48u);
  if ( !dword_C0F6E0 )
  {
    sub_106BA8(a1, 28, 210771712);
    sub_1062CC(a1, 28, ptr);
    sub_106BA8(a1, 64, 0);
    sub_1036B0(a1, 9, 4, 1, &v10, &v11, 0);
    usleep(0x30D40u);
    dword_C0F6E0 = 1;
  }
  for ( i = 1; i < v28 - 1; ++i )
    *(_DWORD *)(a2 + 8 * i) = -64;
  sub_1036B0(a1, 0, 0, 0, &v9, &v13, 0);
  for ( j = 1; j < v28 - 1; ++j )
  {
    if ( v13 )
    {
      if ( v9 >= -63 )
      {
        V_LOCK();
        sub_FBD60((int)v18, *(int *)(a1 + 272));
        logfmt_raw(
          v5,
          0x1000u,
          0,
          v19,
          v18[0],
          v18[1],
          v18[2],
          v18[3],
          v18[4],
          v18[5],
          v18[6],
          v19,
          "got local temp[%d], sensor[%d]",
          v9,
          j);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "read_temperature_hashboard_eth_2282",
          35,
          2574,
          40,
          v5);
        *(_DWORD *)(a2 + 8 * j) = v9;
      }
      else
      {
        v9 = -64;
        *(_DWORD *)(a2 + 8 * j) = 0;
        V_LOCK();
        sub_FBD60((int)v16, *(int *)(a1 + 272));
        logfmt_raw(
          v5,
          0x1000u,
          0,
          v17,
          v16[0],
          v16[1],
          v16[2],
          v16[3],
          v16[4],
          v16[5],
          v16[6],
          v17,
          "got uneffective local temp, sensor[%d]",
          j);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "read_temperature_hashboard_eth_2282",
          35,
          2570,
          100,
          v5);
      }
    }
    else
    {
      V_LOCK();
      sub_FBD60((int)v14, *(int *)(a1 + 272));
      logfmt_raw(
        v5,
        0x1000u,
        0,
        v15,
        v14[0],
        v14[1],
        v14[2],
        v14[3],
        v14[4],
        v14[5],
        v14[6],
        v15,
        "got local temp %d failed!",
        j);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "read_temperature_hashboard_eth_2282",
        35,
        2563,
        40,
        v5);
    }
  }
  for ( k = 0; k < v28; ++k )
    *(_DWORD *)(a2 + 8 * k + 4) = -64;
  sub_1036B0(a1, 1, 0, 0, &v8, &v12, 0);
  for ( m = 1; m < v28 - 1; ++m )
  {
    if ( v12 )
    {
      if ( v8 >= -63 )
      {
        V_LOCK();
        sub_FBD60((int)v24, *(int *)(a1 + 272));
        logfmt_raw(
          v5,
          0x1000u,
          0,
          v25,
          v24[0],
          v24[1],
          v24[2],
          v24[3],
          v24[4],
          v24[5],
          v24[6],
          v25,
          "got local temp[%d], sensor[%d]",
          v8,
          m);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "read_temperature_hashboard_eth_2282",
          35,
          2599,
          40,
          v5);
        *(_DWORD *)(a2 + 8 * m + 4) = v8;
      }
      else
      {
        v8 = -64;
        *(_DWORD *)(a2 + 8 * m + 4) = 0;
        V_LOCK();
        sub_FBD60((int)v22, *(int *)(a1 + 272));
        logfmt_raw(
          v5,
          0x1000u,
          0,
          v23,
          v22[0],
          v22[1],
          v22[2],
          v22[3],
          v22[4],
          v22[5],
          v22[6],
          v23,
          "got uneffective remote temp, sensor[%d]",
          m);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "read_temperature_hashboard_eth_2282",
          35,
          2595,
          100,
          v5);
      }
    }
    else
    {
      V_LOCK();
      sub_FBD60((int)v20, *(int *)(a1 + 272));
      logfmt_raw(
        v5,
        0x1000u,
        0,
        v21,
        v20[0],
        v20[1],
        v20[2],
        v20[3],
        v20[4],
        v20[5],
        v20[6],
        v21,
        "got remote temp %d failed!",
        m);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "read_temperature_hashboard_eth_2282",
        35,
        2588,
        40,
        v5);
    }
  }
  for ( n = 1; n < v28 - 1; ++n )
  {
    sprintf(src, "%02x ", *(_DWORD *)(a2 + 8 * n));
    strcat(s, src);
    memset(src, 0, sizeof(src));
  }
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "================================= temp local %s", s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "read_temperature_hashboard_eth_2282",
    35,
    2609,
    40,
    v5);
  memset(s, 0, sizeof(s));
  for ( ii = 1; ii < v28 - 1; ++ii )
  {
    sprintf(src, "%02x ", *(_DWORD *)(a2 + 8 * ii + 4));
    strcat(s, src);
    memset(src, 0, sizeof(src));
  }
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "================================= temp remote %s", s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "read_temperature_hashboard_eth_2282",
    35,
    2617,
    40,
    v5);
  memset(s, 0, sizeof(s));
  if ( ptr )
    free(ptr);
  return 0;
}
