int __fastcall chip_setting_misc_hns(int a1)
{
  int v2; // r0
  _DWORD v4[4]; // [sp+10h] [bp-1010h] BYREF
  _BYTE v5[4096]; // [sp+20h] [bp-1000h] BYREF

  v4[0] = 5381904;
  v4[2] = 1835009;
  v4[3] = 0;
  v4[1] = 0;
  V_LOCK(a1);
  v2 = logfmt_raw((int)v5, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_hns/chip_setting_hns.c",
    159,
    "chip_setting_misc_hns",
    21,
    93,
    60,
    v5);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v4);
}
