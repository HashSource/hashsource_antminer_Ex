int __fastcall i2c_select(int a1, int a2)
{
  _DWORD *v4; // r4
  _DWORD *v5; // r5
  void (__fastcall *v6)(_DWORD *, _DWORD *, int); // r3
  int *v8; // lr
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r1
  int v14; // r1
  _DWORD v15[5]; // [sp+10h] [bp-1800h] BYREF
  __int16 v16; // [sp+24h] [bp-17ECh]
  char v17; // [sp+26h] [bp-17EAh]
  char v18[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_1B402C) )
  {
    LOWORD(v8) = 31332;
    HIWORD(v8) = (unsigned int)"atform/7020/7020_i2c.c" >> 16;
    v9 = *v8;
    v10 = v8[1];
    v11 = v8[2];
    v12 = v8[3];
    v8 += 4;
    v15[0] = v9;
    v15[1] = v10;
    v15[2] = v11;
    v15[3] = v12;
    v13 = v8[1];
    v15[4] = *v8;
    v16 = v13;
    v17 = BYTE2(v13);
    V_LOCK();
    logfmt_raw(v18, 0x1000u, 0, v15);
    V_UNLOCK();
    LOWORD(v14) = 31156;
    HIWORD(v14) = (unsigned int)"se init platform first!" >> 16;
    zlog(g_zc, v14, 174, "i2c_select", 10, 244, 100, v18);
    return -4;
  }
  else
  {
    v4 = new_iterator_c_map(dword_1B4048);
    if ( ((int (*)(void))*v4)() )
    {
      while ( ***(_DWORD ***)(v4[5] + 16) != a1 )
      {
        if ( !((int (__fastcall *)(_DWORD *))*v4)(v4) )
          goto LABEL_7;
      }
      v5 = (_DWORD *)((int (*)(void))v4[2])();
      v6 = (void (__fastcall *)(_DWORD *, _DWORD *, int))v4[1];
      *v5 = a2;
      v6(v4, v5, 144);
      free(v5);
    }
LABEL_7:
    delete_iterator_c_map(v4);
    pthread_mutex_unlock(&stru_1B402C);
    return 0;
  }
}
