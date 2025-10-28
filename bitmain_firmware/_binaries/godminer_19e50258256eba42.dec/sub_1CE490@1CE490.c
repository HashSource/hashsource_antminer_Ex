int __fastcall sub_1CE490(int a1, _DWORD *a2, _DWORD *a3, unsigned __int8 a4)
{
  _BYTE v9[12]; // [sp+20h] [bp-100Ch] BYREF
  _BYTE v10[4]; // [sp+1020h] [bp-Ch] BYREF
  int v11; // [sp+1024h] [bp-8h]

  *a3 = 0;
  v11 = tsensor_read(*(_DWORD *)(a1 + 272), a4, 0, (int)v10, 2u);
  if ( v11 == 2 )
  {
    *a3 = 1;
    *a2 = v10[0] + *(unsigned __int8 *)(a1 + 1044);
    return v11;
  }
  else
  {
    *a2 = -64;
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "failed to read ctrlboard-temp for chain %d", *(_DWORD *)(a1 + 272));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_setting.c",
      150,
      "ChipSetting_read_sensor_temp_remote_on_ctrlboard_RVN",
      52,
      1425,
      80,
      v9);
    return -1;
  }
}
