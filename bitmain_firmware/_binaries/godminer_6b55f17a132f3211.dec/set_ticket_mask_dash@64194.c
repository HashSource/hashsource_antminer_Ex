int __fastcall set_ticket_mask_dash(int a1, int a2)
{
  int v4; // r0
  int result; // r0
  _DWORD v6[4]; // [sp+10h] [bp-1014h] BYREF
  _BYTE v7[4100]; // [sp+20h] [bp-1004h] BYREF

  v6[1] = 0;
  V_LOCK(a1);
  v4 = logfmt_raw((int)v7, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_dash_1766/backend_dash_1766.c",
    172,
    "set_ticket_mask_dash",
    20,
    359,
    20,
    v7);
  v6[3] = 3327;
  v6[0] = a2;
  v6[2] = 196609;
  result = (*(int (__fastcall **)(int, _DWORD *))(a1 + 232))(a1, v6);
  *(_DWORD *)(a1 + 392) = a2;
  return result;
}
