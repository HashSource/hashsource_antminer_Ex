int __fastcall stratum_check(int *a1)
{
  int v2; // r0
  int v3; // r7
  const char *v4; // r0
  void *v5; // r3
  int v6; // r3
  int v7; // r1
  int v8; // r3
  int v9; // r0
  int v10; // r3
  int v11; // r1
  int v12; // r3
  int v13; // r1
  int v14; // r3
  int v15; // r8
  int v16; // r0
  int v17; // r12
  int v18; // r2
  int v19; // r1
  int v21; // r3
  __time_t v22; // r8
  char *v23; // r3
  int v24; // r2
  int v25; // r11
  int v26; // r0
  void *v27; // r11
  int v28; // r3
  int v29; // r1
  void (__fastcall *v30)(int *); // r1
  int v31; // r2
  int v32; // r11
  int v33; // r1
  int v34; // r3
  int v35; // r1
  int v36; // r3
  int v37; // r1
  _DWORD v38[10]; // [sp+0h] [bp-1084h] BYREF
  _DWORD *v39; // [sp+28h] [bp-105Ch]
  _BYTE *v40; // [sp+2Ch] [bp-1058h]
  char *s; // [sp+30h] [bp-1054h]
  int v42; // [sp+34h] [bp-1050h]
  char v43[4]; // [sp+3Ch] [bp-1048h] BYREF
  _DWORD v44[7]; // [sp+40h] [bp-1044h] BYREF
  int v45; // [sp+5Ch] [bp-1028h]
  _DWORD v46[7]; // [sp+60h] [bp-1024h] BYREF
  int v47; // [sp+7Ch] [bp-1008h]
  char v48[4100]; // [sp+80h] [bp-1004h] BYREF

  v2 = frontend_runtime_instance();
  if ( !a1 || (v3 = v2, (v4 = (const char *)a1[3]) == 0) || !a1[4] )
  {
    V_LOCK();
    LOWORD(v12) = -32180;
    HIWORD(v12) = (unsigned int)"ed" >> 16;
    logfmt_raw(v48, 0x1000u, 0, v12, *a1);
    V_UNLOCK();
    LOWORD(v13) = 32512;
    HIWORD(v13) = (unsigned int)"stratum_check" >> 16;
    zlog(g_zc, v13, 148, "stratum_check", 13, 359, 100, v48);
    goto LABEL_10;
  }
  v5 = (void *)a1[8];
  v39 = *(_DWORD **)(*(_DWORD *)(v3 + 72) + 20);
  if ( v5 )
  {
    free(v5);
    v4 = (const char *)a1[3];
  }
  a1[8] = (int)_strdup(v4);
  V_LOCK();
  LOWORD(v6) = -32132;
  HIWORD(v6) = (unsigned int)"d, empty url or user" >> 16;
  logfmt_raw(v48, 0x1000u, 0, v6, *a1, a1[3]);
  V_UNLOCK();
  LOWORD(v7) = 32512;
  HIWORD(v7) = (unsigned int)"stratum_check" >> 16;
  zlog(g_zc, v7, 148, "stratum_check", 13, 367, 40, v48);
  v40 = a1 + 2;
  pool_tset((int)a1, (_BYTE *)a1 + 1904, 0);
  pool_tclear((int)a1, (_BYTE *)a1 + 1916, 0);
  pool_tclear((int)a1, (_BYTE *)a1 + 8, 0);
  if ( !(*(int (__fastcall **)(int *))v3)(a1) )
  {
    (*(void (__fastcall **)(int *))(v3 + 4))(a1);
    V_LOCK();
    LOWORD(v8) = -32096;
    HIWORD(v8) = (unsigned int)"k pool %d, pool url: %s" >> 16;
    logfmt_raw(v48, 0x1000u, 0, v8);
    V_UNLOCK();
    v9 = g_zc;
    v10 = 376;
LABEL_8:
    LOWORD(v11) = 32512;
    HIWORD(v11) = (unsigned int)"stratum_check" >> 16;
    zlog(v9, v11, 148, "stratum_check", 13, v10, 100, v48);
LABEL_10:
    V_LOCK();
    LOWORD(v14) = -31896;
    HIWORD(v14) = (unsigned int)" %d is valid, url: \"%s\"" >> 16;
    v15 = 0;
    logfmt_raw(v48, 0x1000u, 0, v14, *a1);
    V_UNLOCK();
    v16 = g_zc;
    v17 = 100;
    v18 = 441;
    goto LABEL_11;
  }
  if ( !(*(int (__fastcall **)(int, int *))(v3 + 16))(v3, a1) )
  {
    (*(void (__fastcall **)(int *))(v3 + 4))(a1);
    V_LOCK();
    LOWORD(v21) = -32056;
    HIWORD(v21) = (unsigned int)"cp connection failed" >> 16;
    logfmt_raw(v48, 0x1000u, 0, v21);
    V_UNLOCK();
    v9 = g_zc;
    v10 = 383;
    goto LABEL_8;
  }
  v22 = (__time_t)v39;
  LOWORD(v23) = 30344;
  LOWORD(v24) = -32260;
  HIWORD(v23) = (unsigned int)&off_147670 >> 16;
  HIWORD(v24) = (unsigned int)"url %s, current_pool %d" >> 16;
  s = v23;
  v42 = v24;
  while ( 1 )
  {
    wait_pool_to_be_current_timeout((int)a1);
    v25 = stratum_socket_full((int)a1, v22);
    if ( v25 )
      break;
    V_LOCK();
    V_INT((int)v44, s, *a1);
    v39 = v38;
    logfmt_raw(v48, 0x1000u, 0, v45, v44[0], v44[1], v44[2], v44[3], v44[4], v44[5], v44[6], v45, v42, v38[9]);
    V_UNLOCK();
    LOWORD(v29) = 32512;
    HIWORD(v29) = (unsigned int)"stratum_check" >> 16;
    zlog(g_zc, v29, 148, "stratum_check", 13, 393, 100, v48);
LABEL_22:
    v30 = *(void (__fastcall **)(int *))(v3 + 4);
    v31 = total_go;
    ++a1[487];
    total_go = v31 + 1;
    v30(a1);
    pool_tclear((int)a1, (_BYTE *)a1 + 1916, 0);
    pool_died(a1);
    V_LOCK();
    V_INT((int)v46, s, *a1);
    LOWORD(v32) = -32232;
    HIWORD(v32) = (unsigned int)"tum connection timeout" >> 16;
    logfmt_raw(v48, 0x1000u, 0, v47, v46[0], v46[1], v46[2], v46[3], v46[4], v46[5], v46[6], v47, v32);
    V_UNLOCK();
    LOWORD(v33) = 32512;
    HIWORD(v33) = (unsigned int)"stratum_check" >> 16;
    zlog(g_zc, v33, 148, "stratum_check", 13, 408, 20, v48);
    sleep(0x1Eu);
  }
  v26 = (*(int (__fastcall **)(int *))(v3 + 8))(a1);
  if ( !v26 )
    goto LABEL_22;
  v15 = v25;
  v27 = (void *)v26;
  if ( (*(int (__fastcall **)(int, int *, int, char *))(v3 + 24))(v3, a1, v26, v43)
    || (*(int (__fastcall **)(int, void *, int *))(v3 + 28))(v3, v27, a1) )
  {
    free(v27);
    pool_tset((int)a1, v40, 0);
    pool_tclear((int)a1, (_BYTE *)a1 + 1904, 0);
    pools_active = 1;
    update_miner_working_status();
    (*(void (__fastcall **)(int *))(v3 + 4))(a1);
    V_LOCK();
    LOWORD(v28) = -31924;
    HIWORD(v28) = (unsigned int)"p error string = N%d:2." >> 16;
    logfmt_raw(v48, 0x1000u, 0, v28, *a1, a1[3]);
    V_UNLOCK();
    v16 = g_zc;
    v17 = 40;
    v18 = 437;
LABEL_11:
    LOWORD(v19) = 32512;
    HIWORD(v19) = (unsigned int)"stratum_check" >> 16;
    zlog(v16, v19, 148, "stratum_check", 13, v18, v17, v48);
  }
  else
  {
    free(v27);
    (*(void (__fastcall **)(int *))(v3 + 4))(a1);
    V_LOCK();
    LOWORD(v34) = -32032;
    HIWORD(v34) = (unsigned int)"stratum login failed" >> 16;
    logfmt_raw(v48, 0x1000u, 0, v34, *a1);
    v15 = 0;
    V_UNLOCK();
    LOWORD(v35) = 32512;
    HIWORD(v35) = (unsigned int)"stratum_check" >> 16;
    zlog(g_zc, v35, 148, "stratum_check", 13, 426, 100, v48);
    V_LOCK();
    LOWORD(v36) = -31952;
    HIWORD(v36) = (unsigned int)"not match the machine" >> 16;
    logfmt_raw(v48, 0x1000u, 0, v36, *a1);
    V_UNLOCK();
    LOWORD(v37) = 32512;
    HIWORD(v37) = (unsigned int)"stratum_check" >> 16;
    zlog(g_zc, v37, 148, "stratum_check", 13, 427, 100, v48);
  }
  return v15;
}
