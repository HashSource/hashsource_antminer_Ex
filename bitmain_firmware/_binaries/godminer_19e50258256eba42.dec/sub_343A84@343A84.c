size_t __fastcall sub_343A84(_DWORD *a1, void *a2, size_t a3)
{
  size_t n; // r3
  int v5; // r0
  unsigned int v7[7]; // [sp+18h] [bp-4Ch] BYREF
  size_t v8; // [sp+34h] [bp-30h]
  void *dest; // [sp+38h] [bp-2Ch]
  _DWORD *v10; // [sp+3Ch] [bp-28h]
  unsigned int v11; // [sp+44h] [bp-20h] BYREF
  unsigned int v12; // [sp+48h] [bp-1Ch]
  unsigned int v13; // [sp+4Ch] [bp-18h]
  unsigned int v14; // [sp+50h] [bp-14h]
  int v15; // [sp+54h] [bp-10h]
  unsigned int v16; // [sp+58h] [bp-Ch]
  size_t v17; // [sp+5Ch] [bp-8h]

  v10 = a1;
  dest = a2;
  v8 = a3;
  if ( !a3 )
    return 0;
  v17 = 0;
  pthread_mutex_lock((pthread_mutex_t *)(v10 + 9));
  sub_343680(&v11, v10);
  v16 = sub_342474(v11, v12, v13, v14, v15);
  if ( v16 )
  {
    sub_3426AC(v10);
    n = v16;
    if ( v8 < v16 )
      n = v8;
    v17 = n;
    sub_343780(v7, v11, v12, v13, v14, v15, (char *)dest, n, v10 + 5);
    v11 = v7[0];
    v12 = v7[1];
    v13 = v7[2];
    v14 = v7[3];
    v15 = v7[4];
    sub_3426AC(v10);
    sub_343924(v10, v11, v12, v13, v14, v15);
    v5 = sub_34231C((int)v10);
    if ( v17 == v5 )
      pthread_cond_signal((pthread_cond_t *)(v10 + 34));
    else
      pthread_cond_broadcast((pthread_cond_t *)(v10 + 34));
    return v17;
  }
  else
  {
    pthread_mutex_unlock((pthread_mutex_t *)(v10 + 9));
    return 0;
  }
}
