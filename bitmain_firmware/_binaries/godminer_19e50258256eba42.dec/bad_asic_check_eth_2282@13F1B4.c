int __fastcall bad_asic_check_eth_2282(int a1)
{
  _BYTE v4[4672]; // [sp+34h] [bp-12B8h] BYREF
  int v5; // [sp+1274h] [bp-78h]
  int v6; // [sp+1278h] [bp-74h]
  int v7; // [sp+127Ch] [bp-70h]
  _WORD s[19]; // [sp+1280h] [bp-6Ch] BYREF
  __int16 v9; // [sp+12A6h] [bp-46h] BYREF
  _DWORD v10[7]; // [sp+12A8h] [bp-44h] BYREF
  int v11; // [sp+12C4h] [bp-28h]
  int v12; // [sp+12CCh] [bp-20h]
  int v13; // [sp+12D0h] [bp-1Ch]
  FILE *stream; // [sp+12D4h] [bp-18h]
  int i; // [sp+12D8h] [bp-14h]
  int v16; // [sp+12DCh] [bp-10h]

  V_LOCK();
  sub_FBD60((int)v10, *(int *)(a1 + 272));
  logfmt_raw(
    v4,
    0x1000u,
    0,
    v11,
    v10[0],
    v10[1],
    v10[2],
    v10[3],
    v10[4],
    v10[5],
    v10[6],
    v11,
    "%s...",
    "bad_asic_check_eth_2282");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "bad_asic_check_eth_2282",
    23,
    10179,
    40,
    v4);
  stream = 0;
  v16 = 0;
  memset(s, 0, 0x24u);
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v13 = 0;
  memset(&v4[4096], 0, 576);
  stream = fopen("/nvdata/sweep_result_v2.txt", "r");
  if ( stream )
  {
    while ( _isoc99_fscanf(stream, "%hu", &v9) == 1 && v16 <= 19 )
      s[v16++] = v9;
    fclose(stream);
    v12 = 6 * *(_DWORD *)(a1 + 272);
    for ( i = v12; i < v12 + 6; ++i )
      ;
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "Error opening /nvdata/sweep_result_v2.txt");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "bad_asic_check_eth_2282",
      23,
      10191,
      60,
      v4);
    return -1;
  }
}
