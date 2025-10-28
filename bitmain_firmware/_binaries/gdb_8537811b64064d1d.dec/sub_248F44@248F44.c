int sub_248F44()
{
  int v0; // r3
  int v1; // r5
  void *v2; // r0
  int v3; // r0
  bool v4; // cc
  void *v5; // r0
  unsigned int *v6; // r3
  unsigned int v7; // r11
  int v8; // r8
  int v9; // r9
  int v10; // r2
  int *v11; // r3
  int v12; // r2
  int v13; // r2
  int v14; // r3
  int v15; // r0
  int v16; // r2
  int v17; // r3
  char *v18; // r0
  int v19; // r2
  int v20; // r3
  int v21; // r2
  int v22; // r3
  int v23; // r2
  int v24; // r3
  int v25; // r2
  int v26; // r3
  void *v27; // r0
  unsigned int v28; // r2
  _DWORD *v29; // r5
  int v30; // r4
  _DWORD *v31; // r6
  int v32; // r3
  int v33; // r9
  size_t v34; // r0
  char *v35; // lr
  int v36; // r2
  int v37; // r3
  int v38; // r2
  int v39; // r3
  _DWORD *v40; // r9
  int v41; // r8
  int v42; // t1
  int v43; // r2
  int v44; // r3
  int v45; // r2
  int v46; // r2
  int v47; // r3
  int *v49; // [sp+Ch] [bp-F8h]
  int v50; // [sp+Ch] [bp-F8h]
  int v51; // [sp+18h] [bp-ECh]
  void *v52; // [sp+2Ch] [bp-D8h]
  unsigned int *v53; // [sp+34h] [bp-D0h] BYREF
  _DWORD s[10]; // [sp+38h] [bp-CCh] BYREF
  void *v55[20]; // [sp+60h] [bp-A4h] BYREF
  void *ptr[20]; // [sp+B0h] [bp-54h] BYREF

  v0 = *(_DWORD *)sub_243004();
  ptr[0] = &ptr[2];
  v1 = v0;
  v51 = v0;
  sub_248B4C(ptr, "StaticTracepointMarkersTable", (int)"");
  sub_257074(v1, 5, -1, ptr);
  if ( ptr[0] != &ptr[2] )
    sub_339E8C(ptr[0]);
  v55[0] = &v55[2];
  sub_248B4C(v55, "counter", (int)"");
  ptr[0] = &ptr[2];
  sub_248B4C(ptr, "Cnt", (int)"");
  sub_2571E0(v51, 7, -1, v55, ptr);
  if ( ptr[0] != &ptr[2] )
    sub_339E8C(ptr[0]);
  if ( v55[0] != &v55[2] )
    sub_339E8C(v55[0]);
  v55[0] = &v55[2];
  sub_248B4C(v55, "marker-id", (int)"");
  ptr[0] = &ptr[2];
  sub_248B4C(ptr, "ID", (int)"");
  sub_2571E0(v51, 40, -1, v55, ptr);
  if ( ptr[0] != &ptr[2] )
    sub_339E8C(ptr[0]);
  if ( v55[0] != &v55[2] )
    sub_339E8C(v55[0]);
  v55[0] = &v55[2];
  sub_248B4C(v55, "enabled", (int)"");
  ptr[0] = &ptr[2];
  sub_248B4C(ptr, &dword_387AD0, (int)&dword_387AD0 + 3);
  sub_2571E0(v51, 3, -1, v55, ptr);
  if ( ptr[0] != &ptr[2] )
    sub_339E8C(ptr[0]);
  v2 = v55[0];
  if ( v55[0] != &v55[2] )
    sub_339E8C(v55[0]);
  v3 = sub_16F67C((int)v2);
  v4 = ((int (__fastcall *)(int))loc_166694)(v3) <= 32;
  v55[0] = &v55[2];
  sub_248B4C(v55, "addr", (int)"");
  ptr[0] = &ptr[2];
  sub_248B4C(ptr, "Address", (int)"");
  if ( v4 )
    sub_2571E0(v51, 10, -1, v55, ptr);
  else
    sub_2571E0(v51, 18, -1, v55, ptr);
  if ( ptr[0] != &ptr[2] )
    sub_339E8C(ptr[0]);
  if ( v55[0] != &v55[2] )
    sub_339E8C(v55[0]);
  v55[0] = &v55[2];
  sub_248B4C(v55, "what", (int)"");
  ptr[0] = &ptr[2];
  sub_248B4C(ptr, "What", (int)"");
  sub_2571E0(v51, 40, 2, v55, ptr);
  if ( ptr[0] != &ptr[2] )
    sub_339E8C(ptr[0]);
  if ( v55[0] != &v55[2] )
    sub_339E8C(v55[0]);
  sub_257254(v51);
  v53 = (unsigned int *)off_489C00();
  v5 = sub_92564(2390372, (int)&v53);
  v6 = v53;
  v52 = v5;
  if ( v53 && *v53 )
  {
    v7 = 0;
    do
    {
      v28 = v7 + 2;
      ++v7;
      v29 = (_DWORD *)v6[v28];
      v30 = *(_DWORD *)sub_243004();
      memset(s, 0, sizeof(s));
      v31 = (_DWORD *)((int (__fastcall *)(_DWORD))loc_CD624)(v29[1]);
      sub_2578D4(v30, 0);
      sub_25752C(v30, "count", v7);
      sub_257610(v30, "marker-id", v29[2]);
      if ( v31 )
      {
        if ( *v31 )
          v32 = 121;
        else
          v32 = 110;
      }
      else
      {
        v32 = 110;
      }
      sub_2576BC(v30, "enabled", "%c", v32);
      sub_25739C(v30, 2);
      strcpy((char *)v55, "                                   ");
      v33 = ((int (__fastcall *)(_DWORD))loc_166694)(*v29);
      v34 = strlen((const char *)v55);
      v35 = (char *)v55 + v34;
      if ( v33 <= 32 )
      {
        *(void **)((char *)v55 + v34) = *(void **)"           ";
        strcpy(v35 + 4, "       ");
      }
      else
      {
        *(void **)((char *)v55 + v34) = *(void **)"                   ";
        strcpy(v35 + 4, "               ");
      }
      strcpy((char *)ptr, "         ");
      sub_257658(v30, "addr", *v29, v29[1]);
      sub_21DED4((int)s, v29[1]);
      v8 = s[1];
      v9 = s[4];
      v11 = sub_C3470(v29[1], 0);
      v49 = v11;
      if ( v11 )
      {
        sub_2573A8(v30, "in ", v10, v11);
        if ( dword_46D448 )
          v12 = sub_21B3EC((int)v49);
        else
          v12 = *v49;
        sub_257610(v30, "func", v12);
        sub_2573E8(v30, v55);
        sub_2573A8(v30, " at ", v13, v14);
      }
      else
      {
        sub_2575CC(v30, "func");
      }
      if ( v8 )
      {
        v15 = ((int (__fastcall *)(int))loc_2043FC)(v8);
        sub_257610(v30, "file", v15);
        sub_2573A8(v30, ":", v16, v17);
        if ( sub_257418(v30) )
        {
          v18 = sub_204330(v8);
          sub_257610(v30, "fullname", v18);
        }
        else
        {
          sub_2575CC(v30, "fullname");
        }
        sub_25752C(v30, "line", v9);
      }
      else
      {
        sub_2575CC(v30, "fullname");
        sub_2575CC(v30, "line");
      }
      sub_2573A8(v30, &word_356660, v19, v20);
      sub_2573A8(v30, ptr, v21, v22);
      sub_2573A8(v30, "Data: \"", v23, v24);
      sub_257610(v30, "extra-data", v29[3]);
      sub_2573A8(v30, "\"\n", v25, v26);
      if ( v31 )
      {
        if ( *v31 )
        {
          sub_2578D4(v30, 0);
          sub_2573A8(v30, ptr, v36, v37);
          sub_2573A8(v30, "Probed by static tracepoints: ", v38, v39);
          if ( *v31 )
          {
            v40 = v31 + 2;
            v50 = v31[2];
            v41 = 0;
            sub_2573A8(v30, "#", "tracepoint-id", "#");
            while ( 1 )
            {
              sub_25752C(v30, "tracepoint-id", *(_DWORD *)(v50 + 24));
              if ( (unsigned int)++v41 >= *v31 )
                break;
              v42 = v40[1];
              ++v40;
              v50 = v42;
              sub_2573A8(v30, ", ", v45, v42);
              sub_2573A8(v30, "#", v43, v44);
            }
          }
          sub_257374(v30, 0);
          if ( sub_257418(v30) )
            sub_25752C(v30, "number-of-tracepoints", *v31);
          else
            sub_2573A8(v30, &word_356660, v46, v47);
        }
        free(v31);
      }
      sub_257374(v30, 0);
      v27 = (void *)v29[2];
      if ( v27 )
        free(v27);
      v6 = v53;
      v29[2] = 0;
    }
    while ( v6 && v7 < *v6 );
  }
  sub_92648(v52);
  return sub_257298(v51);
}
