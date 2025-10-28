char *__fastcall http_test_bm(int a1, char *a2, size_t a3)
{
  const char *v4; // r5
  const char *v5; // r1
  char *v7; // r4
  const char *v8; // r1
  const char *v9; // r1
  int v10; // r3
  int v11; // r1
  const char *v12; // r1
  const char *v14; // r1
  const char *v15; // r1
  int v16; // r3
  int v17; // r3
  int v18; // r1
  int theory_hashrate; // r0
  int v20; // r3
  int v21; // r3
  int v22; // r1
  int miner_sale_hashrate; // r0
  int v24; // r3
  int v25; // r3
  int v26; // r1
  int v27; // r0
  const char *v28; // r1
  const char *v29; // r1
  size_t v30; // r0
  int v31; // r3
  int v32; // r3
  int v33; // r1
  int v34; // r3
  int v35; // r3
  int v36; // r1
  const char *v37; // r1
  const char *v38; // r1
  int v39; // r3
  int v40; // r3
  int v41; // r1
  char *v42; // r12
  int *v43; // lr
  int *v44; // r6
  int v45; // r0
  int v46; // r1
  int v47; // r2
  int v48; // r3
  __int16 v49; // r2
  char v50; // r3
  int v51; // r3
  int v52; // r3
  int v53; // r1
  int v54; // r1
  FILE *v55; // r0
  FILE *v56; // r6
  const char *v57; // r2
  int v58; // [sp+14h] [bp-1020h] BYREF
  int v59; // [sp+18h] [bp-101Ch] BYREF
  _DWORD v60[4]; // [sp+1Ch] [bp-1018h] BYREF
  __int16 v61; // [sp+2Ch] [bp-1008h]
  char v62[4100]; // [sp+30h] [bp-1004h] BYREF

  v4 = (const char *)(a1 + 4);
  LOWORD(v5) = 29708;
  HIWORD(v5) = (unsigned int)"R:1" >> 16;
  v58 = -1;
  v59 = -1;
  v7 = strstr((const char *)(a1 + 4), v5);
  if ( v7 )
  {
    V_LOCK();
    LOWORD(v20) = 29716;
    HIWORD(v20) = (unsigned int)"F%d:1" >> 16;
    v7 = 0;
    logfmt_raw(v62, 0x1000u, 0, v20);
    V_UNLOCK();
    LOWORD(v21) = 29516;
    LOWORD(v22) = 29732;
    HIWORD(v22) = (unsigned int)"/rate" >> 16;
    HIWORD(v21) = (unsigned int)"" >> 16;
    zlog(g_zc, v22, 142, v21, 12, 484, 20, v62);
    freq_scan_status = 1;
    miner_sale_hashrate = get_miner_sale_hashrate();
    sub_2F628(a2, a3, miner_sale_hashrate);
    return v7;
  }
  LOWORD(v8) = 29876;
  HIWORD(v8) = (unsigned int)"dminer-new/http_test.c" >> 16;
  if ( strstr(v4, v8) )
  {
    LOWORD(v9) = 29884;
    HIWORD(v9) = (unsigned int)"ew/http_test.c" >> 16;
    _isoc99_sscanf(v4, v9, &v58, &v59);
    V_LOCK();
    logfmt_raw(v62, 0x1000u, 0, "cmd : get test = %d", v58);
    V_UNLOCK();
    LOWORD(v10) = 29516;
    LOWORD(v11) = 29732;
    HIWORD(v10) = (unsigned int)"" >> 16;
    HIWORD(v11) = (unsigned int)"/rate" >> 16;
    zlog(g_zc, v11, 142, v10, 12, 491, 20, v62);
    if ( v58 != 523 )
    {
      LOWORD(v12) = 29916;
      HIWORD(v12) = (unsigned int)".%d" >> 16;
      sprintf(a2, v12);
      return 0;
    }
    get_miner_info(a2);
    return v7;
  }
  LOWORD(v14) = 29932;
  HIWORD(v14) = (unsigned int)"st = %d" >> 16;
  v7 = strstr(v4, v14);
  if ( !v7 )
  {
    LOWORD(v15) = 29968;
    HIWORD(v15) = (unsigned int)"cmd : get ideal rate" >> 16;
    if ( strstr(v4, v15) )
    {
      V_LOCK();
      LOWORD(v16) = 29980;
      HIWORD(v16) = (unsigned int)"eal rate" >> 16;
      logfmt_raw(v62, 0x1000u, 0, v16);
      V_UNLOCK();
      LOWORD(v17) = 29516;
      LOWORD(v18) = 29732;
      HIWORD(v17) = (unsigned int)"" >> 16;
      HIWORD(v18) = (unsigned int)"/rate" >> 16;
      zlog(g_zc, v18, 142, v17, 12, 511, 20, v62);
      theory_hashrate = get_theory_hashrate();
      sub_2F628(a2, a3, 102 * theory_hashrate / 100);
    }
    else
    {
      LOWORD(v28) = 30000;
      HIWORD(v28) = (unsigned int)"e" >> 16;
      if ( strstr(v4, v28) )
      {
        V_LOCK();
        LOWORD(v34) = 30016;
        HIWORD(v34) = (unsigned int)"x rate" >> 16;
        v7 = 0;
        logfmt_raw(v62, 0x1000u, 0, v34);
        V_UNLOCK();
        LOWORD(v35) = 29516;
        LOWORD(v36) = 29732;
        HIWORD(v35) = (unsigned int)"" >> 16;
        HIWORD(v36) = (unsigned int)"/rate" >> 16;
        zlog(g_zc, v36, 142, v35, 12, 517, 20, v62);
      }
      else
      {
        LOWORD(v29) = 30040;
        HIWORD(v29) = (unsigned int)"cmd : get miner status" >> 16;
        if ( strstr(v4, v29) )
        {
          v7 = 0;
          V_LOCK();
          v30 = strlen(g_miner_type);
          LOWORD(v31) = 30056;
          HIWORD(v31) = (unsigned int)"status" >> 16;
          logfmt_raw(v62, 0x1000u, 0, v31, v30, g_miner_type);
          V_UNLOCK();
          LOWORD(v32) = 29516;
          LOWORD(v33) = 29732;
          HIWORD(v32) = (unsigned int)"" >> 16;
          HIWORD(v33) = (unsigned int)"/rate" >> 16;
          zlog(g_zc, v33, 142, v32, 12, 522, 20, v62);
          strcpy(a2, g_miner_type);
        }
        else
        {
          LOWORD(v37) = 30084;
          HIWORD(v37) = (unsigned int)": get miner type[%d] %s" >> 16;
          v7 = (char *)strncmp(v4, v37, 7u);
          if ( v7 )
          {
            LOWORD(v38) = 30140;
            HIWORD(v38) = (unsigned int)"iner sn stored on board" >> 16;
            v7 = (char *)strncmp(v4, v38, 7u);
            if ( v7 )
            {
              return (char *)-1;
            }
            else
            {
              V_LOCK();
              LOWORD(v39) = 30148;
              HIWORD(v39) = (unsigned int)"stored on board" >> 16;
              logfmt_raw(v62, 0x1000u, 0, v39);
              V_UNLOCK();
              LOWORD(v40) = 29516;
              LOWORD(v41) = 29732;
              HIWORD(v40) = (unsigned int)"" >> 16;
              HIWORD(v41) = (unsigned int)"/rate" >> 16;
              zlog(g_zc, v41, 142, v40, 12, 604, 80, v62);
              LOWORD(v43) = 30184;
              v42 = a2;
              HIWORD(v43) = (unsigned int)"ner sn, doesn't spport" >> 16;
              v44 = v43 + 8;
              do
              {
                v42 += 16;
                v45 = *v43;
                v46 = v43[1];
                v47 = v43[2];
                v48 = v43[3];
                v43 += 4;
                *((_DWORD *)v42 - 4) = v45;
                *((_DWORD *)v42 - 3) = v46;
                *((_DWORD *)v42 - 2) = v47;
                *((_DWORD *)v42 - 1) = v48;
              }
              while ( v43 != v44 );
              v49 = *((_WORD *)v43 + 2);
              v50 = *((_BYTE *)v43 + 6);
              *(_DWORD *)v42 = *v43;
              *((_WORD *)v42 + 2) = v49;
              v42[6] = v50;
            }
          }
          else
          {
            memset(v60, 0, sizeof(v60));
            v61 = 0;
            V_LOCK();
            LOWORD(v51) = 30092;
            HIWORD(v51) = (unsigned int)"ner type[%d] %s" >> 16;
            logfmt_raw(v62, 0x1000u, 0, v51);
            V_UNLOCK();
            LOWORD(v52) = 29516;
            LOWORD(v53) = 29732;
            HIWORD(v52) = (unsigned int)"" >> 16;
            HIWORD(v53) = (unsigned int)"/rate" >> 16;
            zlog(g_zc, v53, 142, v52, 12, 530, 20, v62);
            LOWORD(v54) = -13776;
            HIWORD(v54) = (unsigned int)"ide tx_master_pll_state_r" >> 16;
            v55 = (FILE *)fopen64(g_miner_sn_file_path, v54);
            v56 = v55;
            if ( v55 && (fread(v60, 0x11u, 1u, v55), fclose(v56), LOBYTE(v60[0])) )
            {
              LOWORD(v57) = -30580;
              HIWORD(v57) = (unsigned int)"e failed" >> 16;
              snprintf(a2, 0x12u, v57, v60);
            }
            else
            {
              strcpy(a2, "no miner sn stored on board");
            }
          }
        }
      }
    }
    return v7;
  }
  V_LOCK();
  LOWORD(v24) = 29944;
  HIWORD(v24) = (unsigned int)"et test=%d" >> 16;
  logfmt_raw(v62, 0x1000u, 0, v24);
  V_UNLOCK();
  LOWORD(v25) = 29516;
  LOWORD(v26) = 29732;
  HIWORD(v25) = (unsigned int)"" >> 16;
  HIWORD(v26) = (unsigned int)"/rate" >> 16;
  zlog(g_zc, v26, 142, v25, 12, 505, 20, v62);
  v27 = get_theory_hashrate();
  sub_2F628(a2, a3, v27);
  return 0;
}
