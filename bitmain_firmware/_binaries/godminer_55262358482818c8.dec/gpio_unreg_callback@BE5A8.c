int __fastcall gpio_unreg_callback(int a1, int a2)
{
  int *v2; // r12
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r1
  const char *v14; // r2
  int v15; // r1
  int *v16; // lr
  int v17; // r0
  int v18; // r1
  int v19; // r2
  int v20; // r3
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r2
  int v25; // r1
  int *v26; // r2
  int v27; // r0
  int v28; // r1
  int v29; // r2
  int v30; // [sp+14h] [bp-1808h] BYREF
  int s; // [sp+18h] [bp-1804h] BYREF
  int v32; // [sp+1Ch] [bp-1800h]
  int v33; // [sp+20h] [bp-17FCh]
  int v34; // [sp+24h] [bp-17F8h]
  int v35; // [sp+28h] [bp-17F4h]
  int v36; // [sp+2Ch] [bp-17F0h]
  int v37; // [sp+30h] [bp-17ECh]
  int v38; // [sp+34h] [bp-17E8h]
  int v39; // [sp+38h] [bp-17E4h]
  int v40; // [sp+3Ch] [bp-17E0h]
  char v41[4100]; // [sp+818h] [bp-1004h] BYREF

  v30 = a1;
  if ( !a2 )
  {
    LOWORD(v26) = 32188;
    HIWORD(v26) = (unsigned int)"failed!" >> 16;
    v27 = *v26;
    v28 = v26[1];
    v29 = v26[2];
    s = v27;
    v32 = v28;
    LOWORD(v33) = v29;
    V_LOCK();
    logfmt_raw(v41, 0x1000u, 0, &s);
    V_UNLOCK();
    v24 = 182;
    goto LABEL_9;
  }
  if ( pthread_mutex_lock(&stru_1B3288) )
  {
    LOWORD(v16) = 18912;
    HIWORD(v16) = (unsigned int)"atform/7020/7020_gpio.c" >> 16;
    v17 = *v16;
    v18 = v16[1];
    v19 = v16[2];
    v20 = v16[3];
    v16 += 4;
    s = v17;
    v32 = v18;
    v33 = v19;
    v34 = v20;
    v21 = v16[1];
    v22 = v16[2];
    v23 = v16[3];
    v35 = *v16;
    v36 = v21;
    v37 = v22;
    LOBYTE(v38) = v23;
    V_LOCK();
    logfmt_raw(v41, 0x1000u, 0, &s);
    V_UNLOCK();
    v24 = 188;
LABEL_9:
    LOWORD(v25) = 18736;
    HIWORD(v25) = (unsigned int)"exist" >> 16;
    zlog(g_zc, v25, 175, "gpio_unreg_callback", 19, v24, 100, v41);
    return -1;
  }
  if ( exists_c_map((int *)dword_1B32A0, (int)&v30) == (int *)1 )
  {
    LOWORD(v14) = 19008;
    HIWORD(v14) = (unsigned int)"exist in callback map " >> 16;
    snprintf((char *)&s, 0x800u, v14, v30);
    V_LOCK();
    logfmt_raw(v41, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v15) = 18736;
    HIWORD(v15) = (unsigned int)"exist" >> 16;
    zlog(g_zc, v15, 175, "gpio_unreg_callback", 19, 194, 20, v41);
    remove_c_map((int *)dword_1B32A0, (int)&v30);
  }
  else
  {
    LOWORD(v2) = 19040;
    HIWORD(v2) = (unsigned int)"d from callback list" >> 16;
    v3 = *v2;
    v4 = v2[1];
    v5 = v2[2];
    v6 = v2[3];
    v2 += 4;
    s = v3;
    v32 = v4;
    v33 = v5;
    v34 = v6;
    v7 = *v2;
    v8 = v2[1];
    v9 = v2[2];
    v10 = v2[3];
    v2 += 4;
    v35 = v7;
    v36 = v8;
    v37 = v9;
    v38 = v10;
    v11 = v2[1];
    v39 = *v2;
    v40 = v11;
    V_LOCK();
    logfmt_raw(v41, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v12) = 18736;
    HIWORD(v12) = (unsigned int)"exist" >> 16;
    zlog(g_zc, v12, 175, "gpio_unreg_callback", 19, 199, 80, v41);
  }
  pthread_mutex_unlock(&stru_1B3288);
  return 0;
}
