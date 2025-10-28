int sub_1889DC()
{
  void *v0; // r8
  int v1; // r7
  int v2; // r0
  _DWORD *v3; // r9
  int v4; // r10
  int v5; // r3
  int v6; // r0
  _DWORD **v7; // r6
  int v8; // r9
  int v9; // r0
  _DWORD *i; // r6
  int v11; // r0
  _BOOL4 v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  _QWORD *v16; // r6
  __int64 v17; // r0
  int v18; // r2
  void *v19; // r4
  void *v20; // r8
  bool v22; // zf
  _DWORD *v23; // r10
  int v24; // r3
  int v25; // r0
  int v26; // r0
  int v27; // r8
  int v28; // r3
  int v29; // r0
  int v30; // r0
  _BOOL4 v31; // r0
  int *v32; // r0
  int v33; // r3
  int v34; // r4
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // [sp+Ch] [bp-28h]
  _DWORD v41[5]; // [sp+10h] [bp-24h] BYREF
  _DWORD v42[4]; // [sp+24h] [bp-10h] BYREF

  v0 = sub_92564((int)nullsub_39, 0);
  v1 = dword_487960;
  ++qword_487998;
  if ( dword_487950 )
  {
    if ( (dword_487960 & 0xFFFFFFFD) != 0 )
    {
      if ( dword_487960 != 13 )
        goto LABEL_62;
      v2 = sub_2407BC();
      if ( !dword_487950 )
        goto LABEL_29;
      goto LABEL_7;
    }
    if ( !sub_98FA0(&qword_4878EC, &qword_475848) )
    {
      v35 = ps_getpid_0((int)&qword_4878EC);
      sub_98F78(v41, v35);
      v42[0] = v41[0];
      v42[1] = v41[1];
      v42[2] = v41[2];
      sub_92564((int)dword_23F76C, (int)v42);
    }
  }
  else
  {
    sub_92564((int)dword_23F76C, (int)&dword_46BBCC);
  }
  while ( 1 )
  {
    v2 = sub_2407BC();
    if ( v1 != 1 )
    {
      if ( !dword_487950 )
      {
LABEL_29:
        v2 = sub_98FA0(&qword_4879A0, &qword_4878EC);
        if ( !v2 )
        {
          v2 = sub_22EBE4(0);
          if ( v2 )
          {
            if ( v1 == 2 )
              goto LABEL_14;
            v22 = v1 == 0;
            if ( v1 )
              v22 = v1 == 13;
            if ( !v22 )
            {
              v23 = (_DWORD *)dword_48769C;
              v24 = dword_487668;
              dword_487668 = dword_48769C;
              v40 = v24;
              if ( dword_48769C )
              {
                sub_22F070(v2);
                while ( 1 )
                {
                  v25 = sub_230984(qword_4878EC, HIDWORD(qword_4878EC), dword_4878F4);
                  sub_259F38("[Switching to %s]\n", v25);
                  v26 = sub_B77DC();
                  v23 = (_DWORD *)*v23;
                  if ( !v23 )
                    break;
                  dword_487668 = (int)v23;
                  sub_22F070(v26);
                }
              }
              v2 = qword_4878EC;
              qword_4879A0 = qword_4878EC;
              unk_4879A8 = dword_4878F4;
              dword_487668 = v40;
            }
          }
        }
      }
LABEL_7:
      if ( v1 == 13 )
      {
        v3 = (_DWORD *)dword_48769C;
        v4 = dword_487668;
        dword_487668 = dword_48769C;
        if ( dword_48769C )
        {
          if ( !*(_DWORD *)(dword_48769C + 68) )
            goto LABEL_12;
          while ( 1 )
          {
            v3 = (_DWORD *)*v3;
            if ( !v3 )
              break;
            while ( 1 )
            {
              v5 = v3[17];
              dword_487668 = (int)v3;
              if ( v5 )
                break;
LABEL_12:
              sub_22F070(v2);
              v2 = sub_259F38("No unwaited-for children left.\n");
              v3 = (_DWORD *)*v3;
              if ( !v3 )
                goto LABEL_13;
            }
          }
        }
LABEL_13:
        dword_487668 = v4;
      }
LABEL_14:
      v6 = sub_1889A0(v2);
      if ( dword_48790C )
        goto LABEL_56;
      goto LABEL_15;
    }
    if ( dword_48790C )
    {
      v36 = ((int (__fastcall *)(int))loc_23DC0C)(v2);
      v2 = sub_1B8D08(*(_DWORD *)(v36 + 144));
    }
    if ( !dword_487950 )
      goto LABEL_29;
    v6 = sub_1889A0(v2);
    if ( dword_48790C )
LABEL_56:
      v6 = sub_1C7838(v6);
LABEL_15:
    v7 = (_DWORD **)dword_48769C;
    v8 = dword_487668;
    dword_487668 = dword_48769C;
    if ( dword_48769C )
    {
      v9 = sub_1541E8(v6);
      for ( i = *v7; i; i = (_DWORD *)*i )
      {
        dword_487668 = (int)i;
        v9 = sub_1541E8(v9);
      }
    }
    dword_487668 = v8;
    sub_92648(v0);
    v12 = sub_15D52C(v11);
    if ( v12 )
    {
      if ( dword_487910 == 1 )
      {
        v34 = sub_15F734(v12);
        if ( sub_15DAB4(v34) != 1 )
        {
          v38 = sub_94728(
                  (int)"infrun.c",
                  8290,
                  "%s: Assertion `%s' failed.",
                  "int normal_stop()",
                  "get_frame_type (frame) == DUMMY_FRAME");
          v39 = sub_339F20(v38);
          sub_339024(v39);
        }
        sub_1601E4(v34);
      }
      v13 = sub_15F734(v12);
      v14 = sub_15E134(v13);
      v15 = sub_15F734(v14);
      sub_20DB44(v15);
    }
    if ( !dword_4879AC )
      goto LABEL_44;
    v16 = sub_93050(0x20u);
    v17 = qword_4878EC;
    v18 = dword_4878F4;
    v0 = (void *)qword_487998;
    *v16 = qword_487998;
    v16[1] = v17;
    *((_DWORD *)v16 + 4) = v18;
    *((_DWORD *)v16 + 6) = *(_DWORD *)(sub_1836B0() + 8);
    if ( sub_98FA0(&qword_4878EC, &qword_475848) )
    {
      *((_DWORD *)v16 + 5) = 0;
      goto LABEL_25;
    }
    v32 = (int *)((int (*)(void))loc_23DC0C)();
    v33 = *v32;
    *((_DWORD *)v16 + 5) = v32;
    if ( v33 >= 0 )
      break;
    sub_94728(
      (int)"common/refcounted-object.h",
      34,
      "%s: Assertion `%s' failed.",
      "void refcounted_object::incref()",
      "m_refcount >= 0");
LABEL_62:
    sub_92564((int)dword_23F76C, (int)&qword_4878EC);
  }
  *v32 = v33 + 1;
LABEL_25:
  v19 = sub_92564((int)&loc_1864A4, (int)v16);
  v20 = sub_92E50();
  sub_59554(dword_4879AC);
  sub_92E68((int)v20);
  if ( sub_98FA0((_DWORD *)v16 + 2, &qword_4878EC)
    && (v27 = *((_DWORD *)v16 + 6), v27 == *(_DWORD *)(sub_1836B0() + 8))
    && ((v28 = *((_DWORD *)v16 + 5)) == 0 || !*(_DWORD *)(v28 + 44))
    && qword_487998 == *v16 )
  {
    sub_92648(v19);
LABEL_44:
    if ( sub_98FA0(&qword_4878EC, &qword_475848) )
    {
      sub_1B8C48(0, dword_4879B0);
    }
    else
    {
      v29 = ((int (*)(void))loc_23DC0C)();
      sub_1B8C48(*(_DWORD *)(v29 + 136), dword_4879B0);
    }
    v30 = sub_B7558();
    if ( sub_22EBE4(v30) )
      v31 = (v1 & 0xFFFFFFFD) != 0;
    else
      v31 = 0;
    if ( v31 )
    {
      v37 = ((int (*)(void))loc_23DC0C)();
      sub_DBBC8(*(int **)(v37 + 136));
    }
    sub_1849E8();
    return 0;
  }
  else
  {
    sub_92648(v19);
    return 1;
  }
}
