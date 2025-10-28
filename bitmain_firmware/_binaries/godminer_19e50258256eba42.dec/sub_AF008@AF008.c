int __fastcall sub_AF008(int a1, int a2)
{
  double v2; // d0
  double v3; // d7
  _BYTE v8[52]; // [sp+28h] [bp-1034h] BYREF
  int v9; // [sp+1028h] [bp-34h]
  int v10; // [sp+102Ch] [bp-30h]
  int v11; // [sp+1030h] [bp-2Ch]
  int v12; // [sp+1034h] [bp-28h]
  double v13; // [sp+1038h] [bp-24h]
  double v14; // [sp+1040h] [bp-1Ch]
  int v15; // [sp+1048h] [bp-14h]
  int v16; // [sp+104Ch] [bp-10h]
  double v17; // [sp+1050h] [bp-Ch]

  v12 = 0;
  v11 = 255;
  v13 = (double)a1 / 100.0;
  v14 = 0.0;
  v17 = (double)*(int *)(a2 + 32) / 100.0;
  v2 = v13;
  v15 = bitmain_set_voltage();
  while ( 1 )
  {
    sub_AE308();
    v14 = v2;
    v16 = bitmain_convert_V_to_N();
    if ( *(_DWORD *)(a2 + 32) )
      v3 = (double)*(int *)(a2 + 32) / 100.0;
    else
      v3 = v14;
    v17 = v3;
    v2 = v3;
    v10 = bitmain_convert_V_to_N();
    v9 = v15 - v16;
    if ( v14 < 0.1 )
    {
      v12 = -1;
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, "minimal feedback voltage is zero");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/power_api.c",
        150,
        "set_voltage_with_feedback",
        25,
        227,
        80,
        v8);
      goto LABEL_12;
    }
    if ( !v9 )
      goto LABEL_12;
    V_LOCK();
    logfmt_raw(
      v8,
      0x1000u,
      0,
      "board voltage = %.2f, target voltage = %.2f, power real voltage = %.2f, steps = %d",
      v14,
      v13,
      v17,
      v9);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/power_api.c",
      150,
      "set_voltage_with_feedback",
      25,
      231,
      40,
      v8);
    if ( (unsigned int)(v10 + v9) >= 0x100 )
      break;
    sub_AE91C(v10, v10 + v9);
    v10 += v9;
    v10 = sub_AE8E0(v10);
    bitmain_convert_N_to_V();
    *(_DWORD *)(a2 + 32) = (int)(v3 * 100.0);
    if ( fabs(v14 - v13) > 0.1 )
    {
      if ( v11-- )
        continue;
    }
    goto LABEL_12;
  }
  V_LOCK();
  logfmt_raw(v8, 0x1000u, 0, "overflow to the N limitation");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "set_voltage_with_feedback",
    25,
    234,
    100,
    v8);
  v12 = -2;
LABEL_12:
  if ( v12 )
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "fail to set taget voltage = %.2f, feedback_vol = %.2f", v13, v14);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/power_api.c",
      150,
      "set_voltage_with_feedback",
      25,
      247,
      100,
      v8);
  }
  else
  {
    V_LOCK();
    bitmain_convert_N_to_V();
    logfmt_raw(
      v8,
      0x1000u,
      0,
      "set to target voltage = %.2f, power real voltage = %.2f, feed back voltage = %.2f",
      v13,
      v3,
      v14);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/power_api.c",
      150,
      "set_voltage_with_feedback",
      25,
      244,
      40,
      v8);
    *(_DWORD *)(a2 + 28) = a1;
  }
  return v12;
}
