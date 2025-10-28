int __fastcall dhash_start_kda(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r3
  int result; // r0
  _DWORD v7[4]; // [sp+28h] [bp-1054h] BYREF
  _BYTE v8[32]; // [sp+38h] [bp-1044h] BYREF
  int v9; // [sp+58h] [bp-1024h] BYREF
  _BYTE v10[4100]; // [sp+78h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)v8, "chain");
  v2 = logfmt_raw((int)v10, 0x1000u);
  V_UNLOCK(v2);
  v3 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-"
         "origin_godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
         174,
         "dhash_start_kda",
         15,
         482,
         40,
         v10);
  v7[2] = 5505025;
  v7[1] = 0;
  v7[0] = 4;
  v7[3] = 0;
  V_LOCK(v3);
  V_INT((int)&v9, "chain");
  v4 = logfmt_raw((int)v10, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/chip_setting.c",
    153,
    "ChipSetting_nonce_len_KDA_2110",
    30,
    282,
    40,
    v10);
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 240))(a1, v7);
  usleep(0x2710u);
  v5 = *(unsigned __int8 *)(a1 + 428);
  result = 0;
  *(_BYTE *)(a1 + 229) = 1;
  if ( !v5 )
    *(_DWORD *)(a1 + 432) = (int)*(float *)(a1 + 924);
  return result;
}
