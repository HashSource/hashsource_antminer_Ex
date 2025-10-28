int __fastcall softreset_all_chip_one_by_one_ks5(int a1)
{
  _BYTE v3[52]; // [sp+30h] [bp-1034h] BYREF
  _DWORD v4[7]; // [sp+1030h] [bp-34h] BYREF
  int v5; // [sp+104Ch] [bp-18h]
  int i; // [sp+1054h] [bp-10h]

  V_LOCK();
  sub_184FA8((int)v4, *(int *)(a1 + 272));
  logfmt_raw(v3, 0x1000u, 0, v5, v4[0], v4[1], v4[2], v4[3], v4[4], v4[5], v4[6], v5, "softreset chain");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ks5_2382/backend_ks5_2382.c",
    171,
    "softreset_all_chip_one_by_one_ks5",
    33,
    653,
    40,
    v3);
  for ( i = 0; i < *(_DWORD *)(a1 + 372); ++i )
  {
    sub_186078(a1, i);
    usleep(0x3E8u);
  }
  sub_18F954(a1, 10, 0);
  sub_186454(a1, 0x7Fu);
  return 0;
}
