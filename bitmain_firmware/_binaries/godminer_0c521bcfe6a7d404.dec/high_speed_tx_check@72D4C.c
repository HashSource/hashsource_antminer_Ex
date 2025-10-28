int __fastcall high_speed_tx_check(int a1)
{
  int v2; // r4
  int v3; // r0
  int i; // r4
  unsigned __int8 v5; // r1
  int v6; // r9
  _DWORD *v7; // r5
  int *v8; // r12
  int *v9; // r4
  int v10; // r0
  int v11; // r1
  int *v12; // lr
  int v13; // r2
  int v14; // r3
  int v15; // r0
  char *v17; // r6
  char *v18; // r5
  int v19; // t1
  int v20; // r0
  unsigned int v21; // r3
  char *v22; // r0
  int v23; // r2
  bool v24; // cc
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // [sp+4h] [bp-1128h]
  int v29; // [sp+10h] [bp-111Ch]
  int v30; // [sp+14h] [bp-1118h]
  int v31; // [sp+18h] [bp-1114h]
  int v32; // [sp+1Ch] [bp-1110h]
  const char *v33; // [sp+20h] [bp-110Ch]
  const char *v34; // [sp+24h] [bp-1108h]
  unsigned int v35; // [sp+2Ch] [bp-1100h]
  int v37; // [sp+3Ch] [bp-10F0h] BYREF
  _DWORD v38[8]; // [sp+40h] [bp-10ECh] BYREF
  char v39; // [sp+63h] [bp-10C9h] BYREF
  int v40; // [sp+64h] [bp-10C8h] BYREF
  char v41; // [sp+A3h] [bp-1089h] BYREF
  _BYTE v42[132]; // [sp+A4h] [bp-1088h] BYREF
  _DWORD v43[2]; // [sp+128h] [bp-1004h] BYREF
  int v44; // [sp+130h] [bp-FFCh]
  int v45; // [sp+134h] [bp-FF8h]

  V_LOCK(a1);
  V_INT((int)v38, "chain");
  v33 = "%s...";
  v34 = "high_speed_tx_check";
  v2 = 0;
  v29 = v38[4];
  v30 = v38[5];
  v31 = v38[6];
  v32 = v38[7];
  v3 = logfmt_raw((int)v43, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    174,
    "high_speed_tx_check",
    19,
    321,
    60,
    v43);
  do
  {
    sub_6FD60(a1, v2, 19, v2);
    ++v2;
    usleep(0x2710u);
  }
  while ( v2 != 16 );
  for ( i = 0; i != 16; ++i )
  {
    v5 = i;
    sub_6FD60(a1, v5, 12, 3);
  }
  v6 = 0;
  memset(v42, 0, 0x81u);
  do
  {
    v44 = 0;
    v37 = 0;
    v43[0] = 0;
    v43[1] = 0;
    v45 = 0;
    BYTE1(v44) = v6;
    v7 = malloc(0x4Cu);
    *v7 = 0;
    v7[1] = 0;
    v7[2] = 0;
    (*(void (__fastcall **)(int, _DWORD *, int, _DWORD *, int *, int, int, _DWORD, int, int, int, int, const char *, const char *))(a1 + 264))(
      a1,
      v43,
      1,
      v7,
      &v37,
      v28,
      2000,
      0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    v8 = (_DWORD *)((char *)v7 + 10);
    v9 = &v40;
    do
    {
      v10 = *v8;
      v8 += 4;
      v11 = *(v8 - 3);
      v12 = v9;
      v13 = *(v8 - 2);
      v9 += 4;
      v14 = *(v8 - 1);
      *v12 = v10;
      v12[1] = v11;
      v12[2] = v13;
      v12[3] = v14;
    }
    while ( v8 != (_DWORD *)((char *)v7 + 74) );
    free(v7);
    if ( v37 )
    {
      v17 = &v39;
      v18 = v42;
      v35 = 0;
      do
      {
        V_LOCK(v15);
        v19 = (unsigned __int8)*++v17;
        v20 = logfmt_raw((int)v43, 0x1000u);
        V_UNLOCK(v20);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
          174,
          "high_speed_tx_check",
          19,
          379,
          20,
          v43);
        v21 = (unsigned __int8)(v19 - 1);
        v22 = v18;
        v23 = v19;
        v24 = v21 > 0xFD;
        if ( v21 > 0xFD )
          v21 = v35;
        v18 += 2;
        if ( v24 )
          v35 = ++v21;
        v15 = sprintf(v22, "%02x", v23, v21);
      }
      while ( v17 != &v41 );
      V_LOCK(v15);
      v25 = logfmt_raw((int)v43, 0x1000u);
      V_UNLOCK(v25);
      v26 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
              174,
              "high_speed_tx_check",
              19,
              385,
              60,
              v43);
      if ( v35 == 64 )
      {
        V_LOCK(v26);
        v27 = logfmt_raw((int)v43, 0x1000u);
        V_UNLOCK(v27);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
          174,
          "high_speed_tx_check",
          19,
          388,
          60,
          v43);
        while ( 1 )
          ;
      }
    }
    ++v6;
  }
  while ( v6 != 8 );
  return 0;
}
