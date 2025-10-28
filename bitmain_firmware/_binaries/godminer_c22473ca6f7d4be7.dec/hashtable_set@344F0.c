int __fastcall hashtable_set(unsigned int *a1, char *a2, unsigned int a3)
{
  unsigned int v4; // r8
  unsigned int v7; // r8
  unsigned int **v8; // r5
  unsigned int *v9; // r1
  unsigned int **v10; // r3
  unsigned int *v11; // r3
  int v12; // r8
  unsigned int v13; // lr
  unsigned int *v14; // r12
  int v15; // r0
  unsigned int *v16; // r2
  unsigned int **v17; // r0
  unsigned int v18; // r2
  size_t v19; // r0
  int *v20; // r3
  size_t v21; // r10
  int v22; // r9
  int *v23; // r5
  int v24; // r0
  int v25; // r8
  _DWORD *v26; // r0
  unsigned int *v27; // r3
  unsigned int v28; // r2
  unsigned int v29; // r2
  void *v31; // r0
  unsigned int *v32; // r8
  unsigned int *v33; // r3
  unsigned int v34; // r2
  unsigned int v35; // r1
  int v36; // r3

  v4 = a1[2];
  if ( *a1 >> v4 )
  {
    v7 = v4 + 1;
    v8 = (unsigned int **)jsonp_malloc((void *)(8 << v7));
    if ( !v8 )
      return -1;
    jsonp_free((void *)a1[1]);
    a1[1] = (unsigned int)v8;
    a1[2] = v7;
    v9 = a1 + 3;
    if ( 1 << v7 )
    {
      v10 = v8;
      do
      {
        v10[1] = v9;
        *v10 = v9;
        v10 += 2;
      }
      while ( (unsigned int **)((char *)v8 + (8 << v7)) != v10 );
    }
    v11 = (unsigned int *)a1[4];
    a1[3] = (unsigned int)v9;
    v12 = ~(-1 << v7);
    a1[4] = (unsigned int)v9;
    if ( v11 != v9 )
    {
      do
      {
        while ( 1 )
        {
          v14 = (unsigned int *)v11[1];
          v15 = v11[4] & v12;
          v16 = v8[2 * v15];
          v17 = &v8[2 * v15];
          if ( v16 == v9 && v9 == v17[1] )
            break;
          v13 = *v16;
          v11[1] = (unsigned int)v16;
          *v11 = v13;
          *(_DWORD *)(*v16 + 4) = v11;
          *v16 = (unsigned int)v11;
          *v17 = v11;
          v11 = v14;
          if ( v14 == v9 )
            goto LABEL_12;
        }
        v18 = a1[3];
        v11[1] = (unsigned int)v9;
        *v11 = v18;
        *(_DWORD *)(a1[3] + 4) = v11;
        a1[3] = (unsigned int)v11;
        v17[1] = v11;
        *v17 = v11;
        v11 = v14;
      }
      while ( v14 != v9 );
LABEL_12:
      v8 = (unsigned int **)a1[1];
      v12 = ~(-1 << a1[2]);
    }
  }
  else
  {
    v8 = (unsigned int **)a1[1];
    v12 = ~(-1 << v4);
  }
  v19 = strlen(a2);
  LOWORD(v20) = 24204;
  v21 = v19;
  HIWORD(v20) = (unsigned int)&unk_164D64 >> 16;
  v22 = sub_33E34((unsigned __int16 *)a2, v19, *v20);
  v23 = (int *)&v8[2 * (v12 & v22)];
  v24 = sub_34378((int)a1, v23, a2, v22);
  v25 = v24;
  if ( v24 )
  {
    v26 = *(_DWORD **)(v24 + 20);
    if ( v26 && v26[1] != -1 )
    {
      v27 = v26 + 1;
      __dmb(0xBu);
      do
      {
        v28 = __ldrex(v27);
        v29 = v28 - 1;
      }
      while ( __strex(v29, v27) );
      if ( !v29 )
        json_delete(v26);
    }
    *(_DWORD *)(v25 + 20) = a3;
    return 0;
  }
  v31 = jsonp_malloc((void *)(v21 + 25));
  v32 = (unsigned int *)v31;
  if ( !v31 )
    return -1;
  *((_DWORD *)v31 + 4) = v22;
  strncpy((char *)v31 + 24, a2, v21 + 1);
  v33 = (unsigned int *)*v23;
  v34 = (unsigned int)(v32 + 2);
  v32[5] = a3;
  v32[1] = (unsigned int)v32;
  *v32 = (unsigned int)v32;
  v32[3] = (unsigned int)(v32 + 2);
  v32[2] = (unsigned int)(v32 + 2);
  if ( v33 == a1 + 3 && v33 == (unsigned int *)v23[1] )
  {
    *v32 = a1[3];
    v32[1] = (unsigned int)v33;
    *(_DWORD *)(a1[3] + 4) = v32;
    a1[3] = (unsigned int)v32;
    v23[1] = (int)v32;
    *v23 = (int)v32;
  }
  else
  {
    *v32 = *v33;
    v32[1] = (unsigned int)v33;
    *(_DWORD *)(*v33 + 4) = v32;
    *v33 = (unsigned int)v32;
    *v23 = (int)v32;
  }
  v35 = a1[5];
  v36 = *a1;
  v32[3] = (unsigned int)(a1 + 5);
  v32[2] = v35;
  *(_DWORD *)(a1[5] + 4) = v34;
  a1[5] = v34;
  *a1 = v36 + 1;
  return 0;
}
