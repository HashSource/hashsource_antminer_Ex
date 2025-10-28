int __fastcall sub_E99DC(int a1, int a2)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r1
  int v6; // r2
  _BYTE v10[80]; // [sp+3Ch] [bp-10D0h] BYREF
  int v11; // [sp+103Ch] [bp-D0h] BYREF
  int v12; // [sp+1040h] [bp-CCh] BYREF
  int v13; // [sp+1044h] [bp-C8h]
  int v14; // [sp+1048h] [bp-C4h]
  int v15; // [sp+104Ch] [bp-C0h]
  int v16; // [sp+1050h] [bp-BCh]
  int v17; // [sp+1054h] [bp-B8h]
  int v18; // [sp+1058h] [bp-B4h]
  int v19; // [sp+105Ch] [bp-B0h]
  int v20; // [sp+1060h] [bp-ACh] BYREF
  int v21; // [sp+1064h] [bp-A8h] BYREF
  _DWORD v22[7]; // [sp+1068h] [bp-A4h] BYREF
  int v23; // [sp+1084h] [bp-88h]
  _DWORD v24[7]; // [sp+1088h] [bp-84h] BYREF
  int v25; // [sp+10A4h] [bp-68h]
  _DWORD v26[7]; // [sp+10A8h] [bp-64h] BYREF
  int v27; // [sp+10C4h] [bp-48h]
  _DWORD v28[7]; // [sp+10C8h] [bp-44h] BYREF
  int v29; // [sp+10E4h] [bp-28h]
  int i; // [sp+10E8h] [bp-24h]
  _DWORD *v31; // [sp+10ECh] [bp-20h]

  v21 = -64;
  v20 = -64;
  v2 = *(_DWORD *)(a1 + 428);
  v3 = *(_DWORD *)(a1 + 432);
  v4 = *(_DWORD *)(a1 + 436);
  v13 = *(_DWORD *)(a1 + 424);
  v14 = v2;
  v15 = v3;
  v16 = v4;
  v5 = *(_DWORD *)(a1 + 444);
  v6 = *(_DWORD *)(a1 + 448);
  v17 = *(_DWORD *)(a1 + 440);
  v18 = v5;
  v19 = v6;
  for ( i = 0; i < v15; ++i )
  {
    v31 = (_DWORD *)(v13 + 24 * i);
    v12 = 0;
    (*(void (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 168))(
      a1,
      &v21,
      &v12,
      *v31,
      v31[1],
      v31[2],
      v31[3],
      v31[4],
      v31[5]);
    if ( v12 )
    {
      if ( v21 < -63 )
      {
        v21 = -64;
        V_LOCK();
        sub_DA978((int)v22, *(int *)(a1 + 272));
        logfmt_raw(
          v10,
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
          "got uneffective temp, sensor[%d], addr:%02x",
          *v31,
          v31[5]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
          173,
          "read_temperature_dash",
          21,
          563,
          100,
          v10);
      }
    }
    else
    {
      v21 = -64;
      V_LOCK();
      sub_DA978((int)v24, *(int *)(a1 + 272));
      logfmt_raw(
        v10,
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
        "read sensor failed, sensor[%d], addr:%02x",
        *v31,
        v31[5]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
        173,
        "read_temperature_dash",
        21,
        568,
        100,
        v10);
    }
    *(_DWORD *)(a2 + 8 * i) = v21;
    v11 = 0;
    (*(void (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 172))(
      a1,
      &v20,
      &v11,
      *v31,
      v31[1],
      v31[2],
      v31[3],
      v31[4],
      v31[5]);
    if ( v11 )
    {
      if ( v20 < -63 )
      {
        v20 = -64;
        V_LOCK();
        sub_DA978((int)v26, *(int *)(a1 + 272));
        logfmt_raw(
          v10,
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
          *v31,
          v31[5]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
          173,
          "read_temperature_dash",
          21,
          578,
          100,
          v10);
      }
    }
    else
    {
      v20 = -64;
      V_LOCK();
      sub_DA978((int)v28, *(int *)(a1 + 272));
      logfmt_raw(
        v10,
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
        *v31,
        v31[5]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
        173,
        "read_temperature_dash",
        21,
        583,
        100,
        v10);
    }
    *(_DWORD *)(a2 + 8 * i + 4) = v20;
  }
  return 0;
}
