int __fastcall read_temperature_eth_2282(int a1, _DWORD *a2)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r1
  int v6; // r2
  int v7; // r2
  int v8; // r3
  int v9; // r3
  int v10; // r3
  int v11; // r3
  _BYTE v15[40]; // [sp+3Ch] [bp-1328h] BYREF
  int v16; // [sp+103Ch] [bp-328h] BYREF
  int v17; // [sp+1040h] [bp-324h] BYREF
  char src[32]; // [sp+1044h] [bp-320h] BYREF
  char dest[256]; // [sp+1064h] [bp-300h] BYREF
  int v20; // [sp+1164h] [bp-200h]
  int v21; // [sp+1168h] [bp-1FCh]
  int v22; // [sp+116Ch] [bp-1F8h]
  int v23; // [sp+1170h] [bp-1F4h]
  int v24; // [sp+1174h] [bp-1F0h]
  int v25; // [sp+1178h] [bp-1ECh]
  int v26; // [sp+117Ch] [bp-1E8h]
  _DWORD v27[18]; // [sp+1180h] [bp-1E4h] BYREF
  _DWORD s[18]; // [sp+11C8h] [bp-19Ch] BYREF
  int v29; // [sp+1210h] [bp-154h] BYREF
  int v30; // [sp+1214h] [bp-150h] BYREF
  _DWORD v31[7]; // [sp+1218h] [bp-14Ch] BYREF
  int v32; // [sp+1234h] [bp-130h]
  _DWORD v33[7]; // [sp+1238h] [bp-12Ch] BYREF
  int v34; // [sp+1254h] [bp-110h]
  _DWORD v35[7]; // [sp+1258h] [bp-10Ch] BYREF
  int v36; // [sp+1274h] [bp-F0h]
  _DWORD v37[7]; // [sp+1278h] [bp-ECh] BYREF
  int v38; // [sp+1294h] [bp-D0h]
  _DWORD v39[7]; // [sp+1298h] [bp-CCh] BYREF
  int v40; // [sp+12B4h] [bp-B0h]
  _DWORD v41[7]; // [sp+12B8h] [bp-ACh] BYREF
  int v42; // [sp+12D4h] [bp-90h]
  _DWORD v43[7]; // [sp+12D8h] [bp-8Ch] BYREF
  int v44; // [sp+12F4h] [bp-70h]
  _DWORD v45[7]; // [sp+12F8h] [bp-6Ch] BYREF
  int v46; // [sp+1314h] [bp-50h]
  _DWORD *v47; // [sp+131Ch] [bp-48h]
  int v48; // [sp+1320h] [bp-44h]
  int v49; // [sp+1324h] [bp-40h]
  int v50; // [sp+1328h] [bp-3Ch]
  int i; // [sp+132Ch] [bp-38h]
  int j; // [sp+1330h] [bp-34h]
  int v53; // [sp+1334h] [bp-30h]
  int v54; // [sp+1338h] [bp-2Ch]
  int m; // [sp+133Ch] [bp-28h]
  int v56; // [sp+1340h] [bp-24h]
  int k; // [sp+1344h] [bp-20h]

  if ( sweep_end == -1 || sweep_end > 99 )
  {
    v30 = -64;
    v29 = -64;
    memset(s, 0, sizeof(s));
    memset(v27, 0, sizeof(v27));
    v50 = 200;
    v49 = 200;
    v48 = -64;
    v2 = *(_DWORD *)(a1 + 428);
    v3 = *(_DWORD *)(a1 + 432);
    v4 = *(_DWORD *)(a1 + 436);
    v20 = *(_DWORD *)(a1 + 424);
    v21 = v2;
    v22 = v3;
    v23 = v4;
    v5 = *(_DWORD *)(a1 + 444);
    v6 = *(_DWORD *)(a1 + 448);
    v24 = *(_DWORD *)(a1 + 440);
    v25 = v5;
    v26 = v6;
    init_temp_wr_eth_2282(a1);
    *(_DWORD *)(a1 + 1216) = 200;
    for ( i = 0; i < v22; ++i )
    {
      v47 = (_DWORD *)(v20 + 24 * i);
      v17 = 0;
      (*(void (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 168))(
        a1,
        &v30,
        &v17,
        *v47,
        v47[1],
        v47[2],
        v47[3],
        v47[4],
        v47[5]);
      if ( v17 )
      {
        if ( (!i || i == 7) && v30 != -64 )
        {
          v7 = *(_DWORD *)(a1 + 1216);
          if ( v7 >= v30 )
            v7 = v30;
          *(_DWORD *)(a1 + 1216) = v7;
        }
        if ( v30 < -63 )
        {
          *(_BYTE *)(a1 + 277) = 0;
          if ( *(int *)(a1 + 1216) < 0 )
          {
            *(_BYTE *)(a1 + 1224) = 1;
            v30 = -63;
          }
          else
          {
            *(_BYTE *)(a1 + 1224) = 0;
            v30 = -64;
            V_LOCK();
            sub_FBD60((int)v31, *(int *)(a1 + 272));
            logfmt_raw(
              v15,
              0x1000u,
              0,
              v32,
              v31[0],
              v31[1],
              v31[2],
              v31[3],
              v31[4],
              v31[5],
              v31[6],
              v32,
              "got uneffective temp, sensor[%d], addr:%02x",
              *v47,
              v47[5]);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "read_temperature_eth_2282",
              25,
              2369,
              100,
              v15);
          }
        }
      }
      else
      {
        *(_BYTE *)(a1 + 277) = 0;
        if ( *(int *)(a1 + 1216) < 0 )
        {
          *(_BYTE *)(a1 + 1224) = 1;
          v30 = -63;
        }
        else
        {
          *(_BYTE *)(a1 + 1224) = 0;
          v30 = -64;
          V_LOCK();
          sub_FBD60((int)v33, *(int *)(a1 + 272));
          logfmt_raw(
            v15,
            0x1000u,
            0,
            v34,
            v33[0],
            v33[1],
            v33[2],
            v33[3],
            v33[4],
            v33[5],
            v33[6],
            v34,
            "read local sensor failed, sensor[%d], addr:%02x",
            *v47,
            v47[5]);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
            171,
            "read_temperature_eth_2282",
            25,
            2383,
            100,
            v15);
        }
      }
      a2[2 * i] = v30;
      V_LOCK();
      sub_FBD60((int)v35, *(int *)(a1 + 272));
      logfmt_raw(
        v15,
        0x1000u,
        0,
        v36,
        v35[0],
        v35[1],
        v35[2],
        v35[3],
        v35[4],
        v35[5],
        v35[6],
        v36,
        "read sensor[%d] local: %d, addr:%02x",
        *v47,
        a2[2 * i],
        v47[5]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "read_temperature_eth_2282",
        25,
        2391,
        20,
        v15);
      if ( i && i != 7 && v30 != -64 && v30 != -63 )
      {
        v8 = v30;
        if ( v50 < v30 )
          v8 = v50;
        v50 = v8;
        v27[6 * *(_DWORD *)(a1 + 272) - 1 + i] = v30;
      }
      v16 = 0;
      (*(void (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 172))(
        a1,
        &v29,
        &v16,
        *v47,
        v47[1],
        v47[2],
        v47[3],
        v47[4],
        v47[5]);
      if ( v16 )
      {
        if ( v29 < -63 )
        {
          *(_BYTE *)(a1 + 277) = 0;
          if ( *(int *)(a1 + 1216) < 0 )
          {
            *(_BYTE *)(a1 + 1224) = 1;
            v29 = -63;
          }
          else
          {
            *(_BYTE *)(a1 + 1224) = 0;
            v29 = -64;
            V_LOCK();
            sub_FBD60((int)v37, *(int *)(a1 + 272));
            logfmt_raw(
              v15,
              0x1000u,
              0,
              v38,
              v37[0],
              v37[1],
              v37[2],
              v37[3],
              v37[4],
              v37[5],
              v37[6],
              v38,
              "got uneffective temp, sensor[%d], addr:%02x",
              *v47,
              v47[5]);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "read_temperature_eth_2282",
              25,
              2411,
              100,
              v15);
          }
        }
      }
      else
      {
        *(_BYTE *)(a1 + 277) = 0;
        if ( *(int *)(a1 + 1216) < 0 )
        {
          *(_BYTE *)(a1 + 1224) = 1;
          v29 = -63;
        }
        else
        {
          *(_BYTE *)(a1 + 1224) = 0;
          v29 = -64;
          V_LOCK();
          sub_FBD60((int)v39, *(int *)(a1 + 272));
          logfmt_raw(
            v15,
            0x1000u,
            0,
            v40,
            v39[0],
            v39[1],
            v39[2],
            v39[3],
            v39[4],
            v39[5],
            v39[6],
            v40,
            "read remote sensor failed, sensor[%d], addr:%02x",
            *v47,
            v47[5]);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
            171,
            "read_temperature_eth_2282",
            25,
            2425,
            100,
            v15);
          if ( i == v22 )
          {
            V_LOCK();
            sub_FBD60((int)v41, *(int *)(a1 + 272));
            logfmt_raw(
              v15,
              0x1000u,
              0,
              v42,
              v41[0],
              v41[1],
              v41[2],
              v41[3],
              v41[4],
              v41[5],
              v41[6],
              v42,
              "PCB local temp: %d, %d",
              *a2,
              a2[14]);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "read_temperature_eth_2282",
              25,
              2427,
              40,
              v15);
          }
        }
      }
      a2[2 * i + 1] = v29;
      V_LOCK();
      sub_FBD60((int)v43, *(int *)(a1 + 272));
      logfmt_raw(
        v15,
        0x1000u,
        0,
        v44,
        v43[0],
        v43[1],
        v43[2],
        v43[3],
        v43[4],
        v43[5],
        v43[6],
        v44,
        "read sensor[%d] remote: %d, addr:%02x",
        *v47,
        a2[2 * i + 1],
        v47[5]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "read_temperature_eth_2282",
        25,
        2437,
        20,
        v15);
      if ( i && i != 7 )
      {
        if ( v29 != -64 && v29 != -63 )
        {
          v9 = v29;
          if ( v49 < v29 )
            v9 = v49;
          v49 = v9;
          s[6 * *(_DWORD *)(a1 + 272) - 1 + i] = v29;
        }
        v48 += v29;
      }
    }
    *(_DWORD *)(a1 + 1216) = v49;
    *(_DWORD *)(a1 + 1220) = v49;
    *(_DWORD *)(a1 + 1232) = (v48 + 64) / 6;
    if ( *(int *)(a1 + 1232) > 9 )
      avg_remote_temp[*(_DWORD *)(a1 + 272)] = *(_DWORD *)(a1 + 1232);
    min_remote_temp[*(_DWORD *)(a1 + 272)] = v49;
    min_local_temp[*(_DWORD *)(a1 + 272)] = v50;
    v56 = 0;
    for ( j = 0; j <= 2; ++j )
    {
      v56 = min_remote_temp[j] - *(_DWORD *)(a1 + 1220);
      if ( v56 > 14 )
        *(_BYTE *)(a1 + 277) = 0;
    }
    V_LOCK();
    logfmt_raw(v15, 0x1000u, 0, "chain-%d, runtime_min_local_temp %d", *(_DWORD *)(a1 + 272), *(_DWORD *)(a1 + 1216));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "read_temperature_eth_2282",
      25,
      2467,
      20,
      v15);
    V_LOCK();
    logfmt_raw(v15, 0x1000u, 0, "chain-%d, runtime_min_remote_temp %d", *(_DWORD *)(a1 + 272), *(_DWORD *)(a1 + 1220));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "read_temperature_eth_2282",
      25,
      2468,
      20,
      v15);
    memset(dest, 0, sizeof(dest));
    memset(src, 0, sizeof(src));
    for ( k = 0; k <= 5; ++k )
    {
      sprintf(src, "%d ", s[6 * *(_DWORD *)(a1 + 272) + k]);
      strcat(dest, src);
    }
    if ( *(_BYTE *)(a1 + 1227) )
      printf("chain-%d remote temp: %s\n", *(_DWORD *)(a1 + 272), dest);
    memset(src, 0, sizeof(src));
    memset(dest, 0, sizeof(dest));
    for ( m = 0; m <= 5; ++m )
    {
      sprintf(src, "%d ", v27[6 * *(_DWORD *)(a1 + 272) + m]);
      strcat(dest, src);
    }
    V_LOCK();
    sub_FBD60((int)v45, *(int *)(a1 + 272));
    logfmt_raw(
      v15,
      0x1000u,
      0,
      v46,
      v45[0],
      v45[1],
      v45[2],
      v45[3],
      v45[4],
      v45[5],
      v45[6],
      v46,
      "local temp: %s",
      dest);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "read_temperature_eth_2282",
      25,
      2485,
      20,
      v15);
    v10 = dword_5A8B20;
    if ( dword_5A8B1C < dword_5A8B20 )
      v10 = dword_5A8B1C;
    if ( min_remote_temp[0] < v10 )
      v10 = min_remote_temp[0];
    v53 = v10;
    v11 = dword_5A8B2C;
    if ( dword_5A8B28 < dword_5A8B2C )
      v11 = dword_5A8B28;
    if ( avg_remote_temp[0] < v11 )
      v11 = avg_remote_temp[0];
    v54 = v11;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v15, 0x1000u, 0, "sweep_end: %d", sweep_end);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "read_temperature_eth_2282",
      25,
      2335,
      20,
      v15);
  }
  return 0;
}
