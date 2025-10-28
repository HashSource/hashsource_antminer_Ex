int __fastcall sub_54748(int a1)
{
  int v2; // r0
  _DWORD v4[1024]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v4, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_open_cores_AE",
    25,
    338,
    40,
    v4);
  v4[0] = 1;
  v4[2] = 8650753;
  v4[3] = 256;
  v4[1] = 0;
  return (*(int (__fastcall **)(int, _DWORD *, int, _DWORD))(a1 + 176))(a1, v4, 20000, 0);
}
