int __fastcall membist0(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r4
  int v5; // r0
  char *v6; // r4
  int v7; // r0
  int v8; // r0
  char *v9; // r5
  int v10; // r0
  char *v11; // r4
  int v12; // r0
  int v13; // r0
  char *v14; // r5
  int v15; // r0
  char *v16; // r4
  char *v17; // r5
  int v18; // r0
  _DWORD *v19; // r4
  int *v20; // r6
  int v21; // r3
  __int64 v22; // r0
  unsigned int v23; // r2
  bool v24; // cc
  int v25; // r2
  int v26; // t1
  char *v27; // r3
  size_t v28; // r0
  char *v29; // r0
  int v30; // r0
  int v32; // r0
  int v33; // [sp+38h] [bp-2E0h]
  int v34; // [sp+3Ch] [bp-2DCh]
  char *ptr; // [sp+40h] [bp-2D8h]
  int *v36; // [sp+54h] [bp-2C4h]
  _DWORD v37[5]; // [sp+64h] [bp-2B4h] BYREF
  char v38[32]; // [sp+78h] [bp-2A0h] BYREF
  char v39[32]; // [sp+98h] [bp-280h] BYREF
  char v40[32]; // [sp+B8h] [bp-260h] BYREF
  char v41[32]; // [sp+D8h] [bp-240h] BYREF
  char v42[32]; // [sp+F8h] [bp-220h] BYREF
  _DWORD s[128]; // [sp+118h] [bp-200h] BYREF
  char v44[4100]; // [sp+318h] [bp+0h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v44, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "membist0",
    8,
    11471,
    20,
    v44);
  v37[0] = -2023406815;
  v37[1] = 1266163410;
  v37[2] = 2015285835;
  v37[3] = 517098360;
  v37[4] = -766805986;
  memset(s, 0, sizeof(s));
  v36 = v37;
  v3 = (int)malloc(0x600u);
  v33 = 0;
  ptr = (char *)v3;
  do
  {
    V_LOCK(v3);
    V_INT((int)v38, "chain");
    v4 = *v36++;
    v34 = 0;
    v5 = logfmt_raw((int)v44, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "membist0",
      8,
      11479,
      60,
      v44);
    sub_5C1C0(a1, 164, v4);
    do
    {
      sub_5C218(a1, v34, 12, 1);
      sub_5C218(a1, v34, 160, 3);
      usleep((__useconds_t)&stru_1869C.st_value);
      v6 = ptr;
      v7 = sub_5C484(a1, (unsigned __int16)v34, 161, ptr);
      if ( v7 > 0 )
      {
        v8 = 3 * v7;
        v9 = &ptr[4 * v8];
        do
        {
          while ( (*(_DWORD *)v6 & 0x80) == 0 )
          {
            V_LOCK(v8);
            v6 += 12;
            V_INT((int)v40, "chain");
            v10 = logfmt_raw((int)v44, 0x1000u);
            V_UNLOCK(v10);
            v8 = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/god"
                   "miner-origin_master/backend/backend_eth/backend_eth.c",
                   154,
                   "membist0",
                   8,
                   11495,
                   100,
                   v44);
            if ( v6 == v9 )
              goto LABEL_10;
          }
          if ( (*(_DWORD *)v6 & 0xFFFFFF00) != 0 )
          {
            V_LOCK(v8);
            V_INT((int)v39, "chain");
            v32 = logfmt_raw((int)v44, 0x1000u);
            V_UNLOCK(v32);
            v8 = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/god"
                   "miner-origin_master/backend/backend_eth/backend_eth.c",
                   154,
                   "membist0",
                   8,
                   11491,
                   100,
                   v44);
            s[16 * (unsigned __int8)v6[4] + v33] += bswap32(*(_DWORD *)v6) & 0x7FFFFF;
          }
          v6 += 12;
        }
        while ( v6 != v9 );
      }
LABEL_10:
      v11 = ptr;
      v12 = sub_5C484(a1, (unsigned __int16)v34, 162, ptr);
      if ( v12 > 0 )
      {
        v13 = 3 * v12;
        v14 = &ptr[4 * v13];
        do
        {
          while ( (*(_DWORD *)v11 & 0xFFFFFF00) == 0 || (*(_DWORD *)v11 & 0x80) == 0 )
          {
            v11 += 12;
            if ( v11 == v14 )
              goto LABEL_16;
          }
          V_LOCK(v13);
          v11 += 12;
          V_INT((int)v41, "chain");
          v15 = logfmt_raw((int)v44, 0x1000u);
          V_UNLOCK(v15);
          v13 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/backend/backend_eth/backend_eth.c",
                  154,
                  "membist0",
                  8,
                  11502,
                  100,
                  v44);
          s[16 * (unsigned __int8)*(v11 - 8) + v33] += bswap32(*((_DWORD *)v11 - 3)) & 0x7FFFFF;
        }
        while ( v11 != v14 );
      }
LABEL_16:
      v16 = ptr;
      v3 = sub_5C484(a1, (unsigned __int16)v34, 163, ptr);
      if ( v3 > 0 )
      {
        v3 *= 3;
        v17 = &ptr[4 * v3];
        do
        {
          while ( (*(_DWORD *)v16 & 0xFFFF00) == 0 || (*(_DWORD *)v16 & 0xC0) == 0 )
          {
            v16 += 12;
            if ( v16 == v17 )
              goto LABEL_22;
          }
          V_LOCK(v3);
          v16 += 12;
          V_INT((int)v42, "chain");
          v18 = logfmt_raw((int)v44, 0x1000u);
          V_UNLOCK(v18);
          v3 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmi"
                 "ner-origin_master/backend/backend_eth/backend_eth.c",
                 154,
                 "membist0",
                 8,
                 11510,
                 100,
                 v44);
          s[16 * (unsigned __int8)*(v16 - 8) + v33] += bswap32(*((_DWORD *)v16 - 3)) & 0x7FFF;
        }
        while ( v16 != v17 );
      }
LABEL_22:
      ++v34;
    }
    while ( v34 != 8 );
    ++v33;
  }
  while ( v33 != 5 );
  v19 = s;
  free(ptr);
  memset(v44, 0, 0x40u);
  v20 = v37;
  do
  {
    v21 = 0;
    v22 = 0;
    do
    {
      v23 = v19[16 * v21++];
      v22 += v23;
    }
    while ( v21 != 8 );
    v24 = HIDWORD(v22) != 0;
    v26 = *v20++;
    v25 = v26;
    if ( !HIDWORD(v22) )
      v24 = (unsigned int)v22 > 0x800;
    if ( v24 )
      v27 = "failed";
    else
      v27 = "ok";
    sprintf(v44, "<mbist0 %08x> test %s(%llu)", v25, v27, v22);
    ++v19;
    v28 = strlen(v44);
    v29 = sub_5C8F4(v44, v28);
  }
  while ( v19 != &s[5] );
  v30 = dev_ctrl((int)v29);
  (*(void (__fastcall **)(_DWORD))(v30 + 72))(*(_DWORD *)(a1 + 136));
  return 0;
}
