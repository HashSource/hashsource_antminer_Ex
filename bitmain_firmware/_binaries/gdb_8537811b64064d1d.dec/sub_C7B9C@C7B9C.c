int __fastcall sub_C7B9C(int a1)
{
  int *v1; // r3
  unsigned int v2; // r6
  int v3; // r5
  _DWORD *v4; // r0
  int v5; // r2
  int v6; // r3
  _DWORD *v7; // r0
  int result; // r0
  _DWORD *v9; // r0
  int v10; // r2
  int v11; // r3
  int v12; // r0
  int v13; // r9
  int v14; // r0
  _DWORD *v15; // r3
  unsigned int v16; // r10
  unsigned int v17; // r5
  _DWORD *v18; // r0
  int v19; // r2
  int v20; // r3
  _DWORD *v21; // r0
  int v22; // r0
  _DWORD *v23; // r0
  int v24; // r2
  int v25; // r3
  int v26; // r0
  unsigned int *v27; // r3
  _DWORD *v28; // r0
  int v29; // r2
  int v30; // r3
  int v31; // r0
  _DWORD *v32; // r0
  int v33; // r7
  char *v34; // r0
  _DWORD *v35; // r0
  int v36; // r2
  int v37; // r3
  int v38; // r0
  int v39; // r10
  int v40; // r0
  _DWORD *v41; // r3
  unsigned int v42; // r11
  unsigned int v43; // r5
  _DWORD *v44; // r0
  int v45; // r2
  int v46; // r3
  _DWORD *v47; // r0
  int v48; // r0
  _DWORD *v49; // r0
  int v50; // r2
  int v51; // r3
  int v52; // r0
  unsigned int *v53; // r3

  v1 = *(int **)(dword_487D2C + 60);
  v2 = *(_DWORD *)(dword_487D2C + 56);
  if ( v1 )
    v3 = *v1;
  else
    v3 = 0;
  if ( v2 )
    v2 = *(_DWORD *)v2;
  if ( !a1 )
  {
    if ( !(v2 | v3) )
    {
      v28 = (_DWORD *)sub_243004(0);
      v31 = sub_2573A8(*v28, "Stopped due to shared library event (no libraries added or removed)\n", v29, v30);
      v32 = (_DWORD *)sub_243004(v31);
      result = sub_257418(*v32);
      if ( !result )
        return result;
      goto LABEL_21;
    }
    v4 = (_DWORD *)sub_243004(0);
    a1 = sub_2573A8(*v4, "Stopped due to shared library event:\n", v5, v6);
  }
  v7 = (_DWORD *)sub_243004(a1);
  result = sub_257418(*v7);
  if ( !result )
  {
    if ( !v3 )
      goto LABEL_11;
    goto LABEL_22;
  }
LABEL_21:
  v33 = *(_DWORD *)sub_243004(result);
  v34 = sub_98384(12);
  result = sub_257610(v33, "reason", v34);
  if ( !v3 )
  {
LABEL_11:
    if ( !v2 )
      return result;
    goto LABEL_13;
  }
LABEL_22:
  v35 = (_DWORD *)sub_243004(result);
  v38 = sub_2573A8(*v35, "  Inferior unloaded ", v36, v37);
  v39 = *(_DWORD *)sub_243004(v38);
  v40 = sub_2578D4(v39, 1);
  v41 = *(_DWORD **)(dword_487D2C + 60);
  if ( v41 && *v41 )
  {
    v42 = v41[2];
    v43 = 0;
    while ( 1 )
    {
      v47 = (_DWORD *)sub_243004(v40);
      v48 = sub_257610(*v47, "library", v42);
      v49 = (_DWORD *)sub_243004(v48);
      v52 = sub_2573A8(*v49, &word_356660, v50, v51);
      ++v43;
      v53 = *(unsigned int **)(dword_487D2C + 60);
      if ( !v53 || v43 >= *v53 )
        break;
      v42 = v53[v43 + 2];
      v44 = (_DWORD *)sub_243004(v52);
      v40 = sub_2573A8(*v44, "    ", v45, v46);
    }
  }
  result = sub_257374(v39, 1);
  if ( v2 )
  {
LABEL_13:
    v9 = (_DWORD *)sub_243004(result);
    v12 = sub_2573A8(*v9, "  Inferior loaded ", v10, v11);
    v13 = *(_DWORD *)sub_243004(v12);
    v14 = sub_2578D4(v13, 1);
    v15 = *(_DWORD **)(dword_487D2C + 56);
    if ( v15 && *v15 )
    {
      v16 = v15[2];
      v17 = 0;
      while ( 1 )
      {
        v21 = (_DWORD *)sub_243004(v14);
        v22 = sub_257610(*v21, "library", v16 + 520);
        v23 = (_DWORD *)sub_243004(v22);
        v26 = sub_2573A8(*v23, &word_356660, v24, v25);
        ++v17;
        v27 = *(unsigned int **)(dword_487D2C + 56);
        if ( !v27 || v17 >= *v27 )
          break;
        v16 = v27[v17 + 2];
        v18 = (_DWORD *)sub_243004(v26);
        v14 = sub_2573A8(*v18, "    ", v19, v20);
      }
    }
    return sub_257374(v13, 1);
  }
  return result;
}
