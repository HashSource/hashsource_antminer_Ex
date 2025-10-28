int __fastcall membist1_rvn(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r8
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
  __int64 v15; // r4
  _DWORD *v16; // r3
  unsigned int v17; // t1
  int v18; // r0
  int v19; // r0
  int v21; // r0
  int v22; // r0
  void *ptr; // [sp+34h] [bp-134h]
  int v24; // [sp+3Ch] [bp-12Ch]
  char v25[32]; // [sp+48h] [bp-120h] BYREF
  char v26[32]; // [sp+68h] [bp-100h] BYREF
  char v27[32]; // [sp+88h] [bp-E0h] BYREF
  char v28[32]; // [sp+A8h] [bp-C0h] BYREF
  char v29[32]; // [sp+C8h] [bp-A0h] BYREF
  char v30[32]; // [sp+E8h] [bp-80h] BYREF
  char v31[32]; // [sp+108h] [bp-60h] BYREF
  _DWORD v32[8]; // [sp+128h] [bp-40h] BYREF
  _DWORD s[8]; // [sp+148h] [bp-20h] BYREF
  char v34[4100]; // [sp+168h] [bp+0h] BYREF

  V_LOCK(a1);
  V_INT((int)v25, "chain");
  v24 = 0;
  v2 = logfmt_raw((int)v34, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    174,
    "membist1_rvn",
    12,
    648,
    60,
    v34);
  memset(s, 0, sizeof(s));
  memset(v32, 0, sizeof(v32));
  ptr = malloc(0x300u);
  do
  {
    sub_92D34(a1, v24, 28, 1);
    usleep(0x61A80u);
    sub_92D34(a1, v24, 160, -2147483647);
    usleep(0xC3500u);
    memset(ptr, 0, 0x300u);
    v3 = sub_9304C(a1, (unsigned __int16)v24, 161, ptr);
    v4 = v3;
    if ( v3 == 8
      || (V_LOCK(v3),
          V_INT((int)v26, "chain"),
          v5 = logfmt_raw((int)v34, 0x1000u),
          V_UNLOCK(v5),
          v3 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/g"
                 "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
                 174,
                 "membist1_rvn",
                 12,
                 668,
                 100,
                 v34),
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
          V_INT((int)v28, "chain");
          v8 = logfmt_raw((int)v34, 0x1000u);
          V_UNLOCK(v8);
          v3 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/g"
                 "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
                 174,
                 "membist1_rvn",
                 12,
                 684,
                 100,
                 v34);
          if ( v4 <= v7 )
            goto LABEL_10;
        }
        if ( (*v6 & 0xFFFFFF00) != 0 )
        {
          V_LOCK(v3);
          V_INT((int)v27, "chain");
          v21 = logfmt_raw((int)v34, 0x1000u);
          V_UNLOCK(v21);
          v3 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/g"
                 "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
                 174,
                 "membist1_rvn",
                 12,
                 677,
                 100,
                 v34);
          s[*((unsigned __int8 *)v6 + 4)] += bswap32(*v6) & 0x7FFFFF;
        }
        ++v7;
        v6 += 3;
      }
      while ( v4 > v7 );
    }
LABEL_10:
    memset(ptr, 0, 0x300u);
    v9 = sub_9304C(a1, (unsigned __int16)v24, 162, ptr);
    v10 = v9;
    if ( v9 == 8
      || (V_LOCK(v9),
          V_INT((int)v29, "chain"),
          v11 = logfmt_raw((int)v34, 0x1000u),
          V_UNLOCK(v11),
          v9 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/g"
                 "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
                 174,
                 "membist1_rvn",
                 12,
                 692,
                 100,
                 v34),
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
          V_INT((int)v31, "chain");
          v14 = logfmt_raw((int)v34, 0x1000u);
          V_UNLOCK(v14);
          v9 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/g"
                 "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
                 174,
                 "membist1_rvn",
                 12,
                 708,
                 100,
                 v34);
          if ( v10 <= v13 )
            goto LABEL_18;
        }
        if ( (*v12 & 0xFFFFFF00) != 0 )
        {
          V_LOCK(v9);
          V_INT((int)v30, "chain");
          v22 = logfmt_raw((int)v34, 0x1000u);
          V_UNLOCK(v22);
          v9 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/g"
                 "odminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
                 174,
                 "membist1_rvn",
                 12,
                 701,
                 100,
                 v34);
          v32[*((unsigned __int8 *)v12 + 4)] += bswap32(*v12) & 0x7FFFFF;
        }
        ++v13;
        v12 += 3;
      }
      while ( v10 > v13 );
    }
LABEL_18:
    ++v24;
  }
  while ( v24 != 8 );
  v15 = 0;
  free(ptr);
  memset(v34, 0, 0x40u);
  v16 = &v32[7];
  do
  {
    v17 = v16[1];
    ++v16;
    v15 += v17;
  }
  while ( &s[7] != v16 );
  v18 = sprintf(v34, "<mbist1> %lld", v15);
  v19 = dev_ctrl(v18);
  (*(void (__fastcall **)(_DWORD))(v19 + 80))(*(_DWORD *)(a1 + 220));
  unk_18D33C = s[0];
  unk_18D340 = s[1];
  unk_18D344 = s[2];
  unk_18D348 = s[3];
  unk_18D34C = s[4];
  unk_18D350 = s[5];
  unk_18D354 = s[6];
  unk_18D358 = s[7];
  return 0;
}
