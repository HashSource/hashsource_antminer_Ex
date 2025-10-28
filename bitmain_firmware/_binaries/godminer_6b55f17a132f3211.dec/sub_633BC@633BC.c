int __fastcall sub_633BC(_DWORD *a1, _DWORD *a2, _DWORD *a3, unsigned __int8 a4)
{
  int v8; // r0
  int v9; // r0
  int v10; // r3
  int v11; // r0
  int v13; // r0
  int v14; // [sp+34h] [bp-1030h]
  _BYTE v15[4]; // [sp+3Ch] [bp-1028h] BYREF
  int v16; // [sp+40h] [bp-1024h] BYREF
  _BYTE v17[4100]; // [sp+60h] [bp-1004h] BYREF

  V_LOCK(a1);
  v8 = logfmt_raw((int)v17, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/chip_setting.c",
    149,
    "ChipSetting_read_sensor_temp_local_on_ctrlboard_DASH_1766",
    57,
    1003,
    20,
    v17);
  *a3 = 0;
  v9 = tsensor_read(*a1, a4, 0, v15, 2);
  v14 = v9;
  if ( v9 == 2 )
  {
    v10 = v15[0];
    *a3 = 1;
    *a2 = v10;
    V_LOCK(2);
    V_INT((int)&v16, "chain");
    v11 = logfmt_raw((int)v17, 0x1000u);
    V_UNLOCK(v11);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/chip_setting.c",
      149,
      "ChipSetting_read_sensor_temp_local_on_ctrlboard_DASH_1766",
      57,
      1015,
      20,
      v17);
  }
  else
  {
    *a2 = -64;
    v14 = -1;
    V_LOCK(v9);
    v13 = logfmt_raw((int)v17, 0x1000u);
    V_UNLOCK(v13);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/chip_setting.c",
      149,
      "ChipSetting_read_sensor_temp_local_on_ctrlboard_DASH_1766",
      57,
      1010,
      80,
      v17);
  }
  return v14;
}
