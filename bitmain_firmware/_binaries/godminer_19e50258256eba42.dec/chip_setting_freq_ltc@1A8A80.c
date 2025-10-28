int __fastcall chip_setting_freq_ltc(int a1, char a2, int a3)
{
  float v3; // s0
  char v4; // r3
  _BYTE v9[32]; // [sp+24h] [bp-1020h] BYREF
  _DWORD s[4]; // [sp+1024h] [bp-20h] BYREF
  unsigned int v11; // [sp+1034h] [bp-10h] BYREF
  int v12; // [sp+1038h] [bp-Ch]
  float v13; // [sp+103Ch] [bp-8h]

  v11 = 0;
  memset(s, 0, sizeof(s));
  LOBYTE(s[2]) = a2;
  if ( a2 )
    v4 = 0;
  else
    v4 = *(_BYTE *)(*(_DWORD *)(a1 + 528) + a3);
  BYTE1(s[2]) = v4;
  HIWORD(s[2]) = 8;
  sub_1A88D8(&v11);
  v13 = v3;
  s[0] = v11;
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "set freq: %.2f, expected freq: %.2f", v13, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
    176,
    "chip_setting_freq_ltc",
    21,
    135,
    60,
    v9);
  v12 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 296))(a1, s);
  usleep(0x2710u);
  return v12;
}
