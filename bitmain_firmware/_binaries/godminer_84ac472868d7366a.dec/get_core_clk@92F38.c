int __fastcall get_core_clk(int a1)
{
  int v1; // r0
  int v2; // r0
  unsigned int *v3; // r5
  unsigned int *v4; // r10
  int v5; // r0
  unsigned int v6; // r4
  int v7; // r0
  int v8; // r0
  unsigned int *v9; // r10
  unsigned int *v10; // r5
  int v11; // r0
  unsigned int v12; // r4
  int v13; // r0
  int v15; // [sp+2Ch] [bp-1030h]
  char *ptr; // [sp+30h] [bp-102Ch]
  int v18; // [sp+38h] [bp-1024h] BYREF
  _BYTE v19[4100]; // [sp+58h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)&v18, "chain");
  v15 = 0;
  v1 = logfmt_raw((int)v19, 0x1000u);
  V_UNLOCK(v1);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "get_core_clk",
    12,
    8349,
    60,
    v19);
  ptr = (char *)malloc(0x600u);
  do
  {
    v2 = sub_5C72C(a1, v15, 255, 121, ptr);
    if ( v2 > 0 )
    {
      v3 = (unsigned int *)ptr;
      v4 = (unsigned int *)&ptr[12 * v2];
      do
      {
        v5 = 146484375;
        v6 = bswap32(*v3);
        if ( v6 )
          v5 = sub_12D6A4(146484375, 0, v6, 0);
        V_LOCK(v5);
        v3 += 3;
        v7 = logfmt_raw((int)v19, 0x1000u);
        V_UNLOCK(v7);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_eth/backend_eth.c",
          154,
          "get_core_clk",
          12,
          8363,
          60,
          v19);
      }
      while ( v3 != v4 );
    }
    v8 = sub_5C72C(a1, v15, 255, 122, ptr);
    if ( v8 > 0 )
    {
      v9 = (unsigned int *)&ptr[12 * v8];
      v10 = (unsigned int *)ptr;
      do
      {
        v11 = 146484375;
        v12 = bswap32(*v10);
        if ( v12 )
          v11 = sub_12D6A4(146484375, 0, v12, 0);
        V_LOCK(v11);
        v10 += 3;
        v13 = logfmt_raw((int)v19, 0x1000u);
        V_UNLOCK(v13);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_eth/backend_eth.c",
          154,
          "get_core_clk",
          12,
          8373,
          60,
          v19);
      }
      while ( v10 != v9 );
    }
    ++v15;
  }
  while ( v15 != 8 );
  free(ptr);
  return 0;
}
