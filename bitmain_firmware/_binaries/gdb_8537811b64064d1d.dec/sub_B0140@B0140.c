void *__fastcall sub_B0140(int a1, int a2)
{
  int v3; // r7
  _DWORD *v4; // r4
  const char *v5; // r1
  int v6; // r9
  int v7; // r0
  int v8; // r1
  int v9; // r5
  int v10; // r1
  int v11; // r0
  int v12; // r10
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r8
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r1
  int v24; // r0
  int v25; // r1
  int v26; // r1
  int v27; // r0
  unsigned int *v28; // r0
  unsigned int v29; // r2
  unsigned int v30; // r3
  int v32; // r0
  size_t v33; // r8
  int v34; // r0
  const void *v35; // r0
  int v36; // r0
  int v37; // r2
  int v38; // r0
  int v39; // r0
  _DWORD *v40; // r4
  int v41; // r0
  int v42; // r1
  int v43; // r6
  int v44; // r5
  int v45; // r0
  int v46; // r0
  int v47; // r0
  int v48; // r10
  int v49; // r0
  int v50; // r8
  __int64 v51; // r0
  int v52; // r8
  int v53; // r0
  int v54; // r0
  int v55; // r0
  const char *v56; // r1
  int v57; // r3
  const char *v58; // r2
  bool v59; // zf
  int v60; // t1
  int v61; // r0
  __int64 v62; // r0
  int v63; // r2
  int v64; // [sp+Ch] [bp-140h]
  _DWORD v65[3]; // [sp+10h] [bp-13Ch] BYREF
  _DWORD src[76]; // [sp+1Ch] [bp-130h] BYREF

  v3 = sub_AFB14(a2);
  v4 = (_DWORD *)sub_AFB7C(dword_487D2C);
  if ( !*v4 )
  {
    v5 = sub_AFD9C();
    if ( v5 )
      sub_94708("%s. Aborting", v5);
  }
  v6 = sub_26DD58(v4[1], 0, a1);
  v7 = sub_26F84C(v6, v4[5]);
  v8 = v4[12];
  v9 = v7;
  src[3] = a1;
  if ( v8 == -1 )
  {
    v10 = v4[11];
    if ( v10 < 0 )
    {
      sub_1B2434(v65, a1);
      if ( v65[0] )
      {
        v56 = *(const char **)v65[0];
        v57 = **(unsigned __int8 **)v65[0];
        if ( **(_BYTE **)v65[0] )
        {
          v58 = v56 + 1;
          do
          {
            while ( 1 )
            {
              v59 = v57 == 95;
              v60 = *(unsigned __int8 *)v58++;
              v57 = v60;
              if ( !v59 || v57 != 95 )
                break;
              v56 = v58;
            }
          }
          while ( v57 );
        }
        strncpy((char *)&src[4], v56, 0x101u);
        LOBYTE(src[68]) = 0;
      }
      else
      {
        strcpy((char *)&src[4], "Ravenscar task");
      }
    }
    else
    {
      v11 = sub_26F84C(v7, v10);
      v12 = v11;
      if ( dword_46BBF8 )
      {
        v64 = sub_26BC98(v11);
        dword_4781F0 = sub_9E598(v64, "P_ARRAY", 0);
        v61 = sub_9E598(v64, "P_BOUNDS", 0);
        dword_4781F4 = v61;
        LODWORD(v62) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v64 + 24) + 24) + 24 * v61 + 12);
        HIDWORD(v62) = *(_DWORD *)(v62 + 24);
        v63 = (char)*(_BYTE *)HIDWORD(v62);
        if ( v63 == 1 )
        {
          LODWORD(v62) = *(_DWORD *)(HIDWORD(v62) + 20);
          v63 = **(char **)(v62 + 24);
        }
        if ( v63 != 3 )
LABEL_48:
          sub_94708("Unknown task name format. Aborting", HIDWORD(v62));
        dword_4781F8 = sub_9E598(v62, "UB0", 0);
        dword_46BBF8 = 0;
      }
      v13 = sub_26F84C(v12, dword_4781F4);
      v14 = sub_262134(v13);
      v15 = sub_26F84C(v14, dword_4781F8);
      v16 = sub_26EB44(v15);
      if ( v16 >= 256 )
        v17 = 256;
      else
        v17 = v16;
      v18 = sub_26F84C(v12, dword_4781F0);
      v19 = sub_262134(v18);
      v20 = ((int (__fastcall *)(int))loc_26C0C4)(v19);
      sub_FA86C(v20, &src[4], v17);
      *((_BYTE *)&src[4] + v17) = 0;
    }
  }
  else
  {
    v32 = sub_26F84C(v7, v8);
    v33 = sub_26EB44(v32);
    v34 = sub_26F84C(v9, v4[11]);
    v35 = (const void *)sub_26E9A0(v34);
    memcpy(&src[4], v35, v33);
    *((_BYTE *)&src[4] + v33) = 0;
  }
  v21 = sub_26F84C(v9, v4[8]);
  src[69] = sub_26EB44(v21);
  v22 = sub_26F84C(v9, v4[10]);
  src[70] = sub_26EB44(v22);
  v23 = v4[9];
  if ( v23 >= 0 )
  {
    v24 = sub_26F84C(v9, v23);
    src[71] = sub_26EBD0(v24);
  }
  else
  {
    src[71] = 0;
  }
  v25 = v4[7];
  if ( v25 > 0 && (int)v4[6] > 0 )
  {
    v48 = sub_26F84C(v6, v25);
    v49 = sub_26F84C(v6, v4[6]);
    v50 = sub_A8A64(v49);
    v51 = sub_26EB44(v48);
    v52 = sub_25CE34(v50, HIDWORD(v51), v51, HIDWORD(v51));
    v53 = sub_26BC98(v52);
    v54 = sub_9E598(v53, "called_task", 0);
    v55 = sub_26F84C(v52, v54);
    src[72] = sub_26EBD0(v55);
  }
  else
  {
    src[72] = 0;
  }
  src[73] = 0;
  v26 = v4[14];
  if ( v26 >= 0 )
  {
    v36 = sub_26F84C(v9, v26);
    v37 = sub_26EBD0(v36);
    if ( v37 )
    {
      v38 = sub_26DD58(v4[4], 0, v37);
      v39 = sub_26F84C(v38, v4[19]);
      src[73] = sub_26EBD0(v39);
    }
  }
  v27 = sub_26F84C(v9, v4[16]);
  src[74] = sub_26EB44(v27);
  if ( src[69] == 2 )
  {
    src[0] = dword_475848;
    src[1] = dword_47584C;
    src[2] = dword_475850;
    v28 = *(unsigned int **)(v3 + 20);
    if ( v28 )
      goto LABEL_20;
  }
  else
  {
    v40 = (_DWORD *)sub_AFB7C(dword_487D2C);
    v41 = sub_26F84C(v9, v40[15]);
    v42 = v40[18];
    v43 = v41;
    if ( v42 >= 0 )
    {
      v45 = sub_26F84C(v41, v42);
      v44 = sub_26EBD0(v45);
    }
    else
    {
      v44 = 0;
    }
    v46 = sub_26F84C(v43, v40[17]);
    v47 = sub_26EB44(v46);
    off_489B3C(v65, &dword_4899A0, v44, v47);
    src[0] = v65[0];
    src[1] = v65[1];
    src[2] = v65[2];
    v28 = *(unsigned int **)(v3 + 20);
    if ( v28 )
    {
LABEL_20:
      v29 = v28[1];
      v30 = *v28;
      if ( v29 != *v28 )
        goto LABEL_21;
    }
  }
  v28 = sub_99EE0(v28, 1, 8, 300);
  *(_DWORD *)(v3 + 20) = v28;
  v30 = *v28;
  v29 = v28[1];
LABEL_21:
  if ( v30 >= v29 )
  {
    v62 = sub_94728(
            (int)"ada-tasks.c",
            805,
            "%s: Assertion `%s' failed.",
            "ada_task_info_s* VEC_ada_task_info_s_quick_push(VEC_ada_task_info_s*, const ada_task_info_s*, const char*, unsigned int)",
            "quick_push");
    goto LABEL_48;
  }
  *v28 = v30 + 1;
  return memcpy(&v28[75 * v30 + 2], src, 0x12Cu);
}
