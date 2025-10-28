int __fastcall dhash_start_eth(int a1)
{
  int v2; // r0
  int result; // r0
  _BYTE v4[32]; // [sp+28h] [bp-20h] BYREF
  _BYTE v5[4100]; // [sp+48h] [bp+0h] BYREF

  V_LOCK(a1);
  V_INT((int)v4, "chain");
  v2 = logfmt_raw((int)v5, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    170,
    "dhash_start_eth",
    15,
    1028,
    40,
    v5);
  result = 0;
  if ( !*(_BYTE *)(a1 + 420) )
    *(_DWORD *)(a1 + 424) = (int)*(float *)(a1 + 916);
  return result;
}
