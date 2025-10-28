int __fastcall sub_61B20(int a1, int a2)
{
  int v3; // r0
  _DWORD v5[4]; // [sp+28h] [bp-1034h] BYREF
  _BYTE v6[32]; // [sp+38h] [bp-1024h] BYREF
  _BYTE v7[4100]; // [sp+58h] [bp-1004h] BYREF

  v5[0] = a2;
  v5[2] = 4194305;
  v5[3] = 0;
  v5[1] = 0;
  V_LOCK(1);
  V_INT((int)v6, "chain");
  v3 = logfmt_raw((int)v7, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/chip_setting.c",
    153,
    "ChipSetting_analog_mux_CKB_2042",
    31,
    883,
    40,
    v7);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 240))(a1, v5);
}
