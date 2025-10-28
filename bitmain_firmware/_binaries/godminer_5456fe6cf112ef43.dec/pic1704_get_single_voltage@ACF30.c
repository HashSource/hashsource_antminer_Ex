int __fastcall pic1704_get_single_voltage(char a1, _DWORD *a2)
{
  int v2; // r4
  int result; // r0
  int v5; // r1
  int v6; // r3
  int v7; // r0
  int v8; // r0
  int v9; // r0
  unsigned __int8 *i; // r2
  __int16 v11; // t1
  unsigned __int16 v12; // r8
  int v13; // r0
  int v14; // r0
  int v15; // r3
  int v16; // r0
  int v17; // r0
  int v18; // [sp+10h] [bp-181Ch] BYREF
  __int16 v19; // [sp+14h] [bp-1818h]
  unsigned __int8 v20[8]; // [sp+18h] [bp-1814h] BYREF
  int v21; // [sp+20h] [bp-180Ch]
  int v22; // [sp+24h] [bp-1808h]
  char v23[2040]; // [sp+28h] [bp-1804h] BYREF
  _BYTE v24[4100]; // [sp+828h] [bp-1004h] BYREF

  LOWORD(v2) = 0;
  BYTE2(v21) = 7;
  LOWORD(v21) = 58;
  *(_DWORD *)v20 = 255;
  HIBYTE(v21) = a1;
  v22 = 0;
  v18 = 0;
  *(_DWORD *)&v20[3] = 0;
  v19 = 0;
  result = sub_AC544(v21, 0, (int)&v18, v20);
  if ( result )
  {
    v5 = v20[2];
    v6 = v20[0];
    v7 = v20[1];
    if ( v20[2] == 1 && v20[0] > 3u )
    {
      for ( i = &v20[3]; ; ++i )
      {
        v2 = (unsigned __int16)(v2 + v6);
        LOWORD(v6) = v7;
        if ( i == &v20[v20[0]] )
          break;
        LOWORD(v7) = v5;
        v11 = *i;
        LOWORD(v5) = v11;
      }
      v12 = __rev16(*(unsigned __int16 *)&v20[v20[0] - 2]);
      v13 = snprintf(v23, 0x800u, "sum1,sum2 = %d,%d", v2, v12);
      V_LOCK(v13);
      v14 = logfmt_raw((int)v24, 0x1000u);
      V_UNLOCK(v14);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/drv_pic/pic_1704.c",
        158,
        "check_pic_crc",
        13,
        397,
        20,
        v24);
      if ( v2 == v12 )
      {
        v15 = (unsigned __int16)__rev16(*(unsigned __int16 *)&v20[3]);
        *a2 = (unsigned __int16)v15;
        v16 = snprintf(v23, 0x800u, "Received one voltage response: vol = %d.", v15);
        V_LOCK(v16);
        v17 = logfmt_raw((int)v24, 0x1000u);
        V_UNLOCK(v17);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/drv_pic/pic_1704.c",
          158,
          "pic1704_get_single_voltage",
          26,
          484,
          20,
          v24);
        return 1;
      }
      v6 = v20[0];
      v5 = v20[2];
      v7 = v20[1];
    }
    v8 = snprintf(v23, 0x800u, "ret_buff error: buff0 = %d, buff1 = %d, buff2 = %d.", v6, v7, v5);
    V_LOCK(v8);
    v9 = logfmt_raw((int)v24, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/drv_pic/pic_1704.c",
      158,
      "pic1704_get_single_voltage",
      26,
      480,
      20,
      v24);
    return 1;
  }
  return result;
}
