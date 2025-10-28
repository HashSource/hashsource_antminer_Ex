int __fastcall chip_setting_ticket_mask_ltc(int a1, unsigned int a2)
{
  _BYTE v5[32]; // [sp+1Ch] [bp-1020h] BYREF
  _DWORD s[4]; // [sp+101Ch] [bp-20h] BYREF
  int v7; // [sp+102Ch] [bp-10h]
  int v8; // [sp+1030h] [bp-Ch]
  unsigned int v9; // [sp+1034h] [bp-8h]

  v8 = 0;
  v9 = a2;
  memset(s, 0, sizeof(s));
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "ticket_mask %s reg %02x tm %08x", "chip_setting_ticket_mask_ltc", 2, a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
    176,
    "chip_setting_ticket_mask_ltc",
    28,
    146,
    60,
    v5);
  s[2] = 131073;
  s[0] = (unsigned __int16)a2;
  BYTE2(s[3]) = 1;
  LOBYTE(s[3]) = 0;
  BYTE1(s[3]) = *(_DWORD *)(a1 + 376);
  v7 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 300))(a1, s);
  usleep(0x3E8u);
  s[2] = 262145;
  s[0] = HIWORD(a2);
  BYTE2(s[3]) = 1;
  LOBYTE(s[3]) = 0;
  BYTE1(s[3]) = *(_DWORD *)(a1 + 376);
  v7 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 300))(a1, s);
  while ( (v9 & 1) != 0 )
  {
    ++v8;
    v9 >>= 1;
  }
  v8 += 16;
  *(_DWORD *)(a1 + 472) = v8;
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "cal mask %d", v8);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
    176,
    "chip_setting_ticket_mask_ltc",
    28,
    177,
    60,
    v5);
  return v7;
}
