int __fastcall i2c_ioctl(int a1, int a2, int a3)
{
  _DWORD *v6; // r4
  int v7; // r0
  void *v8; // r5
  int *v10; // lr
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r1
  int v16; // r1
  _DWORD v17[5]; // [sp+10h] [bp-1804h] BYREF
  __int16 v18; // [sp+24h] [bp-17F0h]
  char v19; // [sp+26h] [bp-17EEh]
  char v20[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_1B402C) )
  {
    LOWORD(v10) = 31332;
    HIWORD(v10) = (unsigned int)"atform/7020/7020_i2c.c" >> 16;
    v11 = *v10;
    v12 = v10[1];
    v13 = v10[2];
    v14 = v10[3];
    v10 += 4;
    v17[0] = v11;
    v17[1] = v12;
    v17[2] = v13;
    v17[3] = v14;
    v15 = v10[1];
    v17[4] = *v10;
    v18 = v15;
    v19 = BYTE2(v15);
    V_LOCK();
    logfmt_raw(v20, 0x1000u, 0, v17);
    V_UNLOCK();
    LOWORD(v16) = 31156;
    HIWORD(v16) = (unsigned int)"se init platform first!" >> 16;
    zlog(g_zc, v16, 174, "i2c_ioctl", 9, 207, 100, v20);
    return -4;
  }
  else
  {
    v6 = new_iterator_c_map(dword_1B4048);
    if ( ((int (*)(void))*v6)() )
    {
      while ( ***(_DWORD ***)(v6[5] + 16) != a1 )
      {
        if ( !((int (__fastcall *)(_DWORD *))*v6)(v6) )
          goto LABEL_8;
      }
      v7 = ((int (*)(void))v6[2])();
      v8 = (void *)v7;
      if ( a2 == 1795 )
      {
        *(_DWORD *)(v7 + 4) = a3;
        ((void (__fastcall *)(_DWORD *, int, int))v6[1])(v6, v7, 144);
        free(v8);
      }
    }
LABEL_8:
    delete_iterator_c_map(v6);
    pthread_mutex_unlock(&stru_1B402C);
    return 0;
  }
}
