int __fastcall sub_15F994(int a1, int a2)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r1
  int v6; // r2
  int v7; // r1
  int v8; // r3
  int v9; // r1
  int v10; // r3
  int v11; // r2
  int v12; // r3
  _BYTE v16[88]; // [sp+44h] [bp-1118h] BYREF
  int v17; // [sp+1044h] [bp-118h] BYREF
  int v18; // [sp+1048h] [bp-114h] BYREF
  int v19; // [sp+104Ch] [bp-110h]
  int v20; // [sp+1050h] [bp-10Ch]
  int v21; // [sp+1054h] [bp-108h]
  int v22; // [sp+1058h] [bp-104h]
  int v23; // [sp+105Ch] [bp-100h]
  int v24; // [sp+1060h] [bp-FCh]
  int v25; // [sp+1064h] [bp-F8h]
  int v26; // [sp+1068h] [bp-F4h] BYREF
  int v27; // [sp+106Ch] [bp-F0h] BYREF
  _DWORD v28[7]; // [sp+1070h] [bp-ECh] BYREF
  int v29; // [sp+108Ch] [bp-D0h]
  _DWORD v30[7]; // [sp+1090h] [bp-CCh] BYREF
  int v31; // [sp+10ACh] [bp-B0h]
  _DWORD v32[7]; // [sp+10B0h] [bp-ACh] BYREF
  int v33; // [sp+10CCh] [bp-90h]
  _DWORD v34[7]; // [sp+10D0h] [bp-8Ch] BYREF
  int v35; // [sp+10ECh] [bp-70h]
  _DWORD v36[7]; // [sp+10F0h] [bp-6Ch] BYREF
  int v37; // [sp+110Ch] [bp-50h]
  _DWORD v38[7]; // [sp+1110h] [bp-4Ch] BYREF
  int v39; // [sp+112Ch] [bp-30h]
  int v40; // [sp+1130h] [bp-2Ch]
  int v41; // [sp+1134h] [bp-28h]
  int i; // [sp+1138h] [bp-24h]
  _DWORD *v43; // [sp+113Ch] [bp-20h]

  v27 = -64;
  v26 = -64;
  v2 = *(_DWORD *)(a1 + 428);
  v3 = *(_DWORD *)(a1 + 432);
  v4 = *(_DWORD *)(a1 + 436);
  v19 = *(_DWORD *)(a1 + 424);
  v20 = v2;
  v21 = v3;
  v22 = v4;
  v5 = *(_DWORD *)(a1 + 444);
  v6 = *(_DWORD *)(a1 + 448);
  v23 = *(_DWORD *)(a1 + 440);
  v24 = v5;
  v25 = v6;
  for ( i = 0; i < v21; ++i )
  {
    v43 = (_DWORD *)(v19 + 24 * i);
    v18 = 0;
    (*(void (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 168))(
      a1,
      &v27,
      &v18,
      *v43,
      v43[1],
      v43[2],
      v43[3],
      v43[4],
      v43[5]);
    if ( v18 )
    {
      if ( v27 < -63 )
      {
        v27 = -64;
        V_LOCK();
        sub_151C00((int)v28, *(int *)(a1 + 272));
        logfmt_raw(
          v16,
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
          "got uneffective temp, sensor[%d], addr:%02x",
          *v43,
          v43[5]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
          171,
          "read_temperature_hns",
          20,
          292,
          100,
          v16);
      }
    }
    else
    {
      v27 = -64;
      V_LOCK();
      sub_151C00((int)v30, *(int *)(a1 + 272));
      logfmt_raw(
        v16,
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
        "read sensor failed, sensor[%d], addr:%02x",
        *v43,
        v43[5]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
        171,
        "read_temperature_hns",
        20,
        297,
        100,
        v16);
    }
    *(_DWORD *)(a2 + 8 * i) = v27;
    v17 = 0;
    (*(void (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 172))(
      a1,
      &v26,
      &v17,
      *v43,
      v43[1],
      v43[2],
      v43[3],
      v43[4],
      v43[5]);
    if ( v17 )
    {
      if ( v26 < -63 )
      {
        v26 = -64;
        V_LOCK();
        sub_151C00((int)v32, *(int *)(a1 + 272));
        logfmt_raw(
          v16,
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
          "got uneffective temp, sensor[%d], addr:%02x",
          *v43,
          v43[5]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
          171,
          "read_temperature_hns",
          20,
          308,
          100,
          v16);
      }
    }
    else
    {
      v26 = -64;
      V_LOCK();
      sub_151C00((int)v34, *(int *)(a1 + 272));
      logfmt_raw(
        v16,
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
        "read sensor failed, sensor[%d], addr:%02x",
        *v43,
        v43[5]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
        171,
        "read_temperature_hns",
        20,
        313,
        100,
        v16);
    }
    *(_DWORD *)(a2 + 8 * i + 4) = v26;
    v7 = 2 * *(_DWORD *)(a1 + 264) + i;
    v8 = v27 - dword_5A8E50[v7];
    if ( v8 < 0 )
      v8 = dword_5A8E50[v7] - v27;
    v41 = v8;
    v9 = 2 * *(_DWORD *)(a1 + 264) + i;
    v10 = v26 - dword_5A8E68[v9];
    if ( v10 < 0 )
      v10 = dword_5A8E68[v9] - v26;
    v40 = v10;
    v11 = v26 - *(unsigned __int8 *)(a1 + 1044);
    v12 = v11 - v27;
    if ( v11 - v27 < 0 )
      v12 = v27 - v11;
    if ( v12 > 3
      && (dword_5A8E50[2 * *(_DWORD *)(a1 + 264) + i] != -64 || dword_5A8E68[2 * *(_DWORD *)(a1 + 264) + i] != -64) )
    {
      if ( v40 >= v41 )
      {
        if ( v40 > v41 )
        {
          V_LOCK();
          sub_151C00((int)v38, *(int *)(a1 + 272));
          logfmt_raw(
            v16,
            0x1000u,
            0,
            v39,
            v38[0],
            v38[1],
            v38[2],
            v38[3],
            v38[4],
            v38[5],
            v38[6],
            v39,
            "large diff in temperature between two readings(%d, %d), trimming remote temp(%d, %d)",
            v26,
            *(unsigned __int8 *)(a1 + 1044) + v27,
            v41,
            v40);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
            171,
            "read_temperature_hns",
            20,
            330,
            20,
            v16);
          v26 = *(unsigned __int8 *)(a1 + 1044) + v27;
          *(_DWORD *)(a2 + 8 * i + 4) = v26;
        }
      }
      else
      {
        V_LOCK();
        sub_151C00((int)v36, *(int *)(a1 + 272));
        logfmt_raw(
          v16,
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
          "large diff in temperature between two readings(%d, %d), trimming local temp(%d, %d)",
          v27,
          v26 - *(unsigned __int8 *)(a1 + 1044),
          v41,
          v40);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
          171,
          "read_temperature_hns",
          20,
          325,
          20,
          v16);
        v27 = v26 - *(unsigned __int8 *)(a1 + 1044);
        *(_DWORD *)(a2 + 8 * i) = v27;
      }
    }
    if ( dword_5A8E50[2 * *(_DWORD *)(a1 + 264) + i] != v27 )
      dword_5A8E50[2 * *(_DWORD *)(a1 + 264) + i] = v27;
    if ( dword_5A8E68[2 * *(_DWORD *)(a1 + 264) + i] != v26 )
      dword_5A8E68[2 * *(_DWORD *)(a1 + 264) + i] = v26;
  }
  return 0;
}
