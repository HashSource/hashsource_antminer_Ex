int __fastcall top_init_ltc(int a1)
{
  _BYTE v3[52]; // [sp+30h] [bp-1034h] BYREF
  _DWORD v4[7]; // [sp+1030h] [bp-34h] BYREF
  int v5; // [sp+104Ch] [bp-18h]
  int v6; // [sp+1054h] [bp-10h]

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "top_init_ltc() in");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    171,
    "top_init_ltc",
    12,
    505,
    40,
    v3);
  V_LOCK();
  sub_1978B0((int)v4, *(int *)(a1 + 272));
  logfmt_raw(v3, 0x1000u, 0, v5, v4[0], v4[1], v4[2], v4[3], v4[4], v4[5], v4[6], v5, "top_init_ltc");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    171,
    "top_init_ltc",
    12,
    506,
    40,
    v3);
  v6 = *(_DWORD *)(a1 + 372);
  *(_DWORD *)(a1 + 468) = sub_1A5650(*(_DWORD *)(a1 + 528), v6);
  (*(void (__fastcall **)(int, _DWORD, int))(a1 + 288))(a1, *(_DWORD *)(a1 + 528), v6);
  sub_19CF0C(a1, 0);
  sub_198FD8(a1, (int)"e 0c99d89e00007931 mixhash 4ca1c4ca4b70c5bf730abe62851882494ca1c4ca4b70c5bf730abe6285188249");
  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "top_init_ltc() out");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    171,
    "top_init_ltc",
    12,
    519,
    40,
    v3);
  return 0;
}
