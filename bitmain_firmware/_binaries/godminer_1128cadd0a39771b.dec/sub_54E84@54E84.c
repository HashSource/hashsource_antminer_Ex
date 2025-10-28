int __fastcall sub_54E84(int a1, int a2)
{
  int v4; // r0
  int result; // r0
  _DWORD v6[4]; // [sp+10h] [bp-1014h] BYREF
  _BYTE v7[4100]; // [sp+20h] [bp-1004h] BYREF

  v6[1] = 0;
  v6[3] = 0;
  V_LOCK(a1);
  v4 = logfmt_raw((int)v7, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_ticket_mask_CKB",
    27,
    160,
    20,
    v7);
  v6[2] = 1310721;
  v6[0] = a2;
  result = (*(int (__fastcall **)(int, _DWORD *))(a1 + 164))(a1, v6);
  *(_DWORD *)(a1 + 252) = a2;
  return result;
}
