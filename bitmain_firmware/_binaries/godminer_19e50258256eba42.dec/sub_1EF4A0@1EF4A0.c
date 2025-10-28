int __fastcall sub_1EF4A0(int a1, int a2)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r1
  int v6; // r2
  _DWORD *v7; // r4
  _DWORD *v8; // r4
  _DWORD v12[1026]; // [sp+3Ch] [bp-1110h] BYREF
  int v13; // [sp+1044h] [bp-108h]
  int v14; // [sp+1048h] [bp-104h]
  int v15; // [sp+104Ch] [bp-100h]
  int v16; // [sp+1050h] [bp-FCh]
  int v17; // [sp+1054h] [bp-F8h]
  int v18; // [sp+1058h] [bp-F4h] BYREF
  int v19; // [sp+105Ch] [bp-F0h] BYREF
  _DWORD v20[7]; // [sp+1060h] [bp-ECh] BYREF
  int v21; // [sp+107Ch] [bp-D0h]
  _DWORD v22[7]; // [sp+1080h] [bp-CCh] BYREF
  int v23; // [sp+109Ch] [bp-B0h]
  _DWORD v24[7]; // [sp+10A0h] [bp-ACh] BYREF
  int v25; // [sp+10BCh] [bp-90h]
  _DWORD v26[7]; // [sp+10C0h] [bp-8Ch] BYREF
  int v27; // [sp+10DCh] [bp-70h]
  _DWORD v28[7]; // [sp+10E0h] [bp-6Ch] BYREF
  int v29; // [sp+10FCh] [bp-50h]
  _DWORD v30[7]; // [sp+1100h] [bp-4Ch] BYREF
  int v31; // [sp+111Ch] [bp-30h]
  int v32; // [sp+1124h] [bp-28h]
  int i; // [sp+1128h] [bp-24h]
  int j; // [sp+112Ch] [bp-20h]

  v2 = *(_DWORD *)(a1 + 428);
  v3 = *(_DWORD *)(a1 + 432);
  v4 = *(_DWORD *)(a1 + 436);
  v12[1024] = *(_DWORD *)(a1 + 424);
  v12[1025] = v2;
  v13 = v3;
  v14 = v4;
  v5 = *(_DWORD *)(a1 + 444);
  v6 = *(_DWORD *)(a1 + 448);
  v15 = *(_DWORD *)(a1 + 440);
  v16 = v5;
  v17 = v6;
  v32 = *(_DWORD *)(a1 + 424);
  for ( i = 0; i < v13; ++i )
  {
    for ( j = 0; j <= 4; ++j )
    {
      v7 = (_DWORD *)(v32 + 24 * i);
      (*(void (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 168))(
        a1,
        &v18,
        &v19,
        *v7,
        v7[1],
        v7[2],
        v7[3],
        v7[4],
        v7[5]);
      if ( v19 )
      {
        if ( v18 >= -63 )
          break;
        V_LOCK();
        sub_1E0BC0((int)v22, *(int *)(a1 + 272));
        logfmt_raw(
          v12,
          0x1000u,
          0,
          v23,
          v22[0],
          v22[1],
          v22[2],
          v22[3],
          v22[4],
          v22[5],
          v22[6],
          v23,
          "sensor[%d] invalid temp, retry",
          *(_DWORD *)(v32 + 24 * i));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
          171,
          "read_temperature_zec_1746",
          25,
          481,
          20,
          v12);
      }
      else
      {
        V_LOCK();
        sub_1E0BC0((int)v20, *(int *)(a1 + 272));
        logfmt_raw(
          v12,
          0x1000u,
          0,
          v21,
          v20[0],
          v20[1],
          v20[2],
          v20[3],
          v20[4],
          v20[5],
          v20[6],
          v21,
          "sensor[%d] read lost, retry",
          *(_DWORD *)(v32 + 24 * i));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
          171,
          "read_temperature_zec_1746",
          25,
          479,
          20,
          v12);
      }
      usleep(0x30D40u);
    }
    if ( j > 4 )
    {
      v18 = -64;
      V_LOCK();
      sub_1E0BC0((int)v24, *(int *)(a1 + 272));
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
        "read sensor[%d] local temp failed after retry %d times",
        *(_DWORD *)(v32 + 24 * i),
        j);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
        171,
        "read_temperature_zec_1746",
        25,
        489,
        100,
        v12);
    }
    *(_DWORD *)(a2 + 8 * i) = v18;
  }
  for ( i = 0; i < v13; ++i )
  {
    for ( j = 0; j <= 4; ++j )
    {
      v8 = (_DWORD *)(v32 + 24 * i);
      (*(void (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 172))(
        a1,
        &v18,
        &v19,
        *v8,
        v8[1],
        v8[2],
        v8[3],
        v8[4],
        v8[5]);
      if ( v19 )
      {
        if ( v18 >= -63 )
          break;
        V_LOCK();
        sub_1E0BC0((int)v28, *(int *)(a1 + 272));
        logfmt_raw(
          v12,
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
          "sensor[%d] invalid temp, retry",
          *(_DWORD *)(v32 + 24 * i));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
          171,
          "read_temperature_zec_1746",
          25,
          503,
          20,
          v12);
      }
      else
      {
        V_LOCK();
        sub_1E0BC0((int)v26, *(int *)(a1 + 272));
        logfmt_raw(
          v12,
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
          "sensor[%d] read lost, retry",
          *(_DWORD *)(v32 + 24 * i));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
          171,
          "read_temperature_zec_1746",
          25,
          501,
          20,
          v12);
      }
      usleep(0x30D40u);
    }
    if ( j > 4 )
    {
      v18 = -64;
      V_LOCK();
      sub_1E0BC0((int)v30, *(int *)(a1 + 272));
      logfmt_raw(
        v12,
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
        "read sensor[%d] remote temp failed after retry %d times",
        *(_DWORD *)(v32 + 24 * i),
        j);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
        171,
        "read_temperature_zec_1746",
        25,
        511,
        100,
        v12);
    }
    *(_DWORD *)(a2 + 8 * i + 4) = v18;
  }
  return 0;
}
