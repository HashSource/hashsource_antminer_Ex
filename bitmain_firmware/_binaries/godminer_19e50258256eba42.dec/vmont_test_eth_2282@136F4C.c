int __fastcall vmont_test_eth_2282(int a1)
{
  int v1; // r3
  _BYTE v4[44]; // [sp+30h] [bp-10ACh] BYREF
  _DWORD v5[7]; // [sp+1030h] [bp-ACh] BYREF
  int v6; // [sp+104Ch] [bp-90h]
  _DWORD v7[7]; // [sp+1050h] [bp-8Ch] BYREF
  int v8; // [sp+106Ch] [bp-70h]
  _DWORD v9[7]; // [sp+1070h] [bp-6Ch] BYREF
  int v10; // [sp+108Ch] [bp-50h]
  _DWORD v11[7]; // [sp+1090h] [bp-4Ch] BYREF
  int v12; // [sp+10ACh] [bp-30h]
  _DWORD v13[7]; // [sp+10B0h] [bp-2Ch] BYREF
  int v14; // [sp+10CCh] [bp-10h]

  V_LOCK();
  sub_FBD60((int)v5, *(int *)(a1 + 272));
  logfmt_raw(v4, 0x1000u, 0, v6, v5[0], v5[1], v5[2], v5[3], v5[4], v5[5], v5[6], v6, "%s start", "vmont_test_eth_2282");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "vmont_test_eth_2282",
    19,
    8237,
    60,
    v4);
  V_LOCK();
  sub_FBD60((int)v7, *(int *)(a1 + 272));
  logfmt_raw(v4, 0x1000u, 0, v8, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v8, "core (3,3) diode vdd");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "vmont_test_eth_2282",
    19,
    8238,
    40,
    v4);
  sub_106BA8(a1, 64, 4);
  getchar();
  V_LOCK();
  sub_FBD60((int)v9, *(int *)(a1 + 272));
  logfmt_raw(v4, 0x1000u, 0, v10, v9[0], v9[1], v9[2], v9[3], v9[4], v9[5], v9[6], v10, "core (5,3) diode vdd");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "vmont_test_eth_2282",
    19,
    8241,
    40,
    v4);
  sub_106BA8(a1, 64, 5);
  getchar();
  V_LOCK();
  sub_FBD60((int)v11, *(int *)(a1 + 272));
  logfmt_raw(v4, 0x1000u, 0, v12, v11[0], v11[1], v11[2], v11[3], v11[4], v11[5], v11[6], v12, "core (3,3) vmont vdd");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "vmont_test_eth_2282",
    19,
    8244,
    40,
    v4);
  sub_106BA8(a1, 64, 6);
  getchar();
  V_LOCK();
  sub_FBD60((int)v13, *(int *)(a1 + 272));
  logfmt_raw(v4, 0x1000u, 0, v14, v13[0], v13[1], v13[2], v13[3], v13[4], v13[5], v13[6], v14, "core (5,3) vmont vdd");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "vmont_test_eth_2282",
    19,
    8247,
    40,
    v4);
  sub_106BA8(a1, 64, 7);
  getchar();
  return v1;
}
