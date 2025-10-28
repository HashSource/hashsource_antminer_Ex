int __fastcall get_special_core_reg(int a1)
{
  int v1; // r11
  int v2; // r0
  char *v3; // r4
  int v4; // r0
  char *v5; // r6
  int v6; // r0
  int v8; // r0
  int v9; // [sp+30h] [bp-103Ch]
  char *ptr; // [sp+38h] [bp-1034h]
  int v12; // [sp+3Ch] [bp-1030h]
  int v13; // [sp+48h] [bp-1024h] BYREF
  _BYTE v14[4100]; // [sp+68h] [bp-1004h] BYREF

  V_LOCK(a1);
  v1 = 0;
  v2 = logfmt_raw((int)v14, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "get_special_core_reg",
    20,
    8279,
    20,
    v14);
  v12 = 0;
  ptr = (char *)malloc(0x600u);
  do
  {
    v3 = ptr;
    v4 = sub_5C6A4(a1, v1, 255, 81, ptr);
    v9 = v4;
    if ( v4 <= 0 )
      goto LABEL_8;
    v5 = &ptr[12 * v4];
    do
    {
      V_LOCK(v4);
      v3 += 12;
      v6 = logfmt_raw((int)v14, 0x1000u);
      V_UNLOCK(v6);
      v4 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/backend/backend_eth/backend_eth.c",
             154,
             "get_special_core_reg",
             20,
             8286,
             20,
             v14);
    }
    while ( v3 != v5 );
    if ( v9 != 16 )
    {
LABEL_8:
      V_LOCK(v4);
      v12 = 1;
      V_INT((int)&v13, "chain");
      v8 = logfmt_raw((int)v14, 0x1000u);
      V_UNLOCK(v8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_eth/backend_eth.c",
        154,
        "get_special_core_reg",
        20,
        8291,
        100,
        v14);
    }
    ++v1;
  }
  while ( v1 != 8 );
  free(ptr);
  return v12;
}
