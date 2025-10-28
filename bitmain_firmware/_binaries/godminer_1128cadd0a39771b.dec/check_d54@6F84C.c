int __fastcall check_d54(int a1, int a2, _BYTE *a3, int a4, unsigned __int8 a5)
{
  int v7; // r0
  _BYTE *v8; // r12
  int v9; // r3
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r2
  int v15; // r3
  int back; // r0
  int v17; // r6
  int v18; // r7
  unsigned int v19; // r3
  int v20; // r4
  _BYTE *v21; // r5
  int v22; // r8
  int v23; // r3
  int v24; // r0
  int v27; // r0
  int v28; // r0
  unsigned int v29; // [sp+48h] [bp-10BCh]
  int v31; // [sp+50h] [bp-10B4h]
  int v33; // [sp+58h] [bp-10ACh]
  int v34; // [sp+60h] [bp-10A4h]
  int v35; // [sp+64h] [bp-10A0h]
  int v37; // [sp+6Ch] [bp-1098h]
  _BYTE v38[16]; // [sp+70h] [bp-1094h] BYREF
  char v39[32]; // [sp+80h] [bp-1084h] BYREF
  int v40; // [sp+A0h] [bp-1064h] BYREF
  _BYTE v41[64]; // [sp+C0h] [bp-1044h] BYREF
  _BYTE v42[4096]; // [sp+100h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)v39, "chain");
  v7 = logfmt_raw((int)v42, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_d54",
    9,
    3375,
    60,
    v42);
  if ( a3 == (_BYTE *)255 )
  {
    v9 = (int)&unk_139940;
    v37 = 14;
    v8 = v38;
  }
  else
  {
    v9 = 1;
    v37 = 1;
  }
  if ( a3 == (_BYTE *)255 )
  {
    v10 = *(_DWORD *)v9;
    v11 = *(_DWORD *)(v9 + 4);
    v12 = *(_DWORD *)(v9 + 8);
    v13 = *(_DWORD *)(v9 + 12);
    *(_DWORD *)v8 = v10;
    *((_DWORD *)v8 + 1) = v11;
    *((_DWORD *)v8 + 2) = v12;
    *((_WORD *)v8 + 6) = v13;
  }
  v34 = 8 * a4;
  v14 = (unsigned __int16)a4;
  v29 = (unsigned __int16)a4;
  v35 = 0;
  do
  {
    if ( a3 == (_BYTE *)255 )
    {
      v14 = v35;
      v15 = (int)v38;
    }
    else
    {
      v15 = (int)a3;
    }
    if ( a3 == (_BYTE *)255 )
      v15 = *(unsigned __int8 *)(v14 + v15);
    v31 = v15;
    v33 = 21;
    while ( 1 )
    {
      back = usleep((__useconds_t)&stru_1869C.st_value);
      if ( !v29 )
        break;
      v17 = 0;
      v18 = 0;
      v19 = 0;
      while ( 1 )
      {
        v20 = v19 <= 3 && v31 == 3;
        if ( !v20 )
          break;
        ++v17;
LABEL_15:
        v19 = (unsigned __int16)v17;
        if ( v29 <= (unsigned __int16)v17 )
          goto LABEL_26;
      }
      v21 = v41;
      back = serdes_apb_read_back(a1, a2, v31, (unsigned __int16)((_WORD)v19 << 12) | 0x36, (int)v41);
      v22 = back;
      if ( back <= 0 )
        goto LABEL_25;
      while ( 1 )
      {
        v23 = *((_DWORD *)v21 + 1);
        if ( !a5 )
          break;
        if ( (a5 & ~v23) != 0 )
          goto LABEL_24;
LABEL_32:
        V_LOCK(back);
        v21 += 8;
        ++v20;
        ++v18;
        v27 = logfmt_raw((int)v42, 0x1000u);
        V_UNLOCK(v27);
        back = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmi"
                 "ner-origin_master/backend/backend_eth/backend_eth.c",
                 154,
                 "check_d54",
                 9,
                 3405,
                 20,
                 v42);
        if ( v22 == v20 )
          goto LABEL_25;
      }
      if ( (v23 & 8) == 0 )
        goto LABEL_32;
LABEL_24:
      V_LOCK(back);
      v18 >>= 3;
      V_INT((int)&v40, "chain");
      v24 = logfmt_raw((int)v42, 0x1000u);
      V_UNLOCK(v24);
      back = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmine"
               "r-origin_master/backend/backend_eth/backend_eth.c",
               154,
               "check_d54",
               9,
               3409,
               100,
               v42);
LABEL_25:
      ++v17;
      if ( v18 >= 8 * v17 )
        goto LABEL_15;
LABEL_26:
      if ( v18 >= v34 )
        break;
      if ( !--v33 )
        goto LABEL_28;
    }
    V_LOCK(back);
    v28 = logfmt_raw((int)v42, 0x1000u);
    V_UNLOCK(v28);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "check_d54",
      9,
      3418,
      20,
      v42);
LABEL_28:
    v14 = v37;
  }
  while ( v37 != ++v35 );
  return 0;
}
