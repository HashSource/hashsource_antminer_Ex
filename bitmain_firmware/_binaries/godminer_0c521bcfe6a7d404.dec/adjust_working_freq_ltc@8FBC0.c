int __fastcall adjust_working_freq_ltc(int a1, int a2)
{
  int v4; // r0
  float v5; // s16
  int v6; // r4
  int v7; // r0
  int v8; // r0
  _BYTE v10[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK(a1);
  v4 = logfmt_raw((int)v10, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    174,
    "adjust_working_freq_ltc",
    23,
    910,
    40,
    v10);
  v5 = (float)(a2 + *(_DWORD *)(a1 + 432));
  if ( *(float *)(a1 + 924) <= v5 )
  {
    v5 = *(float *)(a1 + 924);
    v6 = 0;
    goto LABEL_3;
  }
  v6 = 18;
  if ( v5 >= 900.0 )
  {
LABEL_3:
    v7 = chip_setting_freq_ltc(a1, 1, 0);
    *(_DWORD *)(a1 + 432) = (int)v5;
    V_LOCK(v7);
    v8 = logfmt_raw((int)v10, 0x1000u);
    V_UNLOCK(v8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
      174,
      "adjust_working_freq_ltc",
      23,
      925,
      40,
      v10);
  }
  return v6;
}
