int __fastcall sub_80AE4(_DWORD *a1, unsigned __int8 *a2, _DWORD *a3, _DWORD *a4, unsigned __int8 a5)
{
  int result; // r0
  int v9; // r3
  int v10; // r0
  _BYTE v11[4]; // [sp+14h] [bp-1004h] BYREF
  _BYTE v12[4072]; // [sp+18h] [bp-1000h] BYREF

  *a4 = 0;
  result = tsensor_read(*a1, a5, 0, v11, 2);
  if ( result == 2 )
  {
    v9 = v11[0];
    *a4 = 1;
    *a3 = v9 + *a2;
  }
  else
  {
    *a3 = -64;
    V_LOCK(result);
    v10 = logfmt_raw((int)v12, 0x1000u);
    V_UNLOCK(v10);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/chip_setting.c",
      149,
      "ChipSetting_read_sensor_temp_remote_on_ctrlboard_KDA_2110",
      57,
      1029,
      80,
      v12);
    return -1;
  }
  return result;
}
