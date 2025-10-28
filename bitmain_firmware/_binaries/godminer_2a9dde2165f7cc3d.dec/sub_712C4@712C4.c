int __fastcall sub_712C4(unsigned __int8 *a1, _DWORD *a2, _DWORD *a3, unsigned __int8 a4)
{
  int v4; // r7
  int result; // r0
  int v9; // r3
  int v10; // r0
  int v11; // r2
  int v12; // r0
  char v13; // [sp+17h] [bp-1005h] BYREF
  _BYTE v14[4100]; // [sp+18h] [bp-1004h] BYREF

  v4 = a4;
  *a3 = 0;
  *a2 = -64;
  if ( pic1704_write_iic(*a1, a4) )
  {
    usleep(0x2710u);
    result = pic1704_read_iic(*a1, v4, &v13);
    if ( result )
    {
      v9 = v13;
      *a3 = 1;
      *a2 = v9;
      return result;
    }
    V_LOCK(0);
    v12 = logfmt_raw((int)v14, 0x1000u);
    V_UNLOCK(v12);
    v11 = 1068;
  }
  else
  {
    V_LOCK(0);
    v10 = logfmt_raw((int)v14, 0x1000u);
    V_UNLOCK(v10);
    v11 = 1057;
  }
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/chip_setting.c",
    153,
    "ChipSetting_read_sensor_temp_local_on_pic_ETH",
    45,
    v11,
    20,
    v14);
  return 0;
}
