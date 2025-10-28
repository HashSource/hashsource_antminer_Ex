void __fastcall sub_180CD4(const char *a1, int a2, int a3)
{
  int *v6; // r0
  int v7; // r4
  _DWORD *v8; // r0
  void *v9; // r8
  int v10; // r6
  int v11; // r0
  int v12; // r0
  int v13; // r10
  void (__fastcall *v14)(int, int, void **, int, int); // r11
  const char *v15; // r0
  char *v16; // r1
  size_t v17; // r0
  int v18; // r2
  _BYTE *v19; // r0
  int v20; // r0
  int v21; // r0
  _DWORD *v22; // r4
  _DWORD *v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r2
  int v27; // r3
  int v28; // r0
  int v29; // r0
  int v30; // r2
  int v31; // r3
  int v32; // r0
  int v33; // r0
  int v34; // r0
  const char *v35; // [sp+Ch] [bp-38h]
  _DWORD v36[4]; // [sp+10h] [bp-34h] BYREF
  int v37; // [sp+20h] [bp-24h] BYREF
  void *ptr; // [sp+24h] [bp-20h] BYREF
  void *v39; // [sp+28h] [bp-1Ch] BYREF
  int v40; // [sp+2Ch] [bp-18h]
  _DWORD v41[5]; // [sp+30h] [bp-14h] BYREF

  v6 = (int *)sub_243004(a1);
  v7 = *v6;
  sub_243C5C(v6);
  if ( !sub_98FA0(&dword_4878EC, &dword_475848) && sub_22EBE4(0) )
  {
    v32 = sub_230EB8();
    if ( a2 )
    {
      v32 = sub_25A40C("The program being debugged has been started already.\nStart it from the beginning? ");
      if ( !v32 )
        sub_94708("Program not restarted.");
    }
    sub_22EF3C(v32);
  }
  sub_187ED8();
  sub_CD3C4();
  sub_23082C(a2);
  sub_FA48C();
  sub_215834();
  v8 = sub_17EBFC(&ptr, a1, &v37);
  v9 = ptr;
  v10 = sub_230F5C(v8);
  v11 = sub_18012C(v10, v37);
  if ( dword_487950 )
  {
    v11 = (*(int (__fastcall **)(int))(v10 + 360))(v10);
    if ( !v11 )
      sub_94708("The target does not support running in non-stop mode.");
  }
  if ( a3 == 1 )
  {
    v33 = sub_22042C(v11);
    sub_DAB60(v33);
  }
  v12 = sub_FA64C(0);
  v13 = v12;
  if ( v9 )
    v12 = sub_17FBCC(v9);
  if ( a2 )
  {
    sub_257610(v7, 0, "Starting program");
    sub_2573A8(v7, &word_3B6A28, v26, v27);
    if ( v13 )
      sub_257610(v7, "execfile", v13);
    v28 = sub_25739C(v7, 1);
    v29 = sub_17FF44(v28);
    sub_257610(v7, "infargs", v29);
    sub_2573A8(v7, &word_356660, v30, v31);
    v12 = sub_2573F4(v7);
  }
  v14 = *(void (__fastcall **)(int, int, void **, int, int))(v10 + 196);
  v15 = (const char *)sub_17FF44(v12);
  v16 = (char *)v15;
  v39 = v41;
  if ( v15 )
  {
    v35 = v15;
    v17 = strlen(v15);
    v16 = (char *)v35;
    v18 = (int)&v35[v17];
  }
  else
  {
    v18 = -1;
  }
  v19 = sub_17F860(&v39, v16, v18);
  v20 = sub_1836B0(v19);
  v21 = sub_938BC(v20 + 60);
  v14(v10, v13, &v39, v21, a2);
  if ( v39 != v41 )
    sub_339E8C(v39);
  if ( dword_487950 )
  {
    v34 = ps_getpid_0((int)&dword_4878EC);
    sub_98F78(v36, v34);
    v39 = (void *)v36[0];
    v40 = v36[1];
    v41[0] = v36[2];
  }
  else
  {
    v39 = (void *)dword_46BBCC;
    v40 = dword_46BBD0;
    v41[0] = dword_46BBD4;
  }
  v22 = sub_92564((int)dword_23F76C, (int)&v39);
  v23 = (_DWORD *)sub_17FFFC((int)&dword_4899A0, 0);
  if ( a3 == 2 )
  {
    v23 = (_DWORD *)((int (__fastcall *)(_DWORD *))loc_23DC0C)(v23);
    v23[39] = 0;
    v23[42] = 1;
    v23[38] = 1;
  }
  v24 = sub_1DDBE4(v23);
  v25 = sub_1DFB64(v24);
  sub_18BAFC(v25, 0);
  sub_92668(v22);
  if ( ptr )
    free(ptr);
}
