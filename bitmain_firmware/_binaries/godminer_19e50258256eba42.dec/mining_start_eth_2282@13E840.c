int __fastcall mining_start_eth_2282(int a1)
{
  _BYTE v4[20]; // [sp+30h] [bp-12D4h] BYREF
  char src[64]; // [sp+1030h] [bp-2D4h] BYREF
  char s[512]; // [sp+1070h] [bp-294h] BYREF
  _DWORD v7[7]; // [sp+1270h] [bp-94h] BYREF
  int v8; // [sp+128Ch] [bp-78h]
  _DWORD v9[7]; // [sp+1290h] [bp-74h] BYREF
  int v10; // [sp+12ACh] [bp-58h]
  _DWORD v11[7]; // [sp+12B0h] [bp-54h] BYREF
  int v12; // [sp+12CCh] [bp-38h]
  _DWORD v13[7]; // [sp+12D0h] [bp-34h] BYREF
  int v14; // [sp+12ECh] [bp-18h]
  int i; // [sp+12F4h] [bp-10h]

  V_LOCK();
  sub_FBD60((int)v7, *(int *)(a1 + 272));
  logfmt_raw(v4, 0x1000u, 0, v8, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v8, "mining_start_eth_2282...");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "mining_start_eth_2282",
    21,
    10066,
    40,
    v4);
  memset(s, 0, sizeof(s));
  memset(src, 0, sizeof(src));
  if ( dag_gen_eth_2282(a1) )
    return 46;
  if ( case_select == 14 )
    outline_mining_eth_2282(a1);
  if ( case_select == 24 )
  {
    single_core_test_eth_2282(a1);
    V_LOCK();
    sub_FBD60((int)v9, *(int *)(a1 + 272));
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
      "single_core_test_eth_2282 end...");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "mining_start_eth_2282",
      21,
      10081,
      40,
      v4);
    printf("chain-%d single_core_test_eth_2282 end...\n", *(_DWORD *)(a1 + 272));
    while ( 1 )
      ;
  }
  for ( i = 0; i <= 17; ++i )
  {
    if ( !sweep_freq_0[i] && sweep_end <= 99 )
    {
      sweep_end = i;
      V_LOCK();
      sub_FBD60((int)v11, *(int *)(a1 + 272));
      logfmt_raw(v4, 0x1000u, 0, v12, v11[0], v11[1], v11[2], v11[3], v11[4], v11[5], v11[6], v12, "sweep_end: %d", i);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "mining_start_eth_2282",
        21,
        10089,
        60,
        v4);
    }
    sprintf(src, "%u ", sweep_freq_0[i]);
    strcat(s, src);
  }
  V_LOCK();
  sub_FBD60((int)v13, *(int *)(a1 + 272));
  logfmt_raw(v4, 0x1000u, 0, v14, v13[0], v13[1], v13[2], v13[3], v13[4], v13[5], v13[6], v14, "sweep_freq_0: %s", s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "mining_start_eth_2282",
    21,
    10094,
    40,
    v4);
  printf("chain-%d sweep_freq_0: %s\n", *(_DWORD *)(a1 + 272), s);
  memset(s, 0, sizeof(s));
  memset(src, 0, sizeof(src));
  return 0;
}
