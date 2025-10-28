int __fastcall pipe_pop_eager(int *a1, char *a2, int a3)
{
  unsigned int v3; // r6
  pthread_mutex_t *v4; // r10
  unsigned int v6; // r5
  unsigned int v7; // r7
  int v8; // r9
  unsigned int v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r2
  size_t v12; // r8
  const void *v13; // r1
  char *v14; // r5
  unsigned int v15; // r1
  unsigned int v16; // r3
  bool v17; // cc
  pthread_mutex_t *v18; // r0
  unsigned int v19; // r5
  pthread_cond_t *v20; // r0
  unsigned int v22; // r1
  unsigned int v23; // r2
  int v24; // r2
  char *v25; // r5
  char *v26; // r1
  char *v27; // r5
  unsigned int v28; // r3
  unsigned int v29; // r12
  int v30; // r1
  int v31; // lr
  bool v32; // cf
  int v33; // r0
  int v34; // r2
  unsigned int v35; // r2
  unsigned int v36; // [sp+0h] [bp-2Ch]
  unsigned int v38; // [sp+8h] [bp-24h]
  size_t n; // [sp+Ch] [bp-20h]
  int v40[7]; // [sp+10h] [bp-1Ch] BYREF

  v3 = *a1 * a3;
  if ( !v3 )
    return v3;
  v4 = (pthread_mutex_t *)(a1 + 9);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 9));
  v6 = a1[5];
  v7 = a1[6];
  v8 = *a1;
  v36 = a1[3];
  v9 = a1[4];
  if ( v6 >= v7 )
  {
    v22 = v9 - v6;
    v23 = v7 - v36;
    if ( v8 != v7 - v36 + v9 - v6 )
      goto LABEL_33;
  }
  else
  {
    v10 = v7 - v6;
    if ( v8 != v7 - v6 )
      goto LABEL_4;
  }
  if ( a1[7] )
  {
    do
    {
      pthread_cond_wait((pthread_cond_t *)(a1 + 22), v4);
      v8 = *a1;
      v9 = a1[4];
      v6 = a1[5];
      v7 = a1[6];
      v24 = v7 - v6;
      if ( v6 >= v7 )
        v24 = v7 - a1[3] + v9 - v6;
    }
    while ( v8 == v24 && a1[7] );
    v36 = a1[3];
  }
  if ( v7 > v6 )
  {
    v10 = v7 - v6;
    goto LABEL_4;
  }
  v22 = v9 - v6;
  v23 = v7 - v36;
LABEL_33:
  v10 = v23 + v22;
LABEL_4:
  v11 = v10 - v8;
  if ( v11 )
  {
    v12 = v9 - v6 - v8;
    if ( v3 >= v11 )
      v3 = v11;
    v38 = v9;
    if ( v12 >= v3 )
      v12 = v3;
    v13 = (const void *)(v6 + v8);
    v14 = (char *)(v6 + v12);
    n = v3 - v12;
    memcpy(a2, v13, v12);
    v16 = v38;
    if ( (unsigned int)v14 >= v38 )
      v14 = &v14[v36 - v38];
    if ( v3 != v12 )
    {
      v25 = &v14[v8];
      if ( (unsigned int)v25 >= v38 )
        v25 = &v25[v36 - v38];
      v26 = v25;
      v27 = &v25[n];
      memcpy(&a2[v12], v26, n);
      v16 = v38;
      if ( (unsigned int)v27 >= v38 )
        v27 = &v27[v36 - v38];
      v14 = &v27[-v8];
      if ( v36 > (unsigned int)v14 )
        v14 = (char *)(v38 - (v36 - (_DWORD)v14));
    }
    v17 = v7 > (unsigned int)v14;
    if ( v7 <= (unsigned int)v14 )
      v15 = v36;
    v18 = v4;
    a1[5] = (int)v14;
    if ( v7 > (unsigned int)v14 )
      v19 = v7 - (_DWORD)v14;
    else
      v19 = v16 - (_DWORD)v14;
    if ( !v17 )
      v19 += v7 - v15;
    if ( v19 - v8 <= (v16 - v36 - v8) >> 2 )
    {
      pthread_mutex_unlock(v4);
      pthread_mutex_lock((pthread_mutex_t *)(a1 + 15));
      pthread_mutex_lock(v4);
      v28 = a1[6];
      v29 = a1[5];
      v30 = a1[3];
      v31 = a1[4];
      v32 = v29 >= v28;
      v33 = *a1;
      if ( v29 < v28 )
        v28 -= v29;
      v34 = v31 - v30;
      if ( v32 )
      {
        v30 = v28 - v30;
        v28 = v31 - v29;
      }
      v35 = v34 - v33;
      if ( v32 )
        v28 += v30;
      if ( v28 - v33 <= v35 >> 2 )
        sub_12CD28(v40, a1, v35 >> 1);
      pthread_mutex_unlock(v4);
      v18 = (pthread_mutex_t *)(a1 + 15);
    }
    pthread_mutex_unlock(v18);
    v20 = (pthread_cond_t *)(a1 + 34);
    if ( v3 == *a1 )
      pthread_cond_signal(v20);
    else
      pthread_cond_broadcast(v20);
    return sub_12DE60(v3);
  }
  else
  {
    v3 = 0;
    pthread_mutex_unlock(v4);
  }
  return v3;
}
