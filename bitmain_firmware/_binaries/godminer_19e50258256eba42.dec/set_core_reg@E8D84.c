int __fastcall set_core_reg(int a1, char a2, unsigned __int8 a3, int a4)
{
  _BYTE v9[24]; // [sp+24h] [bp-1018h] BYREF
  _DWORD s[4]; // [sp+1024h] [bp-18h] BYREF

  memset(s, 0, sizeof(s));
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "%s: regaddr %02x data %d", "set_core_reg", a3, a4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_dash_1766/backend_dash_1766.c",
    173,
    "set_core_reg",
    12,
    344,
    20,
    v9);
  LOWORD(s[2]) = 1;
  HIWORD(s[2]) = a3;
  s[0] = a4;
  BYTE1(s[3]) = 12;
  LOBYTE(s[3]) = a2;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 300))(a1, s);
}
