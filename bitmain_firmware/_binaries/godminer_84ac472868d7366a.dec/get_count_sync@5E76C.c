int __fastcall get_count_sync(int a1, int a2)
{
  int v4; // r0
  char *v5; // r11
  int v6; // r0
  int v7; // r0
  char *v8; // r6
  char *v9; // r4
  int v10; // r0
  _BYTE v12[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK(a1);
  v4 = logfmt_raw((int)v12, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "get_count_sync",
    14,
    294,
    20,
    v12);
  v5 = (char *)malloc(0x600u);
  v6 = sub_5C50C(a1, a2, 202, v5);
  if ( v6 > 0 )
  {
    v7 = 3 * v6;
    v8 = &v5[4 * v7];
    v9 = v5;
    do
    {
      V_LOCK(v7);
      v9 += 12;
      v10 = logfmt_raw((int)v12, 0x1000u);
      V_UNLOCK(v10);
      v7 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/backend/backend_eth/backend_eth.c",
             154,
             "get_count_sync",
             14,
             299,
             20,
             v12);
    }
    while ( v9 != v8 );
  }
  free(v5);
  return 0;
}
