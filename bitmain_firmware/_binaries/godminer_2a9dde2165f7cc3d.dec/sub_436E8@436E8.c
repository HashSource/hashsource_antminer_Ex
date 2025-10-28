int __fastcall sub_436E8(int a1, int *a2, _DWORD *a3)
{
  unsigned int v5; // r4
  _BYTE *v6; // r5
  _DWORD *v7; // r0
  __int64 *v8; // r6
  const char *v9; // r9
  _DWORD *v10; // r0
  unsigned int v11; // r1
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  __int64 v14; // r0
  __int64 v15; // r6
  __int64 v16; // t1
  int valid; // r0
  int v18; // r4
  int v19; // r0
  int v20; // r2
  const char *v22; // r0
  size_t v23; // r0
  unsigned __int64 *v24; // r3
  int *v25; // r2
  unsigned int v26; // t1
  unsigned int v27; // r1
  int v28; // r0
  int v29; // r12
  int v30; // r1
  int v31; // r10
  int v32; // r12
  int v33; // r0
  int v34; // r1
  size_t v35; // r10
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r0
  int v46; // r0
  int v47; // r0
  int v48; // r0
  int v49; // r0
  int v50; // r0
  unsigned __int64 v51; // [sp+10h] [bp-102Ch] BYREF
  _DWORD v52[2]; // [sp+18h] [bp-1024h] BYREF
  _BYTE v53[4100]; // [sp+38h] [bp-1004h] BYREF

  v5 = 0;
  v6 = v52;
  v7 = json_array_get(a3, 0);
  v8 = (__int64 *)v52;
  v9 = (const char *)json_string_value(v7);
  do
  {
    v10 = json_array_get(a3, 1u);
    v11 = v5++;
    v12 = json_array_get(v10, v11);
    *v8++ = json_integer_value((int)v12);
  }
  while ( v5 != 4 );
  v13 = json_array_get(a3, 2u);
  v14 = json_integer_value((int)v13);
  v15 = v14;
  v51 = v14;
  do
  {
    v16 = *(_QWORD *)v6;
    v6 += 8;
    if ( !v16 )
    {
      V_LOCK(v14);
      v18 = 0;
      v48 = logfmt_raw((int)v53, 0x1000u);
      V_UNLOCK(v48);
      v20 = 381;
      goto LABEL_10;
    }
  }
  while ( v6 != v53 );
  valid = valid_ascii(v9);
  LOBYTE(v18) = valid ^ 1;
  if ( !v15 )
    LOBYTE(v18) = v18 | 1;
  v18 = (unsigned __int8)v18;
  if ( (_BYTE)v18 )
  {
    V_LOCK(valid);
    v18 = 0;
    v19 = logfmt_raw((int)v53, 0x1000u);
    V_UNLOCK(v19);
    v20 = 387;
LABEL_10:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_kas/frontend_kas.c",
      167,
      "stratum_notify_kas",
      18,
      v20,
      100,
      v53);
    return v18;
  }
  if ( a2 != (int *)-456 )
  {
    v22 = (const char *)a2[395];
    if ( v22 && !strcmp(v22, v9) )
    {
      V_LOCK(0);
      v50 = logfmt_raw((int)v53, 0x1000u);
      V_UNLOCK(v50);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/frontend/frontend_kas/frontend_kas.c",
        167,
        "stratum_notify_kas",
        18,
        395,
        80,
        v53);
    }
    v23 = strlen(v9);
    if ( v23 > 0x1F )
    {
      V_LOCK(v23);
      strlen(v9);
      v49 = logfmt_raw((int)v53, 0x1000u);
      V_UNLOCK(v49);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/frontend/frontend_kas/frontend_kas.c",
        167,
        "stratum_notify_kas",
        18,
        399,
        80,
        v53);
    }
    LODWORD(v15) = bswap32(v15);
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
    a2[395] = (int)_strdup(v9);
    v51 = __PAIR64__(v15, bswap32(HIDWORD(v15)));
    v24 = &v51;
    v25 = a2 + 118;
    a2[116] = v51;
    a2[117] = v15;
    do
    {
      v26 = *((_DWORD *)v24++ + 2);
      v25 += 2;
      v27 = *((_DWORD *)v24 + 1);
      *((_DWORD *)v24 + 1) = bswap32(v26);
      v28 = *((_DWORD *)v24 + 2);
      v29 = *((_DWORD *)v24 + 1);
      *(_DWORD *)v24 = bswap32(v27);
      v30 = *((_DWORD *)v24 + 3);
      v31 = *(_DWORD *)v24;
      *(v25 - 1) = v29;
      *v25 = v28;
      *(v25 - 2) = v31;
      v25[1] = v30;
      v32 = *((_DWORD *)v24 + 5);
      v33 = *((_DWORD *)v24 + 6);
      v34 = *((_DWORD *)v24 + 7);
      v25[2] = *((_DWORD *)v24 + 4);
      v25[3] = v32;
      v25[4] = v33;
      v25[5] = v34;
    }
    while ( v25 != a2 + 126 );
    v35 = a2[19];
    memcpy(v25, (const void *)a2[20], v35);
    memset((char *)a2 + v35 + 504, 0, 8 - v35);
    *((_QWORD *)a2 + 57) = *a2;
    v36 = pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
    v18 = (unsigned __int8)opt_protocol;
    if ( opt_protocol )
    {
      V_LOCK(v36);
      v37 = logfmt_raw((int)v53, 0x1000u);
      V_UNLOCK(v37);
      v38 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
              167,
              "stratum_notify_kas",
              18,
              427,
              20,
              v53);
      V_LOCK(v38);
      v39 = logfmt_raw((int)v53, 0x1000u);
      V_UNLOCK(v39);
      v40 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
              167,
              "stratum_notify_kas",
              18,
              428,
              20,
              v53);
      V_LOCK(v40);
      v41 = logfmt_raw((int)v53, 0x1000u);
      V_UNLOCK(v41);
      v42 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
              167,
              "stratum_notify_kas",
              18,
              429,
              20,
              v53);
      V_LOCK(v42);
      v43 = logfmt_raw((int)v53, 0x1000u);
      V_UNLOCK(v43);
      v44 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
              167,
              "stratum_notify_kas",
              18,
              430,
              20,
              v53);
      V_LOCK(v44);
      v45 = logfmt_raw((int)v53, 0x1000u);
      V_UNLOCK(v45);
      v46 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
              167,
              "stratum_notify_kas",
              18,
              431,
              20,
              v53);
      V_LOCK(v46);
      v47 = logfmt_raw((int)v53, 0x1000u);
      V_UNLOCK(v47);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/frontend/frontend_kas/frontend_kas.c",
        167,
        "stratum_notify_kas",
        18,
        432,
        20,
        v53);
    }
    else
    {
      return 1;
    }
  }
  return v18;
}
