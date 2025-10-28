int __fastcall chip_setting_working_mode_ltc(int a1, char a2, int a3, char a4, int a5, unsigned __int8 a6)
{
  char v6; // r3
  char v8; // r3
  _BYTE v14[40]; // [sp+2Ch] [bp-1028h] BYREF
  _DWORD s[4]; // [sp+102Ch] [bp-28h] BYREF
  int v16; // [sp+103Ch] [bp-18h]
  int v17; // [sp+1040h] [bp-14h]
  int v18; // [sp+1044h] [bp-10h]
  int v19; // [sp+1048h] [bp-Ch]
  int i; // [sp+104Ch] [bp-8h]

  V_LOCK();
  logfmt_raw(v14, 0x1000u, 0, "%s", "chip_setting_working_mode_ltc");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
    176,
    "chip_setting_working_mode_ltc",
    29,
    304,
    20,
    v14);
  if ( !a4 )
  {
    v19 = a5;
    v18 = a5;
    memset(s, 0, sizeof(s));
    LOBYTE(s[2]) = a2;
    if ( a2 )
      v8 = 0;
    else
      v8 = *(_BYTE *)(*(_DWORD *)(a1 + 528) + a3);
    BYTE1(s[2]) = v8;
    BYTE1(s[3]) = *(_DWORD *)(a1 + 376);
    for ( i = v18; i <= v19; ++i )
    {
      s[0] = a6 | 0x400;
      HIWORD(s[2]) = 0;
      LOBYTE(s[3]) = i;
      HIWORD(s[3]) = 0;
      v17 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 300))(a1, s);
      if ( v17 )
      {
        V_LOCK();
        logfmt_raw(
          v14,
          0x1000u,
          0,
          "%s failed, chip_all %d chip_addr %02x reg:%02x, core_id:%d",
          "chip_setting_working_mode_ltc",
          LOBYTE(s[2]),
          BYTE1(s[2]),
          HIWORD(s[2]),
          i);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
          176,
          "chip_setting_working_mode_ltc",
          29,
          344,
          100,
          v14);
        return v17;
      }
      usleep(0x3E8u);
    }
    return 0;
  }
  memset(s, 0, sizeof(s));
  LOBYTE(s[2]) = a2;
  if ( a2 )
    v6 = 0;
  else
    v6 = *(_BYTE *)(*(_DWORD *)(a1 + 528) + a3);
  BYTE1(s[2]) = v6;
  BYTE1(s[3]) = *(_DWORD *)(a1 + 376);
  s[0] = a6 | 0x400;
  HIWORD(s[2]) = 0;
  LOBYTE(s[3]) = a5;
  HIWORD(s[3]) = 1;
  v16 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 300))(a1, s);
  if ( !v16 )
  {
    usleep(0x3E8u);
    return 0;
  }
  V_LOCK();
  logfmt_raw(
    v14,
    0x1000u,
    0,
    "%s failed, chip_all %d chip_addr %02x reg:%02x, all core",
    "chip_setting_working_mode_ltc",
    LOBYTE(s[2]),
    BYTE1(s[2]),
    HIWORD(s[2]));
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
    176,
    "chip_setting_working_mode_ltc",
    29,
    321,
    100,
    v14);
  return v16;
}
