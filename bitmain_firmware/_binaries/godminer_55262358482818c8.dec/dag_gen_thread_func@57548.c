void __noreturn dag_gen_thread_func()
{
  int v0; // r3
  int v1; // r3
  int v2; // r1
  int v3; // r8
  int v4; // r11
  char *all_created_runtime; // r0
  int v6; // r7
  int v7; // r3
  int v8; // r2
  int epoch_number_rvn_0; // r0
  int v10; // r5
  int v11; // r3
  char *v12; // r8
  int i; // r5
  int v14; // t1
  int v15; // r5
  unsigned int v16; // r2
  unsigned int v17; // r1
  bool v18; // zf
  __int64 v19; // r8
  int v20; // r3
  int v21; // r3
  int v22; // t1
  int *v23; // r10
  int v24; // r3
  int v25; // r5
  int v26; // t1
  int v27; // r5
  __int64 dag_nodes; // r0
  int v29; // r3
  int v30; // r3
  int v31; // r3
  int v32; // r3
  size_t v33; // r0
  int v34; // r8
  int j; // r5
  int v36; // r9
  pthread_t *v37; // r8
  int k; // r5
  const pthread_attr_t *v39; // r1
  int v40; // [sp+0h] [bp-10A4h]
  int v41; // [sp+4h] [bp-10A0h]
  int v42; // [sp+4h] [bp-10A0h]
  int v43; // [sp+18h] [bp-108Ch]
  __int64 cache_nodes; // [sp+18h] [bp-108Ch]
  __int64 v45; // [sp+20h] [bp-1084h]
  char *v46; // [sp+34h] [bp-1070h]
  int v47; // [sp+38h] [bp-106Ch]
  int v48; // [sp+3Ch] [bp-1068h]
  int v49; // [sp+40h] [bp-1064h]
  char *v50; // [sp+44h] [bp-1060h]
  char v51; // [sp+4Ch] [bp-1058h]
  char v52; // [sp+4Dh] [bp-1057h]
  int v53; // [sp+50h] [bp-1054h] BYREF
  int v54; // [sp+54h] [bp-1050h] BYREF
  __int64 v55; // [sp+58h] [bp-104Ch] BYREF
  int s[8]; // [sp+60h] [bp-1044h] BYREF
  int v57[8]; // [sp+80h] [bp-1024h] BYREF
  char v58[4100]; // [sp+A0h] [bp-1004h] BYREF

  v51 = 0;
  v52 = 0;
  LOWORD(v4) = -11368;
  V_LOCK();
  LOWORD(v0) = 21448;
  HIWORD(v0) = (unsigned int)&unk_1553B0 >> 16;
  LOWORD(v6) = 21476;
  logfmt_raw(v58, 0x1000u, 0, v0);
  V_UNLOCK();
  LOWORD(v1) = -11368;
  LOWORD(v2) = 21476;
  HIWORD(v1) = (unsigned int)"h_2280_content.c" >> 16;
  HIWORD(v2) = (unsigned int)"end setup high baud!" >> 16;
  LOWORD(v3) = -11320;
  zlog(g_zc, v2, 167, v1, 19, 161, 60, v58);
  v53 = 5;
  high_speed_uart_set_config(255, 0, &v53);
  v54 = 0;
  HIWORD(v4) = (unsigned int)"h_2280_content.c" >> 16;
  all_created_runtime = (char *)get_all_created_runtime(&v54);
  HIWORD(v6) = (unsigned int)"end setup high baud!" >> 16;
  LOWORD(v7) = 5064;
  LOWORD(v8) = 21668;
  HIWORD(v3) = (unsigned int)"t_dag_gen_engine" >> 16;
  HIWORD(v7) = (unsigned int)&unk_1513B0 >> 16;
  HIWORD(v8) = (unsigned int)"cur_epoch-epoch [%d-%d]" >> 16;
  v46 = all_created_runtime;
  v50 = all_created_runtime - 4;
  v49 = v3;
  v48 = v7;
  v47 = v8;
  while ( 1 )
  {
    while ( 1 )
    {
      memset(s, 0, sizeof(s));
      get_cur_seed(s);
      epoch_number_rvn_0 = get_epoch_number_rvn_0(s);
      v10 = epoch_number_rvn_0;
      if ( epoch_number_rvn_0 == dword_192700 )
        break;
      V_LOCK();
      logfmt_raw(v58, 0x1000u, 0, "cur_epoch-epoch [%d-%d]", dword_192700, v10);
      V_UNLOCK();
      zlog(g_zc, v6, 167, v4, 19, 211, 40, v58);
      if ( !v10 )
        goto LABEL_9;
      if ( v10 != dword_192700 )
      {
        if ( v10 < dword_192700 )
        {
          V_LOCK();
          logfmt_raw(v58, 0x1000u, 0, "cur_epoch-epoch [%d-%d], only etc mining support, sorry...", dword_192700, v10);
          V_UNLOCK();
          zlog(g_zc, v6, 167, v4, 19, 224, 40, v58);
        }
        else
        {
          dword_192700 = v10;
          V_LOCK();
          LOWORD(v11) = 21812;
          HIWORD(v11) = (unsigned int)"ning support, sorry..." >> 16;
          logfmt_raw(v58, 0x1000u, 0, v11);
          V_UNLOCK();
          zlog(g_zc, v6, 167, v4, 19, 229, 60, v58);
          if ( v54 > 0 )
          {
            v12 = v50;
            for ( i = 0; i < v54; ++i )
            {
              v14 = *((_DWORD *)v12 + 1);
              v12 += 4;
              (*(void (**)(void))(v14 + 20))();
            }
          }
          v15 = 0;
          v16 = *(_DWORD *)(v48 + 8 * dword_192700);
          v17 = *(_DWORD *)(v48 + 8 * dword_192700 + 4);
          v18 = (v16 & 0x1F) == 0;
          if ( (v16 & 0x1F) != 0 )
          {
            v16 |= 0x20u;
          }
          else
          {
            LODWORD(v55) = *(_DWORD *)(v48 + 8 * dword_192700);
            HIDWORD(v55) = v17;
          }
          v19 = *(_QWORD *)(v49 + 8 * dword_192700);
          if ( !v18 )
            v55 = __PAIR64__(v17, v16);
          v45 = v19;
          WORD2(v19) = 21980;
          V_LOCK();
          LOWORD(v20) = 21860;
          HIWORD(v20) = (unsigned int)"gen mode all backend!" >> 16;
          logfmt_raw(v58, 0x1000u, 0, v20);
          V_UNLOCK();
          LODWORD(v19) = (char *)&v55 + 4;
          zlog(g_zc, v6, 167, v4, 19, 247, 60, v58);
          V_LOCK();
          LOWORD(v21) = 21928;
          HIWORD(v21) = (unsigned int)"d download dag items" >> 16;
          logfmt_raw(v58, 0x1000u, 0, v21, dword_192700, v41, v45, v55);
          V_UNLOCK();
          zlog(g_zc, v6, 167, v4, 19, 248, 60, v58);
          do
          {
            v22 = *(_DWORD *)(v19 + 4);
            LODWORD(v19) = v19 + 4;
            V_LOCK();
            HIWORD(v19) = (unsigned int)"llx, dag size 0x%llx" >> 16;
            v40 = v15 >> 2;
            v15 += 4;
            logfmt_raw(v58, 0x1000u, 0, HIDWORD(v19), v40, v22);
            V_UNLOCK();
            zlog(g_zc, v6, 167, v4, 19, 253, 40, v58);
          }
          while ( v15 != 32 );
          v23 = &s[7];
          write_seed_val(s);
          LOWORD(v24) = 21996;
          HIWORD(v24) = (unsigned int)"%llx" >> 16;
          v25 = 0;
          v43 = v24;
          sleep(2u);
          read_seed_val(v57);
          do
          {
            v26 = v23[1];
            ++v23;
            V_LOCK();
            logfmt_raw(v58, 0x1000u, 0, v43, v25 >> 2, v26);
            V_UNLOCK();
            v25 += 4;
            zlog(g_zc, v6, 167, v4, 19, 261, 40, v58);
          }
          while ( v25 != 32 );
          set_cache_nodes(v45);
          set_dag_nodes(v55);
          V_LOCK();
          v27 = dword_192700;
          cache_nodes = get_cache_nodes();
          dag_nodes = get_dag_nodes();
          LOWORD(v29) = 22016;
          HIWORD(v29) = (unsigned int)"08x" >> 16;
          logfmt_raw(v58, 0x1000u, 0, v29, v27, v42, cache_nodes, dag_nodes);
          V_UNLOCK();
          zlog(g_zc, v6, 167, v4, 19, 266, 60, v58);
          set_cache_store_addr(402653184);
          cache_acc_start();
          dag_acc_en();
          V_LOCK();
          LOWORD(v30) = 22068;
          HIWORD(v30) = (unsigned int)"llx, dag size 0x%llx" >> 16;
          logfmt_raw(v58, 0x1000u, 0, v30);
          V_UNLOCK();
          zlog(g_zc, v6, 167, v4, 19, 270, 40, v58);
          while ( !is_cache_acc_done() || !is_dag_acc_done() )
            sleep(1u);
          V_LOCK();
          LOWORD(v31) = 22096;
          HIWORD(v31) = (unsigned int)"e and dag acc start..." >> 16;
          logfmt_raw(v58, 0x1000u, 0, v31);
          V_UNLOCK();
          zlog(g_zc, v6, 167, v4, 19, 276, 40, v58);
          sleep(3u);
          fpga_reset();
          V_LOCK();
          LOWORD(v32) = 22120;
          HIWORD(v32) = (unsigned int)"cache and dag acc done!" >> 16;
          logfmt_raw(v58, 0x1000u, 0, v32);
          V_UNLOCK();
          zlog(g_zc, v6, 167, v4, 19, 290, 60, v58);
          v33 = v54;
          if ( v54 > 0 )
          {
            LOWORD(v34) = 22148;
            for ( j = 0; j < v54; ++j )
            {
              v36 = (unsigned __int8)*(&v51 + j);
              if ( !*(&v51 + j) && get_chip_dag_packet_num(*(_DWORD *)&v46[4 * j]) )
              {
                *(&v51 + j) = 1;
                V_LOCK();
                HIWORD(v34) = (unsigned int)"ver mining all backend!" >> 16;
                logfmt_raw(v58, 0x1000u, v36, v34, j, v36);
                V_UNLOCK();
                zlog(g_zc, v6, 167, v4, 19, 299, 40, v58);
              }
              v33 = v54;
            }
          }
          v37 = (pthread_t *)calloc(v33, 4u);
          if ( v54 > 0 )
          {
            for ( k = 0; k < v54; ++k )
            {
              v39 = (const pthread_attr_t *)(unsigned __int8)*(&v51 + k);
              if ( !*(&v51 + k) )
              {
                *(_DWORD *)(*(_DWORD *)&v46[4 * k] + 1004) = &v55;
                pthread_create(&v37[k], v39, *(void *(**)(void *))(*(_DWORD *)&v46[4 * k] + 24), *(void **)&v46[4 * k]);
              }
            }
            if ( v54 > 0 )
            {
              if ( !v51 )
                pthread_join(*v37, 0);
              if ( v54 > 1 && !v52 )
                pthread_join(v37[1], 0);
            }
          }
          free(v37);
        }
      }
    }
    if ( !epoch_number_rvn_0 )
    {
LABEL_9:
      V_LOCK();
      logfmt_raw(v58, 0x1000u, 0, v47, dword_192700, 0);
      V_UNLOCK();
      zlog(g_zc, v6, 167, v4, 19, 214, 40, v58);
    }
  }
}
