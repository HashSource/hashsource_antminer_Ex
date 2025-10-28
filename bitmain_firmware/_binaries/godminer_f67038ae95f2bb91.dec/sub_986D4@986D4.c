int __fastcall sub_986D4(int a1, _DWORD *a2, _DWORD *a3, unsigned __int8 a4)
{
  int result; // r0
  int v8; // r3
  _BYTE v9[4]; // [sp+14h] [bp-1008h] BYREF
  char v10[4100]; // [sp+18h] [bp-1004h] BYREF

  *a3 = 0;
  result = tsensor_read(*(_DWORD *)(a1 + 248), a4, 0, (int)v9, 2);
  if ( result == 2 )
  {
    v8 = v9[0];
    *a3 = 1;
    *a2 = v8 + *(unsigned __int8 *)(a1 + 988);
  }
  else
  {
    *a2 = -64;
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, "failed to read ctrlboard-temp for chain %d", *(_DWORD *)(a1 + 248));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/chip_setting.c",
      153,
      "ChipSetting_read_sensor_temp_remote_on_ctrlboard_KDA_2110",
      57,
      1346,
      80,
      v10);
    return -1;
  }
  return result;
}
