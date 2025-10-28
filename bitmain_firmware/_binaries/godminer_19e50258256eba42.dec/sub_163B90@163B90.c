int __fastcall sub_163B90(int a1, int a2)
{
  _BYTE v5[68]; // [sp+30h] [bp-1044h] BYREF
  _DWORD s[4]; // [sp+1030h] [bp-44h] BYREF
  _DWORD v7[7]; // [sp+1040h] [bp-34h] BYREF
  int v8; // [sp+105Ch] [bp-18h]
  int v9; // [sp+1064h] [bp-10h]

  memset(s, 0, sizeof(s));
  s[2] = 1835009;
  s[0] = a2;
  V_LOCK();
  sub_1622D8((int)v7, *(int *)(a1 + 272));
  logfmt_raw(v5, 0x1000u, 0, v8, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v8, "set misc ctrl %08x", s[0]);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_misc_ctrl_KAS_2380",
    30,
    286,
    40,
    v5);
  v9 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 296))(a1, s);
  usleep(0x2710u);
  return v9;
}
