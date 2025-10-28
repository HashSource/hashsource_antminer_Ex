int __fastcall sub_54674(int a1, int a2)
{
  int result; // r0
  int v5; // [sp+Ch] [bp-1018h]
  _DWORD v6[3]; // [sp+10h] [bp-1014h] BYREF
  char v7[4100]; // [sp+20h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, "ticket_mask %s reg %02x tm %d", "ChipSetting_ticket_mask_CKB", 20, a2, v5, 0, 0, 0, 0);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_ticket_mask_CKB",
    27,
    137,
    20,
    v7);
  v6[2] = 1310721;
  v6[0] = a2;
  result = (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v6);
  *(_DWORD *)(a1 + 244) = a2;
  return result;
}
