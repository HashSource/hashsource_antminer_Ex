int __fastcall membist0_rvn(int a1)
{
  int v1; // r7
  int v2; // r8
  unsigned int v3; // r0
  unsigned int v4; // r0
  int v5; // r7
  int v6; // r8
  unsigned int v7; // r0
  unsigned int v8; // r0
  int v9; // r7
  int v10; // r8
  unsigned int v11; // r0
  __int16 v12; // r0
  int (**v13)(); // r0
  _BYTE v16[64]; // [sp+3Ch] [bp-1340h] BYREF
  char v17[64]; // [sp+103Ch] [bp-340h] BYREF
  _DWORD s[128]; // [sp+107Ch] [bp-300h] BYREF
  _DWORD v19[5]; // [sp+127Ch] [bp-100h]
  __int64 v20; // [sp+1290h] [bp-ECh] BYREF
  int v21; // [sp+1298h] [bp-E4h]
  int v22; // [sp+129Ch] [bp-E0h]
  int v23; // [sp+12A0h] [bp-DCh]
  int v24; // [sp+12A4h] [bp-D8h]
  int v25; // [sp+12A8h] [bp-D4h]
  int v26; // [sp+12ACh] [bp-D0h]
  __int64 v27; // [sp+12B0h] [bp-CCh] BYREF
  int v28; // [sp+12B8h] [bp-C4h]
  int v29; // [sp+12BCh] [bp-C0h]
  int v30; // [sp+12C0h] [bp-BCh]
  int v31; // [sp+12C4h] [bp-B8h]
  int v32; // [sp+12C8h] [bp-B4h]
  int v33; // [sp+12CCh] [bp-B0h]
  __int64 v34; // [sp+12D0h] [bp-ACh] BYREF
  int v35; // [sp+12D8h] [bp-A4h]
  int v36; // [sp+12DCh] [bp-A0h]
  int v37; // [sp+12E0h] [bp-9Ch]
  int v38; // [sp+12E4h] [bp-98h]
  int v39; // [sp+12E8h] [bp-94h]
  int v40; // [sp+12ECh] [bp-90h]
  __int64 v41; // [sp+12F0h] [bp-8Ch] BYREF
  int v42; // [sp+12F8h] [bp-84h]
  int v43; // [sp+12FCh] [bp-80h]
  int v44; // [sp+1300h] [bp-7Ch]
  int v45; // [sp+1304h] [bp-78h]
  int v46; // [sp+1308h] [bp-74h]
  int v47; // [sp+130Ch] [bp-70h]
  __int64 v48; // [sp+1310h] [bp-6Ch] BYREF
  int v49; // [sp+1318h] [bp-64h]
  int v50; // [sp+131Ch] [bp-60h]
  int v51; // [sp+1320h] [bp-5Ch]
  int v52; // [sp+1324h] [bp-58h]
  int v53; // [sp+1328h] [bp-54h]
  int v54; // [sp+132Ch] [bp-50h]
  unsigned __int8 j; // [sp+1337h] [bp-45h]
  int k; // [sp+1338h] [bp-44h]
  int m; // [sp+133Ch] [bp-40h]
  int n; // [sp+1340h] [bp-3Ch]
  unsigned int ii; // [sp+1344h] [bp-38h]
  __int64 v60; // [sp+1348h] [bp-34h]
  unsigned __int8 jj; // [sp+1353h] [bp-29h]
  int v62; // [sp+1354h] [bp-28h]
  unsigned int i; // [sp+1358h] [bp-24h]
  void *ptr; // [sp+135Ch] [bp-20h]

  V_LOCK();
  logfmt_raw(v16, 0x1000u, 0, "%s...", "membist0_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "membist0_rvn",
    12,
    814,
    20,
    v16);
  v62 = 0;
  v19[0] = -2023406815;
  v19[1] = 1266163410;
  v19[2] = 2015285835;
  v19[3] = 517098360;
  v19[4] = -766805986;
  memset(s, 0, sizeof(s));
  ptr = malloc(0x1800u);
  for ( i = 0; i <= 4; ++i )
  {
    V_LOCK();
    sub_1A9DE8((int)&v20, *(int *)(a1 + 272));
    logfmt_raw(v16, 0x1000u, 0, v26, v20, v21, v22, v23, v24, v25, v26, "membist final pattern %08x", v19[i]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
      171,
      "membist0_rvn",
      12,
      823,
      60,
      v16);
    sub_1B4A74(a1, 164, v19[i]);
    for ( j = 0; j <= 0x3Fu; ++j )
    {
      sub_1B4CC0(a1, j, 28, 1);
      sub_1B4CC0(a1, j, 160, 3);
      usleep(0x61A80u);
      v62 = sub_1B51AC(a1, j, 161, ptr);
      for ( k = 0; k < v62; ++k )
      {
        if ( (*((_DWORD *)ptr + 3 * k) & 0x80) != 0 )
        {
          if ( (*((_DWORD *)ptr + 3 * k) & 0xFFFFFF00) != 0 )
          {
            V_LOCK();
            sub_1A9DE8((int)&v27, *(int *)(a1 + 272));
            v1 = *((unsigned __int8 *)ptr + 12 * k + 4);
            v2 = *((unsigned __int8 *)ptr + 12 * k + 8);
            v3 = sub_1AA37C(*((_DWORD *)ptr + 3 * k));
            logfmt_raw(
              v16,
              0x1000u,
              0,
              v33,
              v27,
              v28,
              v29,
              v30,
              v31,
              v32,
              v33,
              "chip %02x core %02x membist err cnt: %08x",
              v1,
              v2,
              v3);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
              171,
              "membist0_rvn",
              12,
              839,
              100,
              v16);
            v4 = sub_1AA37C(*((_DWORD *)ptr + 3 * k));
            s[16 * *((unsigned __int8 *)ptr + 12 * k + 4) + i] += v4 & 0x7FFFFF;
          }
        }
        else
        {
          V_LOCK();
          sub_1A9DE8((int)&v34, *(int *)(a1 + 272));
          logfmt_raw(
            v16,
            0x1000u,
            0,
            v40,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40,
            "chip %02x core %02x membist not done!",
            *((unsigned __int8 *)ptr + 12 * k + 4),
            *((unsigned __int8 *)ptr + 12 * k + 8));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
            171,
            "membist0_rvn",
            12,
            845,
            100,
            v16);
        }
      }
      v62 = sub_1B51AC(a1, j, 162, ptr);
      for ( m = 0; m < v62; ++m )
      {
        if ( (*((_DWORD *)ptr + 3 * m) & 0xFFFFFF00) != 0 && (*((_DWORD *)ptr + 3 * m) & 0x80) != 0 )
        {
          V_LOCK();
          sub_1A9DE8((int)&v41, *(int *)(a1 + 272));
          v5 = *((unsigned __int8 *)ptr + 12 * m + 4);
          v6 = *((unsigned __int8 *)ptr + 12 * m + 8);
          v7 = sub_1AA37C(*((_DWORD *)ptr + 3 * m));
          logfmt_raw(
            v16,
            0x1000u,
            0,
            v47,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            "chip %02x core %02x membist lost cnt: %08x",
            v5,
            v6,
            v7);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
            171,
            "membist0_rvn",
            12,
            854,
            100,
            v16);
          v8 = sub_1AA37C(*((_DWORD *)ptr + 3 * m));
          s[16 * *((unsigned __int8 *)ptr + 12 * m + 4) + i] += v8 & 0x7FFFFF;
        }
      }
      v62 = sub_1B51AC(a1, j, 163, ptr);
      for ( n = 0; n < v62; ++n )
      {
        if ( (*((_DWORD *)ptr + 3 * n) & 0xFFFF00) != 0 && (*((_DWORD *)ptr + 3 * n) & 0xC0) != 0 )
        {
          V_LOCK();
          sub_1A9DE8((int)&v48, *(int *)(a1 + 272));
          v9 = *((unsigned __int8 *)ptr + 12 * n + 4);
          v10 = *((unsigned __int8 *)ptr + 12 * n + 8);
          v11 = sub_1AA37C(*((_DWORD *)ptr + 3 * n));
          logfmt_raw(
            v16,
            0x1000u,
            0,
            v54,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54,
            "chip %02x core %02x rvnbist err cnt: %08x",
            v9,
            v10,
            v11);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
            171,
            "membist0_rvn",
            12,
            864,
            100,
            v16);
          v12 = sub_1AA37C(*((_DWORD *)ptr + 3 * n));
          s[16 * *((unsigned __int8 *)ptr + 12 * n + 4) + i] += v12 & 0x7FFF;
        }
      }
    }
  }
  free(ptr);
  memset(v17, 0, sizeof(v17));
  for ( ii = 0; ii <= 4; ++ii )
  {
    v60 = 0;
    for ( jj = 0; jj <= 7u; ++jj )
      v60 += (unsigned int)s[16 * jj + ii];
    sprintf(v17, "<mbist0 %08x> %ld", v19[ii], HIDWORD(v60));
  }
  v13 = dev_ctrl();
  ((void (__fastcall *)(_DWORD))v13[25])(*(_DWORD *)(a1 + 264));
  return 0;
}
