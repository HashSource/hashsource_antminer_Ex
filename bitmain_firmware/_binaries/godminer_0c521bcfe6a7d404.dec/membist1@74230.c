int __fastcall membist1(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r6
  int v5; // r0
  unsigned int *v6; // r4
  int v7; // r5
  int v8; // r0
  int v9; // r0
  int v10; // r6
  int v11; // r0
  unsigned int *v12; // r4
  int v13; // r5
  int v14; // r0
  int v15; // r5
  int v16; // r0
  unsigned int v17; // r10
  int v18; // r0
  int v19; // r0
  int v21; // r0
  _DWORD *v22; // r2
  int v23; // r0
  _DWORD *v24; // r2
  __int64 v25; // [sp+40h] [bp-116Ch]
  void *ptr; // [sp+4Ch] [bp-1160h]
  unsigned int ptra; // [sp+4Ch] [bp-1160h]
  __int64 v28; // [sp+50h] [bp-115Ch]
  int v29; // [sp+58h] [bp-1154h]
  _BYTE *v30; // [sp+58h] [bp-1154h]
  char v31[32]; // [sp+68h] [bp-1144h] BYREF
  int v32; // [sp+88h] [bp-1124h] BYREF
  char v33[32]; // [sp+A8h] [bp-1104h] BYREF
  int v34; // [sp+C8h] [bp-10E4h] BYREF
  char v35[32]; // [sp+E8h] [bp-10C4h] BYREF
  int v36; // [sp+108h] [bp-10A4h] BYREF
  char v37[32]; // [sp+128h] [bp-1084h] BYREF
  int v38; // [sp+148h] [bp-1064h] BYREF
  _BYTE v39[36]; // [sp+164h] [bp-1048h] BYREF
  _DWORD s[8]; // [sp+188h] [bp-1024h] BYREF
  _DWORD v41[1025]; // [sp+1A8h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)v31, "chain");
  v2 = logfmt_raw((int)v41, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    174,
    "membist1",
    8,
    663,
    60,
    v41);
  memset(s, 0, sizeof(s));
  memset(&v39[4], 0, 0x20u);
  v29 = 0;
  ptr = malloc(0x600u);
  do
  {
    sub_6FD60(a1, v29, 12, 1);
    usleep(0x61A80u);
    sub_6FD60(a1, v29, 160, -2147483647);
    usleep(0xC3500u);
    memset(ptr, 0, 0x600u);
    v3 = sub_70000(a1, (unsigned __int16)v29, 161, ptr);
    v4 = v3;
    if ( v3 == 8
      || (V_LOCK(v3),
          V_INT((int)&v32, "chain"),
          v5 = logfmt_raw((int)v41, 0x1000u),
          V_UNLOCK(v5),
          v3 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/g"
                 "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
                 174,
                 "membist1",
                 8,
                 683,
                 100,
                 v41),
          v4 > 0) )
    {
      v6 = (unsigned int *)ptr;
      v7 = 0;
      do
      {
        while ( (*v6 & 0x80) == 0 )
        {
          V_LOCK(v3);
          ++v7;
          v6 += 3;
          V_INT((int)&v34, "chain");
          v8 = logfmt_raw((int)v41, 0x1000u);
          V_UNLOCK(v8);
          v3 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/g"
                 "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
                 174,
                 "membist1",
                 8,
                 699,
                 100,
                 v41);
          if ( v4 <= v7 )
            goto LABEL_10;
        }
        if ( (*v6 & 0xFFFFFF00) != 0 )
        {
          V_LOCK(v3);
          V_INT((int)v33, "chain");
          v21 = logfmt_raw((int)v41, 0x1000u);
          V_UNLOCK(v21);
          v3 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/g"
                 "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
                 174,
                 "membist1",
                 8,
                 692,
                 100,
                 v41);
          v22 = &v41[*((unsigned __int8 *)v6 + 4)];
          *(v22 - 8) += bswap32(*v6) & 0x7FFFFF;
        }
        ++v7;
        v6 += 3;
      }
      while ( v4 > v7 );
    }
LABEL_10:
    memset(ptr, 0, 0x600u);
    v9 = sub_70000(a1, (unsigned __int16)v29, 162, ptr);
    v10 = v9;
    if ( v9 == 8
      || (V_LOCK(v9),
          V_INT((int)v35, "chain"),
          v11 = logfmt_raw((int)v41, 0x1000u),
          V_UNLOCK(v11),
          v9 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/g"
                 "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
                 174,
                 "membist1",
                 8,
                 707,
                 100,
                 v41),
          v10 > 0) )
    {
      v12 = (unsigned int *)ptr;
      v13 = 0;
      do
      {
        while ( (*v12 & 0x80) == 0 )
        {
          V_LOCK(v9);
          ++v13;
          v12 += 3;
          V_INT((int)v37, "chain");
          v14 = logfmt_raw((int)v41, 0x1000u);
          V_UNLOCK(v14);
          v9 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/g"
                 "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
                 174,
                 "membist1",
                 8,
                 723,
                 100,
                 v41);
          if ( v10 <= v13 )
            goto LABEL_18;
        }
        if ( (*v12 & 0xFFFFFF00) != 0 )
        {
          V_LOCK(v9);
          V_INT((int)&v36, "chain");
          v23 = logfmt_raw((int)v41, 0x1000u);
          V_UNLOCK(v23);
          v9 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/g"
                 "odminer-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
                 174,
                 "membist1",
                 8,
                 716,
                 100,
                 v41);
          v24 = &v41[*((unsigned __int8 *)v12 + 4)];
          *(v24 - 16) += bswap32(*v12) & 0x7FFFFF;
        }
        ++v13;
        v12 += 3;
      }
      while ( v10 > v13 );
    }
LABEL_18:
    ++v29;
  }
  while ( v29 != 16 );
  v15 = 0;
  v25 = 0;
  v28 = 0;
  free(ptr);
  v30 = v39;
  do
  {
    v17 = s[v15];
    ptra = *((_DWORD *)v30 + 1);
    v30 += 4;
    V_LOCK(v16);
    v25 += v17;
    v28 += ptra;
    V_INT((int)&v38, "chain");
    ++v15;
    v18 = logfmt_raw((int)v41, 0x1000u);
    V_UNLOCK(v18);
    v16 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
            174,
            "membist1",
            8,
            736,
            100,
            v41);
  }
  while ( v15 != 8 );
  v19 = dev_ctrl(v16);
  (*(void (__fastcall **)(_DWORD))(v19 + 80))(*(_DWORD *)(a1 + 220));
  unk_185230 = s[0];
  unk_185234 = s[1];
  unk_185238 = s[2];
  unk_18523C = s[3];
  unk_185240 = s[4];
  unk_185244 = s[5];
  unk_185248 = s[6];
  unk_18524C = s[7];
  return 0;
}
