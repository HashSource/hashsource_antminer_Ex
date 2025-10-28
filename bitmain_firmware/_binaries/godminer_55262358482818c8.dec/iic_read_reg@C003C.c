int __fastcall iic_read_reg(int a1, int a2, int a3, int a4, int a5)
{
  int reg; // r4
  int *v11; // lr
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // lr
  int v17; // r1
  _DWORD v18[4]; // [sp+10h] [bp-1804h] BYREF
  __int16 v19; // [sp+20h] [bp-17F4h]
  char v20; // [sp+22h] [bp-17F2h]
  char v21[4080]; // [sp+810h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_1B32C0) )
  {
    LOWORD(v11) = 20176;
    HIWORD(v11) = (unsigned int)"failed to i2c_select" >> 16;
    v12 = *v11;
    v13 = v11[1];
    v14 = v11[2];
    v15 = v11[3];
    reg = -4;
    v16 = v11[4];
    v18[0] = v12;
    v18[1] = v13;
    v18[2] = v14;
    v18[3] = v15;
    v19 = v16;
    v20 = BYTE2(v16);
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, v18);
    V_UNLOCK();
    LOWORD(v17) = 19924;
    HIWORD(v17) = (unsigned int)"g" >> 16;
    zlog(g_zc, v17, 174, "iic_read_reg", 12, 171, 100, v21);
  }
  else
  {
    reg = i2c_read_reg(a1, a2, a3, a4, a5);
    pthread_mutex_unlock(&stru_1B32C0);
  }
  return reg;
}
