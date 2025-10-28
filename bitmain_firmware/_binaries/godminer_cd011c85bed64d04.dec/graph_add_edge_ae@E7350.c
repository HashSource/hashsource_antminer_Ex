int __fastcall graph_add_edge_ae(int result, int a2, int a3)
{
  int v3; // r7
  char *v4; // r8
  int v5; // r5
  int v6; // r4
  char *v7; // r10
  int v8; // r11
  int v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // lr
  int v12; // r1
  int v13; // r12
  char *j; // r6
  int v15; // t1
  char *i; // r9
  int v17; // t1
  int v18; // r0
  unsigned int v19; // r2
  int v20; // r3
  unsigned int v21; // r1
  char *v22; // r7
  char *v23; // r3
  int v24; // lr
  int v25; // t1
  int v26; // t1
  int v27; // r4
  unsigned int v28; // r3
  unsigned int v29; // r6
  unsigned int *v30; // r2
  unsigned int v31; // lr
  unsigned int v32; // r12
  int v33; // r1
  int v34; // r6
  int v35; // r2
  int *v36; // r3
  unsigned int v37; // r0
  unsigned int v38; // r12
  bool v39; // zf

  v3 = 2 * a2;
  if ( !(2 * a2) )
    return result;
  v4 = (char *)&us[512 * result];
  v5 = result;
  v6 = (2 * a3) | 1;
  v7 = (char *)&vs[512 * result];
  v8 = sub_E7270(result, 2 * a2, (int)v4);
  result = sub_E7270(v5, v6, (int)v7);
  if ( !v8 || !result )
    return result;
  v9 = v5 << 9;
  v10 = v8 - 1;
  v11 = result - 1;
  v12 = us[512 * v5 - 1 + v8];
  v13 = vs[512 * v5 - 1 + result];
  if ( v12 != v13 )
  {
    if ( v10 >= v11 )
    {
      if ( result != 1 )
      {
        for ( i = (char *)&vs[v9 - 1 + result]; ; v13 = *(_DWORD *)i )
        {
          v17 = *((_DWORD *)i - 1);
          i -= 4;
          cuckoo_hash_set(v5, v13, v17);
          if ( i == v7 )
            break;
        }
      }
      return cuckoo_hash_set(v5, v6, v3);
    }
    else
    {
      if ( v8 != 1 )
      {
        for ( j = (char *)&us[v9 - 1 + v8]; ; v12 = *(_DWORD *)j )
        {
          v15 = *((_DWORD *)j - 1);
          j -= 4;
          cuckoo_hash_set(v5, v12, v15);
          if ( j == v4 )
            break;
        }
      }
      return cuckoo_hash_set(v5, v3, v6);
    }
  }
  if ( v10 >= v11 )
    v18 = result - 1;
  else
    v18 = v8 - 1;
  v19 = v10 - v18;
  result = v11 - v18;
  if ( vs[v9 + result] == us[v9 + v19] )
  {
    v27 = result;
    v21 = v19;
  }
  else
  {
    v20 = v9 + 1;
    v21 = v19;
    v22 = (char *)&us[v19 - 1 + v20];
    v23 = (char *)&vs[result - 1 + v20];
    do
    {
      v25 = *((_DWORD *)v22 + 1);
      v22 += 4;
      v24 = v25;
      ++v21;
      v26 = *((_DWORD *)v23 + 1);
      v23 += 4;
      v27 = result + v21 - v19;
    }
    while ( v24 != v26 );
  }
  if ( v21 + v27 != 41 )
    return result;
  result = (int)&gEdges;
  v28 = v21 - 1;
  v29 = us[512 * v5] >> 1;
  v30 = (unsigned int *)((char *)&gEdges + 336 * v5);
  v30[1] = vs[512 * v5] >> 1;
  *v30 = v29;
  if ( !v21 )
  {
    v34 = 40;
    v33 = 1;
LABEL_28:
    v35 = v34;
    v36 = (int *)((char *)&gEdges + 336 * v5 + 8 * v33 + 4);
    do
    {
      v37 = *(_DWORD *)&v7[4 * (v27 & 0xFFFFFFFE)];
      v38 = *(_DWORD *)&v7[4 * (v35 | 1)];
      v39 = v35 == 0;
      v27 = v35--;
      result = v37 >> 1;
      *(v36 - 1) = v38 >> 1;
      *v36 = result;
      v36 += 2;
    }
    while ( !v39 );
    v33 += v34 + 1;
    goto LABEL_32;
  }
  do
  {
    v31 = *(_DWORD *)&v4[4 * (v28 | 1)];
    v32 = *(_DWORD *)&v4[4 * ((v28-- + 1) & 0xFFFFFFFE)];
    v30 += 2;
    v30[1] = v31 >> 1;
    *v30 = v32 >> 1;
  }
  while ( v28 != -1 );
  v33 = v21 + 1;
  v34 = v27 - 1;
  if ( v27 )
    goto LABEL_28;
LABEL_32:
  if ( v33 == 42 )
    gSols[172 * v5] = 1;
  return result;
}
