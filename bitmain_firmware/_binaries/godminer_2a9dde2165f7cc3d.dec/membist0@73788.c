int __fastcall membist0(int a1)
{
  int *v1; // r11
  int v3; // r0
  void *v4; // r0
  int v5; // r4
  int v6; // r0
  int *v7; // r3
  int v8; // r11
  int *v9; // r8
  int v10; // r0
  int v11; // r6
  int v12; // r0
  unsigned int *v13; // r4
  int v14; // r5
  int v15; // r0
  int v16; // r0
  int v17; // r6
  int v18; // r0
  unsigned int *v19; // r4
  int v20; // r5
  int v21; // r0
  int v22; // r6
  int v23; // r0
  int v24; // r5
  _DWORD *v25; // r4
  int v26; // r0
  _DWORD *v27; // r3
  int *v28; // r3
  int v29; // r0
  __useconds_t v30; // r5
  int v31; // r6
  unsigned int v32; // r10
  unsigned int v33; // r7
  unsigned int v34; // r8
  int v35; // r0
  int v36; // r0
  int v38; // r0
  _DWORD *v39; // r3
  int v40; // r0
  _DWORD *v41; // r3
  void *ptr; // [sp+50h] [bp-1794h]
  __int64 ptra; // [sp+50h] [bp-1794h]
  __int64 v44; // [sp+58h] [bp-178Ch]
  int i; // [sp+60h] [bp-1784h]
  __int64 v46; // [sp+60h] [bp-1784h]
  int v47; // [sp+68h] [bp-177Ch]
  char *v48; // [sp+6Ch] [bp-1778h]
  __useconds_t useconds; // [sp+7Ch] [bp-1768h]
  int *v50; // [sp+80h] [bp-1764h]
  _DWORD v51[5]; // [sp+8Ch] [bp-1758h] BYREF
  char v52[32]; // [sp+A0h] [bp-1744h] BYREF
  int v53; // [sp+C0h] [bp-1724h] BYREF
  char v54[32]; // [sp+E0h] [bp-1704h] BYREF
  int v55; // [sp+100h] [bp-16E4h] BYREF
  char v56[32]; // [sp+120h] [bp-16C4h] BYREF
  int v57; // [sp+140h] [bp-16A4h] BYREF
  char v58[32]; // [sp+160h] [bp-1684h] BYREF
  int v59; // [sp+180h] [bp-1664h] BYREF
  char v60[32]; // [sp+1A0h] [bp-1644h] BYREF
  int v61; // [sp+1C0h] [bp-1624h] BYREF
  _BYTE s[512]; // [sp+1E0h] [bp-1604h] BYREF
  _BYTE v63[512]; // [sp+3E0h] [bp-1404h] BYREF
  _BYTE v64[512]; // [sp+5E0h] [bp-1204h] BYREF
  _DWORD v65[1025]; // [sp+7E0h] [bp-1004h] BYREF

  v1 = &g_zc;
  v51[0] = -2023406815;
  v51[1] = 1266163410;
  v51[2] = 2015285835;
  v51[3] = 517098360;
  v51[4] = -766805986;
  V_LOCK(-2023406815);
  v3 = logfmt_raw((int)v65, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    174,
    "membist0",
    8,
    545,
    40,
    v65);
  v50 = v51;
  memset(s, 0, sizeof(s));
  memset(v63, 0, sizeof(v63));
  memset(v64, 0, sizeof(v64));
  v4 = calloc(0x600u, 1u);
  ptr = v4;
  for ( i = 0; i != 5; ++i )
  {
    V_LOCK(v4);
    V_INT((int)v52, "chain");
    v5 = *v50++;
    v47 = 0;
    v6 = logfmt_raw((int)v65, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      *v1,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
      174,
      "membist0",
      8,
      555,
      60,
      v65);
    sub_6FC24(a1, 164, v5);
    v7 = v1;
    v8 = a1;
    v9 = v7;
    do
    {
      sub_6FD50(v8, v47, 12, 1);
      sub_6FD50(v8, v47, 160, 3);
      usleep((__useconds_t)&loc_61A80);
      v10 = sub_6FFF0(v8, (unsigned __int16)v47, 161, ptr);
      v11 = v10;
      if ( v10 == 8
        || (V_LOCK(v10),
            V_INT((int)&v53, "chain"),
            v12 = logfmt_raw((int)v65, 0x1000u),
            V_UNLOCK(v12),
            v10 = zlog(
                    *v9,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/buil"
                    "d/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
                    174,
                    "membist0",
                    8,
                    566,
                    100,
                    v65),
            v11 > 0) )
      {
        v13 = (unsigned int *)ptr;
        v14 = 0;
        do
        {
          while ( (*v13 & 0x80) == 0 )
          {
            V_LOCK(v10);
            ++v14;
            v13 += 3;
            V_INT((int)&v55, "chain");
            v15 = logfmt_raw((int)v65, 0x1000u);
            V_UNLOCK(v15);
            v10 = zlog(
                    *v9,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/buil"
                    "d/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
                    174,
                    "membist0",
                    8,
                    582,
                    100,
                    v65);
            if ( v11 <= v14 )
              goto LABEL_11;
          }
          if ( (*v13 & 0xFFFFFF00) != 0 )
          {
            V_LOCK(v10);
            V_INT((int)v54, "chain");
            v38 = logfmt_raw((int)v65, 0x1000u);
            V_UNLOCK(v38);
            v10 = zlog(
                    *v9,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/buil"
                    "d/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
                    174,
                    "membist0",
                    8,
                    576,
                    100,
                    v65);
            v39 = &v65[16 * *((unsigned __int8 *)v13 + 4) + i];
            *(v39 - 384) += bswap32(*v13) & 0x7FFFFF;
          }
          ++v14;
          v13 += 3;
        }
        while ( v11 > v14 );
      }
LABEL_11:
      memset(ptr, 0, 0x600u);
      v16 = sub_6FFF0(v8, (unsigned __int16)v47, 162, ptr);
      v17 = v16;
      if ( v16 == 8
        || (V_LOCK(v16),
            V_INT((int)v56, "chain"),
            v18 = logfmt_raw((int)v65, 0x1000u),
            V_UNLOCK(v18),
            v16 = zlog(
                    *v9,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/buil"
                    "d/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
                    174,
                    "membist0",
                    8,
                    590,
                    100,
                    v65),
            v17 > 0) )
      {
        v19 = (unsigned int *)ptr;
        v20 = 0;
        do
        {
          while ( (*v19 & 0x80) == 0 )
          {
            V_LOCK(v16);
            ++v20;
            v19 += 3;
            V_INT((int)v58, "chain");
            v21 = logfmt_raw((int)v65, 0x1000u);
            V_UNLOCK(v21);
            v16 = zlog(
                    *v9,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/buil"
                    "d/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
                    174,
                    "membist0",
                    8,
                    605,
                    100,
                    v65);
            if ( v17 <= v20 )
              goto LABEL_19;
          }
          if ( (*v19 & 0xFFFFFF00) != 0 )
          {
            V_LOCK(v16);
            V_INT((int)&v57, "chain");
            v40 = logfmt_raw((int)v65, 0x1000u);
            V_UNLOCK(v40);
            v16 = zlog(
                    *v9,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/buil"
                    "d/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
                    174,
                    "membist0",
                    8,
                    599,
                    100,
                    v65);
            v41 = &v65[16 * *((unsigned __int8 *)v19 + 4) + i];
            *(v41 - 256) += bswap32(*v19) & 0x7FFFFF;
          }
          ++v20;
          v19 += 3;
        }
        while ( v17 > v20 );
      }
LABEL_19:
      memset(ptr, 0, 0x600u);
      v4 = (void *)sub_6FFF0(v8, (unsigned __int16)v47, 163, ptr);
      v22 = (int)v4;
      if ( v4 == (void *)8
        || (V_LOCK(v4),
            V_INT((int)&v59, "chain"),
            v23 = logfmt_raw((int)v65, 0x1000u),
            V_UNLOCK(v23),
            v4 = (void *)zlog(
                           *v9,
                           "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/relea"
                           "se/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
                           174,
                           "membist0",
                           8,
                           613,
                           100,
                           v65),
            v22 > 0) )
      {
        v24 = 0;
        v25 = ptr;
        do
        {
          while ( 1 )
          {
            ++v24;
            if ( (*v25 & 0xFFFF00) != 0 && (*v25 & 0xC0) != 0 )
              break;
            v25 += 3;
            if ( v22 <= v24 )
              goto LABEL_26;
          }
          V_LOCK(v4);
          v25 += 3;
          V_INT((int)v60, "chain");
          v26 = logfmt_raw((int)v65, 0x1000u);
          V_UNLOCK(v26);
          v4 = (void *)zlog(
                         *v9,
                         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release"
                         "/build/godminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
                         174,
                         "membist0",
                         8,
                         621,
                         100,
                         v65);
          v27 = &v65[16 * *((unsigned __int8 *)v25 - 8) + i];
          *(v27 - 128) += bswap32(*(v25 - 3)) & 0x7FFF;
        }
        while ( v22 > v24 );
      }
LABEL_26:
      ++v47;
    }
    while ( v47 != 16 );
    v28 = v9;
    a1 = v8;
    v1 = v28;
  }
  useconds = 0;
  free(ptr);
  v48 = (char *)a1;
  do
  {
    v30 = useconds;
    v31 = 0;
    ptra = 0;
    v44 = 0;
    v46 = 0;
    do
    {
      v32 = *(_DWORD *)&s[v30];
      v33 = *(_DWORD *)&v63[v30];
      v34 = *(_DWORD *)&v64[v30];
      v30 += 64;
      V_LOCK(v29);
      ptra += v32;
      v44 += v33;
      v46 += v34;
      V_INT((int)&v61, "chain");
      ++v31;
      v35 = logfmt_raw((int)v65, 0x1000u);
      V_UNLOCK(v35);
      v29 = zlog(
              *v1,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
              174,
              "membist0",
              8,
              640,
              100,
              v65);
    }
    while ( v31 != 8 );
    useconds += 4;
  }
  while ( useconds != 20 );
  v36 = dev_ctrl(v29);
  (*(void (__fastcall **)(_DWORD))(v36 + 80))(*((_DWORD *)v48 + 55));
  return 0;
}
