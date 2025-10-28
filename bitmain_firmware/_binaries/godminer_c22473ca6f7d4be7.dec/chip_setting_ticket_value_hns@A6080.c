int __fastcall chip_setting_ticket_value_hns(int a1, int a2)
{
  int v4; // r2
  int v5; // r11
  int v7; // [sp+Ch] [bp-1018h]
  _DWORD v8[3]; // [sp+10h] [bp-1014h] BYREF
  char v9; // [sp+1Ch] [bp-1008h]
  char v10; // [sp+1Dh] [bp-1007h]
  char v11; // [sp+1Eh] [bp-1006h]
  char v12[4100]; // [sp+20h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "ticket_mask %s reg %02x tm %02x", "chip_setting_ticket_value_hns", 3, a2, v7, 0, 0, 0, 0);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_hns/chip_setting_hns.c",
    159,
    "chip_setting_ticket_value_hns",
    29,
    103,
    60,
    v12);
  v4 = *(_DWORD *)(a1 + 200);
  v9 = -1;
  v10 = v4;
  v8[0] = (unsigned __int8)a2;
  v8[2] = 196609;
  v11 = 1;
  v5 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 160))(a1, v8);
  usleep(0x3E8u);
  *(_DWORD *)(a1 + 244) = (unsigned __int8)a2;
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "set tm %d", a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_hns/chip_setting_hns.c",
    159,
    "chip_setting_ticket_value_hns",
    29,
    117,
    60,
    v12);
  return v5;
}
