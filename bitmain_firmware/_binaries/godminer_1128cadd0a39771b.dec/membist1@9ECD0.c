int __fastcall membist1(int a1)
{
  int v2; // r0
  int v3; // r10
  char *v4; // r4
  int v5; // r0
  int v6; // r0
  char *v7; // r6
  int v8; // r0
  char *v9; // r4
  int v10; // r0
  int v11; // r0
  char *v12; // r6
  int v13; // r0
  char *v14; // r2
  __int64 v15; // r6
  _DWORD *v16; // r3
  unsigned int v17; // t1
  bool v18; // cc
  char *v19; // r3
  char *v20; // r2
  size_t v21; // r0
  char *v22; // r0
  int v23; // r0
  int v25; // r0
  char *v26; // r2
  char *ptr; // [sp+38h] [bp-10BCh]
  int v28; // [sp+50h] [bp-10A4h] BYREF
  char v29[32]; // [sp+70h] [bp-1084h] BYREF
  int v30; // [sp+90h] [bp-1064h] BYREF
  char v31[28]; // [sp+B0h] [bp-1044h] BYREF
  _DWORD v32[9]; // [sp+CCh] [bp-1028h] BYREF
  char v33[4100]; // [sp+F0h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)&v28, "chain");
  v2 = logfmt_raw((int)v33, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "membist1",
    8,
    11537,
    60,
    v33);
  memset(&v32[1], 0, 0x20u);
  v3 = 0;
  ptr = (char *)malloc(0x600u);
  do
  {
    sub_5C968(a1, v3, 12, 1);
    usleep(0x2710u);
    sub_5C968(a1, v3, 160, -2147483647);
    usleep((__useconds_t)&stru_1869C.st_value);
    v4 = ptr;
    v5 = sub_5CBD4(a1, (unsigned __int16)v3, 161, ptr);
    if ( v5 > 0 )
    {
      v6 = 3 * v5;
      v7 = &ptr[4 * v6];
      do
      {
        while ( (*(_DWORD *)v4 & 0x80) == 0 )
        {
          V_LOCK(v6);
          v4 += 12;
          V_INT((int)&v30, "chain");
          v8 = logfmt_raw((int)v33, 0x1000u);
          V_UNLOCK(v8);
          v6 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmi"
                 "ner-origin_master/backend/backend_eth/backend_eth.c",
                 154,
                 "membist1",
                 8,
                 11560,
                 100,
                 v33);
          if ( v4 == v7 )
            goto LABEL_9;
        }
        if ( (*(_DWORD *)v4 & 0xFFFFFF00) != 0 )
        {
          V_LOCK(v6);
          V_INT((int)v29, "chain");
          v25 = logfmt_raw((int)v33, 0x1000u);
          V_UNLOCK(v25);
          v6 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmi"
                 "ner-origin_master/backend/backend_eth/backend_eth.c",
                 154,
                 "membist1",
                 8,
                 11555,
                 100,
                 v33);
          v26 = &v33[4 * (unsigned __int8)v4[4]];
          *((_DWORD *)v26 - 8) += bswap32(*(_DWORD *)v4) & 0x7FFFFF;
        }
        v4 += 12;
      }
      while ( v4 != v7 );
    }
LABEL_9:
    v9 = ptr;
    v10 = sub_5CBD4(a1, (unsigned __int16)v3, 162, ptr);
    if ( v10 > 0 )
    {
      v11 = 3 * v10;
      v12 = &ptr[4 * v11];
      do
      {
        while ( (*(_DWORD *)v9 & 0xFFFFFF00) == 0 || (*(_DWORD *)v9 & 0x80) == 0 )
        {
          v9 += 12;
          if ( v9 == v12 )
            goto LABEL_15;
        }
        V_LOCK(v11);
        v9 += 12;
        V_INT((int)v31, "chain");
        v13 = logfmt_raw((int)v33, 0x1000u);
        V_UNLOCK(v13);
        v11 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/backend_eth/backend_eth.c",
                154,
                "membist1",
                8,
                11568,
                100,
                v33);
        v14 = &v33[4 * (unsigned __int8)*(v9 - 8)];
        *((_DWORD *)v14 - 8) += bswap32(*((_DWORD *)v9 - 3)) & 0x7FFFFF;
      }
      while ( v9 != v12 );
    }
LABEL_15:
    ++v3;
  }
  while ( v3 != 8 );
  v15 = 0;
  free(ptr);
  memset(v33, 0, 0x40u);
  v16 = v32;
  do
  {
    v17 = v16[1];
    ++v16;
    v15 += v17;
  }
  while ( &v32[8] != v16 );
  v18 = HIDWORD(v15) != 0;
  LOWORD(v19) = (unsigned __int16)"ok";
  if ( !HIDWORD(v15) )
    v18 = (unsigned int)v15 > 0x800;
  HIWORD(v19) = (unsigned int)"ok" >> 16;
  v20 = "failed";
  if ( !v18 )
    v20 = v19;
  sprintf(v33, "<mbist1> test %s(%llu)", v20, v19, v15);
  v21 = strlen(v33);
  v22 = sub_5D044(v33, v21);
  v23 = dev_ctrl((int)v22);
  (*(void (__fastcall **)(_DWORD))(v23 + 72))(*(_DWORD *)(a1 + 144));
  unk_16C048 = v32[1];
  unk_16C04C = v32[2];
  unk_16C050 = v32[3];
  unk_16C054 = v32[4];
  unk_16C058 = v32[5];
  unk_16C05C = v32[6];
  unk_16C060 = v32[7];
  unk_16C064 = v32[8];
  return 0;
}
