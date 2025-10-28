void __fastcall sub_18BAFC(const char *a1, _DWORD *a2)
{
  int v4; // r9
  _DWORD *v5; // r11
  _DWORD *v6; // r7
  int *v7; // r5
  _DWORD *v8; // r6
  int v9; // r0
  _DWORD *v10; // r0
  int v11; // r0
  _DWORD *v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  bool v16; // zf
  int v17; // r0
  int *v18; // r0
  const char *v19; // r1
  int v20; // r10
  const char *v21; // r11
  const char *v22; // r0
  int v23; // r0
  int v24; // r1
  int v25; // r2
  int v26; // r0
  _DWORD *v27; // r6
  _DWORD *v28; // r8
  int v29; // r9
  int v30; // r0
  int v31; // r9
  const char *v32; // r0
  int v33; // r9
  const char *v34; // r0
  int v35; // r0
  int v36; // r1
  int v37; // r2
  int v38; // r0
  int v39; // [sp+Ch] [bp-68h]
  _DWORD v40[5]; // [sp+10h] [bp-64h] BYREF
  _DWORD *v41; // [sp+24h] [bp-50h] BYREF
  int v42; // [sp+28h] [bp-4Ch]
  int v43; // [sp+2Ch] [bp-48h] BYREF
  int v44; // [sp+30h] [bp-44h]
  int v45; // [sp+34h] [bp-40h]
  int v46; // [sp+38h] [bp-3Ch] BYREF
  int v47; // [sp+3Ch] [bp-38h]
  int v48; // [sp+40h] [bp-34h]
  _DWORD *v49; // [sp+44h] [bp-30h]
  _DWORD s[10]; // [sp+48h] [bp-2Ch] BYREF

  if ( ((int (*)(void))loc_1853C4)() )
  {
    qword_4879A0 = qword_4878EC;
    unk_4879A8 = unk_4878F4;
    v4 = sub_1DDBE4(qword_4878EC);
    v5 = (_DWORD *)sub_1DD5B4(v4);
    v6 = *(_DWORD **)(v4 + 4);
    v7 = (int *)sub_1DFB64(v4);
    v8 = (_DWORD *)((int (*)(void))loc_23DC0C)();
    v8[47] = 0;
    v8[48] = 0;
    v8[49] = 0;
    v8[50] = 0;
    if ( sub_23E2F4(v8) )
    {
      v17 = sub_94728(
              (int)"infrun.c",
              3014,
              "%s: Assertion `%s' failed.",
              "void proceed(CORE_ADDR, gdb_signal)",
              "!thread_is_in_step_over_chain (tp)");
      goto LABEL_54;
    }
    if ( a1 == (const char *)-1 )
    {
      if ( (int *)dword_4878F8 == v7 && sub_CF4AC((int)v6, dword_4878F8) == 1 && dword_48794C != 1 )
      {
        v8[48] = 1;
      }
      else
      {
        v9 = ((int (__fastcall *)(_DWORD *))loc_16A20C)(v5);
        if ( v9 )
        {
          v15 = sub_15F734(v9);
          if ( ((int (__fastcall *)(_DWORD *, int))loc_16A258)(v5, v15) )
            v8[48] = 1;
        }
      }
    }
    else
    {
      sub_1DFC88(v4, a1);
    }
    if ( a2 != (_DWORD *)144 )
      v8[36] = a2;
    v7 = &v43;
    sub_187C68(v40, v8[35]);
    v43 = v40[0];
    v44 = v40[1];
    v45 = v40[2];
    v10 = sub_92564((int)dword_23F76C, (int)&v43);
    v6 = v10;
    if ( !v8[31] )
      v10 = (_DWORD *)((int (__fastcall *)(int, int, int, int))loc_23EFE8)(v43, v44, v45, 1);
    if ( dword_487930 )
    {
      v18 = (int *)sub_242FF0(v10);
      v19 = a1;
      v20 = *v18;
      v21 = (const char *)sub_25ACB4(v5, v19);
      v22 = (const char *)sub_999FC((unsigned int)a2);
      sub_2594D8(v20, "infrun: proceed (addr=%s, signal=%s)\n", v21, v22);
    }
    v11 = sub_B7538();
    v12 = (_DWORD *)sub_242FB4(v11);
    v13 = sub_256834(*v12);
    sub_22EFA4(v13);
    if ( !dword_487950 && !sub_186EEC(v8 + 35) )
    {
      a2 = (_DWORD *)dword_48A4D4;
      if ( dword_48A4D4 )
      {
        a1 = "infrun: need to step-over [%s] first\n";
        do
        {
          v16 = v8 == a2;
          if ( v8 != a2 )
            v16 = a2[11] == 2;
          if ( !v16 )
          {
            v5 = a2 + 2;
            if ( sub_99074(a2 + 2, v7) )
            {
              if ( sub_184D20(a2) )
              {
                v17 = sub_23E2F4(a2);
                if ( v17 )
                  goto LABEL_74;
                if ( dword_487930 )
                {
LABEL_54:
                  v39 = *(_DWORD *)sub_242FF0(v17);
                  v26 = sub_230984(*v5, v5[1], v5[2]);
                  sub_2594D8(v39, a1, v26);
                }
                ((void (__fastcall *)(_DWORD *))loc_23E304)(a2);
              }
            }
          }
          a2 = (_DWORD *)a2[1];
        }
        while ( a2 );
      }
    }
    if ( v8[48] )
      ((void (__fastcall *)(_DWORD *))loc_23E304)(v8);
    v8[46] = sub_1DFB64(v4);
    v14 = sub_230A78(&v41);
    if ( !dword_487934 && !dword_48793C )
    {
      v14 = ((int (__fastcall *)(int))loc_18B7E8)(v14);
      if ( !dword_487934 && !dword_48793C && (!v14 || (v14 = sub_232978(v14)) != 0) )
      {
        if ( dword_487950 || (v14 = sub_232978(v14)) == 0 )
        {
          if ( !v8[10] )
          {
            v14 = sub_23E2F4(v8);
            if ( !v14 )
            {
              memset(s, 0, sizeof(s));
              v23 = v8[2];
              v24 = v8[3];
              v25 = v8[4];
              v49 = v8;
              v46 = v23;
              v47 = v24;
              v48 = v25;
              sub_23FA18(v8[2], v8[3], v8[4]);
              v14 = (int)sub_18B4A0(&v46);
              if ( !s[8] )
                sub_94708("Command aborted.");
            }
          }
        }
        else
        {
          v27 = (_DWORD *)dword_48A4D4;
          if ( dword_48A4D4 )
          {
            do
            {
              if ( v27[11] != 2 )
              {
                v28 = v27 + 2;
                v14 = sub_99074(v27 + 2, v7);
                if ( v14 )
                {
                  if ( v27[10] )
                  {
                    if ( dword_487930 )
                    {
                      v31 = *(_DWORD *)sub_242FF0(v14);
                      v32 = (const char *)sub_230984(*v28, v27[3], v27[4]);
                      v14 = sub_2594D8(v31, "infrun: proceed: [%s] resumed\n", v32);
                    }
                    if ( !v27[9] && !v27[42] )
                    {
                      sub_94728(
                        (int)"infrun.c",
                        3167,
                        "%s: Assertion `%s' failed.",
                        "void proceed(CORE_ADDR, gdb_signal)",
                        "tp->executing || tp->suspend.waitstatus_pending_p");
LABEL_74:
                      v38 = sub_94728(
                              (int)"infrun.c",
                              3110,
                              "%s: Assertion `%s' failed.",
                              "void proceed(CORE_ADDR, gdb_signal)",
                              "!thread_is_in_step_over_chain (tp)");
                      if ( v41 )
                        *v41 = v42;
                      sub_339024(v38);
                    }
                  }
                  else
                  {
                    v14 = sub_23E2F4(v27);
                    if ( v14 )
                    {
                      if ( dword_487930 )
                      {
                        v29 = *(_DWORD *)sub_242FF0(v14);
                        v30 = sub_230984(*v28, v27[3], v27[4]);
                        v14 = sub_2594D8(v29, "infrun: proceed: [%s] needs step-over\n", v30);
                      }
                    }
                    else
                    {
                      if ( dword_487930 )
                      {
                        v33 = *(_DWORD *)sub_242FF0(0);
                        v34 = (const char *)sub_230984(*v28, v27[3], v27[4]);
                        sub_2594D8(v33, "infrun: proceed: resuming %s\n", v34);
                      }
                      memset(s, 0, sizeof(s));
                      v35 = *v28;
                      v36 = v27[3];
                      v37 = v27[4];
                      v49 = v27;
                      v46 = v35;
                      v47 = v36;
                      v48 = v37;
                      sub_23FA18(*v28, v27[3], v27[4]);
                      v14 = (int)sub_18B4A0(&v46);
                      if ( !s[8] )
                        sub_94708("Command aborted.");
                    }
                  }
                }
              }
              v27 = (_DWORD *)v27[1];
            }
            while ( v27 );
          }
        }
      }
    }
    if ( v41 )
      *v41 = v42;
    sub_230A5C(v14);
    sub_92668(v6);
    if ( !off_489AF8(&dword_4899A0) )
      sub_1532E4((_DWORD *)dword_487974);
  }
  else
  {
    sub_1889DC();
    if ( off_489AF8(&dword_4899A0) )
      sub_17CFFC(1, 0);
  }
}
