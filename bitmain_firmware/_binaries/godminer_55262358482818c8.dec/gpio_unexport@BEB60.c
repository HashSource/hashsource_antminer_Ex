int __fastcall gpio_unexport(int a1)
{
  const char *v2; // r2
  int v3; // r0
  int v4; // r5
  int v5; // r0
  int v6; // r6
  const char *v7; // r2
  size_t v8; // r0
  const char *v9; // r2
  int v10; // r1
  const char *v12; // r2
  int v13; // r1
  int *v14; // lr
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // lr
  int v20; // r1
  int *v21; // r12
  int v22; // r0
  int v23; // r1
  int v24; // r2
  int v25; // r3
  int v26; // r0
  int v27; // r1
  int v28; // r2
  int v29; // r3
  int v30; // r1
  int v31; // r1
  const char *v32; // r2
  int v33; // r1
  char s[64]; // [sp+10h] [bp-1840h] BYREF
  int v35; // [sp+50h] [bp-1800h] BYREF
  int v36; // [sp+54h] [bp-17FCh]
  int v37; // [sp+58h] [bp-17F8h]
  int v38; // [sp+5Ch] [bp-17F4h]
  int v39; // [sp+60h] [bp-17F0h]
  int v40; // [sp+64h] [bp-17ECh]
  int v41; // [sp+68h] [bp-17E8h]
  int v42; // [sp+6Ch] [bp-17E4h]
  int v43; // [sp+70h] [bp-17E0h]
  char v44; // [sp+74h] [bp-17DCh]
  char v45[4096]; // [sp+850h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_1B32A4) )
  {
    LOWORD(v14) = 19080;
    HIWORD(v14) = (unsigned int)"n not registered before" >> 16;
    v15 = *v14;
    v16 = v14[1];
    v17 = v14[2];
    v18 = v14[3];
    v4 = -1;
    v19 = v14[4];
    v35 = v15;
    v36 = v16;
    v37 = v17;
    v38 = v18;
    LOWORD(v39) = v19;
    BYTE2(v39) = BYTE2(v19);
    V_LOCK();
    logfmt_raw(v45, 0x1000u, 0, &v35);
    V_UNLOCK();
    LOWORD(v20) = 18736;
    HIWORD(v20) = (unsigned int)"exist" >> 16;
    zlog(g_zc, v20, 175, "gpio_unexport", 13, 272, 100, v45);
    return v4;
  }
  LOWORD(v2) = 19100;
  HIWORD(v2) = (unsigned int)"ore" >> 16;
  snprintf(s, 0x40u, v2, a1);
  v3 = access(s, 0);
  v4 = v3;
  if ( !v3 )
  {
    LOWORD(v5) = 19304;
    HIWORD(v5) = (unsigned int)"unexported, ret = %d" >> 16;
    v6 = open64(v5);
    if ( v6 < 0 )
    {
      LOWORD(v21) = 19332;
      HIWORD(v21) = (unsigned int)"/class/gpio/unexport" >> 16;
      v22 = *v21;
      v23 = v21[1];
      v24 = v21[2];
      v25 = v21[3];
      v21 += 4;
      v35 = v22;
      v36 = v23;
      v37 = v24;
      v38 = v25;
      v26 = *v21;
      v27 = v21[1];
      v28 = v21[2];
      v29 = v21[3];
      v21 += 4;
      v39 = v26;
      v40 = v27;
      v41 = v28;
      v42 = v29;
      v30 = v21[1];
      v43 = *v21;
      v44 = v30;
      V_LOCK();
      logfmt_raw(v45, 0x1000u, 0, &v35);
      V_UNLOCK();
      LOWORD(v31) = 18736;
      HIWORD(v31) = (unsigned int)"exist" >> 16;
      v4 = -2;
      zlog(g_zc, v31, 175, "gpio_unexport", 13, 289, 100, v45);
      pthread_mutex_unlock(&stru_1B32A4);
    }
    else
    {
      LOWORD(v7) = 24136;
      HIWORD(v7) = (unsigned int)"l generated local work  %d" >> 16;
      v8 = snprintf(s, 0x40u, v7, a1);
      if ( write(v6, s, v8) < 0 )
      {
        LOWORD(v32) = 19372;
        HIWORD(v32) = (unsigned int)"nexport for writing!" >> 16;
        snprintf((char *)&v35, 0x800u, v32, a1);
        V_LOCK();
        logfmt_raw(v45, 0x1000u, 0, &v35);
        V_UNLOCK();
        LOWORD(v33) = 18736;
        HIWORD(v33) = (unsigned int)"exist" >> 16;
        v4 = -2;
        zlog(g_zc, v33, 175, "gpio_unexport", 13, 297, 100, v45);
      }
      else
      {
        LOWORD(v9) = 19400;
        HIWORD(v9) = (unsigned int)"ed to unexport gpio %d!" >> 16;
        snprintf((char *)&v35, 0x800u, v9, a1);
        V_LOCK();
        logfmt_raw(v45, 0x1000u, 0, &v35);
        V_UNLOCK();
        LOWORD(v10) = 18736;
        HIWORD(v10) = (unsigned int)"exist" >> 16;
        zlog(g_zc, v10, 175, "gpio_unexport", 13, 303, 20, v45);
      }
      close(v6);
      pthread_mutex_unlock(&stru_1B32A4);
    }
    return v4;
  }
  LOWORD(v12) = 19264;
  HIWORD(v12) = (unsigned int)"export gpio %d success" >> 16;
  snprintf((char *)&v35, 0x800u, v12, a1, v3);
  V_LOCK();
  logfmt_raw(v45, 0x1000u, 0, &v35);
  V_UNLOCK();
  LOWORD(v13) = 18736;
  HIWORD(v13) = (unsigned int)"exist" >> 16;
  zlog(g_zc, v13, 175, "gpio_unexport", 13, 280, 80, v45);
  pthread_mutex_unlock(&stru_1B32A4);
  return 0;
}
