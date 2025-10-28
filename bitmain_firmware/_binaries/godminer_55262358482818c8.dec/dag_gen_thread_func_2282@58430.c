void __noreturn dag_gen_thread_func_2282()
{
  int v0; // r4
  int v1; // r5
  int v2; // r6
  int v3; // r7
  int v4; // r8
  int epoch_number_eth_2282; // r4
  int v6; // r3
  void **v7; // r5
  signed int i; // r4
  void (**v9)(void); // t1
  int v10; // r7
  int v11; // r3
  int v12; // r3
  size_t *p_nmemb; // r5
  int v14; // r4
  size_t v15; // t1
  int v16; // r7
  pthread_t *v17; // r0
  pthread_t *v18; // r7
  void **v19; // r6
  pthread_t *v20; // r5
  signed int v21; // r4
  _DWORD *v22; // t1
  pthread_t *v23; // r0
  char *v24; // r5
  signed int j; // r4
  pthread_t v26; // t1
  int v27; // r3
  pthread_t *v28; // r0
  pthread_t *v29; // r7
  void **v30; // r6
  pthread_t *v31; // r5
  signed int v32; // r4
  _DWORD *v33; // t1
  pthread_t *v34; // r0
  char *v35; // r5
  signed int k; // r4
  pthread_t v37; // t1
  int v38; // [sp+4h] [bp-9Ch]
  int v39; // [sp+1Ch] [bp-84h]
  __int64 v40; // [sp+20h] [bp-80h]
  int v41; // [sp+34h] [bp-6Ch]
  void **v42; // [sp+38h] [bp-68h]
  int v43; // [sp+3Ch] [bp-64h]
  int v44; // [sp+40h] [bp-60h]
  int v45; // [sp+44h] [bp-5Ch]
  size_t nmemb; // [sp+4Ch] [bp-54h] BYREF
  _DWORD s[8]; // [sp+50h] [bp-50h] BYREF
  __int64 v48; // [sp+70h] [bp-30h] BYREF
  int v49; // [sp+78h] [bp-28h]
  int v50; // [sp+7Ch] [bp-24h]
  _DWORD v51[8]; // [sp+80h] [bp-20h]
  char v52[4100]; // [sp+A0h] [bp+0h] BYREF

  LOWORD(v0) = 22472;
  LOWORD(v1) = -26680;
  LOWORD(v2) = 21668;
  LOWORD(v3) = 22416;
  LOWORD(v4) = -10296;
  nmemb = 0;
  HIWORD(v2) = (unsigned int)"cur_epoch-epoch [%d-%d]" >> 16;
  HIWORD(v3) = (unsigned int)"82/eth_2282_content.c" >> 16;
  HIWORD(v4) = (unsigned int)&unk_15D7B0 >> 16;
  HIWORD(v0) = (unsigned int)"t_dag_gen_engine_2282" >> 16;
  v45 = v0;
  v42 = (void **)((char *)get_all_created_runtime(&nmemb) - 4);
  HIWORD(v1) = (unsigned int)&unk_1597B0 >> 16;
  v44 = v1;
  v43 = v2;
  v39 = v3;
  while ( 1 )
  {
    while ( 1 )
    {
      memset(s, 0, sizeof(s));
      get_cur_seed_2282(s);
      epoch_number_eth_2282 = get_epoch_number_eth_2282(s);
      if ( dword_192708 == epoch_number_eth_2282 )
        break;
      V_LOCK();
      logfmt_raw(v52, 0x1000u, 0, "cur_epoch-epoch [%d-%d]", dword_192708, epoch_number_eth_2282);
      V_UNLOCK();
      zlog(g_zc, v4, 177, v39, 24, 202, 40, v52);
      if ( !epoch_number_eth_2282 )
        goto LABEL_8;
      if ( dword_192708 != epoch_number_eth_2282 )
      {
        if ( dword_192708 <= epoch_number_eth_2282 )
        {
          dword_192708 = epoch_number_eth_2282;
          V_LOCK();
          LOWORD(v6) = 21812;
          HIWORD(v6) = (unsigned int)"ning support, sorry..." >> 16;
          logfmt_raw(v52, 0x1000u, 0, v6);
          V_UNLOCK();
          zlog(g_zc, v4, 177, v39, 24, 220, 60, v52);
          if ( (int)nmemb > 0 )
          {
            v7 = v42;
            for ( i = 0; i < (int)nmemb; ++i )
            {
              v9 = (void (**)(void))v7[1];
              ++v7;
              v9[5]();
            }
          }
          v10 = *(_DWORD *)(v44 + 8 * dword_192708);
          v41 = *(_DWORD *)(v44 + 8 * dword_192708 + 4);
          if ( (v10 & 0x1F) != 0 )
            v10 |= 0x20u;
          v40 = *(_QWORD *)(v45 + 8 * dword_192708);
          V_LOCK();
          LOWORD(v11) = 21860;
          HIWORD(v11) = (unsigned int)"gen mode all backend!" >> 16;
          logfmt_raw(v52, 0x1000u, 0, v11);
          V_UNLOCK();
          zlog(g_zc, v4, 177, v39, 24, 234, 60, v52);
          V_LOCK();
          LOWORD(v12) = -10116;
          HIWORD(v12) = (unsigned int)"h_2282_dhash_common.c" >> 16;
          p_nmemb = &nmemb;
          v14 = 0;
          logfmt_raw(v52, 0x1000u, 0, v12, dword_192708, v38, v40, v10, v41);
          V_UNLOCK();
          zlog(g_zc, v4, 177, v39, 24, 235, 60, v52);
          v48 = v40;
          v49 = v10;
          v50 = v41;
          do
          {
            v15 = p_nmemb[1];
            ++p_nmemb;
            v16 = v14 >> 2;
            v14 += 4;
            V_LOCK();
            logfmt_raw(v52, 0x1000u, 0, "seed[%d] 0x%08x", v16, v15);
            V_UNLOCK();
            zlog(g_zc, v4, 177, v39, 24, 244, 40, v52);
            v51[v16] = v15;
          }
          while ( v14 != 32 );
          v17 = (pthread_t *)calloc(nmemb, 4u);
          v18 = v17;
          if ( (int)nmemb > 0 )
          {
            v19 = v42;
            v20 = v17;
            v21 = 0;
            do
            {
              v22 = v19[1];
              ++v19;
              v23 = v20;
              ++v21;
              ++v20;
              v22[251] = &v48;
              pthread_create(v23, 0, *((void *(**)(void *))*v19 + 58), *v19);
            }
            while ( (int)nmemb > v21 );
            if ( (int)nmemb > 0 )
            {
              v24 = (char *)(v18 - 1);
              for ( j = 0; j < (int)nmemb; ++j )
              {
                v26 = *((_DWORD *)v24 + 1);
                v24 += 4;
                pthread_join(v26, 0);
              }
            }
          }
          free(v18);
          V_LOCK();
          LOWORD(v27) = 22120;
          HIWORD(v27) = (unsigned int)"cache and dag acc done!" >> 16;
          logfmt_raw(v52, 0x1000u, 0, v27);
          V_UNLOCK();
          zlog(g_zc, v4, 177, v39, 24, 260, 60, v52);
          v28 = (pthread_t *)calloc(nmemb, 4u);
          v29 = v28;
          if ( (int)nmemb > 0 )
          {
            v30 = v42;
            v31 = v28;
            v32 = 0;
            do
            {
              v33 = v30[1];
              ++v30;
              v34 = v31;
              ++v32;
              ++v31;
              v33[251] = &v48;
              pthread_create(v34, 0, *((void *(**)(void *))*v30 + 6), *v30);
            }
            while ( (int)nmemb > v32 );
            if ( (int)nmemb > 0 )
            {
              v35 = (char *)(v29 - 1);
              for ( k = 0; k < (int)nmemb; ++k )
              {
                v37 = *((_DWORD *)v35 + 1);
                v35 += 4;
                pthread_join(v37, 0);
              }
            }
          }
          free(v29);
        }
        else
        {
          V_LOCK();
          logfmt_raw(
            v52,
            0x1000u,
            0,
            "cur_epoch-epoch [%d-%d], only etc mining support, sorry...",
            dword_192708,
            epoch_number_eth_2282);
          V_UNLOCK();
          zlog(g_zc, v4, 177, v39, 24, 215, 40, v52);
        }
      }
    }
    if ( !dword_192708 )
    {
LABEL_8:
      V_LOCK();
      logfmt_raw(v52, 0x1000u, 0, v43, dword_192708, 0);
      V_UNLOCK();
      zlog(g_zc, v4, 177, v39, 24, 205, 40, v52);
    }
  }
}
