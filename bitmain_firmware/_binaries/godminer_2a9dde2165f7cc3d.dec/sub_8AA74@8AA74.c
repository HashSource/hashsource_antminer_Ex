int __fastcall sub_8AA74(int a1, int a2)
{
  int v3; // r0
  int v4; // r4
  _DWORD v6[4]; // [sp+28h] [bp-1034h] BYREF
  _BYTE v7[32]; // [sp+38h] [bp-1024h] BYREF
  _BYTE v8[4100]; // [sp+58h] [bp-1004h] BYREF

  v6[0] = a2;
  v6[2] = 2883585;
  v6[3] = 0;
  v6[1] = 0;
  V_LOCK(1);
  V_INT((int)v7, "chain");
  v3 = logfmt_raw((int)v8, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/chip_setting.c",
    153,
    "ChipSetting_io_cfg_KDA_2110",
    27,
    298,
    40,
    v8);
  v4 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 240))(a1, v6);
  usleep(0x2710u);
  return v4;
}
