int __fastcall check_d54_one_lane(int a1, char a2, int a3, __int16 a4, unsigned __int8 a5)
{
  int v7; // r0
  int v8; // r5
  int v9; // r2
  int back_1_chip; // r0
  int v11; // r3
  int v12; // r0
  int v14; // r0
  int v16; // [sp+44h] [bp-1070h]
  int v18; // [sp+50h] [bp-1064h] BYREF
  char v19[4]; // [sp+70h] [bp-1044h] BYREF
  int v20; // [sp+74h] [bp-1040h]
  _BYTE var1004[4112]; // [sp+B0h] [bp-1004h] BYREF

  V_LOCK(a1);
  v7 = logfmt_raw((int)var1004, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_d54_one_lane",
    18,
    3430,
    60,
    var1004);
  v8 = 21;
  v9 = a5;
  if ( a5 )
    v9 = 1;
  v16 = v9;
  do
  {
    usleep((__useconds_t)&stru_1869C.st_value);
    back_1_chip = serdes_apb_read_back_1_chip(a1, a2, a3, (unsigned __int16)(a4 << 12) | 0x36, (int)v19);
    v11 = v16;
    if ( !back_1_chip )
      v11 = 0;
    if ( v11 )
    {
      if ( (a5 & ~v20) != 0 )
        goto LABEL_8;
    }
    else if ( a5 || (v20 & 8) != 0 )
    {
LABEL_8:
      V_LOCK(back_1_chip);
      V_INT((int)&v18, "chain");
      v12 = logfmt_raw((int)var1004, 0x1000u);
      V_UNLOCK(v12);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_eth/backend_eth.c",
        154,
        "check_d54_one_lane",
        18,
        3443,
        100,
        var1004);
      return 0;
    }
    V_LOCK(back_1_chip);
    v14 = logfmt_raw((int)var1004, 0x1000u);
    V_UNLOCK(v14);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "check_d54_one_lane",
      18,
      3440,
      20,
      var1004);
    --v8;
  }
  while ( v8 );
  return 0;
}
