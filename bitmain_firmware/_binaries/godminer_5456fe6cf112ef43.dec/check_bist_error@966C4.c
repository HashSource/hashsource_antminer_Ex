int __fastcall check_bist_error(int a1, int a2, int a3, unsigned __int16 a4)
{
  int v4; // r9
  int v7; // r0
  int v8; // r2
  _DWORD *v9; // r12
  int v10; // r3
  int v11; // r0
  int v12; // r1
  int v13; // r2
  _DWORD *v14; // r2
  int v15; // r3
  int v16; // r11
  unsigned int v17; // r5
  int v18; // r10
  unsigned __int16 v20; // r4
  int back; // r0
  int v22; // r0
  int v23; // r5
  int v24; // r0
  int v25; // r3
  int v26; // r0
  int v27; // r0
  int v28; // r12
  int v29; // r3
  int v30; // r12
  int v31; // r0
  int v32; // r3
  unsigned __int8 *v33; // r9
  int v34; // r11
  int v35; // r4
  int v36; // r0
  int v37; // r0
  _BYTE *v38; // r0
  _BYTE *v39; // r3
  char *v40; // r1
  unsigned int v41; // r2
  int v42; // r4
  int v43; // r11
  int v44; // r2
  int v45; // r3
  int v46; // r0
  int v49; // r0
  int v50; // r2
  int v51; // r0
  int v52; // r0
  int v53; // r0
  int v54; // [sp+44h] [bp-1258h]
  unsigned int v56; // [sp+4Ch] [bp-1250h]
  _BOOL4 v57; // [sp+50h] [bp-124Ch]
  unsigned __int8 *v58; // [sp+5Ch] [bp-1240h]
  int v59; // [sp+60h] [bp-123Ch]
  int v61; // [sp+6Ch] [bp-1230h]
  int v62; // [sp+70h] [bp-122Ch]
  _DWORD *v63; // [sp+74h] [bp-1228h]
  int v64; // [sp+78h] [bp-1224h]
  int v65; // [sp+7Ch] [bp-1220h]
  _DWORD v66[4]; // [sp+88h] [bp-1214h] BYREF
  char v67[32]; // [sp+98h] [bp-1204h] BYREF
  int v68; // [sp+B8h] [bp-11E4h] BYREF
  char v69[32]; // [sp+D8h] [bp-11C4h] BYREF
  int v70; // [sp+F8h] [bp-11A4h] BYREF
  char v71[32]; // [sp+118h] [bp-1184h] BYREF
  int v72; // [sp+138h] [bp-1164h] BYREF
  char v73[28]; // [sp+158h] [bp-1144h] BYREF
  char v74; // [sp+174h] [bp-1128h] BYREF
  _DWORD v75[8]; // [sp+178h] [bp-1124h] BYREF
  _QWORD v76[8]; // [sp+198h] [bp-1104h] BYREF
  _BYTE v77[64]; // [sp+1D8h] [bp-10C4h] BYREF
  _BYTE v78[128]; // [sp+218h] [bp-1084h] BYREF
  _BYTE v79[4100]; // [sp+298h] [bp-1004h] BYREF

  v4 = a1;
  V_LOCK(a1);
  V_INT((int)v67, "chain");
  v7 = logfmt_raw((int)v79, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_bist_error",
    16,
    8981,
    60,
    v79);
  v66[0] = 0;
  if ( a3 == 255 )
    v8 = 14;
  v66[1] = 0;
  if ( a3 == 255 )
    v9 = v66;
  v66[2] = 0;
  v66[3] = 0;
  if ( a3 == 255 )
  {
    v10 = (int)&unk_138358;
    v63 = (_DWORD *)v8;
  }
  else
  {
    v10 = 1;
  }
  if ( a3 == 255 )
  {
    v11 = *(_DWORD *)v10;
    v12 = *(_DWORD *)(v10 + 4);
    v13 = *(_DWORD *)(v10 + 8);
    v10 = *(_DWORD *)(v10 + 12);
    *v9 = v11;
    v9[1] = v12;
    v9[2] = v13;
    v9 += 3;
  }
  else
  {
    v63 = (_DWORD *)v10;
  }
  LOWORD(v14) = (unsigned __int16)"channel %1x, chip_id %02x c_id %02x sample_cnt %08x";
  if ( a3 == 255 )
    *(_WORD *)v9 = v10;
  HIWORD(v14) = (unsigned int)"channel %1x, chip_id %02x c_id %02x sample_cnt %08x" >> 16;
  v56 = a4;
  v59 = 0;
  do
  {
    if ( a3 == 255 )
    {
      v15 = v59;
      v14 = v66;
    }
    else
    {
      v15 = a3;
    }
    if ( a3 == 255 )
      v15 = *((unsigned __int8 *)v14 + v15);
    v54 = v15;
    if ( v56 )
    {
      v16 = 0;
      v17 = 0;
      v18 = v4;
      v57 = v15 == 3;
      while ( 1 )
      {
        if ( v17 > 3 || !v57 )
        {
          v20 = (_WORD)v17 << 12;
          back = serdes_apb_read_back(v18, a2, v54, (unsigned __int16)((_WORD)v17 << 12) | 0x10, (int)v76);
          if ( *(_DWORD *)(v18 + 236) != back )
          {
            V_LOCK(back);
            V_INT((int)&v68, "chain");
            v22 = logfmt_raw((int)v79, 0x1000u);
            V_UNLOCK(v22);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_bist_error",
              16,
              9008,
              100,
              v79);
          }
          v23 = serdes_apb_read_back(v18, a2, v54, (unsigned __int16)((_WORD)v17 << 12) | 0x13, (int)v77);
          v24 = *(_DWORD *)(v18 + 236);
          if ( v24 == v23 )
          {
            if ( v24 > 0 )
            {
              v25 = 4;
              v26 = 8 * v24 + 4;
              do
              {
                *(_DWORD *)&v78[v25 + 64] = *(_DWORD *)&v77[v25] >> 28;
                v25 += 8;
              }
              while ( v25 != v26 );
            }
            v27 = serdes_apb_read_back(v18, a2, v54, v20 & 0xF000 | 0x14, (int)v77);
            v28 = *(_DWORD *)(v18 + 236);
            if ( v28 == v27 )
            {
              if ( v28 > 0 )
              {
                v29 = 4;
                v30 = 8 * v28 + 4;
                do
                {
                  *(_DWORD *)&v78[v29 + 64] |= 16 * *(_DWORD *)&v77[v29];
                  v29 += 8;
                }
                while ( v29 != v30 );
              }
              v31 = serdes_apb_read_back(v18, a2, v54, v20 & 0xF000 | 0x15, (int)v78);
              v32 = *(_DWORD *)(v18 + 236);
              if ( v32 == v31 )
              {
                if ( v32 > 0 )
                {
                  v61 = v16;
                  v33 = (unsigned __int8 *)v76;
                  v58 = (unsigned __int8 *)&v76[v32];
                  v34 = v18;
                  v64 = v20 | 0x16;
                  v65 = v20 | 0x17;
                  do
                  {
                    while ( 1 )
                    {
                      if ( (*((_DWORD *)v33 + 1) & 0xE000000) != 0 )
                      {
                        v35 = *v33;
                        V_LOCK(v31);
                        V_INT((int)&v72, "chain");
                        v36 = logfmt_raw((int)v79, 0x1000u);
                        V_UNLOCK(v36);
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/bu"
                          "ild/godminer-origin_master/backend/backend_eth/backend_eth.c",
                          154,
                          "check_bist_error",
                          16,
                          9042,
                          100,
                          v79);
                        memset(v75, 0, sizeof(v75));
                        v37 = serdes_apb_read_back(v34, v35, v33[1], v64, (int)v77);
                        if ( v37 > 0 )
                        {
                          v38 = &v77[8 * v37];
                          v39 = v77;
                          v40 = &v74;
                          do
                          {
                            v41 = *((_DWORD *)v39 + 1);
                            v39 += 8;
                            *((_DWORD *)v40 + 1) = v41 >> 12;
                            v40 += 4;
                          }
                          while ( v38 != v39 );
                        }
                        v31 = serdes_apb_read_back(v34, v35, v33[1], v65, (int)v77);
                        if ( v31 > 0 )
                          break;
                      }
                      v33 += 8;
                      if ( v33 == v58 )
                        goto LABEL_49;
                    }
                    v62 = v34;
                    v42 = 0;
                    v43 = v31;
                    do
                    {
                      while ( 1 )
                      {
                        v44 = (unsigned __int8)v77[8 * v42];
                        v45 = *v33;
                        v75[v42] |= *(_DWORD *)&v77[8 * v42 + 4] << 20;
                        if ( v44 == v45 )
                          break;
                        if ( v43 == ++v42 )
                          goto LABEL_48;
                      }
                      V_LOCK(v31);
                      V_INT((int)v73, "chain");
                      ++v42;
                      v46 = logfmt_raw((int)v79, 0x1000u);
                      V_UNLOCK(v46);
                      v31 = zlog(
                              g_zc,
                              "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/releas"
                              "e/build/godminer-origin_master/backend/backend_eth/backend_eth.c",
                              154,
                              "check_bist_error",
                              16,
                              9057,
                              60,
                              v79);
                    }
                    while ( v43 != v42 );
LABEL_48:
                    v33 += 8;
                    v34 = v62;
                  }
                  while ( v33 != v58 );
LABEL_49:
                  v18 = v34;
                  v16 = v61;
                }
                goto LABEL_50;
              }
              V_LOCK(v31);
              V_INT((int)v71, "chain");
              v53 = logfmt_raw((int)v79, 0x1000u);
              V_UNLOCK(v53);
              v50 = 9033;
              v51 = g_zc;
            }
            else
            {
              V_LOCK(v27);
              V_INT((int)&v70, "chain");
              v52 = logfmt_raw((int)v79, 0x1000u);
              V_UNLOCK(v52);
              v50 = 9024;
              v51 = g_zc;
            }
          }
          else
          {
            V_LOCK(v24);
            V_INT((int)v69, "chain");
            v49 = logfmt_raw((int)v79, 0x1000u);
            V_UNLOCK(v49);
            v50 = 9015;
            v51 = g_zc;
          }
          zlog(
            v51,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_bist_error",
            16,
            v50,
            100,
            v79);
        }
LABEL_50:
        v17 = (unsigned __int16)++v16;
        if ( v56 <= (unsigned __int16)v16 )
        {
          v4 = v18;
          break;
        }
      }
    }
    v14 = v63;
  }
  while ( v63 != (_DWORD *)++v59 );
  return 0;
}
