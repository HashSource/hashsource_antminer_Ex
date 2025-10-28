_DWORD *__fastcall _pipe_push(_DWORD *result, char *a2, size_t a3)
{
  size_t v3; // r11
  int *v4; // r9
  unsigned int v5; // r1
  unsigned int v6; // r6
  char *v7; // r4
  unsigned int v8; // r7
  int v9; // r8
  int v10; // r2
  int v11; // r5
  int v12; // r3
  int v13; // r1
  _BOOL4 v14; // r2
  char *v15; // r1
  unsigned int v16; // r10
  unsigned int v17; // r5
  char *v18; // r0
  size_t v19; // r6
  size_t v20; // r2
  char *v21; // r1
  pthread_cond_t *v22; // r0
  int v23; // r2
  _BOOL4 v24; // r2
  int v25; // r2
  char *v26; // r0
  unsigned int v27; // r0
  int v28; // r3
  unsigned int v29; // r2
  int v30; // r2
  int v31; // r3
  char *v32; // r0
  pthread_mutex_t *mutex; // [sp+0h] [bp-3Ch]
  int v34; // [sp+4h] [bp-38h]
  int v36; // [sp+Ch] [bp-30h]
  pthread_mutex_t *v37; // [sp+10h] [bp-2Ch]
  pthread_cond_t *cond; // [sp+14h] [bp-28h]
  unsigned int v39; // [sp+18h] [bp-24h]
  int v40; // [sp+18h] [bp-24h]
  int v41; // [sp+1Ch] [bp-20h]
  _DWORD v42[6]; // [sp+24h] [bp-18h] BYREF

  v3 = a3;
  v36 = *result;
  if ( a3 )
  {
    v4 = result;
    mutex = (pthread_mutex_t *)(result + 15);
    cond = (pthread_cond_t *)(result + 34);
    v37 = (pthread_mutex_t *)(result + 9);
    while ( 1 )
    {
      pthread_mutex_lock(mutex);
      v6 = v4[5];
      v7 = (char *)v4[6];
      v8 = v4[4];
      v9 = *v4;
      v34 = v4[3];
      if ( v6 >= (unsigned int)v7 )
      {
        v10 = v4[3];
        v5 = v8 - v6;
      }
      else
      {
        v10 = (int)&v7[-v6];
      }
      v11 = v4[2];
      v12 = *v4;
      if ( v6 >= (unsigned int)v7 )
        v10 = (int)&v7[v5 - v10];
      v13 = v4[8];
      v14 = v10 - v9 == v11;
      if ( !v13 )
        v14 = 0;
      if ( v14 )
      {
        do
        {
          pthread_cond_wait(cond, mutex);
          v6 = v4[5];
          v7 = (char *)v4[6];
          v8 = v4[4];
          v9 = *v4;
          v23 = (int)&v7[-v6];
          v11 = v4[2];
          if ( v6 >= (unsigned int)v7 )
            v23 = (int)&v7[v8 - v6 - v4[3]];
          v13 = v4[8];
          v12 = *v4;
          v24 = v23 - v9 == v11;
          if ( !v13 )
            v24 = 0;
        }
        while ( v24 );
        v34 = v4[3];
      }
      if ( !v13 )
        break;
      if ( v6 < (unsigned int)v7 )
        v15 = &v7[-v6];
      else
        v15 = (char *)(v8 - v6);
      if ( v6 >= (unsigned int)v7 )
        v15 = &v7[(_DWORD)v15 - v34];
      v16 = v8 - v34 - v9;
      if ( v16 < (unsigned int)&v15[v3 - v9] )
      {
        pthread_mutex_lock(v37);
        v6 = v4[5];
        v7 = (char *)v4[6];
        v8 = v4[4];
        v34 = v4[3];
        if ( v6 >= (unsigned int)v7 )
        {
          v25 = v4[3];
          v26 = (char *)(v8 - v6);
        }
        else
        {
          v26 = &v7[-v6];
        }
        if ( v6 >= (unsigned int)v7 )
          v26 = &v7[(_DWORD)v26 - v25];
        v41 = *v4;
        v39 = (unsigned int)&v26[v3 - *v4];
        v27 = sub_12DE60(v39);
        v28 = v41;
        if ( v16 < v39 )
        {
          v29 = v27 + 1;
          if ( (int)(v27 + 1) >= 0 )
          {
            v30 = 5;
            v31 = 1;
            do
            {
              --v30;
              v27 |= v27 >> v31;
              v31 *= 2;
            }
            while ( v30 );
            v29 = v27 + 1;
          }
          sub_12CD28(v42, v4, v29 * v9);
          v8 = v42[1];
          v6 = v42[2];
          v34 = v42[0];
          v7 = (char *)v42[3];
          v28 = v42[4];
        }
        v40 = v28;
        pthread_mutex_unlock(v37);
        v12 = v40;
      }
      if ( v6 >= (unsigned int)v7 )
      {
        v21 = a2;
        v20 = v11 - (_DWORD)&v7[v8 - v6 - v34 - v12];
        if ( v20 >= v3 )
          v20 = v3;
        v17 = v20;
      }
      else
      {
        v17 = v11 - (_DWORD)&v7[-v6 - v12];
        v18 = v7;
        if ( v17 >= v3 )
          v17 = v3;
        if ( v8 - (unsigned int)v7 >= v17 )
          v19 = v17;
        else
          v19 = v8 - (_DWORD)v7;
        v7 += v19;
        memcpy(v18, a2, v19);
        v20 = v17 - v19;
        v21 = &a2[v19];
      }
      if ( v20 )
      {
        if ( v8 <= (unsigned int)v7 )
          v7 = &v7[v34 - v8];
        v32 = v7;
        v7 += v20;
        memcpy(v32, v21, v20);
      }
      if ( v8 <= (unsigned int)v7 )
        v7 = &v7[v34 - v8];
      v4[6] = (int)v7;
      pthread_mutex_unlock(mutex);
      v22 = (pthread_cond_t *)(v4 + 22);
      if ( v36 == v17 )
        result = (_DWORD *)pthread_cond_signal(v22);
      else
        result = (_DWORD *)pthread_cond_broadcast(v22);
      v3 -= v17;
      if ( !v3 )
        return result;
      a2 += v17;
      v36 = *v4;
    }
    return (_DWORD *)pthread_mutex_unlock(mutex);
  }
  return result;
}
