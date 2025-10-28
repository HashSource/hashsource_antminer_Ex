int get_power_voltage_calibration_data()
{
  int v0; // r0
  unsigned __int16 *v1; // r4
  double *v2; // r6
  _BYTE *v3; // r5
  int v4; // r1
  unsigned int v5; // r2
  int v6; // r0
  int v7; // r0
  int v9; // r0
  _BYTE v10[30]; // [sp+10h] [bp-20h] BYREF
  unsigned __int16 v11; // [sp+2Eh] [bp-2h] BYREF
  _BYTE v12[4100]; // [sp+30h] [bp+0h] BYREF

  bitmain_power_read(64, (int)v10, 32);
  v11 = HIBYTE(v11) | (v11 << 8);
  v0 = POWER_CRC16(v10, 30);
  if ( v11 == v0 )
  {
    v1 = (unsigned __int16 *)v10;
    v2 = (double *)&unk_16D678;
    v3 = &algn_16D664[3];
    dword_16D6C8 = 0;
    do
    {
      v4 = *(unsigned __int8 *)v1;
      v1 = (unsigned __int16 *)((char *)v1 + 3);
      v5 = *((unsigned __int8 *)v1 - 2);
      v6 = v5 & 3;
      if ( !v4 && !*((_BYTE *)v1 - 2) && !*((_BYTE *)v1 - 1) )
        break;
      *v2 = (double)(*((unsigned __int8 *)v1 - 1) | (unsigned int)(v6 << 8)) / 1000.0 + (double)(v5 >> 2);
      *++v3 = v4;
      ++dword_16D6C8;
      V_LOCK(v6);
      ++v2;
      v7 = logfmt_raw((int)v12, 0x1000u);
      V_UNLOCK(v7);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/power/bitmain_power_APW9.c",
        166,
        "get_power_voltage_calibration_data",
        34,
        705,
        60,
        v12);
    }
    while ( v1 != &v11 );
    return 0;
  }
  else
  {
    V_LOCK(v0);
    v9 = logfmt_raw((int)v12, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/power/bitmain_power_APW9.c",
      166,
      "get_power_voltage_calibration_data",
      34,
      688,
      100,
      v12);
    return -1;
  }
}
