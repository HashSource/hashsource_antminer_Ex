void __noreturn dag_gen_thread_func_2282()
{
  int epoch_number_eth_2282; // r4
  void **v1; // r5
  signed int i; // r4
  void (**v3)(void); // t1
  int v4; // r7
  size_t *p_nmemb; // r5
  int v6; // r4
  size_t v7; // t1
  int v8; // r7
  pthread_t *v9; // r0
  pthread_t *v10; // r7
  void **v11; // r6
  pthread_t *v12; // r5
  signed int v13; // r4
  _DWORD *v14; // t1
  pthread_t *v15; // r0
  char *v16; // r5
  signed int j; // r4
  pthread_t v18; // t1
  pthread_t *v19; // r0
  pthread_t *v20; // r7
  void **v21; // r6
  pthread_t *v22; // r5
  signed int v23; // r4
  _DWORD *v24; // t1
  pthread_t *v25; // r0
  char *v26; // r5
  signed int k; // r4
  pthread_t v28; // t1
  int v29; // [sp+4h] [bp-9Ch]
  __int64 v30; // [sp+20h] [bp-80h]
  int v31; // [sp+34h] [bp-6Ch]
  void **v32; // [sp+38h] [bp-68h]
  size_t nmemb; // [sp+4Ch] [bp-54h] BYREF
  _DWORD s[8]; // [sp+50h] [bp-50h] BYREF
  __int64 v35; // [sp+70h] [bp-30h] BYREF
  int v36; // [sp+78h] [bp-28h]
  int v37; // [sp+7Ch] [bp-24h]
  _DWORD v38[8]; // [sp+80h] [bp-20h]
  char v39[4100]; // [sp+A0h] [bp+0h] BYREF

  nmemb = 0;
  v32 = (void **)((char *)get_all_created_runtime(&nmemb) - 4);
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
      logfmt_raw(v39, 0x1000u, 0, "cur_epoch-epoch [%d-%d]", dword_192708, epoch_number_eth_2282);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
        177,
        "dag_gen_thread_func_2282",
        24,
        202,
        40,
        v39);
      if ( !epoch_number_eth_2282 )
        goto LABEL_8;
      if ( dword_192708 != epoch_number_eth_2282 )
      {
        if ( dword_192708 <= epoch_number_eth_2282 )
        {
          dword_192708 = epoch_number_eth_2282;
          V_LOCK();
          logfmt_raw(v39, 0x1000u, 0, "stop mining & setup dag gen mode all backend!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
            177,
            "dag_gen_thread_func_2282",
            24,
            220,
            60,
            v39);
          if ( (int)nmemb > 0 )
          {
            v1 = v32;
            for ( i = 0; i < (int)nmemb; ++i )
            {
              v3 = (void (**)(void))v1[1];
              ++v1;
              v3[5]();
            }
          }
          v4 = qword_1597B0[dword_192708];
          v31 = HIDWORD(qword_1597B0[dword_192708]);
          if ( (v4 & 0x1F) != 0 )
            v4 |= 0x20u;
          v30 = qword_1557B0[dword_192708];
          V_LOCK();
          logfmt_raw(v39, 0x1000u, 0, "ethereum epoch changed, start to generate and download dag items");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
            177,
            "dag_gen_thread_func_2282",
            24,
            234,
            60,
            v39);
          V_LOCK();
          p_nmemb = &nmemb;
          v6 = 0;
          logfmt_raw(v39, 0x1000u, 0, "epoch %d, set cache size %d, dag size %d", dword_192708, v29, v30, v4, v31);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
            177,
            "dag_gen_thread_func_2282",
            24,
            235,
            60,
            v39);
          v35 = v30;
          v36 = v4;
          v37 = v31;
          do
          {
            v7 = p_nmemb[1];
            ++p_nmemb;
            v8 = v6 >> 2;
            v6 += 4;
            V_LOCK();
            logfmt_raw(v39, 0x1000u, 0, "seed[%d] 0x%08x", v8, v7);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
              177,
              "dag_gen_thread_func_2282",
              24,
              244,
              40,
              v39);
            v38[v8] = v7;
          }
          while ( v6 != 32 );
          v9 = (pthread_t *)calloc(nmemb, 4u);
          v10 = v9;
          if ( (int)nmemb > 0 )
          {
            v11 = v32;
            v12 = v9;
            v13 = 0;
            do
            {
              v14 = v11[1];
              ++v11;
              v15 = v12;
              ++v13;
              ++v12;
              v14[251] = &v35;
              pthread_create(v15, 0, *((void *(**)(void *))*v11 + 58), *v11);
            }
            while ( (int)nmemb > v13 );
            if ( (int)nmemb > 0 )
            {
              v16 = (char *)(v10 - 1);
              for ( j = 0; j < (int)nmemb; ++j )
              {
                v18 = *((_DWORD *)v16 + 1);
                v16 += 4;
                pthread_join(v18, 0);
              }
            }
          }
          free(v10);
          V_LOCK();
          logfmt_raw(v39, 0x1000u, 0, "recover mining all backend!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
            177,
            "dag_gen_thread_func_2282",
            24,
            260,
            60,
            v39);
          v19 = (pthread_t *)calloc(nmemb, 4u);
          v20 = v19;
          if ( (int)nmemb > 0 )
          {
            v21 = v32;
            v22 = v19;
            v23 = 0;
            do
            {
              v24 = v21[1];
              ++v21;
              v25 = v22;
              ++v23;
              ++v22;
              v24[251] = &v35;
              pthread_create(v25, 0, *((void *(**)(void *))*v21 + 6), *v21);
            }
            while ( (int)nmemb > v23 );
            if ( (int)nmemb > 0 )
            {
              v26 = (char *)(v20 - 1);
              for ( k = 0; k < (int)nmemb; ++k )
              {
                v28 = *((_DWORD *)v26 + 1);
                v26 += 4;
                pthread_join(v28, 0);
              }
            }
          }
          free(v20);
        }
        else
        {
          V_LOCK();
          logfmt_raw(
            v39,
            0x1000u,
            0,
            "cur_epoch-epoch [%d-%d], only etc mining support, sorry...",
            dword_192708,
            epoch_number_eth_2282);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
            177,
            "dag_gen_thread_func_2282",
            24,
            215,
            40,
            v39);
        }
      }
    }
    if ( !dword_192708 )
    {
LABEL_8:
      V_LOCK();
      logfmt_raw(
        v39,
        0x1000u,
        0,
        "cur_epoch-epoch [%d-%d], synchronizing the state of the blockchain and start mining",
        dword_192708,
        0);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
        177,
        "dag_gen_thread_func_2282",
        24,
        205,
        40,
        v39);
    }
  }
}
