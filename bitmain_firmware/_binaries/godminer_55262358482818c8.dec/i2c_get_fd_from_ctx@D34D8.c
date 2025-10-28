int __fastcall i2c_get_fd_from_ctx(int a1)
{
  int v1; // r1
  int v2; // r4
  int *v4; // lr
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r1
  int v10; // r1
  int v11; // [sp+14h] [bp-1810h] BYREF
  void *ptr; // [sp+1Ch] [bp-1808h] BYREF
  _DWORD s[5]; // [sp+20h] [bp-1804h] BYREF
  __int16 v14; // [sp+34h] [bp-17F0h]
  char v15; // [sp+36h] [bp-17EEh]
  char v16[4100]; // [sp+820h] [bp-1004h] BYREF

  v11 = a1;
  if ( pthread_mutex_lock(&stru_1B402C) )
  {
    LOWORD(v4) = 31332;
    HIWORD(v4) = (unsigned int)"atform/7020/7020_i2c.c" >> 16;
    v2 = -4;
    v5 = *v4;
    v6 = v4[1];
    v7 = v4[2];
    v8 = v4[3];
    v4 += 4;
    s[0] = v5;
    s[1] = v6;
    s[2] = v7;
    s[3] = v8;
    v9 = v4[1];
    s[4] = *v4;
    v14 = v9;
    v15 = BYTE2(v9);
    V_LOCK();
    logfmt_raw(v16, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v10) = 31156;
    HIWORD(v10) = (unsigned int)"se init platform first!" >> 16;
    zlog(g_zc, v10, 174, "i2c_get_fd_from_ctx", 19, 667, 100, v16);
  }
  else if ( find_c_map((int *)dword_1B4048, (int)&v11, &ptr) )
  {
    snprintf(
      (char *)s,
      0x800u,
      "i2c dev = %s, addr = 0x%x, fd = %d",
      (const char *)ptr + 16,
      *((_DWORD *)ptr + 1),
      *((_DWORD *)ptr + 3));
    V_LOCK();
    logfmt_raw(v16, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v1) = 31156;
    HIWORD(v1) = (unsigned int)"se init platform first!" >> 16;
    zlog(g_zc, v1, 174, "i2c_get_fd_from_ctx", 19, 678, 60, v16);
    pthread_mutex_unlock(&stru_1B402C);
    v2 = *((_DWORD *)ptr + 3);
    free(ptr);
  }
  else
  {
    v2 = -2;
    pthread_mutex_unlock(&stru_1B402C);
  }
  return v2;
}
