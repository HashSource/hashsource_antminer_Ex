int __fastcall set_ticket_mask_dash(int a1, unsigned __int8 a2)
{
  int result; // r0
  _BYTE v5[24]; // [sp+1Ch] [bp-1018h] BYREF
  _DWORD s[4]; // [sp+101Ch] [bp-18h] BYREF

  memset(s, 0, sizeof(s));
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "ticket_mask %s core reg %02x tm %d", "set_ticket_mask_dash", 3, a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_dash_1766/backend_dash_1766.c",
    173,
    "set_ticket_mask_dash",
    20,
    360,
    20,
    v5);
  s[2] = 196609;
  s[0] = a2;
  LOWORD(s[3]) = 3327;
  result = (*(int (__fastcall **)(int, _DWORD *))(a1 + 300))(a1, s);
  *(_DWORD *)(a1 + 472) = a2;
  return result;
}
