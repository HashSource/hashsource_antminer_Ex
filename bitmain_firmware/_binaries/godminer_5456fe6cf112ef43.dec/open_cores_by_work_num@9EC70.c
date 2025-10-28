int __fastcall open_cores_by_work_num(int a1)
{
  int v2; // r0
  _DWORD *v3; // r9
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r4
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r0
  int v13; // r2
  _DWORD v15[4]; // [sp+18h] [bp-1024h] BYREF
  int v16; // [sp+28h] [bp-1014h]
  int v17; // [sp+2Ch] [bp-1010h]
  int v18; // [sp+30h] [bp-100Ch]
  int v19; // [sp+34h] [bp-1008h]
  _BYTE v20[4100]; // [sp+38h] [bp-1004h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v20, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_cores_by_work_num",
    22,
    11613,
    20,
    v20);
  sub_5C1C0(a1, 21, 0);
  str2hex((int)v15, (int)"ab77b2cb3d32b0b61304401cbe540448a4cacd7e98421a850503e2f0d102f1d3", 64);
  v3 = calloc(1u, 0x59u);
  v4 = v15[1];
  v5 = v15[2];
  v6 = v15[3];
  v7 = 1;
  v3[4] = v15[0];
  v3[5] = v4;
  v3[6] = v5;
  v3[7] = v6;
  v8 = v16;
  v9 = v17;
  v10 = v18;
  v11 = v19;
  v3[8] = v16;
  v3[9] = v9;
  v3[10] = v10;
  v3[11] = v11;
  *((_QWORD *)v3 + 1) = 1193046;
  do
  {
    V_LOCK(v8);
    v12 = logfmt_raw((int)v20, 0x1000u);
    V_UNLOCK(v12);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "open_cores_by_work_num",
      22,
      11623,
      20,
      v20);
    v13 = v7++;
    sub_5C1C0(a1, 21, v13);
    push_work_base(a1, v3);
    v8 = usleep((__useconds_t)&stru_1869C.st_value);
  }
  while ( v7 != 65 );
  return 0;
}
