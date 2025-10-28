int __fastcall check_d54(int a1, int a2, _BYTE *a3, int a4, unsigned __int8 a5)
{
  int v8; // r6
  char *v9; // r1
  _DWORD *v10; // r9
  int v11; // r1
  _BYTE *v12; // r12
  int v13; // r3
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r2
  int v19; // r3
  int v20; // r6
  int v21; // r7
  unsigned int v22; // r3
  int v23; // r4
  unsigned __int8 *v24; // r5
  int back; // r8
  int v26; // r3
  char *v27; // r1
  int v28; // lr
  int v31; // r0
  int v32; // t1
  int v33; // r3
  int v34; // r1
  unsigned int v35; // [sp+48h] [bp-10BCh]
  int v37; // [sp+50h] [bp-10B4h]
  int v39; // [sp+58h] [bp-10ACh]
  int v40; // [sp+60h] [bp-10A4h]
  int v41; // [sp+64h] [bp-10A0h]
  int v43; // [sp+6Ch] [bp-1098h]
  _BYTE v44[16]; // [sp+70h] [bp-1094h] BYREF
  _DWORD v45[7]; // [sp+80h] [bp-1084h] BYREF
  int v46; // [sp+9Ch] [bp-1068h]
  _DWORD v47[7]; // [sp+A0h] [bp-1064h] BYREF
  int v48; // [sp+BCh] [bp-1048h]
  _BYTE v49[64]; // [sp+C0h] [bp-1044h] BYREF
  char v50[4096]; // [sp+100h] [bp-1004h] BYREF

  LOWORD(v8) = -22412;
  LOWORD(v10) = -14512;
  V_LOCK();
  LOWORD(v9) = -7948;
  HIWORD(v9) = (unsigned int)&loc_12D594 >> 16;
  HIWORD(v10) = (unsigned int)&unk_16B55C >> 16;
  V_INT((int)v45, v9, *(int *)(a1 + 140));
  HIWORD(v8) = (unsigned int)&unk_139BA4 >> 16;
  logfmt_raw(v50, 0x1000u, 0, v46, v45[0], v45[1], v45[2], v45[3], v45[4], v45[5], v45[6], v46, v8, "check_d54");
  V_UNLOCK();
  LOWORD(v11) = -25512;
  HIWORD(v11) = (unsigned int)"one" >> 16;
  zlog(*v10, v11, 154, "check_d54", 9, 3375, 60, v50);
  if ( a3 == (_BYTE *)255 )
  {
    v13 = (int)&unk_138130;
    v43 = 14;
    v12 = v44;
  }
  else
  {
    v13 = 1;
    v43 = 1;
  }
  if ( a3 == (_BYTE *)255 )
  {
    v14 = *(_DWORD *)v13;
    v15 = *(_DWORD *)(v13 + 4);
    v16 = *(_DWORD *)(v13 + 8);
    v17 = *(_DWORD *)(v13 + 12);
    *(_DWORD *)v12 = v14;
    *((_DWORD *)v12 + 1) = v15;
    *((_DWORD *)v12 + 2) = v16;
    *((_WORD *)v12 + 6) = v17;
  }
  v40 = 8 * a4;
  v18 = (unsigned __int16)a4;
  v35 = (unsigned __int16)a4;
  v41 = 0;
  do
  {
    if ( a3 == (_BYTE *)255 )
    {
      v18 = v41;
      v19 = (int)v44;
    }
    else
    {
      v19 = (int)a3;
    }
    if ( a3 == (_BYTE *)255 )
      v19 = *(unsigned __int8 *)(v18 + v19);
    v37 = v19;
    v39 = 21;
    while ( 1 )
    {
      usleep((__useconds_t)&stru_18694.st_info);
      if ( !v35 )
        break;
      v20 = 0;
      v21 = 0;
      v22 = 0;
      while ( 1 )
      {
        v23 = v22 <= 3 && v37 == 3;
        if ( !v23 )
          break;
        ++v20;
LABEL_15:
        v22 = (unsigned __int16)v20;
        if ( v35 <= (unsigned __int16)v20 )
          goto LABEL_26;
      }
      v24 = v49;
      back = serdes_apb_read_back(a1, a2, v37, (unsigned __int16)((_WORD)v22 << 12) | 0x36, (int)v49);
      if ( back <= 0 )
        goto LABEL_25;
      while ( 1 )
      {
        v26 = *((_DWORD *)v24 + 1);
        if ( !a5 )
          break;
        if ( (a5 & ~v26) != 0 )
          goto LABEL_24;
LABEL_32:
        V_LOCK();
        v31 = v24[1];
        v32 = *v24;
        v24 += 8;
        ++v23;
        ++v21;
        logfmt_raw(
          v50,
          0x1000u,
          0,
          "channel %1x, chip_id %02x core_id %02x d'54 bit[3] change to %d",
          v20,
          v32,
          v31,
          a5);
        V_UNLOCK();
        zlog(
          *v10,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_eth/backend_eth.c",
          154,
          "check_d54",
          9,
          3405,
          20,
          v50);
        if ( back == v23 )
          goto LABEL_25;
      }
      if ( (v26 & 8) == 0 )
        goto LABEL_32;
LABEL_24:
      V_LOCK();
      LOWORD(v27) = -7948;
      HIWORD(v27) = (unsigned int)&loc_12D594 >> 16;
      v21 >>= 3;
      V_INT((int)v47, v27, *(int *)(a1 + 140));
      LOWORD(v28) = -24516;
      HIWORD(v28) = (unsigned int)"external_0811" >> 16;
      logfmt_raw(
        v50,
        0x1000u,
        0,
        v48,
        v47[0],
        v47[1],
        v47[2],
        v47[3],
        v47[4],
        v47[5],
        v47[6],
        v48,
        v28,
        v20,
        (unsigned __int8)v49[8 * v23],
        (unsigned __int8)v49[8 * v23 + 1],
        bswap32(*(_DWORD *)&v49[8 * v23 + 4]),
        a5);
      V_UNLOCK();
      zlog(
        *v10,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_eth/backend_eth.c",
        154,
        "check_d54",
        9,
        3409,
        100,
        v50);
LABEL_25:
      ++v20;
      if ( v21 >= 8 * v20 )
        goto LABEL_15;
LABEL_26:
      if ( v21 >= v40 )
        break;
      if ( !--v39 )
        goto LABEL_28;
    }
    V_LOCK();
    LOWORD(v33) = -24616;
    HIWORD(v33) = (unsigned int)"div8_seq_one_lane" >> 16;
    logfmt_raw(v50, 0x1000u, 0, v33, a5);
    V_UNLOCK();
    LOWORD(v34) = -25512;
    HIWORD(v34) = (unsigned int)"one" >> 16;
    zlog(*v10, v34, 154, "check_d54", 9, 3418, 20, v50);
LABEL_28:
    v18 = v43;
  }
  while ( v43 != ++v41 );
  return 0;
}
