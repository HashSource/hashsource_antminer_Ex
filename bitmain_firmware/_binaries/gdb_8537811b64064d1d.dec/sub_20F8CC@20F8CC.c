void __fastcall sub_20F8CC(_BYTE *a1)
{
  int *v1; // r9
  int v2; // r11
  const char *v3; // r7
  int v4; // r0
  int v5; // r10
  int v6; // r8
  int v7; // r4
  int v8; // r6
  int v9; // r5
  int v10; // r0
  _DWORD *v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r10
  _DWORD *v15; // r0
  int v16; // r0
  _DWORD *v17; // r0
  const char *v18; // r0
  _DWORD *v19; // r0
  int v20; // r0
  int v21; // r6
  _DWORD *v22; // r0
  int v23; // r0
  int v24; // r6
  bool v25; // zf
  int v26; // r0
  int v27; // r0
  _DWORD *v28; // r0
  int v29; // r0
  const char *v30; // r0
  int v31; // r4
  int v32; // r4
  int v33; // r0
  int v34; // r7
  int v35; // r0
  int v36; // r8
  int v37; // r5
  int v38; // r5
  int v39; // r4
  const char *v40; // r0
  _DWORD *v41; // r0
  int v42; // r3
  int v43; // r4
  _DWORD *v44; // r0
  int v45; // r4
  _DWORD *v46; // r0
  int v47; // r0
  _DWORD *v48; // r0
  _DWORD *v49; // r0
  void *v50; // r6
  int v51; // r7
  int v52; // r6
  _DWORD *v53; // r0
  const char *v54; // r0
  int v55; // r0
  int v56; // r0
  unsigned int v57; // r6
  int v58; // r5
  unsigned __int8 *v59; // r0
  unsigned int v60; // r5
  int v61; // r0
  int v62; // r5
  _DWORD *v63; // r0
  int v64; // r0
  int v65; // r0
  int v66; // r0
  _DWORD *v67; // r0
  const char *v68; // r0
  int v69; // r0
  int v70; // r3
  int v71; // r6
  _DWORD *v72; // r0
  int v73; // r0
  _DWORD *v74; // r0
  _DWORD *v75; // r0
  __int64 v76; // r0
  int v77; // [sp+10h] [bp-6Ch]
  int v78; // [sp+10h] [bp-6Ch]
  void *ptr; // [sp+14h] [bp-68h]
  int v80; // [sp+18h] [bp-64h]
  int v81; // [sp+1Ch] [bp-60h]
  int v82; // [sp+20h] [bp-5Ch] BYREF
  unsigned int v83; // [sp+24h] [bp-58h] BYREF
  int v84; // [sp+28h] [bp-54h] BYREF
  int v85; // [sp+2Ch] [bp-50h] BYREF
  int v86; // [sp+30h] [bp-4Ch] BYREF
  int v87; // [sp+34h] [bp-48h] BYREF
  void *v88; // [sp+38h] [bp-44h] BYREF
  int v89[5]; // [sp+3Ch] [bp-40h] BYREF
  _BYTE v90[4]; // [sp+50h] [bp-2Ch] BYREF
  int v91; // [sp+54h] [bp-28h]
  int v92; // [sp+60h] [bp-1Ch]

  v1 = (int *)sub_20F57C(a1, &v82);
  v2 = sub_15ECDC((int)v1);
  if ( ((int (*)(void))loc_167390)() >= 0 )
  {
    v4 = ((int (__fastcall *)(int))loc_167390)(v2);
    v3 = (const char *)((int (__fastcall *)(int, int))loc_1677E8)(v2, v4);
  }
  else
  {
    v3 = "pc";
  }
  v5 = sub_15E14C((int)v1, (int *)&v83);
  v6 = sub_C3438((int)v1);
  ((void (__fastcall *)(_BYTE *, int *))loc_15E228)(v90, v1);
  v7 = v91;
  if ( v6 )
  {
    if ( dword_46D448 )
    {
      v77 = sub_21B3EC(v6);
      v8 = *(_BYTE *)(v6 + 20) & 0x1F;
      if ( v8 != 4 )
        goto LABEL_7;
    }
    else
    {
      v8 = *(_BYTE *)(v6 + 20) & 0x1F;
      v77 = *(_DWORD *)v6;
      if ( v8 != 4 )
      {
LABEL_7:
        ptr = 0;
        goto LABEL_8;
      }
    }
    sub_100160(&v88, v77);
    v42 = v77;
    ptr = v88;
    if ( v88 )
      v42 = (int)v88;
    v77 = v42;
    goto LABEL_8;
  }
  if ( v5 )
  {
    sub_1B2434(v89, v83);
    v8 = v89[0];
    if ( v89[0] )
    {
      if ( dword_46D448 )
        v77 = sub_21B3EC(v89[0]);
      else
        v77 = *(_DWORD *)v89[0];
      v8 = *(_BYTE *)(v8 + 20) & 0x1F;
    }
    else
    {
      v77 = 0;
    }
    goto LABEL_7;
  }
  ptr = 0;
  v8 = 0;
  v77 = 0;
LABEL_8:
  v9 = ((int (__fastcall *)(int *))loc_15FAB0)(v1);
  if ( v82 && sub_15DAA4((int)v1) >= 0 )
  {
    v56 = sub_15DAA4((int)v1);
    sub_259F38("Stack level %d, frame at ", v56);
  }
  else
  {
    sub_259F38("Stack frame at ");
  }
  v10 = sub_15D8A0((int)v1);
  v80 = sub_25ACB4(v2, v10);
  v11 = (_DWORD *)sub_242FB4(v80);
  sub_25A6E4(v80, *v11);
  sub_259F38(":\n");
  v12 = sub_259F38(" %s = ", v3);
  if ( v5 )
  {
    v13 = sub_15DE24((int)v1);
    v14 = sub_25ACB4(v2, v13);
    v15 = (_DWORD *)sub_242FB4(v14);
    sub_25A6E4(v14, *v15);
  }
  else
  {
    v49 = (_DWORD *)sub_242FB4(v12);
    sub_25A6E4("<unavailable>", *v49);
  }
  sub_259B80("   ");
  if ( v77 )
  {
    v16 = sub_259F38(" in ");
    v17 = (_DWORD *)sub_242FB4(v16);
    sub_25A878(*v17, v77, v8, 3);
  }
  sub_259B80("   ");
  if ( v7 )
  {
    v18 = (const char *)((int (__fastcall *)(int))loc_2043FC)(v7);
    sub_259F38(" (%s:%d)", v18, v92);
  }
  sub_259B5C("; ");
  sub_259B80("    ");
  sub_259F38("saved %s = ", v3);
  sub_15FA54(v89, (int)v1);
  if ( sub_15CD80(v89[0], v89[1], v89[2], v89[3], v89[4]) )
  {
    v50 = sub_92E50();
    v51 = ((int (__fastcall *)(int *))loc_15FA08)(v1);
    sub_92E68((int)v50);
    v52 = sub_25ACB4(v2, v51);
    v53 = (_DWORD *)sub_242FB4(v52);
    sub_25A6E4(v52, *v53);
  }
  else
  {
    v19 = (_DWORD *)sub_242FB4(0);
    sub_2669EC(*v19);
  }
  while ( 1 )
  {
    sub_259F38((const char *)&word_356660);
    if ( v9 )
    {
      if ( sub_15DAB4((int)v1) == 3 )
      {
        sub_259B5C(" tail call frame");
      }
      else if ( sub_15DAB4((int)v1) == 2 )
      {
        v64 = ((int (__fastcall *)(int *))loc_15FAB0)(v1);
        v65 = sub_15DAA4(v64);
        sub_259F38(" inlined into frame %d", v65);
      }
      else
      {
        sub_259F38(" called by frame at ");
        v20 = sub_15D8A0(v9);
        v21 = sub_25ACB4(v2, v20);
        v22 = (_DWORD *)sub_242FB4(v21);
        sub_25A6E4(v21, *v22);
      }
    }
    else if ( ((int (__fastcall *)(int *))loc_160488)(v1) )
    {
      v54 = (const char *)((int (__fastcall *)(int *))loc_160584)(v1);
      sub_259F38(" Outermost frame: %s\n", v54);
    }
    v23 = sub_15D708(v1);
    v24 = v9;
    if ( v9 )
      v24 = 1;
    v25 = v23 == 0;
    if ( v23 )
      v25 = v9 == 0;
    if ( !v25 )
      sub_259B5C(&word_3D7D68);
    sub_259B80("   ");
    if ( sub_15D708(v1) )
    {
      sub_259F38(" caller of frame at ");
      v26 = sub_15D708(v1);
      v27 = sub_15D8A0(v26);
      v9 = sub_25ACB4(v2, v27);
      v28 = (_DWORD *)sub_242FB4(v9);
      sub_25A6E4(v9, *v28);
    }
    if ( sub_15D708(v1) )
      v29 = 1;
    else
      v29 = v24;
    if ( v29 )
      sub_259B5C(&word_356660);
    if ( v7 )
    {
      v30 = (const char *)sub_194474(*(_DWORD *)(v7 + 24));
      sub_259F38(" source language %s.\n", v30);
    }
    v31 = sub_15D9DC((int)v1);
    if ( !v31 )
    {
      sub_259F38(" Arglist at unknown address.\n");
      goto LABEL_40;
    }
    sub_259F38(" Arglist at ");
    v45 = sub_25ACB4(v2, v31);
    v46 = (_DWORD *)sub_242FB4(v45);
    sub_25A6E4(v45, *v46);
    sub_259F38((const char *)&word_3D7D68);
    if ( !((int (__fastcall *)(int))loc_169BC0)(v2) )
    {
      v47 = sub_259B5C(" args: ");
      v7 = -1;
      goto LABEL_70;
    }
    v55 = ((int (__fastcall *)(int, int *))loc_169C0C)(v2, v1);
    v7 = v55;
    if ( v55 >= 0 )
      break;
LABEL_111:
    v76 = sub_94728(
            (int)"stack.c",
            1574,
            "%s: Assertion `%s' failed.",
            "void info_frame_command(const char*, int)",
            "numargs >= 0");
    if ( HIDWORD(v76) != 1 )
    {
      sub_339EA0(v76);
      sub_92E88();
    }
    v69 = sub_339EA0(v76);
    v70 = *(_DWORD *)(v69 + 4);
    v71 = v69;
    if ( v70 == 9 )
    {
      v75 = (_DWORD *)sub_242FB4(v69);
      v73 = sub_2669F8(*v75);
    }
    else if ( v70 == 10 )
    {
      v72 = (_DWORD *)sub_242FB4(v69);
      v73 = sub_2669EC(*v72);
    }
    else
    {
      v74 = (_DWORD *)sub_242FB4(v69);
      v73 = sub_25A440(*v74, "<error: %s>", *(const char **)(v71 + 8));
    }
    sub_339F20(v73);
  }
  if ( v55 )
  {
    if ( v55 == 1 )
      v47 = sub_259B5C(" 1 arg: ");
    else
      v47 = sub_259F38(" %d args: ", v55);
  }
  else
  {
    v47 = sub_259B5C(" no args.");
  }
LABEL_70:
  v48 = (_DWORD *)sub_242FB4(v47);
  ((void (__fastcall *)(int, int *, int, _DWORD))loc_20D780)(v6, v1, v7, *v48);
  sub_259B5C(&word_356660);
LABEL_40:
  v32 = sub_15D94C((int)v1);
  if ( v32 )
  {
    sub_259F38(" Locals at ");
    v43 = sub_25ACB4(v2, v32);
    v44 = (_DWORD *)sub_242FB4(v43);
    sub_25A6E4(v43, *v44);
    sub_259F38((const char *)&word_3D7D68);
  }
  else
  {
    sub_259F38(" Locals at unknown address,");
  }
  v33 = ((int (__fastcall *)(int))loc_167318)(v2);
  v34 = v33;
  if ( v33 < 0 )
    goto LABEL_45;
  v35 = ((int (__fastcall *)(int *, int))loc_15E39C)(v1, v33);
  v7 = v35;
  if ( !v35 )
  {
    sub_94728(
      (int)"stack.c",
      1616,
      "%s: Assertion `%s' failed.",
      "void info_frame_command(const char*, int)",
      "value != NULL");
    goto LABEL_111;
  }
  v36 = sub_26ED40(v35);
  if ( v36 || !sub_26E684(v7) )
  {
LABEL_45:
    v36 = 1;
    goto LABEL_46;
  }
  if ( !*(_DWORD *)nullsub_31(v7) )
  {
    v57 = ((int (__fastcall *)(int))loc_165BE0)(v2);
    v58 = ((int (__fastcall *)(int, int))loc_1DD448)(v2, v34);
    v59 = (unsigned __int8 *)sub_26E760(v7);
    v60 = sub_15C278(v59, v58, v57);
    sub_259F38(" Previous frame's sp is ");
    v61 = sub_25ACB4(v2, v60);
    goto LABEL_90;
  }
  if ( *(_DWORD *)nullsub_31(v7) == 1 )
  {
    sub_259F38(" Previous frame's sp at ");
    v66 = ((int (__fastcall *)(int))loc_26C0C4)(v7);
    v61 = sub_25ACB4(v2, v66);
LABEL_90:
    v62 = v61;
    v63 = (_DWORD *)sub_242FB4(v61);
    sub_25A6E4(v62, *v63);
    sub_259F38((const char *)&word_356660);
  }
  else if ( *(_DWORD *)nullsub_31(v7) == 2 )
  {
    v67 = (_DWORD *)sub_26C1E0(v7);
    v68 = (const char *)((int (__fastcall *)(int, _DWORD))loc_1677E8)(v2, *v67);
    sub_259F38(" Previous frame's sp in %s\n", v68);
  }
  sub_26C3E0(v7);
  ((void (__fastcall *)(int))loc_26C228)(v7);
LABEL_46:
  v37 = ((int (__fastcall *)(int))loc_166EC4)(v2);
  v38 = v37 + ((int (__fastcall *)(int))loc_166F70)(v2);
  if ( v38 > 0 )
  {
    v39 = 0;
    v78 = 0;
    do
    {
      while ( 1 )
      {
        if ( v34 != v39 )
        {
          if ( ((int (__fastcall *)(int, int, _UNKNOWN **))loc_16AFB8)(v2, v39, &off_46DACC) )
          {
            ((void (__fastcall *)(int *, int, int *, int *, int *, int *, void **, _DWORD))loc_15E640)(
              v1,
              v39,
              &v85,
              &v86,
              &v84,
              &v87,
              &v88,
              0);
            if ( !v85 && !v86 && v84 == 1 )
              break;
          }
        }
        if ( v38 == ++v39 )
          goto LABEL_57;
      }
      if ( v78 )
        sub_259B5C(&word_3D7D68);
      else
        sub_259B5C(" Saved registers:\n ");
      sub_259B80(&word_3E1FAC);
      v40 = (const char *)((int (__fastcall *)(int, int))loc_1677E8)(v2, v39);
      sub_259F38(" %s at ", v40);
      v81 = sub_25ACB4(v2, v87);
      v41 = (_DWORD *)sub_242FB4(v81);
      sub_25A6E4(v81, *v41);
      ++v39;
      ++v78;
    }
    while ( v38 != v39 );
LABEL_57:
    v36 |= v78;
  }
  if ( v36 )
    sub_259B5C(&word_356660);
  if ( ptr )
    free(ptr);
}
