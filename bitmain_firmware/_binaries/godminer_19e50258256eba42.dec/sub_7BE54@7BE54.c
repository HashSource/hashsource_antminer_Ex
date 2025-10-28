int __fastcall sub_7BE54(int a1, unsigned __int8 a2)
{
  _BYTE v5[24]; // [sp+1Ch] [bp-1018h] BYREF
  _DWORD s[4]; // [sp+101Ch] [bp-18h] BYREF
  int v7; // [sp+102Ch] [bp-8h]

  memset(s, 0, sizeof(s));
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "set ticket mask reg %02x tm %d", 255, a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_ticket_mask_KAS_2380",
    32,
    222,
    20,
    v5);
  s[2] = 16711681;
  s[0] = a2;
  v7 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 296))(a1, s);
  *(_DWORD *)(a1 + 472) = a2;
  return v7;
}
