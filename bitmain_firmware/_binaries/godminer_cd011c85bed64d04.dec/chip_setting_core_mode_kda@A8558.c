int __fastcall chip_setting_core_mode_kda(int a1, int a2)
{
  int v4; // r0
  int v5; // r3
  int (__fastcall *v6)(int, _DWORD *); // r3
  int v7; // r9
  int v8; // r0
  int v9; // r0
  _DWORD v11[2]; // [sp+10h] [bp-1014h] BYREF
  int v12; // [sp+18h] [bp-100Ch]
  int v13; // [sp+1Ch] [bp-1008h]
  _BYTE v14[4100]; // [sp+20h] [bp-1004h] BYREF

  v11[1] = 0;
  v12 = 0;
  v13 = 0;
  v11[0] = 0;
  V_LOCK(a1);
  v4 = logfmt_raw((int)v14, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_kda/chip_setting_kda.c",
    159,
    "chip_setting_core_mode_kda",
    26,
    143,
    60,
    v14);
  v5 = *(_DWORD *)(a1 + 208);
  LOBYTE(v13) = -1;
  v12 = 65537;
  BYTE2(v13) = 1;
  BYTE1(v13) = v5;
  v6 = *(int (__fastcall **)(int, _DWORD *))(a1 + 168);
  v11[0] = a2;
  v7 = v6(a1, v11);
  v8 = usleep(0x3E8u);
  V_LOCK(v8);
  v9 = logfmt_raw((int)v14, 0x1000u);
  V_UNLOCK(v9);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_kda/chip_setting_kda.c",
    159,
    "chip_setting_core_mode_kda",
    26,
    156,
    60,
    v14);
  return v7;
}
