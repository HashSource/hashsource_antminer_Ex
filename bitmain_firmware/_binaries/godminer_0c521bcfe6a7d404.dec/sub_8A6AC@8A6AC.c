int __fastcall sub_8A6AC(int a1, char a2, int a3)
{
  int v4; // r0
  _DWORD v6[2]; // [sp+30h] [bp-1030h] BYREF
  char v7; // [sp+38h] [bp-1028h]
  char v8; // [sp+39h] [bp-1027h]
  __int16 v9; // [sp+3Ah] [bp-1026h]
  int v10; // [sp+3Ch] [bp-1024h]
  _BYTE v11[32]; // [sp+40h] [bp-1020h] BYREF
  _BYTE v12[4096]; // [sp+60h] [bp-1000h] BYREF

  v7 = 0;
  v6[0] = (a3 << 16) | 2;
  v9 = 92;
  v10 = 0;
  v6[1] = 0;
  v8 = a2;
  V_LOCK(a1);
  V_INT((int)v11, "chain");
  v4 = logfmt_raw((int)v12, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/chip_setting.c",
    153,
    "ChipSetting_uart_relay_KDA_2110",
    31,
    905,
    40,
    v12);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 240))(a1, v6);
}
