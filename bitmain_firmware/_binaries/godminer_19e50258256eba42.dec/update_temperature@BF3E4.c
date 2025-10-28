int __fastcall update_temperature(int a1, _DWORD *a2, int a3)
{
  int v3; // r3
  _BYTE v9[48]; // [sp+94h] [bp-1130h] BYREF
  unsigned int v10; // [sp+1094h] [bp-130h] BYREF
  int v11; // [sp+1098h] [bp-12Ch] BYREF
  int v12; // [sp+109Ch] [bp-128h] BYREF
  int v13; // [sp+10A0h] [bp-124h] BYREF
  int v14; // [sp+10A4h] [bp-120h] BYREF
  int v15; // [sp+10A8h] [bp-11Ch] BYREF
  int v16; // [sp+10ACh] [bp-118h] BYREF
  _DWORD v17[7]; // [sp+10B0h] [bp-114h] BYREF
  int v18; // [sp+10CCh] [bp-F8h]
  _DWORD v19[7]; // [sp+10D0h] [bp-F4h] BYREF
  int v20; // [sp+10ECh] [bp-D8h]
  _DWORD v21[7]; // [sp+10F0h] [bp-D4h] BYREF
  int v22; // [sp+110Ch] [bp-B8h]
  _DWORD v23[7]; // [sp+1110h] [bp-B4h] BYREF
  int v24; // [sp+112Ch] [bp-98h]
  _DWORD v25[7]; // [sp+1130h] [bp-94h] BYREF
  int v26; // [sp+114Ch] [bp-78h]
  _DWORD v27[7]; // [sp+1150h] [bp-74h] BYREF
  int v28; // [sp+116Ch] [bp-58h]
  int v29; // [sp+1174h] [bp-50h]
  int v30; // [sp+1178h] [bp-4Ch]
  int v31; // [sp+117Ch] [bp-48h]
  int v32; // [sp+1180h] [bp-44h]
  int v33; // [sp+1184h] [bp-40h]
  int v34; // [sp+1188h] [bp-3Ch]
  int v35; // [sp+118Ch] [bp-38h]
  int v36; // [sp+1190h] [bp-34h]
  int v37; // [sp+1194h] [bp-30h]
  int v38; // [sp+1198h] [bp-2Ch]
  int v39; // [sp+119Ch] [bp-28h]
  int v40; // [sp+11A0h] [bp-24h]
  int v41; // [sp+11A4h] [bp-20h]

  v12 = 0;
  v11 = 0;
  v10 = 0;
  if ( *(_BYTE *)(a1 + 279) )
    v3 = 0;
  else
    v3 = 5;
  v41 = v3;
  if ( *(_BYTE *)(a1 + 279) != 1 || no_connection_with_pool )
    return a3 + 16;
  if ( sub_BE930((_DWORD *)a1, a2, &v16, &v15, &v14, &v13, &v12, &v11, &v10) )
  {
    if ( v41 )
    {
      V_LOCK();
      sub_BE860((int)v17, *(int *)(a1 + 272));
      logfmt_raw(
        v9,
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
        "read temp error! pcb temp count %d chip temp count %d uneffective value count %d",
        v12,
        v11,
        v10);
      V_UNLOCK();
      switch ( v41 )
      {
        case 5:
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
            193,
            "update_temperature",
            18,
            318,
            20,
            v9);
          break;
        case 4:
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
            193,
            "update_temperature",
            18,
            318,
            40,
            v9);
          break;
        case 3:
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
            193,
            "update_temperature",
            18,
            318,
            60,
            v9);
          break;
        case 2:
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
            193,
            "update_temperature",
            18,
            318,
            80,
            v9);
          break;
        case 1:
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
            193,
            "update_temperature",
            18,
            318,
            100,
            v9);
          break;
        case 0:
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
            193,
            "update_temperature",
            18,
            318,
            120,
            v9);
          break;
      }
      V_LOCK();
      logfmt_raw(v9, 0x1000u, 0, "Sweep error string = %s.", "J0:6");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        193,
        "update_temperature",
        18,
        319,
        100,
        v9);
    }
    v40 = a3 + 16;
    v39 = 0;
    *(_QWORD *)(a3 + 16) |= 1uLL;
  }
  if ( v12 )
  {
    dword_5BA848[*(_DWORD *)(a1 + 264)] = v16;
    a2[5] = v15;
    dword_5BA888[*(_DWORD *)(a1 + 264)] = 0;
  }
  else if ( (int)++dword_5BA888[*(_DWORD *)(a1 + 264)] > 2 )
  {
    V_LOCK();
    sub_BE860((int)v19, *(int *)(a1 + 272));
    logfmt_raw(
      v9,
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
      "read no sensor pcb temp exceed limit! (%d)",
      dword_5BA888[*(_DWORD *)(a1 + 264)]);
    V_UNLOCK();
    switch ( v41 )
    {
      case 5:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          193,
          "update_temperature",
          18,
          336,
          20,
          v9);
        break;
      case 4:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          193,
          "update_temperature",
          18,
          336,
          40,
          v9);
        break;
      case 3:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          193,
          "update_temperature",
          18,
          336,
          60,
          v9);
        break;
      case 2:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          193,
          "update_temperature",
          18,
          336,
          80,
          v9);
        break;
      case 1:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          193,
          "update_temperature",
          18,
          336,
          100,
          v9);
        break;
      case 0:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          193,
          "update_temperature",
          18,
          336,
          120,
          v9);
        break;
    }
    v38 = a3 + 16;
    v37 = 3;
    *(_QWORD *)(a3 + 16) |= 8uLL;
  }
  if ( v11 )
  {
    a2[4] = v14;
    dword_5BA8C8[*(_DWORD *)(a1 + 264)] = v13;
    dword_5BA908[*(_DWORD *)(a1 + 264)] = 0;
  }
  else if ( (int)++dword_5BA908[*(_DWORD *)(a1 + 264)] > 2 )
  {
    V_LOCK();
    sub_BE860((int)v21, *(int *)(a1 + 272));
    logfmt_raw(
      v9,
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
      "read no sensor chip temp exceed limit! (%d)",
      dword_5BA908[*(_DWORD *)(a1 + 264)]);
    V_UNLOCK();
    switch ( v41 )
    {
      case 5:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          193,
          "update_temperature",
          18,
          353,
          20,
          v9);
        break;
      case 4:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          193,
          "update_temperature",
          18,
          353,
          40,
          v9);
        break;
      case 3:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          193,
          "update_temperature",
          18,
          353,
          60,
          v9);
        break;
      case 2:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          193,
          "update_temperature",
          18,
          353,
          80,
          v9);
        break;
      case 1:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          193,
          "update_temperature",
          18,
          353,
          100,
          v9);
        break;
      case 0:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          193,
          "update_temperature",
          18,
          353,
          120,
          v9);
        break;
    }
    v36 = a3 + 16;
    v35 = 3;
    *(_QWORD *)(a3 + 16) |= 8uLL;
  }
  if ( *(_DWORD *)(a1 + 448) >= v10 )
  {
    dword_5BA948[*(_DWORD *)(a1 + 264)] = 0;
  }
  else if ( (int)++dword_5BA948[*(_DWORD *)(a1 + 264)] > 2 )
  {
    V_LOCK();
    sub_BE860((int)v23, *(int *)(a1 + 272));
    logfmt_raw(
      v9,
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
      "uneffective temp exceed limit (%d), uneffective_value_count = %d!",
      dword_5BA948[*(_DWORD *)(a1 + 264)],
      v10);
    V_UNLOCK();
    switch ( v41 )
    {
      case 5:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          193,
          "update_temperature",
          18,
          364,
          20,
          v9);
        break;
      case 4:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          193,
          "update_temperature",
          18,
          364,
          40,
          v9);
        break;
      case 3:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          193,
          "update_temperature",
          18,
          364,
          60,
          v9);
        break;
      case 2:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          193,
          "update_temperature",
          18,
          364,
          80,
          v9);
        break;
      case 1:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          193,
          "update_temperature",
          18,
          364,
          100,
          v9);
        break;
      case 0:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          193,
          "update_temperature",
          18,
          364,
          120,
          v9);
        break;
    }
    v34 = a3 + 16;
    v33 = 4;
    *(_QWORD *)(a3 + 16) |= 0x10uLL;
  }
  if ( a2[4] <= *(_DWORD *)(a1 + 436) && dword_5BA848[*(_DWORD *)(a1 + 264)] <= *(_DWORD *)(a1 + 440) )
  {
    dword_5BA988[*(_DWORD *)(a1 + 264)] = 0;
  }
  else if ( (int)++dword_5BA988[*(_DWORD *)(a1 + 264)] > 2 )
  {
    V_LOCK();
    sub_BE860((int)v25, *(int *)(a1 + 272));
    logfmt_raw(
      v9,
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
      "high temp exceed limit (%d), max_chip_temp = %d, max_pcb_temp = %d!",
      dword_5BA988[*(_DWORD *)(a1 + 264)],
      a2[4],
      dword_5BA848[*(_DWORD *)(a1 + 264)]);
    V_UNLOCK();
    switch ( v41 )
    {
      case 5:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          193,
          "update_temperature",
          18,
          379,
          20,
          v9);
        break;
      case 4:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          193,
          "update_temperature",
          18,
          379,
          40,
          v9);
        break;
      case 3:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          193,
          "update_temperature",
          18,
          379,
          60,
          v9);
        break;
      case 2:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          193,
          "update_temperature",
          18,
          379,
          80,
          v9);
        break;
      case 1:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          193,
          "update_temperature",
          18,
          379,
          100,
          v9);
        break;
      case 0:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
          193,
          "update_temperature",
          18,
          379,
          120,
          v9);
        break;
    }
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "Sweep error string = %s.", "P:1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
      193,
      "update_temperature",
      18,
      380,
      100,
      v9);
    v32 = a3 + 16;
    v31 = 1;
    *(_QWORD *)(a3 + 16) |= 2uLL;
  }
  if ( a2[5] > *(_DWORD *)(a1 + 444) )
  {
    dword_5BA9C8[*(_DWORD *)(a1 + 264)] = 0;
  }
  else if ( *(_BYTE *)(a1 + 1224) != 1 )
  {
    if ( (int)++dword_5BA9C8[*(_DWORD *)(a1 + 264)] > 2 )
    {
      V_LOCK();
      sub_BE860((int)v27, *(int *)(a1 + 272));
      logfmt_raw(
        v9,
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
        "low temp exceed limit (%d), min_pcb_temp = %d!",
        dword_5BA9C8[*(_DWORD *)(a1 + 264)],
        a2[5]);
      V_UNLOCK();
      switch ( v41 )
      {
        case 5:
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
            193,
            "update_temperature",
            18,
            397,
            20,
            v9);
          break;
        case 4:
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
            193,
            "update_temperature",
            18,
            397,
            40,
            v9);
          break;
        case 3:
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
            193,
            "update_temperature",
            18,
            397,
            60,
            v9);
          break;
        case 2:
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
            193,
            "update_temperature",
            18,
            397,
            80,
            v9);
          break;
        case 1:
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
            193,
            "update_temperature",
            18,
            397,
            100,
            v9);
          break;
        case 0:
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
            193,
            "update_temperature",
            18,
            397,
            120,
            v9);
          break;
      }
      v30 = a3 + 16;
      v29 = 2;
      *(_QWORD *)(a3 + 16) |= 4uLL;
    }
  }
  else
  {
    dword_5BA9C8[*(_DWORD *)(a1 + 264)] = 0;
  }
  return a3 + 16;
}
