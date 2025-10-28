int __fastcall sub_B2B78(int a1, char a2)
{
  int v2; // r1
  __int64 v3; // r2
  _BYTE v7[64]; // [sp+134h] [bp-1200h] BYREF
  int v8; // [sp+1134h] [bp-200h] BYREF
  _QWORD s[2]; // [sp+1138h] [bp-1FCh] BYREF
  _DWORD v10[7]; // [sp+1148h] [bp-1ECh] BYREF
  int v11; // [sp+1164h] [bp-1D0h]
  const char *v12[8]; // [sp+1168h] [bp-1CCh] BYREF
  _DWORD v13[7]; // [sp+1188h] [bp-1ACh] BYREF
  int v14; // [sp+11A4h] [bp-190h]
  const char *v15[8]; // [sp+11A8h] [bp-18Ch] BYREF
  _DWORD v16[7]; // [sp+11C8h] [bp-16Ch] BYREF
  int v17; // [sp+11E4h] [bp-150h]
  const char *v18[8]; // [sp+11E8h] [bp-14Ch] BYREF
  _DWORD v19[7]; // [sp+1208h] [bp-12Ch] BYREF
  int v20; // [sp+1224h] [bp-110h]
  const char *v21[8]; // [sp+1228h] [bp-10Ch] BYREF
  _DWORD v22[7]; // [sp+1248h] [bp-ECh] BYREF
  int v23; // [sp+1264h] [bp-D0h]
  const char *v24[39]; // [sp+1268h] [bp-CCh] BYREF
  _DWORD *all_created_runtime; // [sp+1304h] [bp-30h]
  int i; // [sp+1308h] [bp-2Ch]
  char *flag_from_monitor; // [sp+130Ch] [bp-28h]

  v8 = 0;
  all_created_runtime = get_all_created_runtime(&v8);
  memset(s, 0, sizeof(s));
  for ( i = 0; i < v8; ++i )
  {
    flag_from_monitor = get_flag_from_monitor(all_created_runtime[i]);
    v24[38] = flag_from_monitor + 16;
    v24[37] = 0;
    if ( (*((_DWORD *)flag_from_monitor + 4) & 1) != 0 )
    {
      v24[36] = flag_from_monitor + 16;
      v24[35] = 0;
      *((_QWORD *)flag_from_monitor + 3) |= 1uLL;
      if ( a2 )
      {
        V_LOCK();
        sub_B27DC((int)v10, *(int *)(all_created_runtime[i] + 272));
        sub_B27A4(v12, "temp lost");
        logfmt_raw(
          v7,
          0x1000u,
          0,
          v11,
          v10[0],
          v10[1],
          v10[2],
          v10[3],
          v10[4],
          v10[5],
          v10[6],
          v11,
          v12[0],
          v12[1],
          v12[2],
          v12[3],
          v12[4],
          v12[5],
          v12[6],
          v12[7],
          "%s",
          "check_temp");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
          173,
          "check_temp",
          10,
          37,
          100,
          v7);
        v24[34] = (const char *)s;
        v24[33] = 0;
        s[0] |= 1uLL;
      }
    }
    v24[32] = flag_from_monitor + 16;
    v24[31] = (const char *)1;
    if ( (*((_DWORD *)flag_from_monitor + 4) & 2) != 0 )
    {
      v24[30] = flag_from_monitor + 16;
      v24[29] = (const char *)1;
      *((_QWORD *)flag_from_monitor + 3) |= 2uLL;
      if ( a2 )
      {
        V_LOCK();
        sub_B27DC((int)v13, *(int *)(all_created_runtime[i] + 272));
        sub_B27A4(v15, "temp too high");
        logfmt_raw(
          v7,
          0x1000u,
          0,
          v14,
          v13[0],
          v13[1],
          v13[2],
          v13[3],
          v13[4],
          v13[5],
          v13[6],
          v14,
          v15[0],
          v15[1],
          v15[2],
          v15[3],
          v15[4],
          v15[5],
          v15[6],
          v15[7],
          "%s",
          "check_temp");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
          173,
          "check_temp",
          10,
          45,
          100,
          v7);
        v24[28] = (const char *)s;
        v24[27] = (const char *)1;
        s[0] |= 2uLL;
      }
    }
    v24[26] = flag_from_monitor + 16;
    v24[25] = (const char *)2;
    if ( (*((_DWORD *)flag_from_monitor + 4) & 4) != 0 )
    {
      v24[24] = flag_from_monitor + 16;
      v24[23] = (const char *)2;
      *((_QWORD *)flag_from_monitor + 3) |= 4uLL;
      if ( a2 )
      {
        V_LOCK();
        sub_B27DC((int)v16, *(int *)(all_created_runtime[i] + 272));
        sub_B27A4(v18, "temp too low");
        logfmt_raw(
          v7,
          0x1000u,
          0,
          v17,
          v16[0],
          v16[1],
          v16[2],
          v16[3],
          v16[4],
          v16[5],
          v16[6],
          v17,
          v18[0],
          v18[1],
          v18[2],
          v18[3],
          v18[4],
          v18[5],
          v18[6],
          v18[7],
          "%s",
          "check_temp");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
          173,
          "check_temp",
          10,
          53,
          100,
          v7);
        v24[22] = (const char *)s;
        v24[21] = (const char *)2;
        s[0] |= 4uLL;
      }
    }
    v24[20] = flag_from_monitor + 16;
    v24[19] = (const char *)3;
    if ( (*((_DWORD *)flag_from_monitor + 4) & 8) != 0 )
    {
      v24[18] = flag_from_monitor + 16;
      v24[17] = (const char *)3;
      *((_QWORD *)flag_from_monitor + 3) |= 8uLL;
      if ( a2 )
      {
        V_LOCK();
        sub_B27DC((int)v19, *(int *)(all_created_runtime[i] + 272));
        sub_B27A4(v21, "read no temp");
        logfmt_raw(
          v7,
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
          v21[0],
          v21[1],
          v21[2],
          v21[3],
          v21[4],
          v21[5],
          v21[6],
          v21[7],
          "%s",
          "check_temp");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
          173,
          "check_temp",
          10,
          61,
          100,
          v7);
        v24[16] = (const char *)s;
        v24[15] = (const char *)3;
        s[0] |= 8uLL;
      }
    }
    v24[14] = flag_from_monitor + 16;
    v24[13] = (const char *)4;
    if ( (*((_DWORD *)flag_from_monitor + 4) & 0x10) != 0 )
    {
      v24[12] = flag_from_monitor + 16;
      v24[11] = (const char *)4;
      *((_QWORD *)flag_from_monitor + 3) |= 0x10uLL;
      if ( a2 )
      {
        V_LOCK();
        sub_B27DC((int)v22, *(int *)(all_created_runtime[i] + 272));
        sub_B27A4(v24, "uneffective temp exceed limit");
        logfmt_raw(
          v7,
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
          v24[0],
          v24[1],
          v24[2],
          v24[3],
          v24[4],
          v24[5],
          v24[6],
          v24[7],
          "%s",
          "check_temp");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
          173,
          "check_temp",
          10,
          69,
          100,
          v7);
        v24[10] = (const char *)s;
        v24[9] = (const char *)4;
        s[0] |= 0x10uLL;
      }
    }
  }
  v2 = HIDWORD(s[0]);
  v3 = s[1];
  *(_DWORD *)a1 = s[0];
  *(_DWORD *)(a1 + 4) = v2;
  *(_QWORD *)(a1 + 8) = v3;
  return a1;
}
