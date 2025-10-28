int __fastcall chip_setting_share_mode_ltc(int a1)
{
  int v2; // r0
  int v3; // r0
  void (__fastcall *v4)(int, _DWORD *); // r2
  _DWORD v6[2]; // [sp+10h] [bp-1004h] BYREF
  char v7; // [sp+18h] [bp-FFCh]
  char v8; // [sp+19h] [bp-FFBh]
  __int16 v9; // [sp+1Ah] [bp-FFAh]
  int v10; // [sp+1Ch] [bp-FF8h]

  V_LOCK(a1);
  v2 = logfmt_raw((int)v6, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ltc/chip_setting_ltc.c",
    159,
    "chip_setting_share_mode_ltc",
    27,
    395,
    40,
    v6);
  v3 = *(unsigned __int8 *)(a1 + 788);
  v9 = 0;
  v10 = 0;
  v6[1] = 0;
  v7 = 1;
  v6[0] = (v3 << 13) | 0x4FF;
  v8 = 1;
  v4 = *(void (__fastcall **)(int, _DWORD *))(a1 + 168);
  BYTE2(v10) = 1;
  LOBYTE(v10) = -1;
  v4(a1, v6);
  usleep(0x3E8u);
  return 0;
}
