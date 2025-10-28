int __fastcall sub_5AE6C(int a1)
{
  int v2; // r0
  _DWORD v4[1025]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v4, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/chip_setting.c",
    149,
    "ChipSetting_software_reset_CKB_2042",
    35,
    107,
    20,
    v4);
  v4[2] = 4456449;
  v4[3] = 0;
  v4[1] = 0;
  v4[0] = 3;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 228))(a1, v4);
}
