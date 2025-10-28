int __fastcall setup_all_chip_ckb2(int a1)
{
  float v1; // s15
  int v3; // r8
  int v4; // r0
  int v5; // r4
  int v6; // r0
  int v7; // r1
  char v8; // r3
  int (__fastcall *v9)(int, int, int); // r3
  int v10; // r0
  int v11; // r0
  char *v12; // r0
  char v13; // r9
  char *v14; // r8
  char v15; // r0
  int v16; // r0
  int v17; // r0
  int result; // r0
  bool v19; // zf
  _DWORD v20[4]; // [sp+10h] [bp-1010h] BYREF
  _BYTE v21[4096]; // [sp+20h] [bp-1000h] BYREF

  v3 = *(_DWORD *)(a1 + 204);
  V_LOCK(a1);
  v4 = logfmt_raw((int)v21, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ckb2/backend_ckb2.c",
    156,
    "setup_all_chip_ckb2",
    19,
    238,
    60,
    v21);
  if ( !sub_57608(a1) )
    return 3;
  v5 = *(_DWORD *)(a1 + 304);
  v6 = sub_12E0E0(256, (unsigned __int8)v3);
  if ( (_BYTE)v3 )
  {
    v7 = v5 - 1;
    v8 = 0;
    do
    {
      *(_BYTE *)++v7 = v8;
      v8 += v6;
    }
    while ( v7 != v5 - 1 + (unsigned __int8)v3 );
    v5 = *(_DWORD *)(a1 + 304);
  }
  v9 = *(int (__fastcall **)(int, int, int))(a1 + 156);
  *(_DWORD *)(a1 + 248) = v6;
  v10 = v9(a1, v5, v3);
  v20[2] = 4194305;
  v20[1] = 0;
  v20[3] = 0;
  v20[0] = 0;
  V_LOCK(v10);
  v11 = logfmt_raw((int)v21, 0x1000u);
  V_UNLOCK(v11);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_analog_mux_CKB2",
    27,
    503,
    60,
    v21);
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 164))(a1, v20);
  chip_setting_ticket_value_ckb2(a1, 255);
  chip_setting_misc_ckb2(a1);
  v12 = (char *)calloc(1u, 0x80u);
  v13 = *(_BYTE *)(a1 + 144);
  v14 = v12;
  v15 = rand();
  memset(v14 + 40, (unsigned __int8)(v13 + v15), 0x30u);
  push_work_base(a1, v14);
  free(v14);
  V_LOCK(v16);
  v17 = logfmt_raw((int)v21, 0x1000u);
  V_UNLOCK(v17);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ckb2/backend_ckb2.c",
    156,
    "setup_all_chip_ckb2",
    19,
    266,
    60,
    v21);
  if ( !sub_57608(a1) )
    return 3;
  result = *(unsigned __int8 *)(a1 + 276);
  v19 = result == 0;
  if ( *(_BYTE *)(a1 + 276) )
    result = 0;
  else
    v1 = *(float *)(a1 + 768);
  if ( v19 )
    *(_DWORD *)(a1 + 280) = (int)v1;
  return result;
}
