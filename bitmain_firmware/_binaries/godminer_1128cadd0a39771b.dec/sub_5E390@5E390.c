int __fastcall sub_5E390(int a1)
{
  int v2; // r0
  int (__fastcall *v3)(int, _DWORD *, int, _DWORD); // r4
  _DWORD v5[2]; // [sp+10h] [bp-1004h] BYREF
  int v6; // [sp+18h] [bp-FFCh]
  int v7; // [sp+1Ch] [bp-FF8h]

  V_LOCK(a1);
  v2 = logfmt_raw((int)v5, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_open_cores_ETH",
    26,
    338,
    40,
    v5);
  v6 = 851968;
  v5[0] = 127;
  v5[1] = 0;
  v7 = 4351;
  v3 = *(int (__fastcall **)(int, _DWORD *, int, _DWORD))(a1 + 176);
  LOBYTE(v6) = 1;
  return v3(a1, v5, 20000, 0);
}
