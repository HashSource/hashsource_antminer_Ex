int __fastcall chip_setting_ticket_value_ckb2(int a1, unsigned __int8 a2)
{
  int v4; // r0
  int v5; // r2
  int v6; // r11
  int v7; // r0
  int v8; // r0
  _DWORD v10[2]; // [sp+10h] [bp-1014h] BYREF
  int v11; // [sp+18h] [bp-100Ch]
  int v12; // [sp+1Ch] [bp-1008h]
  _BYTE v13[4100]; // [sp+20h] [bp-1004h] BYREF

  v10[1] = 0;
  v11 = 0;
  v12 = 0;
  v10[0] = 0;
  V_LOCK(a1);
  v4 = logfmt_raw((int)v13, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ckb2/chip_setting_ckb2.c",
    161,
    "chip_setting_ticket_value_ckb2",
    30,
    103,
    60,
    v13);
  v5 = *(_DWORD *)(a1 + 200);
  LOBYTE(v12) = -1;
  BYTE1(v12) = v5;
  v10[0] = a2;
  v11 = 196609;
  BYTE2(v12) = 1;
  v6 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 160))(a1, v10);
  v7 = usleep(0x3E8u);
  *(_DWORD *)(a1 + 244) = a2;
  V_LOCK(v7);
  v8 = logfmt_raw((int)v13, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ckb2/chip_setting_ckb2.c",
    161,
    "chip_setting_ticket_value_ckb2",
    30,
    117,
    60,
    v13);
  return v6;
}
