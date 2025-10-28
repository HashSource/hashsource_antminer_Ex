int __fastcall sub_1CC77C(int a1, unsigned __int8 a2, int a3)
{
  _BYTE v7[16]; // [sp+44h] [bp-1050h] BYREF
  _DWORD s[4]; // [sp+1044h] [bp-50h] BYREF
  int v9; // [sp+1054h] [bp-40h]
  _DWORD v10[7]; // [sp+1058h] [bp-3Ch] BYREF
  int v11; // [sp+1074h] [bp-20h]
  int v12; // [sp+107Ch] [bp-18h]
  int v13; // [sp+1080h] [bp-14h]
  int v14; // [sp+1084h] [bp-10h]

  v13 = 0;
  v12 = 1;
  v14 = 0;
  memset(s, 0, sizeof(s));
  LOBYTE(s[2]) = 0;
  BYTE1(s[2]) = a2;
  HIWORD(s[2]) = 255;
  v9 = (a3 << 16) | 2;
  s[0] = v9;
  V_LOCK();
  sub_1C61DC((int)v10, *(int *)(a1 + 272));
  logfmt_raw(
    v7,
    0x1000u,
    0,
    v11,
    v10[0],
    v10[1],
    v10[2],
    v10[3],
    v10[4],
    v10[5],
    v10[6],
    v11,
    "set uart relay, chip:%02x, %08x",
    a2,
    s[0]);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_uart_relay_RVN",
    26,
    1081,
    40,
    v7);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 296))(a1, s);
}
