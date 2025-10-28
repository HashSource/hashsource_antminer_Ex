int gpio_init()
{
  int v0; // r0
  void *(*v1)(void *); // r2
  int *v3; // r3
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r3
  int v9; // r1
  _DWORD v10[3]; // [sp+10h] [bp-1804h] BYREF
  char v11; // [sp+1Ch] [bp-17F8h]
  char v12[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( dword_1B3284 )
  {
    LOWORD(v3) = 18720;
    HIWORD(v3) = (unsigned int)"te" >> 16;
    v4 = *v3;
    v5 = v3[1];
    v6 = v3[2];
    v7 = v3[3];
    v10[0] = v4;
    v10[1] = v5;
    v10[2] = v6;
    v11 = v7;
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, v10);
    V_UNLOCK();
    LOWORD(v8) = 18548;
    LOWORD(v9) = 18736;
    HIWORD(v8) = (unsigned int)"d" >> 16;
    HIWORD(v9) = (unsigned int)"exist" >> 16;
    zlog(g_zc, v9, 175, v8, 9, 97, 80, v12);
  }
  else
  {
    pthread_mutex_init(&stru_1B3288, 0);
    LOWORD(v0) = -7704;
    HIWORD(v0) = (unsigned int)&loc_BE1D0 >> 16;
    dword_1B32A0 = (int)new_c_map(v0, 0, 0);
    pthread_mutex_init(&stru_1B32A4, 0);
    LOWORD(v1) = -3152;
    HIWORD(v1) = (unsigned int)&loc_BF398 >> 16;
    pthread_create((pthread_t *)&dword_1B32BC, 0, v1, 0);
    dword_1B3284 = 1;
  }
  return 0;
}
