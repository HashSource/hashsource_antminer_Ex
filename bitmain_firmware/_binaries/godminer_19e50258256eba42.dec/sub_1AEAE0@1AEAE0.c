int __fastcall sub_1AEAE0(int a1, char a2, int a3)
{
  _BYTE v7[60]; // [sp+40h] [bp-103Ch] BYREF
  _DWORD s[4]; // [sp+1040h] [bp-3Ch] BYREF
  _DWORD v9[7]; // [sp+1050h] [bp-2Ch] BYREF
  int v10; // [sp+106Ch] [bp-10h]

  V_LOCK();
  sub_1A9DE8((int)v9, *(int *)(a1 + 272));
  logfmt_raw(
    v7,
    0x1000u,
    0,
    v10,
    v9[0],
    v9[1],
    v9[2],
    v9[3],
    v9[4],
    v9[5],
    v9[6],
    v10,
    "open cores core_num %d reg %02x %d",
    64,
    160,
    2000);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_open_cores_RVN",
    26,
    846,
    40,
    v7);
  memset(s, 0, sizeof(s));
  s[2] = 10485761;
  s[0] = a3;
  BYTE1(s[3]) = 64;
  LOBYTE(s[3]) = a2;
  return (*(int (__fastcall **)(int, _DWORD *, int, _DWORD))(a1 + 308))(a1, s, 2000, 0);
}
