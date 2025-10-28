int __fastcall update_fanspeed(int a1, _DWORD *a2, int a3)
{
  int v4; // r1
  int v5; // r2
  int v6; // r5
  int fan_max_speed; // r4
  _BYTE v12[56]; // [sp+A4h] [bp-11B8h] BYREF
  _DWORD v13[2]; // [sp+10A4h] [bp-1B8h]
  int v14; // [sp+10ACh] [bp-1B0h] BYREF
  _DWORD v15[7]; // [sp+10B0h] [bp-1ACh] BYREF
  int v16; // [sp+10CCh] [bp-190h]
  _DWORD v17[8]; // [sp+10D0h] [bp-18Ch] BYREF
  _DWORD v18[7]; // [sp+10F0h] [bp-16Ch] BYREF
  int v19; // [sp+110Ch] [bp-150h]
  _DWORD v20[8]; // [sp+1110h] [bp-14Ch] BYREF
  _DWORD v21[7]; // [sp+1130h] [bp-12Ch] BYREF
  int v22; // [sp+114Ch] [bp-110h]
  _DWORD v23[8]; // [sp+1150h] [bp-10Ch] BYREF
  _DWORD v24[7]; // [sp+1170h] [bp-ECh] BYREF
  int v25; // [sp+118Ch] [bp-D0h]
  _DWORD v26[8]; // [sp+1190h] [bp-CCh] BYREF
  _DWORD v27[7]; // [sp+11B0h] [bp-ACh] BYREF
  int v28; // [sp+11CCh] [bp-90h]
  _DWORD v29[19]; // [sp+11D0h] [bp-8Ch] BYREF
  int realtime_speed; // [sp+121Ch] [bp-40h]
  int v31; // [sp+1220h] [bp-3Ch]
  int fan_num; // [sp+1224h] [bp-38h]
  _DWORD *all_created_runtime; // [sp+1228h] [bp-34h]
  int v34; // [sp+122Ch] [bp-30h]
  int i; // [sp+1230h] [bp-2Ch]
  int j; // [sp+1234h] [bp-28h]
  int k; // [sp+1238h] [bp-24h]
  int m; // [sp+123Ch] [bp-20h]

  v14 = 0;
  all_created_runtime = get_all_created_runtime(&v14);
  if ( a1 != *all_created_runtime )
    return a3 + 32;
  if ( fan_inited != 1 )
  {
    fan_init();
    fan_inited = 1;
  }
  fan_num = platform_get_fan_num();
  v34 = 0;
  v13[0] = 0;
  v13[1] = 0;
  for ( i = 0; i < fan_num; ++i )
  {
    realtime_speed = fan_get_realtime_speed(i);
    V_LOCK();
    sub_BC910((int)v15, i);
    sub_BC944((int)v17, realtime_speed);
    logfmt_raw(
      v12,
      0x1000u,
      0,
      v16,
      v15[0],
      v15[1],
      v15[2],
      v15[3],
      v15[4],
      v15[5],
      v15[6],
      v16,
      v17[0],
      v17[1],
      v17[2],
      v17[3],
      v17[4],
      v17[5],
      v17[6],
      v17[7],
      "%s",
      "update_fanspeed");
    V_UNLOCK();
    zlog(
      g_fan_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
      190,
      "update_fanspeed",
      15,
      37,
      40,
      v12);
    if ( realtime_speed == -1 )
    {
      V_LOCK();
      sub_BC910((int)v21, i);
      sub_BC944((int)v23, realtime_speed & ~(realtime_speed >> 31));
      logfmt_raw(
        v12,
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
        v23[0],
        v23[1],
        v23[2],
        v23[3],
        v23[4],
        v23[5],
        v23[6],
        v23[7],
        "%2d(corresponding to FAN%s on control board PCB)",
        i,
        fan_name[i]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
        190,
        "update_fanspeed",
        15,
        45,
        100,
        v12);
      *((_BYTE *)v13 + i) = 1;
    }
    else
    {
      V_LOCK();
      sub_BC910((int)v18, i);
      sub_BC944((int)v20, realtime_speed);
      logfmt_raw(
        v12,
        0x1000u,
        0,
        v19,
        v18[0],
        v18[1],
        v18[2],
        v18[3],
        v18[4],
        v18[5],
        v18[6],
        v19,
        v20[0],
        v20[1],
        v20[2],
        v20[3],
        v20[4],
        v20[5],
        v20[6],
        v20[7],
        "%s",
        "update_fanspeed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
        190,
        "update_fanspeed",
        15,
        39,
        20,
        v12);
      *(_DWORD *)(a2[25] + 4 * v34) = i;
      v4 = a2[24];
      v5 = v34++;
      *(_DWORD *)(v4 + 4 * v5) = realtime_speed;
    }
  }
  a2[23] = v34;
  if ( fan_num > a2[23] )
  {
    v29[18] = a3 + 32;
    v29[17] = 1;
    *(_QWORD *)(a3 + 32) |= 2uLL;
  }
  for ( j = 0; j < a2[23]; ++j )
  {
    if ( *(_DWORD *)(a2[24] + 4 * j) )
    {
      v6 = *(_DWORD *)(a2[24] + 4 * j);
      fan_max_speed = platform_get_fan_max_speed(j);
      if ( v6 >= fan_pwm_get() * fan_max_speed / 150 )
        continue;
    }
    v29[16] = a3 + 32;
    v29[15] = 0;
    *(_QWORD *)(a3 + 32) |= 1uLL;
    *((_BYTE *)v13 + j) = 1;
  }
  v29[14] = a3 + 32;
  v29[13] = 1;
  if ( (*(_DWORD *)(a3 + 32) & 2) != 0 || (v29[12] = a3 + 32, v29[11] = 0, (*(_DWORD *)(a3 + 32) & 1) != 0) )
  {
    if ( ++dword_5AEFA4 > dword_59B7C0 )
    {
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, "fan_error_num: %d fan_num %d", dword_5AEFA4, a2[23]);
      V_UNLOCK();
      if ( !*(_BYTE *)(a1 + 279) )
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
          190,
          "update_fanspeed",
          15,
          65,
          20,
          v12);
      if ( dword_59B7C0 + 1 == dword_5AEFA4 )
      {
        v29[10] = a3 + 32;
        v29[9] = 2;
        *(_QWORD *)(a3 + 32) |= 4uLL;
        for ( k = 0; k < fan_num; ++k )
        {
          v31 = fan_get_realtime_speed(k);
          V_LOCK();
          sub_BC910((int)v24, k);
          sub_BC944((int)v26, v31);
          logfmt_raw(
            v12,
            0x1000u,
            0,
            v25,
            v24[0],
            v24[1],
            v24[2],
            v24[3],
            v24[4],
            v24[5],
            v24[6],
            v25,
            v26[0],
            v26[1],
            v26[2],
            v26[3],
            v26[4],
            v26[5],
            v26[6],
            v26[7],
            "%s",
            "update_fanspeed");
          V_UNLOCK();
          zlog(
            g_fan_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
            190,
            "update_fanspeed",
            15,
            72,
            40,
            v12);
          V_LOCK();
          sub_BC910((int)v27, k);
          sub_BC944((int)v29, v31 & ~(v31 >> 31));
          logfmt_raw(
            v12,
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
            v29[0],
            v29[1],
            v29[2],
            v29[3],
            v29[4],
            v29[5],
            v29[6],
            v29[7],
            "%2d(corresponding to FAN%s on control board PCB)",
            k,
            fan_name[k]);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
            190,
            "update_fanspeed",
            15,
            73,
            100,
            v12);
          if ( *((_BYTE *)v13 + k) )
            set_miner_6060info_status_fan_err(k, 1);
        }
      }
    }
  }
  else
  {
    dword_5AEFA4 = 0;
    for ( m = 0; m < fan_num; ++m )
      set_miner_6060info_status_fan_err(m, 0);
  }
  return a3 + 32;
}
