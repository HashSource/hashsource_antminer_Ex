int __fastcall chip_speed_test(int a1, int a2)
{
  _DWORD *v2; // r5
  int v3; // r7
  int v4; // r4
  int v5; // r0
  int v6; // r3
  int v7; // r0
  int v8; // r12
  int result; // r0
  int v10; // r6
  int i; // r3
  int v12; // r1
  bool v13; // zf
  int v14; // r2
  _BYTE v16[4100]; // [sp+18h] [bp-1004h] BYREF

  v2 = (_DWORD *)a1;
  if ( *(int *)(a1 + 196) > 0 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      V_LOCK(a1);
      v5 = logfmt_raw((int)v16, 0x1000u);
      V_UNLOCK(v5);
      a1 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
             186,
             "chip_speed_test",
             15,
             26,
             20,
             v16);
      v6 = *(_DWORD *)(v2[72] + 4 * v4++);
      v3 += v6;
    }
    while ( v2[49] > v4 );
    a1 = sub_12C9E0(v3);
  }
  V_LOCK(a1);
  v7 = logfmt_raw((int)v16, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
    186,
    "chip_speed_test",
    15,
    40,
    20,
    v16);
  v8 = v2[49];
  if ( v8 <= 0 )
    return 0;
  v10 = v2[75];
  result = 0;
  for ( i = 0; i < v8; ++i )
  {
    v12 = *(_DWORD *)(v10 + 4 * (i >> 5));
    v14 = v12 & (1 << (i & 0x1F));
    v13 = v14 == 0;
    if ( v14 )
      v14 = v2[72];
    else
      result = 3;
    *(_DWORD *)(a2 + 4 * i) = (v12 & (1 << (i & 0x1F))) == 0;
    if ( (v12 & (1 << (i & 0x1F))) != 0 )
      *(_DWORD *)(v14 + 4 * i) = 0;
    if ( !v13 )
      v8 = v2[49];
  }
  return result;
}
