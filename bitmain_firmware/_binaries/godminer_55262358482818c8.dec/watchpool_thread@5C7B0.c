void __noreturn watchpool_thread()
{
  pthread_t v0; // r0
  char *v1; // r0
  const char *v2; // r2
  char *v3; // r4
  int v4; // r0
  int v5; // r3
  int v6; // r1
  int v7; // lr
  char *v8; // r12
  int v9; // r4
  pthread_mutex_t *v10; // r5
  int count; // r11
  int v12; // r1
  int v13; // r2
  int v14; // r3
  char *v15; // r11
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r1
  pthread_mutex_t *current_pool; // r0
  char v21; // [sp+20h] [bp-1084h] BYREF
  int v22; // [sp+40h] [bp-1064h]
  int v23; // [sp+44h] [bp-1060h]
  char *v24; // [sp+48h] [bp-105Ch]
  int v25; // [sp+4Ch] [bp-1058h]
  char *v26; // [sp+50h] [bp-1054h]
  char *s; // [sp+54h] [bp-1050h]
  struct timeval v28; // [sp+58h] [bp-104Ch] BYREF
  _DWORD v29[7]; // [sp+60h] [bp-1044h] BYREF
  int v30; // [sp+7Ch] [bp-1028h]
  _DWORD v31[8]; // [sp+80h] [bp-1024h] BYREF
  char v32[4100]; // [sp+A0h] [bp-1004h] BYREF

  v0 = pthread_self();
  pthread_detach(v0);
  pthread_setcanceltype(1, 0);
  sub_5C794();
  v1 = (char *)calloc(1u, 0x40u);
  LOWORD(v2) = 30580;
  HIWORD(v2) = (unsigned int)"ne failed %d count %d" >> 16;
  v3 = v1;
  snprintf(v1, 0x40u, v2, "watchpool_thread", 0);
  V_LOCK();
  v4 = syscall(224);
  LOWORD(v5) = 30592;
  HIWORD(v5) = (unsigned int)" count %d" >> 16;
  logfmt_raw(v32, 0x1000u, 0, v5, v3, v4);
  V_UNLOCK();
  v26 = "poolno";
  LOWORD(v6) = 25608;
  LOWORD(v7) = 25764;
  LOWORD(v8) = 22048;
  HIWORD(v6) = (unsigned int)"read to low priority" >> 16;
  HIWORD(v7) = (unsigned int)"iner_util/check_pool.c" >> 16;
  HIWORD(v8) = (unsigned int)"nt time %lld ms" >> 16;
  v25 = v7;
  s = v8;
  zlog(g_zc, v6, 154, "watchpool_thread", 16, 31, 40, v32);
  v24 = &v21;
  prctl(15, v3);
  while ( 1 )
  {
    cgtime(&v28);
    if ( total_pools > 0 )
    {
      v9 = 0;
      do
      {
        while ( 1 )
        {
          v10 = *(pthread_mutex_t **)(pools + 4 * v9++);
          if ( !pool_tget(v10, (unsigned __int8 *)&v10[79].__size[8]) )
          {
            count = v10->__count;
            if ( count < *(_DWORD *)(get_current_pool() + 4) && v28.tv_sec - v10[79].__kind > 120 )
              break;
          }
          if ( total_pools <= v9 )
            goto LABEL_9;
        }
        V_LOCK();
        V_INT((int)v29, v26, v10->__lock);
        V_STR(v31, s, (const char *)v10->__kind);
        v12 = v31[1];
        v13 = v31[2];
        v14 = v31[3];
        v15 = v24;
        v22 = v25;
        v23 = 120;
        *(_DWORD *)v24 = v31[0];
        *((_DWORD *)v15 + 1) = v12;
        *((_DWORD *)v15 + 2) = v13;
        *((_DWORD *)v15 + 3) = v14;
        v15 += 16;
        v16 = v31[5];
        v17 = v31[6];
        v18 = v31[7];
        *(_DWORD *)v15 = v31[4];
        *((_DWORD *)v15 + 1) = v16;
        *((_DWORD *)v15 + 2) = v17;
        *((_DWORD *)v15 + 3) = v18;
        logfmt_raw(v32, 0x1000u, 0, v30, v29[0], v29[1], v29[2], v29[3], v29[4], v29[5], v29[6], v30);
        V_UNLOCK();
        LOWORD(v19) = 25608;
        HIWORD(v19) = (unsigned int)"read to low priority" >> 16;
        zlog(g_zc, v19, 154, "watchpool_thread", 16, 50, 80, v32);
        switch_pools();
      }
      while ( total_pools > v9 );
    }
LABEL_9:
    current_pool = (pthread_mutex_t *)get_current_pool();
    if ( pool_tget(current_pool, (unsigned __int8 *)&current_pool[79].__size[8]) )
      switch_pools();
    sleep(0x1Eu);
  }
}
