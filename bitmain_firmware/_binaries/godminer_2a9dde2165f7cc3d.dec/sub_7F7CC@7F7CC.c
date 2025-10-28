int __fastcall sub_7F7CC(_DWORD *a1, int a2)
{
  int v4; // r0
  int v5; // r2
  int (__fastcall *v6)(_DWORD *, _DWORD *); // r3
  int v7; // r4
  _DWORD v9[2]; // [sp+30h] [bp-1034h] BYREF
  int v10; // [sp+38h] [bp-102Ch]
  int v11; // [sp+3Ch] [bp-1028h]
  _BYTE v12[32]; // [sp+40h] [bp-1024h] BYREF
  _BYTE v13[4100]; // [sp+60h] [bp-1004h] BYREF

  v9[1] = 0;
  v10 = 0;
  v11 = 0;
  v9[0] = 0;
  V_LOCK(a1);
  V_INT((int)v12, "chain");
  v4 = logfmt_raw((int)v13, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/chip_setting.c",
    153,
    "ChipSetting_core_ticket_mask_HNS_2130",
    37,
    171,
    40,
    v13);
  v5 = a1[77];
  LOBYTE(v11) = -1;
  BYTE1(v11) = v5;
  v10 = 196609;
  BYTE2(v11) = 1;
  v6 = (int (__fastcall *)(_DWORD *, _DWORD *))a1[61];
  v9[0] = a2;
  v7 = v6(a1, v9);
  usleep(0x3E8u);
  a1[100] = a2;
  return v7;
}
