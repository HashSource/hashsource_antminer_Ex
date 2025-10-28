int __fastcall set_core_mode_dash(int a1, int a2)
{
  int v2; // r6
  int v5; // r3
  int v6; // r1
  int v8; // [sp+Ch] [bp-1018h]
  _DWORD v9[3]; // [sp+10h] [bp-1014h] BYREF
  int v10; // [sp+1Ch] [bp-1008h]
  char v11[4100]; // [sp+20h] [bp-1004h] BYREF

  LOWORD(v2) = -24476;
  HIWORD(v2) = (unsigned int)"_ckb" >> 16;
  V_LOCK();
  LOWORD(v5) = -22300;
  HIWORD(v5) = (unsigned int)"%s core reg %02x tm %d" >> 16;
  logfmt_raw(v11, 0x1000u, 0, v5, v2 + 1404, 1, a2, v8, 0, 0, 0, 0);
  V_UNLOCK();
  LOWORD(v6) = -22992;
  HIWORD(v6) = (unsigned int)"__custom_data init %p" >> 16;
  zlog(g_zc, v6, 176, v2 + 1424, 18, 377, 20, v11);
  LOWORD(v10) = 3327;
  v9[2] = 65537;
  v9[0] = a2;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 268))(a1, v9);
}
