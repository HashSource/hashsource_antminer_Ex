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
  int *v20; // r8
  int v21; // r3
  __int64 v22; // r0
  unsigned int v23; // r2
  int v24; // t1
  int v25; // r0
  int v26; // r0
  int v28; // r0
  int v29; // [sp+38h] [bp-2E0h]
  int v30; // [sp+3Ch] [bp-2DCh]
  char *ptr; // [sp+40h] [bp-2D8h]
  int *v32; // [sp+54h] [bp-2C4h]
  _DWORD v33[5]; // [sp+64h] [bp-2B4h] BYREF
  char v34[32]; // [sp+78h] [bp-2A0h] BYREF
  char v35[32]; // [sp+98h] [bp-280h] BYREF
  char v36[32]; // [sp+B8h] [bp-260h] BYREF
  char v37[32]; // [sp+D8h] [bp-240h] BYREF
  char v38[32]; // [sp+F8h] [bp-220h] BYREF
  _DWORD s[128]; // [sp+118h] [bp-200h] BYREF
  char v40[4100]; // [sp+318h] [bp+0h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v40, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    170,
    "membist0",
    8,
    512,
    20,
    v40);
  v33[0] = -2023406815;
  v33[1] = 1266163410;
  v33[2] = 2015285835;
  v33[3] = 517098360;
  v33[4] = -766805986;
  memset(s, 0, sizeof(s));
  v32 = v33;
  v3 = (int)malloc(0x600u);
  v29 = 0;
  ptr = (char *)v3;
  do
  {
    V_LOCK(v3);
    V_INT((int)v34, "chain");
    v4 = *v32++;
    v30 = 0;
    v5 = logfmt_raw((int)v40, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
      170,
      "membist0",
      8,
      521,
      60,
      v40);
    sub_69224(a1, 164, v4);
    do
    {
      sub_69350(a1, v30, 12, 1);
      sub_69350(a1, v30, 160, 3);
      usleep((__useconds_t)&loc_61A80);
      v6 = ptr;
      v7 = sub_695F0(a1, (unsigned __int16)v30, 161, ptr);
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
            V_INT((int)v36, "chain");
            v10 = logfmt_raw((int)v40, 0x1000u);
            V_UNLOCK(v10);
            v8 = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/god"
                   "miner-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
                   170,
                   "membist0",
                   8,
                   543,
                   100,
                   v40);
            if ( v6 == v9 )
              goto LABEL_10;
          }
          if ( (*(_DWORD *)v6 & 0xFFFFFF00) != 0 )
          {
            V_LOCK(v8);
            V_INT((int)v35, "chain");
            v28 = logfmt_raw((int)v40, 0x1000u);
            V_UNLOCK(v28);
            v8 = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/god"
                   "miner-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
                   170,
                   "membist0",
                   8,
                   537,
                   100,
                   v40);
            s[16 * (unsigned __int8)v6[4] + v29] += bswap32(*(_DWORD *)v6) & 0x7FFFFF;
          }
          v6 += 12;
        }
        while ( v6 != v9 );
      }
LABEL_10:
      v11 = ptr;
      v12 = sub_695F0(a1, (unsigned __int16)v30, 162, ptr);
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
          V_INT((int)v37, "chain");
          v15 = logfmt_raw((int)v40, 0x1000u);
          V_UNLOCK(v15);
          v13 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godm"
                  "iner-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
                  170,
                  "membist0",
                  8,
                  552,
                  100,
                  v40);
          s[16 * (unsigned __int8)*(v11 - 8) + v29] += bswap32(*((_DWORD *)v11 - 3)) & 0x7FFFFF;
        }
        while ( v11 != v14 );
      }
LABEL_16:
      v16 = ptr;
      v3 = sub_695F0(a1, (unsigned __int16)v30, 163, ptr);
      if ( v3 > 0 )
      {
        v3 *= 3;
        v17 = &ptr[4 * v3];
        do
        {
          while ( (*(_DWORD *)v16 & 0xFFFF00) == 0 || (*(_DWORD *)v16 & 0xC0) == 0 )
          {
            v16 += 12;
            if ( v17 == v16 )
              goto LABEL_22;
          }
          V_LOCK(v3);
          v16 += 12;
          V_INT((int)v38, "chain");
          v18 = logfmt_raw((int)v40, 0x1000u);
          V_UNLOCK(v18);
          v3 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godmi"
                 "ner-origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
                 170,
                 "membist0",
                 8,
                 562,
                 100,
                 v40);
          s[16 * (unsigned __int8)*(v16 - 8) + v29] += bswap32(*((_DWORD *)v16 - 3)) & 0x7FFF;
        }
        while ( v17 != v16 );
      }
LABEL_22:
      ++v30;
    }
    while ( v30 != 16 );
    ++v29;
  }
  while ( v29 != 5 );
  v19 = s;
  free(ptr);
  memset(v40, 0, 0x40u);
  v20 = v33;
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
    v24 = *v20++;
    ++v19;
    v25 = sprintf(v40, "<mbist0 %08x> %lld", v24, v22);
  }
  while ( &s[5] != v19 );
  v26 = dev_ctrl(v25);
  (*(void (__fastcall **)(_DWORD))(v26 + 80))(*(_DWORD *)(a1 + 208));
  return 0;
}
