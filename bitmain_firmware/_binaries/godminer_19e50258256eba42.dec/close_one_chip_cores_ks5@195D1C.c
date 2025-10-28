int __fastcall close_one_chip_cores_ks5(int a1, unsigned __int8 a2)
{
  _BYTE v5[44]; // [sp+30h] [bp-102Ch] BYREF
  _DWORD v6[7]; // [sp+1030h] [bp-2Ch] BYREF
  int v7; // [sp+104Ch] [bp-10h]

  V_LOCK();
  sub_184FA8((int)v6, *(int *)(a1 + 272));
  logfmt_raw(v5, 0x1000u, 0, v7, v6[0], v6[1], v6[2], v6[3], v6[4], v6[5], v6[6], v7, "close chip %d's cores", a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ks5_2382/backend_ks5_2382.c",
    171,
    "close_one_chip_cores_ks5",
    24,
    713,
    40,
    v5);
  sub_18F844(a1, a2 * *(_DWORD *)(a1 + 392), 28, -1069408496);
  return 0;
}
