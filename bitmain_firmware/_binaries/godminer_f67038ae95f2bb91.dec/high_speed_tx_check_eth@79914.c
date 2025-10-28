int __fastcall high_speed_tx_check_eth(int a1)
{
  int v2; // r4
  int i; // r4
  unsigned __int8 v4; // r1
  int v5; // r9
  _DWORD *v6; // r5
  int *v7; // r12
  int *v8; // r4
  int v9; // r0
  int v10; // r1
  int *v11; // lr
  int v12; // r2
  int v13; // r3
  char *v15; // r6
  char *v16; // r5
  int v17; // t1
  unsigned int v18; // r3
  char *v19; // r0
  int v20; // r2
  bool v21; // cc
  int v22; // [sp+4h] [bp-1148h]
  unsigned int v23; // [sp+28h] [bp-1124h]
  int v24; // [sp+30h] [bp-111Ch]
  int *v26; // [sp+38h] [bp-1114h]
  int v27; // [sp+44h] [bp-1108h] BYREF
  _DWORD v28[6]; // [sp+48h] [bp-1104h] BYREF
  _DWORD v29[7]; // [sp+60h] [bp-10ECh] BYREF
  int v30; // [sp+7Ch] [bp-10D0h]
  char v31; // [sp+83h] [bp-10C9h] BYREF
  int v32; // [sp+84h] [bp-10C8h] BYREF
  char v33; // [sp+C3h] [bp-1089h] BYREF
  _BYTE v34[132]; // [sp+C4h] [bp-1088h] BYREF
  _DWORD v35[2]; // [sp+148h] [bp-1004h] BYREF
  int v36; // [sp+150h] [bp-FFCh]
  int v37; // [sp+154h] [bp-FF8h]

  V_LOCK();
  V_INT((int)v29, "chain", *(int *)(a1 + 248));
  v2 = 0;
  logfmt_raw(
    (char *)v35,
    0x1000u,
    0,
    v30,
    v29[0],
    v29[1],
    v29[2],
    v29[3],
    v29[4],
    v29[5],
    v29[6],
    v30,
    "%s...",
    "high_speed_tx_check_eth");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    174,
    "high_speed_tx_check_eth",
    23,
    329,
    60,
    v35);
  do
  {
    sub_79288(a1, v2, 19, v2);
    ++v2;
    usleep(0x2710u);
  }
  while ( v2 != 16 );
  for ( i = 0; i != 16; ++i )
  {
    v4 = i;
    sub_79288(a1, v4, 12, 3);
  }
  v26 = v28;
  memset(v34, 0, 0x81u);
  v28[0] = 0;
  v28[1] = 4;
  v28[2] = 7000000;
  v28[3] = 7000004;
  v28[4] = 14090220;
  v28[5] = 14090224;
  do
  {
    v5 = 0;
    v24 = *v26++;
    do
    {
      v27 = 0;
      v35[0] = 0;
      v35[1] = v24;
      v36 = 0;
      v37 = 0;
      BYTE1(v36) = v5;
      v6 = malloc(0x4Cu);
      *v6 = 0;
      v6[1] = 0;
      v6[2] = 0;
      (*(void (__fastcall **)(int, _DWORD *, int, _DWORD *, int *, int, int, _DWORD))(a1 + 288))(
        a1,
        v35,
        1,
        v6,
        &v27,
        v22,
        2000,
        0);
      v7 = (_DWORD *)((char *)v6 + 10);
      v8 = &v32;
      do
      {
        v9 = *v7;
        v7 += 4;
        v10 = *(v7 - 3);
        v11 = v8;
        v12 = *(v7 - 2);
        v8 += 4;
        v13 = *(v7 - 1);
        *v11 = v9;
        v11[1] = v10;
        v11[2] = v12;
        v11[3] = v13;
      }
      while ( v7 != (_DWORD *)((char *)v6 + 74) );
      free(v6);
      if ( v27 )
      {
        v15 = &v31;
        v16 = v34;
        v23 = 0;
        do
        {
          V_LOCK();
          v17 = (unsigned __int8)*++v15;
          logfmt_raw((char *)v35, 0x1000u, 0, "DAG READ for chip %1d: %02x", v5, v17);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
            174,
            "high_speed_tx_check_eth",
            23,
            387,
            20,
            v35);
          v18 = (unsigned __int8)(v17 - 1);
          v19 = v16;
          v20 = v17;
          v21 = v18 > 0xFD;
          if ( v18 > 0xFD )
            v18 = v23;
          v16 += 2;
          if ( v21 )
            v23 = ++v18;
          sprintf(v19, "%02x", v20, v18);
        }
        while ( v15 != &v33 );
        V_LOCK();
        logfmt_raw((char *)v35, 0x1000u, 0, "node_index[%08x] DAG READ for chip %1d: %s", v24, v5, v34);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
          174,
          "high_speed_tx_check_eth",
          23,
          394,
          60,
          v35);
        if ( v23 == 64 )
        {
          V_LOCK();
          logfmt_raw((char *)v35, 0x1000u, 0, "check high speed baud tx failed!!!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
            174,
            "high_speed_tx_check_eth",
            23,
            397,
            60,
            v35);
          while ( 1 )
            ;
        }
      }
      ++v5;
    }
    while ( v5 != 8 );
  }
  while ( v26 != v29 );
  return 0;
}
