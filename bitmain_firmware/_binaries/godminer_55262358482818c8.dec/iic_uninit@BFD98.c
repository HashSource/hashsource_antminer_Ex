int __fastcall iic_uninit(int a1)
{
  int *v3; // lr
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // lr
  int v9; // r1
  _DWORD v10[4]; // [sp+10h] [bp-1800h] BYREF
  __int16 v11; // [sp+20h] [bp-17F0h]
  char v12; // [sp+22h] [bp-17EEh]
  char v13[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_1B32C0) )
  {
    LOWORD(v3) = 20176;
    HIWORD(v3) = (unsigned int)"failed to i2c_select" >> 16;
    v4 = *v3;
    v5 = v3[1];
    v6 = v3[2];
    v7 = v3[3];
    v8 = v3[4];
    v10[0] = v4;
    v10[1] = v5;
    v10[2] = v6;
    v10[3] = v7;
    v11 = v8;
    v12 = BYTE2(v8);
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, v10);
    V_UNLOCK();
    LOWORD(v9) = 19924;
    HIWORD(v9) = (unsigned int)"g" >> 16;
    return zlog(g_zc, v9, 174, "iic_uninit", 10, 105, 100, v13);
  }
  else
  {
    i2c_uninit(a1);
    return pthread_mutex_unlock(&stru_1B32C0);
  }
}
