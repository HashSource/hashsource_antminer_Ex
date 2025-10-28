int __fastcall share_result(int a1, int a2, char *a3, double *a4)
{
  double v7; // d5
  double *v8; // r0
  unsigned int *v9; // r3
  double v10; // d7
  unsigned int v11; // r2
  __int64 v12; // kr10_8
  unsigned int v13; // r1
  char *v14; // r1
  _DWORD *v15; // r3
  int v16; // r2
  int v17; // r1
  _QWORD *v19; // r3
  double *v20; // lr
  double v21; // d5
  double v22; // d6
  __int64 v23; // r2
  double v24; // d7
  time_t v25; // r0
  __int64 v26; // r6
  char *v27; // r1
  _DWORD v28[7]; // [sp+28h] [bp-1044h] BYREF
  int v29; // [sp+44h] [bp-1028h]
  _DWORD v30[7]; // [sp+48h] [bp-1024h] BYREF
  int v31; // [sp+64h] [bp-1008h]
  char v32[4100]; // [sp+68h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_165464);
  if ( a1 )
  {
    LOWORD(v19) = -14224;
    HIWORD(v19) = (unsigned int)&unk_16B670 >> 16;
    LOWORD(v20) = -14264;
    v21 = a4[246];
    HIWORD(v20) = (unsigned int)&unk_16B648 >> 16;
    v22 = *v20;
    LODWORD(v23) = *((_DWORD *)a4 + 522);
    v24 = a4[265] + v21;
    ++*v19;
    HIDWORD(v23) = *((_DWORD *)a4 + 523);
    *((_QWORD *)a4 + 261) = v23 + 1;
    a4[265] = v24;
    *v20 = v22 + v21;
    v25 = time(0);
    v26 = *((_QWORD *)a4 + 246);
    *((_DWORD *)a4 + 444) = v25;
    *((_QWORD *)a4 + 223) = v26;
    pthread_mutex_unlock(&stru_165464);
    return 1;
  }
  else
  {
    v7 = a4[246];
    LOWORD(v8) = -14248;
    HIWORD(v8) = (unsigned int)&unk_16B658 >> 16;
    LOWORD(v9) = -14192;
    HIWORD(v9) = (unsigned int)&unk_16B690 >> 16;
    v10 = *v8 + v7;
    v11 = *v9;
    v12 = *((_QWORD *)a4 + 262) + 1LL;
    a4[266] = a4[266] + v7;
    *((_DWORD *)a4 + 524) = v12;
    v13 = v9[1];
    *v8 = v10;
    *((_DWORD *)a4 + 525) = HIDWORD(v12);
    *(_QWORD *)v9 = __PAIR64__(v13, v11) + 1;
    pthread_mutex_unlock(&stru_165464);
    if ( a3 )
    {
      sub_2E164(a3);
      V_LOCK();
      LOWORD(v14) = -3560;
      HIWORD(v14) = (unsigned int)"DEVS" >> 16;
      V_INT((int)v28, v14, *(int *)a4);
      logfmt_raw(
        v32,
        0x1000u,
        0,
        v29,
        v28[0],
        v28[1],
        v28[2],
        v28[3],
        v28[4],
        v28[5],
        v28[6],
        v29,
        "reject reason: %s",
        a3);
      V_UNLOCK();
      LOWORD(v15) = -14512;
      HIWORD(v15) = (unsigned int)&unk_16B55C >> 16;
      v16 = 481;
    }
    else
    {
      sub_2E164("NULL");
      V_LOCK();
      LOWORD(v27) = -3560;
      HIWORD(v27) = (unsigned int)"DEVS" >> 16;
      V_INT((int)v30, v27, *(int *)a4);
      logfmt_raw(
        v32,
        0x1000u,
        0,
        v31,
        v30[0],
        v30[1],
        v30[2],
        v30[3],
        v30[4],
        v30[5],
        v30[6],
        v31,
        "reject reason:: NULL");
      V_UNLOCK();
      LOWORD(v15) = -14512;
      HIWORD(v15) = (unsigned int)&unk_16B55C >> 16;
      v16 = 484;
    }
    LOWORD(v17) = -216;
    HIWORD(v17) = (unsigned int)"Unknown algo parameter '%s'" >> 16;
    zlog(*v15, v17, 127, "share_result", 12, v16, 80, v32);
    return 1;
  }
}
