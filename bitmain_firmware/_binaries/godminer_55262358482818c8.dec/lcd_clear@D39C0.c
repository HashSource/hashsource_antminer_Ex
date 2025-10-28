int __fastcall lcd_clear(int a1)
{
  int v1; // r6
  int v2; // r1
  int *v4; // r2
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r1
  int *v9; // lr
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // lr
  int v15; // r1
  int v16; // [sp+10h] [bp-1800h] BYREF
  int v17; // [sp+14h] [bp-17FCh]
  int v18; // [sp+18h] [bp-17F8h]
  int v19; // [sp+1Ch] [bp-17F4h]
  __int16 v20; // [sp+20h] [bp-17F0h]
  char v21; // [sp+22h] [bp-17EEh]
  char v22[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( !dword_1B404C )
    return -2;
  if ( dword_1B4050 == a1 )
  {
    if ( pthread_mutex_lock(&stru_1B4054) )
    {
      LOWORD(v9) = 32400;
      HIWORD(v9) = (unsigned int)".c" >> 16;
      v10 = *v9;
      v11 = v9[1];
      v12 = v9[2];
      v13 = v9[3];
      v14 = v9[4];
      v16 = v10;
      v17 = v11;
      v18 = v12;
      v19 = v13;
      v20 = v14;
      v21 = BYTE2(v14);
      V_LOCK();
      logfmt_raw(v22, 0x1000u, 0, &v16);
      V_UNLOCK();
      LOWORD(v15) = 32204;
      HIWORD(v15) = (unsigned int)"lcd_clear" >> 16;
      zlog(g_zc, v15, 174, "lcd_clear", 9, 123, 100, v22);
      return -4;
    }
    else
    {
      memset(&unk_1B406C, 0x20, 0x40u);
      v1 = dword_1B4050;
      lseek64(dword_1B4050, v2, 0, 0, 0);
      write(v1, &unk_1B406C, 0x40u);
      pthread_mutex_unlock(&stru_1B4054);
      return 0;
    }
  }
  else
  {
    LOWORD(v4) = 32188;
    HIWORD(v4) = (unsigned int)"failed!" >> 16;
    v5 = *v4;
    v6 = v4[1];
    v7 = v4[2];
    v16 = v5;
    v17 = v6;
    LOWORD(v18) = v7;
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, &v16);
    V_UNLOCK();
    LOWORD(v8) = 32204;
    HIWORD(v8) = (unsigned int)"lcd_clear" >> 16;
    zlog(g_zc, v8, 174, "lcd_clear", 9, 117, 80, v22);
    return -3;
  }
}
