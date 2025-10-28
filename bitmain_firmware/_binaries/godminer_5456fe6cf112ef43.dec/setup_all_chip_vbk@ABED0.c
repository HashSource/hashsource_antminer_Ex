int __fastcall setup_all_chip_vbk(int a1)
{
  _BYTE *v2; // r3
  void (__fastcall *v3)(int, _DWORD, int); // r3
  int v4; // r0
  int v5; // r0
  int (__fastcall *v6)(int, _DWORD *); // r3
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int result; // r0
  _DWORD v12[2]; // [sp+10h] [bp-1014h] BYREF
  int v13; // [sp+18h] [bp-100Ch]
  int v14; // [sp+1Ch] [bp-1008h]
  _DWORD v15[1025]; // [sp+20h] [bp-1004h] BYREF

  puts("setup_all_chip_vbk");
  v2 = *(_BYTE **)(a1 + 296);
  v2[2] = 0x80;
  v2[3] = -64;
  *v2 = 0;
  v2[1] = 64;
  v3 = *(void (__fastcall **)(int, _DWORD, int))(a1 + 148);
  *(_DWORD *)(a1 + 240) = 64;
  v3(a1, *(_DWORD *)(a1 + 296), 4);
  v4 = sub_ABAD0(a1);
  v12[1] = 0;
  v13 = 0;
  v14 = 0;
  v12[0] = 0;
  V_LOCK(v4);
  v5 = logfmt_raw((int)v15, 0x1000u);
  V_UNLOCK(v5);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_ticket_mask_VBK",
    27,
    137,
    20,
    v15);
  v6 = *(int (__fastcall **)(int, _DWORD *))(a1 + 156);
  v13 = 1310721;
  v12[0] = 32;
  v7 = v6(a1, v12);
  *(_DWORD *)(a1 + 244) = 32;
  V_LOCK(v7);
  v8 = logfmt_raw((int)v15, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_open_cores_VBK",
    26,
    315,
    40,
    v15);
  v15[1] = 0;
  v15[2] = 8650753;
  v15[0] = 1;
  v15[3] = 1280;
  v9 = (*(int (__fastcall **)(int, _DWORD *, int, _DWORD))(a1 + 168))(a1, v15, 20000, 0);
  V_LOCK(v9);
  v10 = logfmt_raw((int)v15, 0x1000u);
  V_UNLOCK(v10);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_vbk/backend_vbk.c",
    154,
    "setup_all_chip_vbk",
    18,
    215,
    60,
    v15);
  sub_ABAD0(a1);
  result = 0;
  if ( !*(_BYTE *)(a1 + 268) )
    *(_DWORD *)(a1 + 272) = (int)*(float *)(a1 + 760);
  return result;
}
