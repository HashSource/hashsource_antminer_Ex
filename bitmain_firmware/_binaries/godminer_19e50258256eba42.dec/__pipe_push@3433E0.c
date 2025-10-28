int __fastcall _pipe_push(_DWORD *a1, char *a2, unsigned int a3, _BYTE *a4)
{
  int result; // r0
  int v5; // r4
  int v6; // r0
  int v7; // r4
  size_t v8; // r3
  unsigned int v9; // r0
  _DWORD v10[6]; // [sp+18h] [bp-5Ch] BYREF
  _BYTE *v11; // [sp+30h] [bp-44h]
  unsigned int v12; // [sp+34h] [bp-40h]
  char *v13; // [sp+38h] [bp-3Ch]
  _DWORD *v14; // [sp+3Ch] [bp-38h]
  int v15; // [sp+44h] [bp-30h] BYREF
  int v16; // [sp+48h] [bp-2Ch]
  unsigned int v17; // [sp+4Ch] [bp-28h]
  char *v18; // [sp+50h] [bp-24h]
  int v19; // [sp+54h] [bp-20h]
  int v20; // [sp+58h] [bp-1Ch] BYREF
  unsigned int v21; // [sp+5Ch] [bp-18h]
  size_t v22; // [sp+60h] [bp-14h]
  int v23; // [sp+64h] [bp-10h]

  v14 = a1;
  v13 = a2;
  v12 = a3;
  v11 = a4;
  result = sub_34231C((int)a1);
  v23 = result;
  if ( v12 )
  {
    v22 = 0;
    pthread_mutex_lock((pthread_mutex_t *)(v14 + 15));
    sub_3432A0(&v15, v14, &v20);
    if ( v14[8] )
    {
      sub_343000(v10, v14, v15, v16, v17, v18, v19, v12, v11);
      v15 = v10[0];
      v16 = v10[1];
      v17 = v10[2];
      v18 = (char *)v10[3];
      v19 = v10[4];
      if ( *v11 )
      {
        v5 = v20;
        v6 = sub_342474(v15, v16, v17, (unsigned int)v18, v19);
        if ( v12 <= v5 - v6 )
        {
          v8 = v12;
        }
        else
        {
          v7 = v20;
          v8 = v7 - sub_342474(v15, v16, v17, (unsigned int)v18, v19);
        }
        v22 = v8;
        v9 = sub_343184(v15, v16, v17, v18, v19, v13, v8);
        v14[6] = v9;
        pthread_mutex_unlock((pthread_mutex_t *)(v14 + 15));
        if ( v22 == v23 )
          result = pthread_cond_signal((pthread_cond_t *)(v14 + 22));
        else
          result = pthread_cond_broadcast((pthread_cond_t *)(v14 + 22));
        v21 = v12 - v22;
        if ( v12 != v22 )
          return _pipe_push(v14, &v13[v22], v21, v11);
      }
      else
      {
        return pthread_mutex_unlock((pthread_mutex_t *)(v14 + 15));
      }
    }
    else
    {
      return pthread_mutex_unlock((pthread_mutex_t *)(v14 + 15));
    }
  }
  return result;
}
