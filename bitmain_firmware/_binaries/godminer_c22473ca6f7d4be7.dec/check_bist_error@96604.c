int __fastcall check_bist_error(int a1, int a2, int a3, unsigned __int16 a4)
{
  int v7; // r5
  char *v8; // r1
  int v9; // r2
  _DWORD *v10; // r12
  int v11; // r3
  int v12; // r0
  int v13; // r1
  int v14; // r2
  _DWORD *v15; // r2
  int v16; // r3
  char *v17; // r3
  int v18; // r11
  int v19; // r2
  unsigned int v20; // r5
  int v21; // r10
  unsigned __int16 v23; // r4
  int back; // r5
  int v25; // r7
  int v26; // r5
  int v27; // r0
  int v28; // r3
  int v29; // r0
  int v30; // r0
  int v31; // r12
  int v32; // r5
  int v33; // r3
  int v34; // r12
  int v35; // r0
  int v36; // r3
  int v37; // r5
  unsigned __int8 *v38; // r9
  int v39; // r11
  int v40; // r4
  int v41; // r0
  _BYTE *v42; // r0
  _BYTE *v43; // r3
  int *v44; // r1
  unsigned int v45; // r2
  int v46; // r0
  int v47; // r4
  int v48; // r11
  unsigned __int8 *v49; // r6
  int v50; // r2
  int v51; // r3
  int v52; // r5
  int v53; // r6
  int v56; // r2
  int v57; // r0
  int v58; // r1
  int v59; // r4
  int v60; // [sp+2Ch] [bp-1270h]
  int v61; // [sp+44h] [bp-1258h]
  unsigned int v63; // [sp+4Ch] [bp-1250h]
  char *s; // [sp+54h] [bp-1248h]
  unsigned __int8 *v65; // [sp+5Ch] [bp-1240h]
  int v66; // [sp+60h] [bp-123Ch]
  int v67; // [sp+64h] [bp-1238h]
  int v69; // [sp+6Ch] [bp-1230h]
  int v70; // [sp+70h] [bp-122Ch]
  _DWORD *v71; // [sp+74h] [bp-1228h]
  unsigned int v72; // [sp+78h] [bp-1224h]
  unsigned int v73; // [sp+7Ch] [bp-1220h]
  _DWORD *v74; // [sp+80h] [bp-121Ch]
  _DWORD v75[4]; // [sp+88h] [bp-1214h] BYREF
  _DWORD v76[7]; // [sp+98h] [bp-1204h] BYREF
  int v77; // [sp+B4h] [bp-11E8h]
  _DWORD v78[7]; // [sp+B8h] [bp-11E4h] BYREF
  int v79; // [sp+D4h] [bp-11C8h]
  _DWORD v80[7]; // [sp+D8h] [bp-11C4h] BYREF
  int v81; // [sp+F4h] [bp-11A8h]
  _DWORD v82[7]; // [sp+F8h] [bp-11A4h] BYREF
  int v83; // [sp+114h] [bp-1188h]
  _DWORD v84[7]; // [sp+118h] [bp-1184h] BYREF
  int v85; // [sp+134h] [bp-1168h]
  _DWORD v86[7]; // [sp+138h] [bp-1164h] BYREF
  int v87; // [sp+154h] [bp-1148h]
  _DWORD v88[7]; // [sp+158h] [bp-1144h] BYREF
  int v89; // [sp+174h] [bp-1128h] BYREF
  _DWORD v90[8]; // [sp+178h] [bp-1124h] BYREF
  _QWORD v91[8]; // [sp+198h] [bp-1104h] BYREF
  _BYTE v92[64]; // [sp+1D8h] [bp-10C4h] BYREF
  _BYTE v93[128]; // [sp+218h] [bp-1084h] BYREF
  char v94[4100]; // [sp+298h] [bp-1004h] BYREF

  LOWORD(v7) = -22412;
  V_LOCK();
  LOWORD(v8) = -7948;
  HIWORD(v8) = (unsigned int)&loc_12D594 >> 16;
  V_INT((int)v76, v8, *(int *)(a1 + 140));
  HIWORD(v7) = (unsigned int)&unk_139BA4 >> 16;
  logfmt_raw(v94, 0x1000u, 0, v77, v76[0], v76[1], v76[2], v76[3], v76[4], v76[5], v76[6], v77, v7, "check_bist_error");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_bist_error",
    16,
    8981,
    60,
    v94);
  v75[0] = 0;
  if ( a3 == 255 )
    v9 = 14;
  v75[1] = 0;
  if ( a3 == 255 )
    v10 = v75;
  v75[2] = 0;
  v75[3] = 0;
  if ( a3 == 255 )
  {
    v11 = (int)&unk_138130;
    v71 = (_DWORD *)v9;
  }
  else
  {
    v11 = 1;
  }
  if ( a3 == 255 )
  {
    v12 = *(_DWORD *)v11;
    v13 = *(_DWORD *)(v11 + 4);
    v14 = *(_DWORD *)(v11 + 8);
    v11 = *(_DWORD *)(v11 + 12);
    *v10 = v12;
    v10[1] = v13;
    v10[2] = v14;
    v10 += 3;
  }
  else
  {
    v71 = (_DWORD *)v11;
  }
  LOWORD(v15) = -22660;
  if ( a3 == 255 )
    *(_WORD *)v10 = v11;
  HIWORD(v15) = (unsigned int)&unk_139AAC >> 16;
  v63 = a4;
  v74 = v15;
  v66 = 0;
  do
  {
    if ( a3 == 255 )
    {
      v16 = v66;
      v15 = v75;
    }
    else
    {
      v16 = a3;
    }
    if ( a3 == 255 )
      v16 = *((unsigned __int8 *)v15 + v16);
    v61 = v16;
    if ( v63 )
    {
      LOWORD(v17) = -7948;
      v18 = 0;
      HIWORD(v17) = (unsigned int)&loc_12D594 >> 16;
      LOWORD(v19) = -22872;
      s = v17;
      v20 = 0;
      v21 = a1;
      HIWORD(v19) = (unsigned int)&unk_1399D8 >> 16;
      v67 = v19;
      while ( 1 )
      {
        if ( v20 > 3 || v61 != 3 )
        {
          v23 = (_WORD)v20 << 12;
          back = serdes_apb_read_back(v21, a2, v61, (unsigned __int16)((_WORD)v20 << 12) | 0x10, (int)v91);
          if ( *(_DWORD *)(v21 + 236) != back )
          {
            V_LOCK();
            V_INT((int)v78, s, *(int *)(v21 + 140));
            LOWORD(v25) = -22920;
            HIWORD(v25) = (unsigned int)&unk_1399A8 >> 16;
            logfmt_raw(
              v94,
              0x1000u,
              0,
              v79,
              v78[0],
              v78[1],
              v78[2],
              v78[3],
              v78[4],
              v78[5],
              v78[6],
              v79,
              v25,
              "check_bist_error",
              back,
              *(_DWORD *)(v21 + 236));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_bist_error",
              16,
              9008,
              100,
              v94);
          }
          v26 = serdes_apb_read_back(v21, a2, v61, v23 & 0xF000 | 0x13, (int)v92);
          v27 = *(_DWORD *)(v21 + 236);
          if ( v27 == v26 )
          {
            if ( v27 > 0 )
            {
              v28 = 4;
              v29 = 8 * v27 + 4;
              do
              {
                *(_DWORD *)&v93[v28 + 64] = *(_DWORD *)&v92[v28] >> 28;
                v28 += 8;
              }
              while ( v28 != v29 );
            }
            v30 = serdes_apb_read_back(v21, a2, v61, v23 & 0xF000 | 0x14, (int)v92);
            v31 = *(_DWORD *)(v21 + 236);
            v32 = v30;
            if ( v31 == v30 )
            {
              if ( v31 > 0 )
              {
                v33 = 4;
                v34 = 8 * v31 + 4;
                do
                {
                  *(_DWORD *)&v93[v33 + 64] |= 16 * *(_DWORD *)&v92[v33];
                  v33 += 8;
                }
                while ( v33 != v34 );
              }
              v35 = serdes_apb_read_back(v21, a2, v61, v23 & 0xF000 | 0x15, (int)v93);
              v36 = *(_DWORD *)(v21 + 236);
              v37 = v35;
              if ( v36 == v35 )
              {
                if ( v36 > 0 )
                {
                  v69 = v18;
                  v38 = (unsigned __int8 *)v91;
                  v65 = (unsigned __int8 *)&v91[v36];
                  v39 = v21;
                  v72 = v23 | 0x16;
                  v73 = v23 | 0x17;
                  do
                  {
                    while ( 1 )
                    {
                      if ( (*((_DWORD *)v38 + 1) & 0xE000000) != 0 )
                      {
                        v40 = *v38;
                        V_LOCK();
                        V_INT((int)v86, s, *(int *)(v39 + 140));
                        logfmt_raw(
                          v94,
                          0x1000u,
                          0,
                          v87,
                          v86[0],
                          v86[1],
                          v86[2],
                          v86[3],
                          v86[4],
                          v86[5],
                          v86[6],
                          v87,
                          "channel %1x, chip_id %02x c_id %02x bist err(%02x) cnt %08x %08x",
                          v69,
                          v40,
                          v38[1],
                          (*((_DWORD *)v38 + 1) >> 25) & 7,
                          *(_DWORD *)&v93[8 * v40 + 4],
                          *(_DWORD *)&v93[8 * v40 + 68]);
                        V_UNLOCK();
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/bu"
                          "ild/godminer-origin_master/backend/backend_eth/backend_eth.c",
                          154,
                          "check_bist_error",
                          16,
                          9042,
                          100,
                          v94);
                        memset(v90, 0, sizeof(v90));
                        v41 = serdes_apb_read_back(v39, v40, v38[1], v72, (int)v92);
                        if ( v41 > 0 )
                        {
                          v42 = &v92[8 * v41];
                          v43 = v92;
                          v44 = &v89;
                          do
                          {
                            v45 = *((_DWORD *)v43 + 1);
                            v43 += 8;
                            v44[1] = v45 >> 12;
                            ++v44;
                          }
                          while ( v42 != v43 );
                        }
                        v46 = serdes_apb_read_back(v39, v40, v38[1], v73, (int)v92);
                        if ( v46 > 0 )
                          break;
                      }
                      v38 += 8;
                      if ( v38 == v65 )
                        goto LABEL_49;
                    }
                    v70 = v39;
                    v47 = 0;
                    v48 = v46;
                    do
                    {
                      while ( 1 )
                      {
                        v49 = &v92[8 * v47];
                        v50 = *v49;
                        v51 = *v38;
                        v52 = v90[v47] | (*((_DWORD *)v49 + 1) << 20);
                        v90[v47] = v52;
                        if ( v50 == v51 )
                          break;
                        if ( v48 == ++v47 )
                          goto LABEL_48;
                      }
                      V_LOCK();
                      V_INT((int)v88, s, *(int *)(v70 + 140));
                      v60 = v49[1];
                      v53 = (unsigned __int8)v92[8 * v47++];
                      logfmt_raw(
                        v94,
                        0x1000u,
                        0,
                        v89,
                        v88[0],
                        v88[1],
                        v88[2],
                        v88[3],
                        v88[4],
                        v88[5],
                        v88[6],
                        v89,
                        v74,
                        v69,
                        v53,
                        v60,
                        v52);
                      V_UNLOCK();
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/buil"
                        "d/godminer-origin_master/backend/backend_eth/backend_eth.c",
                        154,
                        "check_bist_error",
                        16,
                        9057,
                        60,
                        v94);
                    }
                    while ( v48 != v47 );
LABEL_48:
                    v38 += 8;
                    v39 = v70;
                  }
                  while ( v38 != v65 );
LABEL_49:
                  v21 = v39;
                  v18 = v69;
                }
                goto LABEL_50;
              }
              V_LOCK();
              V_INT((int)v84, s, *(int *)(v21 + 140));
              logfmt_raw(
                v94,
                0x1000u,
                0,
                v85,
                v84[0],
                v84[1],
                v84[2],
                v84[3],
                v84[4],
                v84[5],
                v84[6],
                v85,
                "%s d'21 resp_num is not enough(%d<%d), bist err",
                "check_bist_error",
                v37,
                *(_DWORD *)(v21 + 236));
              V_UNLOCK();
              v56 = 9033;
              v57 = g_zc;
            }
            else
            {
              V_LOCK();
              V_INT((int)v82, s, *(int *)(v21 + 140));
              LOWORD(v59) = -22824;
              HIWORD(v59) = (unsigned int)&unk_139A08 >> 16;
              logfmt_raw(
                v94,
                0x1000u,
                0,
                v83,
                v82[0],
                v82[1],
                v82[2],
                v82[3],
                v82[4],
                v82[5],
                v82[6],
                v83,
                v59,
                "check_bist_error",
                v32,
                *(_DWORD *)(v21 + 236));
              V_UNLOCK();
              v56 = 9024;
              v57 = g_zc;
            }
          }
          else
          {
            V_LOCK();
            V_INT((int)v80, s, *(int *)(v21 + 140));
            logfmt_raw(
              v94,
              0x1000u,
              0,
              v81,
              v80[0],
              v80[1],
              v80[2],
              v80[3],
              v80[4],
              v80[5],
              v80[6],
              v81,
              v67,
              "check_bist_error",
              v26,
              *(_DWORD *)(v21 + 236));
            V_UNLOCK();
            v56 = 9015;
            v57 = g_zc;
          }
          LOWORD(v58) = -25512;
          HIWORD(v58) = (unsigned int)"one" >> 16;
          zlog(v57, v58, 154, "check_bist_error", 16, v56, 100, v94);
        }
LABEL_50:
        v20 = (unsigned __int16)++v18;
        if ( v63 <= (unsigned __int16)v18 )
        {
          a1 = v21;
          break;
        }
      }
    }
    v15 = v71;
  }
  while ( v71 != (_DWORD *)++v66 );
  return 0;
}
