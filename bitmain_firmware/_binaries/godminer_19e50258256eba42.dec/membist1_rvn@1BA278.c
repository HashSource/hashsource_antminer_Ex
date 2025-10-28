int __fastcall membist1_rvn(int a1)
{
  int v1; // r7
  int v2; // r8
  unsigned int v3; // r0
  unsigned int v4; // r0
  int v5; // r7
  int v6; // r8
  unsigned int v7; // r0
  unsigned int v8; // r0
  int (**v9)(); // r0
  _BYTE v12[28]; // [sp+38h] [bp-119Ch] BYREF
  char v13[64]; // [sp+1038h] [bp-19Ch] BYREF
  _DWORD s[8]; // [sp+1078h] [bp-15Ch] BYREF
  _DWORD v15[8]; // [sp+1098h] [bp-13Ch] BYREF
  _DWORD v16[7]; // [sp+10B8h] [bp-11Ch] BYREF
  int v17; // [sp+10D4h] [bp-100h]
  _DWORD v18[7]; // [sp+10D8h] [bp-FCh] BYREF
  int v19; // [sp+10F4h] [bp-E0h]
  _DWORD v20[7]; // [sp+10F8h] [bp-DCh] BYREF
  int v21; // [sp+1114h] [bp-C0h]
  _DWORD v22[7]; // [sp+1118h] [bp-BCh] BYREF
  int v23; // [sp+1134h] [bp-A0h]
  _DWORD v24[7]; // [sp+1138h] [bp-9Ch] BYREF
  int v25; // [sp+1154h] [bp-80h]
  _DWORD v26[7]; // [sp+1158h] [bp-7Ch] BYREF
  int v27; // [sp+1174h] [bp-60h]
  _DWORD v28[7]; // [sp+1178h] [bp-5Ch] BYREF
  int v29; // [sp+1194h] [bp-40h]
  int j; // [sp+119Ch] [bp-38h]
  int k; // [sp+11A0h] [bp-34h]
  int v32; // [sp+11A4h] [bp-30h]
  void *ptr; // [sp+11A8h] [bp-2Ch]
  unsigned __int8 i; // [sp+11AEh] [bp-26h]
  unsigned __int8 m; // [sp+11AFh] [bp-25h]
  __int64 v36; // [sp+11B0h] [bp-24h]

  V_LOCK();
  sub_1A9DE8((int)v16, *(int *)(a1 + 272));
  logfmt_raw(v12, 0x1000u, 0, v17, v16[0], v16[1], v16[2], v16[3], v16[4], v16[5], v16[6], v17, "%s...", "membist1_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "membist1_rvn",
    12,
    894,
    60,
    v12);
  v32 = 0;
  memset(s, 0, sizeof(s));
  memset(v15, 0, sizeof(v15));
  ptr = malloc(0x1800u);
  for ( i = 0; i <= 0x3Fu; ++i )
  {
    sub_1B4CC0(a1, i, 28, 1);
    usleep(0x61A80u);
    sub_1B4CC0(a1, i, 160, -2147483647);
    usleep(0xC3500u);
    memset(ptr, 0, 0x1800u);
    v32 = sub_1B51AC(a1, i, 161, ptr);
    if ( v32 != 8 )
    {
      V_LOCK();
      sub_1A9DE8((int)v18, *(int *)(a1 + 272));
      logfmt_raw(
        v12,
        0x1000u,
        0,
        v19,
        v18[0],
        v18[1],
        v18[2],
        v18[3],
        v18[4],
        v18[5],
        v18[6],
        v19,
        "get membist err cnt failed!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
        171,
        "membist1_rvn",
        12,
        914,
        100,
        v12);
    }
    for ( j = 0; j < v32; ++j )
    {
      if ( (*((_DWORD *)ptr + 3 * j) & 0x80) != 0 )
      {
        if ( (*((_DWORD *)ptr + 3 * j) & 0xFFFFFF00) != 0 )
        {
          V_LOCK();
          sub_1A9DE8((int)v20, *(int *)(a1 + 272));
          v1 = *((unsigned __int8 *)ptr + 12 * j + 4);
          v2 = *((unsigned __int8 *)ptr + 12 * j + 8);
          v3 = sub_1AA37C(*((_DWORD *)ptr + 3 * j));
          logfmt_raw(
            v12,
            0x1000u,
            0,
            v21,
            v20[0],
            v20[1],
            v20[2],
            v20[3],
            v20[4],
            v20[5],
            v20[6],
            v21,
            "chip %02x core %02x membist err cnt: %08x",
            v1,
            v2,
            v3);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
            171,
            "membist1_rvn",
            12,
            923,
            100,
            v12);
          v4 = sub_1AA37C(*((_DWORD *)ptr + 3 * j));
          s[*((unsigned __int8 *)ptr + 12 * j + 4)] += v4 & 0x7FFFFF;
        }
      }
      else
      {
        V_LOCK();
        sub_1A9DE8((int)v22, *(int *)(a1 + 272));
        logfmt_raw(
          v12,
          0x1000u,
          0,
          v23,
          v22[0],
          v22[1],
          v22[2],
          v22[3],
          v22[4],
          v22[5],
          v22[6],
          v23,
          "chip %02x core %02x membist not done!",
          *((unsigned __int8 *)ptr + 12 * j + 4),
          *((unsigned __int8 *)ptr + 12 * j + 8));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
          171,
          "membist1_rvn",
          12,
          930,
          100,
          v12);
      }
    }
    memset(ptr, 0, 0x1800u);
    v32 = sub_1B51AC(a1, i, 162, ptr);
    if ( v32 != 8 )
    {
      V_LOCK();
      sub_1A9DE8((int)v24, *(int *)(a1 + 272));
      logfmt_raw(
        v12,
        0x1000u,
        0,
        v25,
        v24[0],
        v24[1],
        v24[2],
        v24[3],
        v24[4],
        v24[5],
        v24[6],
        v25,
        "get membist lost cnt failed!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
        171,
        "membist1_rvn",
        12,
        938,
        100,
        v12);
    }
    for ( k = 0; k < v32; ++k )
    {
      if ( (*((_DWORD *)ptr + 3 * k) & 0x80) != 0 )
      {
        if ( (*((_DWORD *)ptr + 3 * k) & 0xFFFFFF00) != 0 )
        {
          V_LOCK();
          sub_1A9DE8((int)v26, *(int *)(a1 + 272));
          v5 = *((unsigned __int8 *)ptr + 12 * k + 4);
          v6 = *((unsigned __int8 *)ptr + 12 * k + 8);
          v7 = sub_1AA37C(*((_DWORD *)ptr + 3 * k));
          logfmt_raw(
            v12,
            0x1000u,
            0,
            v27,
            v26[0],
            v26[1],
            v26[2],
            v26[3],
            v26[4],
            v26[5],
            v26[6],
            v27,
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
            "membist1_rvn",
            12,
            947,
            100,
            v12);
          v8 = sub_1AA37C(*((_DWORD *)ptr + 3 * k));
          v15[*((unsigned __int8 *)ptr + 12 * k + 4)] += v8 & 0x7FFFFF;
        }
      }
      else
      {
        V_LOCK();
        sub_1A9DE8((int)v28, *(int *)(a1 + 272));
        logfmt_raw(
          v12,
          0x1000u,
          0,
          v29,
          v28[0],
          v28[1],
          v28[2],
          v28[3],
          v28[4],
          v28[5],
          v28[6],
          v29,
          "chip %02x core %02x membist not done!",
          *((unsigned __int8 *)ptr + 12 * k + 4),
          *((unsigned __int8 *)ptr + 12 * k + 8));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
          171,
          "membist1_rvn",
          12,
          954,
          100,
          v12);
      }
    }
  }
  free(ptr);
  memset(v13, 0, sizeof(v13));
  v36 = 0;
  for ( m = 0; m <= 7u; ++m )
    v36 += (unsigned int)s[m];
  sprintf(v13, "<mbist1> %ld", (_DWORD)v36);
  v9 = dev_ctrl();
  ((void (__fastcall *)(_DWORD))v9[25])(*(_DWORD *)(a1 + 264));
  unk_C258D8 = s[0];
  unk_C258DC = s[1];
  unk_C258E0 = s[2];
  unk_C258E4 = s[3];
  unk_C258E8 = s[4];
  unk_C258EC = s[5];
  unk_C258F0 = s[6];
  unk_C258F4 = s[7];
  return 0;
}
