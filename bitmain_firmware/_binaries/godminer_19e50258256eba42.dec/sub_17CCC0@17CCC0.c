int __fastcall sub_17CCC0(int a1, _DWORD *a2, _DWORD *a3, int a4)
{
  _BYTE v10[56]; // [sp+44h] [bp-1038h] BYREF
  _BYTE v11[4]; // [sp+1044h] [bp-38h] BYREF
  _DWORD v12[7]; // [sp+1048h] [bp-34h] BYREF
  int v13; // [sp+1064h] [bp-18h]
  int v14; // [sp+106Ch] [bp-10h]

  V_LOCK();
  logfmt_raw(
    v10,
    0x1000u,
    0,
    "%s chain[%d] iic_addr:%d",
    "ChipSetting_read_sensor_temp_local_on_ctrlboard_KDA_2110",
    *(_DWORD *)(a1 + 272),
    a4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_read_sensor_temp_local_on_ctrlboard_KDA_2110",
    56,
    1399,
    20,
    v10);
  *a3 = 0;
  v14 = tsensor_read(*(_DWORD *)(a1 + 272), a4, 0, (int)v11, 2u);
  if ( v14 == 2 )
  {
    *a3 = 1;
    *a2 = v11[0];
    V_LOCK();
    sub_174D10((int)v12, *(int *)(a1 + 272));
    logfmt_raw(
      v10,
      0x1000u,
      0,
      v13,
      v12[0],
      v12[1],
      v12[2],
      v12[3],
      v12[4],
      v12[5],
      v12[6],
      v13,
      "read ctrlboard temp, local[%02x] %d",
      a4,
      *a2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_setting.c",
      150,
      "ChipSetting_read_sensor_temp_local_on_ctrlboard_KDA_2110",
      56,
      1411,
      20,
      v10);
    return v14;
  }
  else
  {
    *a2 = -64;
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, "failed to read ctrlboard-temp for chain %d", *(_DWORD *)(a1 + 272));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_setting.c",
      150,
      "ChipSetting_read_sensor_temp_local_on_ctrlboard_KDA_2110",
      56,
      1406,
      80,
      v10);
    return -1;
  }
}
