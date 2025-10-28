int __fastcall check_ref_clock_ready(int a1, int a2, int a3)
{
  int v5; // r0
  int v6; // r0
  bool v7; // zf
  int v8; // r7
  int v9; // r1
  int v10; // r0
  unsigned __int16 v11; // r3
  _DWORD *v12; // r4
  int v13; // r0
  int v14; // r0
  _DWORD *v15; // r6
  int v16; // r0
  int v17; // r0
  int v18; // r12
  int v19; // r2
  int v20; // r0
  _DWORD *v21; // r4
  int v22; // r0
  int v23; // r0
  _DWORD *v24; // r6
  int v25; // r0
  int v26; // r0
  int v27; // r12
  int v28; // r2
  int v29; // r0
  char *v30; // r4
  int v31; // r0
  int v32; // r0
  int v33; // r0
  char *v34; // r4
  int v35; // r0
  int v36; // r0
  int v37; // r0
  char *v38; // r4
  int v39; // r0
  int v40; // r0
  int v41; // r0
  char *v42; // r4
  int v43; // r0
  int v44; // r0
  int v45; // r0
  unsigned int v46; // r3
  char *v48; // [sp+3Ch] [bp-10E8h]
  char *v49; // [sp+3Ch] [bp-10E8h]
  char *v50; // [sp+3Ch] [bp-10E8h]
  char *v51; // [sp+3Ch] [bp-10E8h]
  _DWORD *ptr; // [sp+40h] [bp-10E4h]
  int v53; // [sp+44h] [bp-10E0h]
  unsigned __int16 v54; // [sp+48h] [bp-10DCh]
  char v55; // [sp+48h] [bp-10DCh]
  unsigned int v56; // [sp+50h] [bp-10D4h]
  int i; // [sp+58h] [bp-10CCh]
  char v59[32]; // [sp+60h] [bp-10C4h] BYREF
  int v60; // [sp+80h] [bp-10A4h] BYREF
  char v61[32]; // [sp+A0h] [bp-1084h] BYREF
  int v62; // [sp+C0h] [bp-1064h] BYREF
  char v63[32]; // [sp+E0h] [bp-1044h] BYREF
  int v64; // [sp+100h] [bp-1024h] BYREF
  _BYTE v65[4100]; // [sp+120h] [bp-1004h] BYREF

  V_LOCK(a1);
  v5 = logfmt_raw((int)v65, 0x1000u);
  V_UNLOCK(v5);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_ref_clock_ready",
    21,
    8385,
    60,
    v65);
  v6 = sub_5C910(a1, 112, 0);
  v7 = a3 == 255;
  v8 = a1;
  if ( v7 )
    v9 = 16;
  else
    v9 = 1;
  v56 = v9;
  for ( i = 0; i != 3; ++i )
  {
    V_LOCK(v6);
    v10 = logfmt_raw((int)v65, 0x1000u);
    V_UNLOCK(v10);
    v54 = 0;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "check_ref_clock_ready",
      21,
      8392,
      60,
      v65);
    ptr = malloc(0x600u);
    do
    {
      v11 = v54;
      v12 = ptr;
      if ( a3 != 255 )
        v11 = a3;
      v55 = v11;
      v53 = v11;
      v13 = sub_5CBD4(v8, v11, 112, ptr);
      if ( v13 > 0 )
      {
        v14 = 3 * v13;
        v15 = &ptr[v14];
        do
        {
          if ( (*v12 & 0x9000000) == 0x9000000 )
          {
            V_LOCK(v14);
            v20 = logfmt_raw((int)v65, 0x1000u);
            V_UNLOCK(v20);
            v17 = g_zc;
            v18 = 20;
            v19 = 8400;
          }
          else
          {
            V_LOCK(v14);
            V_INT((int)v59, "chain");
            v16 = logfmt_raw((int)v65, 0x1000u);
            V_UNLOCK(v16);
            v17 = g_zc;
            v18 = 100;
            v19 = 8403;
          }
          v12 += 3;
          v14 = zlog(
                  v17,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/backend/backend_eth/backend_eth.c",
                  154,
                  "check_ref_clock_ready",
                  21,
                  v19,
                  v18,
                  v65);
        }
        while ( v12 != v15 );
      }
      v21 = ptr;
      v22 = sub_5CBD4(v8, v53, 113, ptr);
      if ( v22 > 0 )
      {
        v23 = 3 * v22;
        v24 = &ptr[v23];
        do
        {
          if ( *v21 == -1 )
          {
            V_LOCK(v23);
            v29 = logfmt_raw((int)v65, 0x1000u);
            V_UNLOCK(v29);
            v26 = g_zc;
            v27 = 20;
            v28 = 8413;
          }
          else
          {
            V_LOCK(v23);
            V_INT((int)&v60, "chain");
            v25 = logfmt_raw((int)v65, 0x1000u);
            V_UNLOCK(v25);
            v26 = g_zc;
            v27 = 100;
            v28 = 8411;
          }
          v21 += 3;
          v23 = zlog(
                  v26,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/backend/backend_eth/backend_eth.c",
                  154,
                  "check_ref_clock_ready",
                  21,
                  v28,
                  v27,
                  v65);
        }
        while ( v21 != v24 );
      }
      v30 = (char *)ptr;
      v31 = sub_5CBD4(v8, v53, 114, ptr);
      if ( v31 > 0 )
      {
        v32 = 3 * v31;
        v48 = (char *)&ptr[v32];
        do
        {
          V_LOCK(v32);
          v30 += 12;
          V_INT((int)v61, "chain");
          v33 = logfmt_raw((int)v65, 0x1000u);
          V_UNLOCK(v33);
          v32 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/backend/backend_eth/backend_eth.c",
                  154,
                  "check_ref_clock_ready",
                  21,
                  8420,
                  100,
                  v65);
        }
        while ( v48 != v30 );
      }
      v34 = (char *)ptr;
      v35 = sub_5CBD4(v8, v53, 115, ptr);
      if ( v35 > 0 )
      {
        v36 = 3 * v35;
        v49 = (char *)&ptr[v36];
        do
        {
          V_LOCK(v36);
          v34 += 12;
          V_INT((int)&v62, "chain");
          v37 = logfmt_raw((int)v65, 0x1000u);
          V_UNLOCK(v37);
          v36 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/backend/backend_eth/backend_eth.c",
                  154,
                  "check_ref_clock_ready",
                  21,
                  8426,
                  100,
                  v65);
        }
        while ( v49 != v34 );
      }
      v38 = (char *)ptr;
      v39 = sub_5CBD4(v8, v53, 116, ptr);
      if ( v39 > 0 )
      {
        v40 = 3 * v39;
        v50 = (char *)&ptr[v40];
        do
        {
          V_LOCK(v40);
          v38 += 12;
          V_INT((int)v63, "chain");
          v41 = logfmt_raw((int)v65, 0x1000u);
          V_UNLOCK(v41);
          v40 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/backend/backend_eth/backend_eth.c",
                  154,
                  "check_ref_clock_ready",
                  21,
                  8432,
                  100,
                  v65);
        }
        while ( v50 != v38 );
      }
      v42 = (char *)ptr;
      v43 = sub_5CBD4(v8, v53, 117, ptr);
      if ( v43 > 0 )
      {
        v44 = 3 * v43;
        v51 = (char *)&ptr[v44];
        do
        {
          V_LOCK(v44);
          v42 += 12;
          V_INT((int)&v64, "chain");
          v45 = logfmt_raw((int)v65, 0x1000u);
          V_UNLOCK(v45);
          v44 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/backend/backend_eth/backend_eth.c",
                  154,
                  "check_ref_clock_ready",
                  21,
                  8438,
                  100,
                  v65);
        }
        while ( v51 != v42 );
      }
      v46 = (unsigned __int8)(v55 + 1);
      v54 = (unsigned __int8)(v55 + 1);
    }
    while ( v56 > v46 );
    free(ptr);
  }
  return 0;
}
