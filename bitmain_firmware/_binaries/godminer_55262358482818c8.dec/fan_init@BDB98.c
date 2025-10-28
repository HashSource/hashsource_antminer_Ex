int fan_init()
{
  int *v1; // lr
  int v2; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r3
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r3
  int v10; // r1
  _DWORD v11[7]; // [sp+10h] [bp-1804h] BYREF
  char v12; // [sp+2Ch] [bp-17E8h]
  char v13[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( platform_inited[0] )
    return 0;
  LOWORD(v1) = 18000;
  HIWORD(v1) = (unsigned int)"fan_get_realtime_speed" >> 16;
  v2 = *v1;
  v3 = v1[1];
  v4 = v1[2];
  v5 = v1[3];
  v1 += 4;
  v11[0] = v2;
  v11[1] = v3;
  v11[2] = v4;
  v11[3] = v5;
  v6 = v1[1];
  v7 = v1[2];
  v8 = v1[3];
  v11[4] = *v1;
  v11[5] = v6;
  v11[6] = v7;
  v12 = v8;
  V_LOCK();
  logfmt_raw(v13, 0x1000u, 0, v11);
  V_UNLOCK();
  LOWORD(v9) = 17964;
  LOWORD(v10) = 18032;
  HIWORD(v9) = (unsigned int)"==" >> 16;
  HIWORD(v10) = (unsigned int)"nit platform first!!" >> 16;
  zlog(g_zc, v10, 174, v9, 8, 25, 100, v13);
  return -1;
}
