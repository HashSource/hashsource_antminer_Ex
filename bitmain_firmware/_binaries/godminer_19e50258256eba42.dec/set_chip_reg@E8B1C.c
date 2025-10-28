int __fastcall set_chip_reg(int a1, char a2, char a3, unsigned __int8 a4, int a5)
{
  _BYTE v10[20]; // [sp+18h] [bp-1014h] BYREF
  _DWORD s[4]; // [sp+1018h] [bp-14h] BYREF

  memset(s, 0, sizeof(s));
  LOBYTE(s[2]) = a2;
  BYTE1(s[2]) = a3;
  HIWORD(s[2]) = a4;
  s[0] = a5;
  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, "set_chip_reg set reg %x data %x", a4, a5);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_dash_1766/backend_dash_1766.c",
    173,
    "set_chip_reg",
    12,
    314,
    40,
    v10);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 296))(a1, s);
}
