void sub_1D1888()
{
  _DWORD *v0; // r11
  _DWORD *v1; // r7
  int v2; // r2
  int v3; // r4
  bool v4; // zf
  int v5; // r4
  _DWORD *v6; // r6
  _DWORD **v7; // r5
  _DWORD *v8; // t1
  const char *v9; // r0
  int v10; // r4
  int v11; // r4
  _DWORD *v12; // r6
  _DWORD **v13; // r5
  _DWORD *v14; // t1
  const char *v15; // r0
  unsigned int v16; // r3
  int v17; // r4
  _DWORD *v18; // r0
  int v19; // r4
  _DWORD *v20; // r0
  int v21; // r4
  _DWORD *v22; // r0
  int v23; // r1
  int v24; // r0
  int v25; // r4
  _DWORD *v26; // r0
  int v27; // r4
  _DWORD *v28; // r0
  int v29; // [sp+4h] [bp-18h]
  int v30; // [sp+8h] [bp-14h]

  if ( *(_DWORD *)(dword_487D2C + 36) )
  {
    v0 = *(_DWORD **)(dword_487D2C + 36);
    while ( 1 )
    {
      v1 = (_DWORD *)sub_1D08A0(v0, 1)[6];
      if ( v1 )
        break;
LABEL_22:
      v0 = (_DWORD *)*v0;
      if ( !v0 )
        return;
    }
    while ( 1 )
    {
      v29 = sub_1B7278((int)v0);
      if ( v1[5] < v1[4] )
      {
        sub_259F38("Psymtab ");
        sub_259B5C(v1[1]);
        sub_259F38(" covers bad range ");
        v27 = sub_25ACB4(v29, v1[4]);
        v28 = (_DWORD *)sub_242FB4(v27);
        sub_25A6E4(v27, *v28);
        sub_259F38(" - ");
        v24 = v29;
        v23 = v1[5];
      }
      else
      {
        v2 = v1[14];
        if ( !v2 )
          goto LABEL_21;
        v3 = v1[12];
        v4 = v3 == 0;
        v5 = v3 - 1;
        v30 = *(_DWORD *)(v2 + 32);
        v6 = *(_DWORD **)(v30 + 12);
        if ( !v4 )
        {
          v7 = (_DWORD **)(v0[30] + 4 * v1[11] - 4);
          do
          {
            while ( 1 )
            {
              v8 = v7[1];
              ++v7;
              --v5;
              v9 = (const char *)sub_21B804(v8);
              if ( !sub_C299C(v6, v9, 2u, (*v7)[6] & 7) )
                break;
              if ( v5 == -1 )
                goto LABEL_11;
            }
            sub_259F38("Static symbol `");
            sub_259B5C(**v7);
            sub_259F38("' only found in ");
            sub_259B5C(v1[1]);
            sub_259F38(" psymtab\n");
          }
          while ( v5 != -1 );
        }
LABEL_11:
        v10 = v1[10];
        v4 = v10 == 0;
        v11 = v10 - 1;
        v12 = *(_DWORD **)(v30 + 8);
        if ( !v4 )
        {
          v13 = (_DWORD **)(v0[27] + 4 * v1[9] - 4);
          do
          {
            while ( 1 )
            {
              v14 = v13[1];
              ++v13;
              --v11;
              v15 = (const char *)sub_21B804(v14);
              if ( !sub_C299C(v12, v15, 2u, (*v13)[6] & 7) )
                break;
              if ( v11 == -1 )
                goto LABEL_16;
            }
            sub_259F38("Global symbol `");
            sub_259B5C(**v13);
            sub_259F38("' only found in ");
            sub_259B5C(v1[1]);
            sub_259F38(" psymtab\n");
          }
          while ( v11 != -1 );
        }
LABEL_16:
        v16 = v1[5];
        if ( !v16 || v1[4] >= *v12 && v16 <= v12[1] )
          goto LABEL_21;
        sub_259F38("Psymtab ");
        sub_259B5C(v1[1]);
        sub_259F38(" covers ");
        v17 = sub_25ACB4(v29, v1[4]);
        v18 = (_DWORD *)sub_242FB4(v17);
        sub_25A6E4(v17, *v18);
        sub_259F38(" - ");
        v19 = sub_25ACB4(v29, v1[5]);
        v20 = (_DWORD *)sub_242FB4(v19);
        sub_25A6E4(v19, *v20);
        sub_259F38(" but symtab covers only ");
        v21 = sub_25ACB4(v29, *v12);
        v22 = (_DWORD *)sub_242FB4(v21);
        sub_25A6E4(v21, *v22);
        sub_259F38(" - ");
        v23 = v12[1];
        v24 = v29;
      }
      v25 = sub_25ACB4(v24, v23);
      v26 = (_DWORD *)sub_242FB4(v25);
      sub_25A6E4(v25, *v26);
      sub_259F38((const char *)&word_356660);
LABEL_21:
      v1 = (_DWORD *)*v1;
      if ( !v1 )
        goto LABEL_22;
    }
  }
}
