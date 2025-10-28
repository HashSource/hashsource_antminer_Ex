int __fastcall membist1(int a1)
{
  char *v2; // r1
  _DWORD *v3; // r9
  int v4; // r6
  int v5; // r1
  int v6; // r10
  char *v7; // r4
  int v8; // r0
  char *v9; // r6
  char *v10; // r4
  int v11; // r0
  char *v12; // r6
  char *v13; // r2
  __int64 v14; // r6
  _DWORD *v15; // r3
  unsigned int v16; // t1
  bool v17; // cc
  int v18; // r3
  const char *v19; // r1
  int v20; // r2
  size_t v21; // r0
  char *v22; // r0
  int (**v23)(); // r0
  char *v25; // r2
  char *ptr; // [sp+38h] [bp-10BCh]
  _DWORD v27[7]; // [sp+50h] [bp-10A4h] BYREF
  int v28; // [sp+6Ch] [bp-1088h]
  _DWORD v29[7]; // [sp+70h] [bp-1084h] BYREF
  int v30; // [sp+8Ch] [bp-1068h]
  _DWORD v31[7]; // [sp+90h] [bp-1064h] BYREF
  int v32; // [sp+ACh] [bp-1048h]
  _DWORD v33[7]; // [sp+B0h] [bp-1044h] BYREF
  _DWORD v34[9]; // [sp+CCh] [bp-1028h] BYREF
  char v35[4100]; // [sp+F0h] [bp-1004h] BYREF

  LOWORD(v3) = -14512;
  V_LOCK();
  LOWORD(v2) = -7948;
  HIWORD(v2) = (unsigned int)&loc_12D594 >> 16;
  HIWORD(v3) = (unsigned int)&unk_16B55C >> 16;
  V_INT((int)v27, v2, *(int *)(a1 + 140));
  LOWORD(v4) = -22412;
  HIWORD(v4) = (unsigned int)&unk_139BA4 >> 16;
  logfmt_raw(v35, 0x1000u, 0, v28, v27[0], v27[1], v27[2], v27[3], v27[4], v27[5], v27[6], v28, v4, "membist1");
  V_UNLOCK();
  LOWORD(v5) = -25512;
  HIWORD(v5) = (unsigned int)"one" >> 16;
  zlog(*v3, v5, 154, "membist1", 8, 11537, 60, v35);
  memset(&v34[1], 0, 0x20u);
  v6 = 0;
  ptr = (char *)malloc(0x600u);
  do
  {
    sub_5C158(a1, v6, 12, 1);
    usleep(0x2710u);
    sub_5C158(a1, v6, 160, -2147483647);
    usleep((__useconds_t)&stru_18694.st_info);
    v7 = ptr;
    v8 = sub_5C3C4(a1, (unsigned __int16)v6, 161, ptr);
    if ( v8 > 0 )
    {
      v9 = &ptr[12 * v8];
      do
      {
        while ( (*(_DWORD *)v7 & 0x80) == 0 )
        {
          V_LOCK();
          v7 += 12;
          V_INT((int)v31, "chain", *(int *)(a1 + 140));
          logfmt_raw(
            v35,
            0x1000u,
            0,
            v32,
            v31[0],
            v31[1],
            v31[2],
            v31[3],
            v31[4],
            v31[5],
            v31[6],
            v32,
            "chip %02x core %02x membist not done!",
            (unsigned __int8)*(v7 - 8),
            (unsigned __int8)*(v7 - 4));
          V_UNLOCK();
          zlog(
            *v3,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "membist1",
            8,
            11560,
            100,
            v35);
          if ( v7 == v9 )
            goto LABEL_9;
        }
        if ( (*(_DWORD *)v7 & 0xFFFFFF00) != 0 )
        {
          V_LOCK();
          V_INT((int)v29, "chain", *(int *)(a1 + 140));
          logfmt_raw(
            v35,
            0x1000u,
            0,
            v30,
            v29[0],
            v29[1],
            v29[2],
            v29[3],
            v29[4],
            v29[5],
            v29[6],
            v30,
            "chip %02x core %02x membist err cnt: %08x",
            (unsigned __int8)v7[4],
            (unsigned __int8)v7[8],
            bswap32(*(_DWORD *)v7));
          V_UNLOCK();
          zlog(
            *v3,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "membist1",
            8,
            11555,
            100,
            v35);
          v25 = &v35[4 * (unsigned __int8)v7[4]];
          *((_DWORD *)v25 - 8) += bswap32(*(_DWORD *)v7) & 0x7FFFFF;
        }
        v7 += 12;
      }
      while ( v7 != v9 );
    }
LABEL_9:
    v10 = ptr;
    v11 = sub_5C3C4(a1, (unsigned __int16)v6, 162, ptr);
    if ( v11 > 0 )
    {
      v12 = &ptr[12 * v11];
      do
      {
        while ( (*(_DWORD *)v10 & 0xFFFFFF00) == 0 || (*(_DWORD *)v10 & 0x80) == 0 )
        {
          v10 += 12;
          if ( v10 == v12 )
            goto LABEL_15;
        }
        V_LOCK();
        v10 += 12;
        V_INT((int)v33, "chain", *(int *)(a1 + 140));
        logfmt_raw(
          v35,
          0x1000u,
          0,
          v34[0],
          v33[0],
          v33[1],
          v33[2],
          v33[3],
          v33[4],
          v33[5],
          v33[6],
          v34[0],
          "chip %02x core %02x membist lost cnt: %08x",
          (unsigned __int8)*(v10 - 8),
          (unsigned __int8)*(v10 - 4),
          bswap32(*((_DWORD *)v10 - 3)));
        V_UNLOCK();
        zlog(
          *v3,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_eth/backend_eth.c",
          154,
          "membist1",
          8,
          11568,
          100,
          v35);
        v13 = &v35[4 * (unsigned __int8)*(v10 - 8)];
        *((_DWORD *)v13 - 8) += bswap32(*((_DWORD *)v10 - 3)) & 0x7FFFFF;
      }
      while ( v10 != v12 );
    }
LABEL_15:
    ++v6;
  }
  while ( v6 != 8 );
  v14 = 0;
  free(ptr);
  memset(v35, 0, 0x40u);
  v15 = v34;
  do
  {
    v16 = v15[1];
    ++v15;
    v14 += v16;
  }
  while ( &v34[8] != v15 );
  v17 = HIDWORD(v14) != 0;
  LOWORD(v18) = -22496;
  if ( !HIDWORD(v14) )
    v17 = (unsigned int)v14 > 0x800;
  HIWORD(v18) = (unsigned int)&unk_139B50 >> 16;
  LOWORD(v20) = 18172;
  LOWORD(v19) = -22004;
  HIWORD(v20) = (unsigned int)"stratum_capabilities_vbk" >> 16;
  if ( !v17 )
    v20 = v18;
  HIWORD(v19) = (unsigned int)"T_MASK_ETH %d" >> 16;
  sprintf(v35, v19, v20, v18, v14);
  v21 = strlen(v35);
  v22 = sub_5C834(v35, v21);
  v23 = dev_ctrl((int)v22);
  ((void (__fastcall *)(_DWORD))v23[18])(*(_DWORD *)(a1 + 136));
  unk_16B030 = v34[1];
  unk_16B034 = v34[2];
  unk_16B038 = v34[3];
  unk_16B03C = v34[4];
  unk_16B040 = v34[5];
  unk_16B044 = v34[6];
  unk_16B048 = v34[7];
  unk_16B04C = v34[8];
  return 0;
}
