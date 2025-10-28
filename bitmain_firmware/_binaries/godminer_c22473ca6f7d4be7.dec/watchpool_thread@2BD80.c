void __noreturn watchpool_thread()
{
  pthread_t v0; // r0
  char *v1; // r0
  const char *v2; // r2
  char *v3; // r4
  _DWORD *v4; // r10
  int v5; // r0
  int v6; // r3
  int v7; // r1
  int v8; // lr
  char *v9; // r12
  int v10; // r0
  _DWORD *v11; // r8
  int *v12; // r6
  int v13; // r4
  unsigned __int8 *v14; // r5
  int v15; // r11
  int v16; // r1
  int v17; // r2
  int v18; // r3
  char *v19; // r11
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r1
  int current_pool; // r0
  char v25; // [sp+20h] [bp-1084h] BYREF
  int v26; // [sp+40h] [bp-1064h]
  int v27; // [sp+44h] [bp-1060h]
  char *v28; // [sp+48h] [bp-105Ch]
  int v29; // [sp+4Ch] [bp-1058h]
  char *v30; // [sp+50h] [bp-1054h]
  char *s; // [sp+54h] [bp-1050h]
  struct timeval v32; // [sp+58h] [bp-104Ch] BYREF
  _DWORD v33[7]; // [sp+60h] [bp-1044h] BYREF
  int v34; // [sp+7Ch] [bp-1028h]
  _DWORD v35[8]; // [sp+80h] [bp-1024h] BYREF
  char v36[4100]; // [sp+A0h] [bp-1004h] BYREF

  LOWORD(v4) = -14512;
  v0 = pthread_self();
  pthread_detach(v0);
  pthread_setcanceltype(1, 0);
  sub_2BD64();
  v1 = (char *)calloc(1u, 0x40u);
  LOWORD(v2) = -3884;
  HIWORD(v2) = (unsigned int)"ed, trying again in 30sec" >> 16;
  v3 = v1;
  snprintf(v1, 0x40u, v2, "watchpool_thread", 0);
  V_LOCK();
  HIWORD(v4) = (unsigned int)&unk_16B55C >> 16;
  v5 = syscall(224);
  LOWORD(v6) = -3872;
  HIWORD(v6) = (unsigned int)"gain in 30sec" >> 16;
  LOWORD(v12) = 21584;
  logfmt_raw(v36, 0x1000u, 0, v6, v3, v5);
  V_UNLOCK();
  v30 = "poolno";
  LOWORD(v7) = -4392;
  LOWORD(v8) = -3552;
  LOWORD(v9) = -18728;
  v10 = *v4;
  HIWORD(v7) = (unsigned int)"ares / min): %.2f/min" >> 16;
  HIWORD(v8) = (unsigned int)"1.0.0" >> 16;
  HIWORD(v9) = (unsigned int)"lu)" >> 16;
  LOWORD(v11) = 21588;
  v29 = v8;
  HIWORD(v12) = (unsigned int)&unk_164328 >> 16;
  s = v9;
  zlog(v10, v7, 132, "watchpool_thread", 16, 370, 60, v36);
  v28 = &v25;
  prctl(15, v3);
  while ( 1 )
  {
    cgtime(&v32);
    if ( *v12 > 0 )
    {
      v13 = 0;
      do
      {
        while ( 1 )
        {
          HIWORD(v11) = (unsigned int)&unk_16432C >> 16;
          v14 = *(unsigned __int8 **)(*v11 + 4 * v13++);
          if ( !pool_tget((int)v14, v14 + 2064) )
          {
            v15 = *((_DWORD *)v14 + 1);
            if ( v15 < *(_DWORD *)(get_current_pool() + 4) && v32.tv_sec - *((_DWORD *)v14 + 517) > 120 )
              break;
          }
          if ( *v12 <= v13 )
            goto LABEL_9;
        }
        V_LOCK();
        V_INT((int)v33, v30, *(int *)v14);
        V_STR(v35, s, *((const char **)v14 + 2));
        v16 = v35[1];
        v17 = v35[2];
        v18 = v35[3];
        v19 = v28;
        v26 = v29;
        v27 = 120;
        *(_DWORD *)v28 = v35[0];
        *((_DWORD *)v19 + 1) = v16;
        *((_DWORD *)v19 + 2) = v17;
        *((_DWORD *)v19 + 3) = v18;
        v19 += 16;
        v20 = v35[5];
        v21 = v35[6];
        v22 = v35[7];
        *(_DWORD *)v19 = v35[4];
        *((_DWORD *)v19 + 1) = v20;
        *((_DWORD *)v19 + 2) = v21;
        *((_DWORD *)v19 + 3) = v22;
        logfmt_raw(v36, 0x1000u, 0, v34, v33[0], v33[1], v33[2], v33[3], v33[4], v33[5], v33[6], v34);
        V_UNLOCK();
        LOWORD(v23) = -4392;
        HIWORD(v23) = (unsigned int)"ares / min): %.2f/min" >> 16;
        zlog(*v4, v23, 132, "watchpool_thread", 16, 389, 80, v36);
        switch_pools();
      }
      while ( *v12 > v13 );
    }
LABEL_9:
    current_pool = get_current_pool();
    if ( pool_tget(current_pool, (unsigned __int8 *)(current_pool + 2064)) )
      switch_pools();
    sleep(0x1Eu);
  }
}
