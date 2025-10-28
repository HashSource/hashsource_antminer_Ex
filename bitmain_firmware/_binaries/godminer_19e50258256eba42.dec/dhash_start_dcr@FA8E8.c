int __fastcall dhash_start_dcr(int a1)
{
  _BYTE v3[44]; // [sp+30h] [bp-102Ch] BYREF
  _DWORD v4[7]; // [sp+1030h] [bp-2Ch] BYREF
  int v5; // [sp+104Ch] [bp-10h]

  V_LOCK();
  sub_EC020((int)v4, *(int *)(a1 + 272));
  logfmt_raw(v3, 0x1000u, 0, v5, v4[0], v4[1], v4[2], v4[3], v4[4], v4[5], v4[6], v5, "dhash_start_dcr");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_dcr_1727/backend_dcr_1727.c",
    171,
    "dhash_start_dcr",
    15,
    452,
    40,
    v3);
  sub_ED894(a1, (int)"e 0c99d89e00007931 mixhash 4ca1c4ca4b70c5bf730abe62851882494ca1c4ca4b70c5bf730abe6285188249");
  *(_BYTE *)(a1 + 278) = 1;
  if ( *(_BYTE *)(a1 + 500) != 1 )
    *(_DWORD *)(a1 + 504) = (int)*(float *)(a1 + 1020);
  return 0;
}
