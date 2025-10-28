int __fastcall sub_97884(int a1, int a2)
{
  int v4; // r0
  int result; // r0
  _DWORD v6[4]; // [sp+10h] [bp-1010h] BYREF
  _BYTE v7[4096]; // [sp+20h] [bp-1000h] BYREF

  v6[1] = 0;
  v6[3] = 0;
  V_LOCK(a1);
  v4 = logfmt_raw((int)v7, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/chip_setting.c",
    149,
    "ChipSetting_ticket_mask_ZEC_1746",
    32,
    136,
    20,
    v7);
  v6[2] = 1310721;
  v6[0] = a2;
  result = (*(int (__fastcall **)(int, _DWORD *))(a1 + 228))(a1, v6);
  *(_DWORD *)(a1 + 392) = a2;
  return result;
}
