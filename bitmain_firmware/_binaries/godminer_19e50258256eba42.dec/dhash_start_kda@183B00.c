int __fastcall dhash_start_kda(int a1)
{
  _BYTE v3[44]; // [sp+30h] [bp-102Ch] BYREF
  _DWORD v4[7]; // [sp+1030h] [bp-2Ch] BYREF
  int v5; // [sp+104Ch] [bp-10h]

  V_LOCK();
  sub_174D10((int)v4, *(int *)(a1 + 272));
  logfmt_raw(v3, 0x1000u, 0, v5, v4[0], v4[1], v4[2], v4[3], v4[4], v4[5], v4[6], v5, "dhash_start_kda");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_kda_2110/backend_kda_2110.c",
    171,
    "dhash_start_kda",
    15,
    482,
    40,
    v3);
  sub_176F40(a1, 4);
  *(_BYTE *)(a1 + 278) = 1;
  if ( *(_BYTE *)(a1 + 500) != 1 )
    *(_DWORD *)(a1 + 504) = (int)*(float *)(a1 + 1020);
  return 0;
}
