int __fastcall sub_1A4B98(int a1, int a2)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r3
  int v9; // r2
  int v10; // r3
  _BYTE v14[88]; // [sp+44h] [bp-1118h] BYREF
  int v15; // [sp+1044h] [bp-118h] BYREF
  int v16; // [sp+1048h] [bp-114h] BYREF
  int v17; // [sp+104Ch] [bp-110h]
  int v18; // [sp+1050h] [bp-10Ch]
  int v19; // [sp+1054h] [bp-108h]
  int v20; // [sp+1058h] [bp-104h]
  int v21; // [sp+105Ch] [bp-100h]
  int v22; // [sp+1060h] [bp-FCh]
  int v23; // [sp+1064h] [bp-F8h]
  int v24; // [sp+1068h] [bp-F4h] BYREF
  int v25; // [sp+106Ch] [bp-F0h] BYREF
  _DWORD v26[7]; // [sp+1070h] [bp-ECh] BYREF
  int v27; // [sp+108Ch] [bp-D0h]
  _DWORD v28[7]; // [sp+1090h] [bp-CCh] BYREF
  int v29; // [sp+10ACh] [bp-B0h]
  _DWORD v30[7]; // [sp+10B0h] [bp-ACh] BYREF
  int v31; // [sp+10CCh] [bp-90h]
  _DWORD v32[7]; // [sp+10D0h] [bp-8Ch] BYREF
  int v33; // [sp+10ECh] [bp-70h]
  _DWORD v34[7]; // [sp+10F0h] [bp-6Ch] BYREF
  int v35; // [sp+110Ch] [bp-50h]
  _DWORD v36[7]; // [sp+1110h] [bp-4Ch] BYREF
  int v37; // [sp+112Ch] [bp-30h]
  int v38; // [sp+1130h] [bp-2Ch]
  int v39; // [sp+1134h] [bp-28h]
  int i; // [sp+1138h] [bp-24h]
  _DWORD *v41; // [sp+113Ch] [bp-20h]

  v25 = -64;
  v24 = -64;
  v2 = *(_DWORD *)(a1 + 428);
  v3 = *(_DWORD *)(a1 + 432);
  v4 = *(_DWORD *)(a1 + 436);
  v17 = *(_DWORD *)(a1 + 424);
  v18 = v2;
  v19 = v3;
  v20 = v4;
  v5 = *(_DWORD *)(a1 + 444);
  v6 = *(_DWORD *)(a1 + 448);
  v21 = *(_DWORD *)(a1 + 440);
  v22 = v5;
  v23 = v6;
  for ( i = 0; i < v19; ++i )
  {
    v41 = (_DWORD *)(v17 + 24 * i);
    v16 = 0;
    (*(void (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 168))(
      a1,
      &v25,
      &v16,
      *v41,
      v41[1],
      v41[2],
      v41[3],
      v41[4],
      v41[5]);
    if ( v16 )
    {
      if ( v25 < -63 )
      {
        v25 = -64;
        V_LOCK();
        sub_1978B0((int)v26, *(int *)(a1 + 272));
        logfmt_raw(
          v14,
          0x1000u,
          0,
          v27,
          v26[0],
          v26[1],
          v26[2],
          v26[3],
          v26[4],
          v26[5],
          v26[6],
          v27,
          "got uneffective temp, sensor[%d], addr:%02x",
          *v41,
          v41[5]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
          171,
          "read_temperature_ltc",
          20,
          350,
          100,
          v14);
      }
    }
    else
    {
      v25 = -64;
      V_LOCK();
      sub_1978B0((int)v28, *(int *)(a1 + 272));
      logfmt_raw(
        v14,
        0x1000u,
        0,
        v29,
        v28[0],
        v28[1],
        v28[2],
        v28[3],
        v28[4],
        v28[5],
        v28[6],
        v29,
        "read sensor failed, sensor[%d], addr:%02x",
        *v41,
        v41[5]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
        171,
        "read_temperature_ltc",
        20,
        355,
        100,
        v14);
    }
    *(_DWORD *)(a2 + 8 * i) = v25;
    v15 = 0;
    (*(void (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 172))(
      a1,
      &v24,
      &v15,
      *v41,
      v41[1],
      v41[2],
      v41[3],
      v41[4],
      v41[5]);
    if ( v15 )
    {
      if ( v24 < -63 )
      {
        v24 = -64;
        V_LOCK();
        sub_1978B0((int)v30, *(int *)(a1 + 272));
        logfmt_raw(
          v14,
          0x1000u,
          0,
          v31,
          v30[0],
          v30[1],
          v30[2],
          v30[3],
          v30[4],
          v30[5],
          v30[6],
          v31,
          "got uneffective temp, sensor[%d], addr:%02x",
          *v41,
          v41[5]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
          171,
          "read_temperature_ltc",
          20,
          366,
          100,
          v14);
      }
    }
    else
    {
      v24 = -64;
      V_LOCK();
      sub_1978B0((int)v32, *(int *)(a1 + 272));
      logfmt_raw(
        v14,
        0x1000u,
        0,
        v33,
        v32[0],
        v32[1],
        v32[2],
        v32[3],
        v32[4],
        v32[5],
        v32[6],
        v33,
        "read sensor failed, sensor[%d], addr:%02x",
        *v41,
        v41[5]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
        171,
        "read_temperature_ltc",
        20,
        371,
        100,
        v14);
    }
    *(_DWORD *)(a2 + 8 * i + 4) = v24;
    v7 = v25 - dword_5A9378;
    if ( v25 - dword_5A9378 < 0 )
      v7 = dword_5A9378 - v25;
    v39 = v7;
    v8 = v24 - dword_5A937C;
    if ( v24 - dword_5A937C < 0 )
      v8 = dword_5A937C - v24;
    v38 = v8;
    v9 = v24 - *(unsigned __int8 *)(a1 + 1044);
    v10 = v9 - v25;
    if ( v9 - v25 < 0 )
      v10 = v25 - v9;
    if ( v10 > 3 && (dword_5A9378 != -64 || dword_5A937C != -64) )
    {
      if ( v38 >= v39 )
      {
        if ( v38 > v39 )
        {
          V_LOCK();
          sub_1978B0((int)v36, *(int *)(a1 + 272));
          logfmt_raw(
            v14,
            0x1000u,
            0,
            v37,
            v36[0],
            v36[1],
            v36[2],
            v36[3],
            v36[4],
            v36[5],
            v36[6],
            v37,
            "large diff in temperature between two readings(%d, %d), trimming remote temp(%d, %d)",
            v24,
            *(unsigned __int8 *)(a1 + 1044) + v25,
            v39,
            v38);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
            171,
            "read_temperature_ltc",
            20,
            388,
            20,
            v14);
          v24 = *(unsigned __int8 *)(a1 + 1044) + v25;
          *(_DWORD *)(a2 + 8 * i + 4) = v24;
        }
      }
      else
      {
        V_LOCK();
        sub_1978B0((int)v34, *(int *)(a1 + 272));
        logfmt_raw(
          v14,
          0x1000u,
          0,
          v35,
          v34[0],
          v34[1],
          v34[2],
          v34[3],
          v34[4],
          v34[5],
          v34[6],
          v35,
          "large diff in temperature between two readings(%d, %d), trimming local temp(%d, %d)",
          v25,
          v24 - *(unsigned __int8 *)(a1 + 1044),
          v39,
          v38);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
          171,
          "read_temperature_ltc",
          20,
          383,
          20,
          v14);
        v25 = v24 - *(unsigned __int8 *)(a1 + 1044);
        *(_DWORD *)(a2 + 8 * i) = v25;
      }
    }
    if ( dword_5A9378 != v25 )
      dword_5A9378 = v25;
    if ( dword_5A937C != v24 )
      dword_5A937C = v24;
  }
  return 0;
}
