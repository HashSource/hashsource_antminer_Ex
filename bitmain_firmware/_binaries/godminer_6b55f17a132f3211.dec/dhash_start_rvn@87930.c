int __fastcall dhash_start_rvn(int a1)
{
  int v2; // r0
  int result; // r0
  int v4; // [sp+28h] [bp-1024h] BYREF
  _BYTE v5[4100]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)&v4, "chain");
  v2 = logfmt_raw((int)v5, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    170,
    "dhash_start_rvn",
    15,
    1089,
    40,
    v5);
  result = 0;
  if ( !*(_BYTE *)(a1 + 420) )
    *(_DWORD *)(a1 + 424) = (int)*(float *)(a1 + 916);
  return result;
}
