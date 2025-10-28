int __fastcall pool_died(int *a1)
{
  pthread_mutex_t *v1; // r5
  int v3; // r6
  int result; // r0
  int v5; // r5
  int *v6; // r7
  char *v7; // r1
  _DWORD *v8; // r3
  int v9; // r1
  _DWORD *v10; // r3
  int v11; // r1
  _DWORD v12[7]; // [sp+28h] [bp-1044h] BYREF
  int v13; // [sp+44h] [bp-1028h]
  _DWORD v14[7]; // [sp+48h] [bp-1024h] BYREF
  int v15; // [sp+64h] [bp-1008h]
  char v16[4100]; // [sp+68h] [bp-1004h] BYREF

  v1 = (pthread_mutex_t *)(a1 + 496);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 496));
  v3 = *((unsigned __int8 *)a1 + 2064);
  *((_BYTE *)a1 + 2064) = 1;
  result = pthread_mutex_unlock(v1);
  if ( !v3 )
  {
    LOWORD(v5) = 21504;
    HIWORD(v5) = (unsigned int)&unk_1642D8 >> 16;
    cgtime((struct timeval *)(a1 + 517));
    sub_2E52C(a1, 1);
    pthread_mutex_lock((pthread_mutex_t *)(v5 + 4));
    v6 = *(int **)(v5 + 0x1C);
    pthread_mutex_unlock((pthread_mutex_t *)(v5 + 4));
    V_LOCK();
    LOWORD(v7) = -3560;
    HIWORD(v7) = (unsigned int)"DEVS" >> 16;
    if ( a1 == v6 )
    {
      V_INT((int)v12, v7, *a1);
      logfmt_raw(v16, 0x1000u, 0, v13, v12[0], v12[1], v12[2], v12[3], v12[4], v12[5], v12[6], v13, 1245324);
      V_UNLOCK();
      LOWORD(v10) = -14512;
      HIWORD(v10) = (unsigned int)&unk_16B55C >> 16;
      LOWORD(v11) = -216;
      HIWORD(v11) = (unsigned int)"Unknown algo parameter '%s'" >> 16;
      zlog(*v10, v11, 127, "pool_died", 9, 399, 80, v16);
      return switch_pools();
    }
    else
    {
      V_INT((int)v14, v7, *a1);
      logfmt_raw(v16, 0x1000u, 0, v15, v14[0], v14[1], v14[2], v14[3], v14[4], v14[5], v14[6], v15, 1245340);
      V_UNLOCK();
      LOWORD(v8) = -14512;
      HIWORD(v8) = (unsigned int)&unk_16B55C >> 16;
      LOWORD(v9) = -216;
      HIWORD(v9) = (unsigned int)"Unknown algo parameter '%s'" >> 16;
      return zlog(*v8, v9, 127, "pool_died", 9, 402, 20, v16);
    }
  }
  return result;
}
