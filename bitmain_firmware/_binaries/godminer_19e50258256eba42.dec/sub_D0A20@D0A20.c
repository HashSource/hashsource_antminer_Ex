int __fastcall sub_D0A20(int a1, int a2)
{
  _BYTE v5[72]; // [sp+34h] [bp-1048h] BYREF
  _DWORD s[5]; // [sp+1034h] [bp-48h] BYREF
  _DWORD v7[7]; // [sp+1048h] [bp-34h] BYREF
  int v8; // [sp+1064h] [bp-18h]

  memset(s, 0, 0x10u);
  s[2] = 4194305;
  s[4] = a2;
  s[0] = a2;
  V_LOCK();
  sub_CA5F0((int)v7, *(int *)(a1 + 272));
  logfmt_raw(v5, 0x1000u, 0, v8, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v8, "set analog value %08x", s[0]);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_analog_mux_CKB_2042",
    31,
    1059,
    40,
    v5);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 296))(a1, s);
}
