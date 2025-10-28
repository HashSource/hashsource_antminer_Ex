int __fastcall sub_7F7D8(int a1, char a2)
{
  _BYTE v5[60]; // [sp+30h] [bp-103Ch] BYREF
  _DWORD s[4]; // [sp+1030h] [bp-3Ch] BYREF
  _DWORD v7[7]; // [sp+1040h] [bp-2Ch] BYREF
  int v8; // [sp+105Ch] [bp-10h]

  V_LOCK();
  sub_7AAF4((int)v7, *(int *)(a1 + 272));
  logfmt_raw(v5, 0x1000u, 0, v8, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v8, "close cores");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_close_cores_KAS_2380",
    32,
    860,
    40,
    v5);
  memset(s, 0, sizeof(s));
  s[2] = 16711681;
  s[0] = 0;
  BYTE1(s[3]) = 45;
  LOBYTE(s[3]) = a2;
  return (*(int (__fastcall **)(int, _DWORD *, int, _DWORD))(a1 + 308))(a1, s, 20000, 0);
}
