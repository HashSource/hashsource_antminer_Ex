int __fastcall iic_read(int a1, int a2, int a3)
{
  int v6; // r4
  int *v8; // lr
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // lr
  int v14; // r1
  _DWORD v15[4]; // [sp+10h] [bp-1800h] BYREF
  __int16 v16; // [sp+20h] [bp-17F0h]
  char v17; // [sp+22h] [bp-17EEh]
  char v18[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_1B32C0) )
  {
    LOWORD(v8) = 20176;
    HIWORD(v8) = (unsigned int)"failed to i2c_select" >> 16;
    v9 = *v8;
    v10 = v8[1];
    v11 = v8[2];
    v12 = v8[3];
    v6 = -4;
    v13 = v8[4];
    v15[0] = v9;
    v15[1] = v10;
    v15[2] = v11;
    v15[3] = v12;
    v16 = v13;
    v17 = BYTE2(v13);
    V_LOCK();
    logfmt_raw(v18, 0x1000u, 0, v15);
    V_UNLOCK();
    LOWORD(v14) = 19924;
    HIWORD(v14) = (unsigned int)"g" >> 16;
    zlog(g_zc, v14, 174, "iic_read", 8, 126, 100, v18);
  }
  else
  {
    v6 = i2c_read(a1, a2, a3);
    pthread_mutex_unlock(&stru_1B32C0);
  }
  return v6;
}
