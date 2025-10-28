int check_and_destroy_abnormal_runtime()
{
  pthread_mutex_t *v0; // r7
  int v1; // r6
  int v2; // r5
  int v3; // r11
  _DWORD *v4; // r10
  int v5; // r9
  void **v6; // r4
  _DWORD *v7; // r3
  _DWORD *v8; // t1
  int v9; // r1
  int *v10; // r3
  _DWORD *v11; // r2
  int v12; // t1
  pthread_mutex_t *v13; // r0
  _DWORD s[256]; // [sp+10h] [bp-1404h] BYREF
  char v16[4100]; // [sp+410h] [bp-1004h] BYREF

  LOWORD(v0) = -22512;
  HIWORD(v0) = (unsigned int)&unk_169600 >> 16;
  memset(s, 0, sizeof(s));
  pthread_mutex_lock(v0);
  if ( v0[1].__lock > 0 )
  {
    v2 = 0;
    LOWORD(v3) = 22396;
    LOWORD(v4) = -14512;
    LOWORD(v5) = 22360;
    v1 = 0;
    v6 = (void **)&v0[1];
    do
    {
      v8 = v6[1];
      ++v6;
      v7 = v8;
      if ( v8[59] == v8[49] )
      {
        s[v1++] = v7;
      }
      else
      {
        V_LOCK();
        HIWORD(v3) = (unsigned int)"er_util/set_baud.c" >> 16;
        logfmt_raw(v16, 0x1000u, 0, v3, *((_DWORD *)*v6 + 35));
        V_UNLOCK();
        LOWORD(v9) = 22452;
        HIWORD(v9) = (unsigned int)"%s unknow temp type %d" >> 16;
        HIWORD(v4) = (unsigned int)&unk_16B55C >> 16;
        HIWORD(v5) = (unsigned int)"ase/build/godminer-origin_master/miner_util/set_baud.c" >> 16;
        zlog(*v4, v9, 148, v5, 34, 143, 80, v16);
        (*((void (**)(void))*v6 + 2))();
        (*((void (**)(void))*v6 + 4))();
        free(*v6);
        *v6 = 0;
      }
      ++v2;
    }
    while ( v0[1].__lock > v2 );
    if ( v1 )
    {
      v10 = s;
      v11 = &unk_16A82C;
      do
      {
        v12 = *v10++;
        *v11++ = v12;
      }
      while ( v10 != &s[v1] );
    }
  }
  else
  {
    v1 = 0;
  }
  LOWORD(v13) = -22512;
  v0[1].__lock = v1;
  HIWORD(v13) = (unsigned int)&unk_169600 >> 16;
  return pthread_mutex_unlock(v13);
}
