void __fastcall sub_192FF8(int a1, int a2, _DWORD *a3)
{
  char *v3; // r9
  int v4; // r7
  void *v7; // r8
  void *v8; // r9
  int v9; // r0
  int v10; // r8
  int v11; // r10
  __int64 v12; // r4
  _QWORD *v13; // r0
  int v14; // r4
  int (__fastcall *v15)(int, int); // r5
  int v16; // r0
  bool v17; // zf
  int v18; // r0
  int v19; // r0
  _DWORD *v20; // r9
  void *v21; // r10
  int *v22; // r0
  int *v23; // r4
  int v24; // r7
  int v25; // r0
  _DWORD *v26; // r8
  int v27; // r0
  int v28; // r3
  int v29; // r1
  int v30; // r4
  int v31; // r0
  int v32; // r3
  _DWORD *v33; // r0
  int v34; // r4
  const char *v35; // r8
  char *v36; // r0
  int v37; // r8
  char *v38; // r0
  int v39; // [sp+14h] [bp-28h] BYREF
  _DWORD v40[9]; // [sp+18h] [bp-24h] BYREF

  v4 = a1;
  if ( dword_4879D8 )
  {
    v37 = *(_DWORD *)sub_242FF0(a1);
    v3 = (char *)sub_25ACB4(v4, a3[2]);
    v38 = sub_988A8(a3[4], a3[5]);
    a1 = sub_2594D8(v37, "jit_register_code, symfile_addr = %s, symfile_size = %s\n", v3, v38);
  }
  v40[0] = sub_191EAC;
  v40[1] = sub_192288;
  v40[2] = 1647020;
  v40[3] = 1645952;
  v40[4] = &loc_192780;
  v40[5] = 1647524;
  v39 = a2;
  v40[6] = sub_191DBC;
  if ( !dword_4879DC )
    v3 = (char *)v40;
  v40[7] = &v39;
  if ( !dword_4879DC )
    goto LABEL_23;
  v7 = sub_93050(a3[4]);
  v8 = sub_92E50();
  if ( sub_230048(a3[2], v7, a3[4]) )
  {
    sub_92E68((int)v8);
    v3 = (char *)v40;
    free(v7);
    if ( !dword_4879D8 )
      goto LABEL_8;
    goto LABEL_22;
  }
  sub_92E68((int)v8);
  v3 = (char *)v40;
  if ( (*(int (**)(void))(*(_DWORD *)dword_4879DC + 8))() == 1 )
  {
    free(v7);
    return;
  }
  free(v7);
  if ( dword_4879D8 )
  {
LABEL_22:
    v33 = (_DWORD *)sub_242FF0(v9);
    a1 = sub_2594D8(*v33, "Could not read symtab using the loaded JIT reader.\n");
LABEL_23:
    if ( dword_4879D8 )
    {
      v34 = *(_DWORD *)sub_242FF0(a1);
      v35 = (const char *)sub_25ACB4(v4, a3[2]);
      v36 = sub_988A8(a3[4], a3[5]);
      sub_2594D8(v34, "jit_register_code, symfile_addr = %s, symfile_size = %s\n", v35, v36);
    }
  }
LABEL_8:
  v10 = a3[2];
  v11 = dword_47ACA8;
  v12 = *((_QWORD *)a3 + 2);
  v13 = sub_93050(0x10u);
  *(_DWORD *)v13 = v10;
  v13[1] = v12;
  sub_162ED8((int **)v3, (int)"<in-memory>", v11, (int)sub_191D78, (int)v13, 1646040, (int)sub_191D90, (int)sub_1922D4);
  if ( !v40[0] )
  {
    sub_25A710("Error opening JITed symbol file, ignoring it.\n");
LABEL_26:
    if ( v40[0] )
      ((void (*)(void))loc_1625D0)();
    return;
  }
  if ( !sub_2AA894(v40[0], 1) )
  {
    sub_259880("JITed symbol file is not an object file, ignoring it.\n");
    goto LABEL_26;
  }
  v14 = ((int (__fastcall *)(int))loc_163ED8)(v4);
  v15 = *(int (__fastcall **)(int, int))(v14 + 36);
  v16 = sub_2A67D8(v40[0]);
  v17 = v14 == v15(v14, v16);
  v18 = v40[0];
  if ( !v17 )
  {
    v19 = sub_2A67D8(v40[0]);
    sub_946D8(
      "JITed object file architecture %s is not compatible with target architecture %s.",
      *(const char **)(v19 + 24),
      *(const char **)(v14 + 24));
    v18 = v40[0];
  }
  v20 = (_DWORD *)sub_211DE4(*(_DWORD *)(v18 + 108));
  v21 = (void *)sub_2589B0();
  v22 = (int *)v40[0];
  v23 = *(int **)(v40[0] + 100);
  if ( v23 )
  {
    v24 = 0;
    do
    {
      while ( (v23[5] & 3) == 0 )
      {
        v23 = (int *)v23[3];
        if ( !v23 )
          goto LABEL_17;
      }
      v25 = *v23;
      v26 = &v20[3 * v24];
      v26[1] = v23[7];
      v27 = sub_32727C(v25);
      v28 = v23[2];
      ++v24;
      v23 = (int *)v23[3];
      v26[2] = v27;
      v26[3] = v28;
    }
    while ( v23 );
LABEL_17:
    v22 = (int *)v40[0];
  }
  else
  {
    v24 = 0;
  }
  v29 = *v22;
  *v20 = v24;
  v30 = sub_2138BC(v22, v29, 0, v20, 66, 0);
  sub_92648(v21);
  v31 = sub_192570(v30);
  v32 = v40[0];
  *(_DWORD *)(v31 + 8) = a2;
  if ( v32 )
    ((void (__fastcall *)(int))loc_1625D0)(v32);
}
