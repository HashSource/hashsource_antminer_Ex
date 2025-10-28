int __fastcall sub_81E1C(int a1, int a2, int a3, int a4, int *a5, _DWORD *a6, int a7)
{
  int v9; // [sp+24h] [bp-10F0h]
  _BYTE v14[28]; // [sp+38h] [bp-10DCh] BYREF
  int v15; // [sp+1038h] [bp-DCh] BYREF
  int s; // [sp+103Ch] [bp-D8h] BYREF
  _DWORD v17[7]; // [sp+1040h] [bp-D4h] BYREF
  int v18; // [sp+105Ch] [bp-B8h]
  _DWORD v19[7]; // [sp+1060h] [bp-B4h] BYREF
  int v20; // [sp+107Ch] [bp-98h]
  _DWORD v21[7]; // [sp+1080h] [bp-94h] BYREF
  int v22; // [sp+109Ch] [bp-78h]
  _DWORD v23[7]; // [sp+10A0h] [bp-74h] BYREF
  int v24; // [sp+10BCh] [bp-58h]
  _DWORD v25[7]; // [sp+10C0h] [bp-54h] BYREF
  int v26; // [sp+10DCh] [bp-38h]
  _DWORD v27[7]; // [sp+10E0h] [bp-34h] BYREF
  int v28; // [sp+10FCh] [bp-18h]
  int v29; // [sp+1100h] [bp-14h]
  int v30; // [sp+1104h] [bp-10h]

  v29 = 0;
  *a6 = 0;
  *a5 = -64;
  v29 = sub_81880(a1, 0, a7, a2, a4, a3, &s, &v15, 1);
  if ( s >= 0 )
  {
    if ( (s & 0x40000000) != 0 )
    {
      V_LOCK();
      sub_7AAF4((int)v19, *(int *)(a1 + 272));
      logfmt_raw(
        v14,
        0x1000u,
        0,
        v20,
        v19[0],
        v19[1],
        v19[2],
        v19[3],
        v19[4],
        v19[5],
        v19[6],
        v20,
        "IIC rw failed",
        v9,
        a4,
        a3,
        a2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_setting.c",
        150,
        "ChipSetting_sensor_temp_config_slt_eth_2282_KAS_2380",
        52,
        1294,
        100,
        v14);
      return 0x40000000;
    }
    else
    {
      if ( (s & 0xFF00) != 0 )
      {
        if ( (s & 0xFF00) == 0x100 )
        {
          v30 = (unsigned __int8)s - 64;
          V_LOCK();
          sub_7AAF4((int)v23, *(int *)(a1 + 272));
          logfmt_raw(
            v14,
            0x1000u,
            0,
            v24,
            v23[0],
            v23[1],
            v23[2],
            v23[3],
            v23[4],
            v23[5],
            v23[6],
            v24,
            "read remote temp %d",
            v30,
            a4,
            a3,
            a2);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/chip_setting.c",
            150,
            "ChipSetting_sensor_temp_config_slt_eth_2282_KAS_2380",
            52,
            1308,
            40,
            v14);
        }
        else
        {
          V_LOCK();
          sub_7AAF4((int)v25, *(int *)(a1 + 272));
          logfmt_raw(
            v14,
            0x1000u,
            0,
            v26,
            v25[0],
            v25[1],
            v25[2],
            v25[3],
            v25[4],
            v25[5],
            v25[6],
            v26,
            "read top reg General I2C Command value : %02x02x02x02x",
            s,
            a4,
            a3,
            a2);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/chip_setting.c",
            150,
            "ChipSetting_sensor_temp_config_slt_eth_2282_KAS_2380",
            52,
            1312,
            40,
            v14);
          V_LOCK();
          sub_7AAF4((int)v27, *(int *)(a1 + 272));
          logfmt_raw(
            v14,
            0x1000u,
            0,
            v28,
            v27[0],
            v27[1],
            v27[2],
            v27[3],
            v27[4],
            v27[5],
            v27[6],
            v28,
            "read top reg General I2C Command value : %08x",
            s);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/chip_setting.c",
            150,
            "ChipSetting_sensor_temp_config_slt_eth_2282_KAS_2380",
            52,
            1313,
            40,
            v14);
        }
      }
      else
      {
        v30 = (unsigned __int8)s - 64;
        V_LOCK();
        sub_7AAF4((int)v21, *(int *)(a1 + 272));
        logfmt_raw(
          v14,
          0x1000u,
          0,
          v22,
          v21[0],
          v21[1],
          v21[2],
          v21[3],
          v21[4],
          v21[5],
          v21[6],
          v22,
          "read local temp %d",
          v30,
          a4,
          a3,
          a2);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/chip_setting.c",
          150,
          "ChipSetting_sensor_temp_config_slt_eth_2282_KAS_2380",
          52,
          1302,
          40,
          v14);
      }
      *a5 = v30;
      *a6 = v15;
      return v29;
    }
  }
  else
  {
    V_LOCK();
    sub_7AAF4((int)v17, *(int *)(a1 + 272));
    logfmt_raw(
      v14,
      0x1000u,
      0,
      v18,
      v17[0],
      v17[1],
      v17[2],
      v17[3],
      v17[4],
      v17[5],
      v17[6],
      v18,
      "IIC busy",
      v9,
      a4,
      a3,
      a2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_setting.c",
      150,
      "ChipSetting_sensor_temp_config_slt_eth_2282_KAS_2380",
      52,
      1289,
      100,
      v14);
    return 0x80000000;
  }
}
