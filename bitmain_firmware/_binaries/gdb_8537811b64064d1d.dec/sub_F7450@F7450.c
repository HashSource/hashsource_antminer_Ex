void __fastcall sub_F7450(int a1, _DWORD *a2, char *a3)
{
  char *v3; // r5
  int v5; // r8
  int v6; // r7
  unsigned __int8 *v7; // r6
  int v8; // r2
  char *v9; // r12
  int v10; // r1
  char *v11; // r3
  char *v12; // r0
  int v13; // r0
  char *v14; // r3
  int v15; // r2
  int v16; // r0
  int v17; // r3
  bool v18; // zf
  char *v19; // r2
  char **v20; // r11
  int v21; // r10
  int v22; // r9
  bool v23; // zf
  int v24; // r0
  size_t v25; // r0
  char *v26; // r6
  char *v27; // r3
  int v28; // r2
  int v29; // r3
  bool v30; // zf
  char *v31; // r9
  char **v32; // r0
  char *v33; // r2
  void **v34; // r6
  void **v35; // r10
  void *v36; // r0
  void *v37; // t1
  int v38; // r3
  bool v39; // zf
  char *v40; // r1
  char *v41; // lr
  char *v42; // r0
  int v43; // r0
  int v44; // [sp+8h] [bp-3Ch]
  char *v45[2]; // [sp+Ch] [bp-38h] BYREF
  char *v46; // [sp+14h] [bp-30h] BYREF
  int v47; // [sp+18h] [bp-2Ch] BYREF
  char *s; // [sp+1Ch] [bp-28h] BYREF
  void *ptr; // [sp+20h] [bp-24h] BYREF
  void *v50; // [sp+24h] [bp-20h] BYREF
  void **v51; // [sp+28h] [bp-1Ch]
  char *v52; // [sp+30h] [bp-14h] BYREF
  unsigned __int8 *v53; // [sp+34h] [bp-10h]
  int v54; // [sp+38h] [bp-Ch]
  int v55; // [sp+3Ch] [bp-8h]

  v45[0] = a3;
  v3 = a3;
  if ( *a3 == 45 && a3[1] == 112 )
  {
    v24 = sub_F5114(a2 + 23, (const char **)off_38FBB8, (unsigned __int8 **)v45);
    v3 = v45[0];
    v5 = v24;
  }
  else
  {
    v5 = -1;
  }
  v46 = v3;
  v53 = 0;
  v52 = 0;
  v54 = 0;
  v55 = 0;
  v6 = a2[23];
  sub_19D35C(&v47, &v46, off_46D5A4[0], &v52);
  v7 = v53;
  if ( v53 && !v54 )
  {
    v8 = *v53;
    ++a2[23];
    a2[21] = v8;
  }
  if ( !(_BYTE)v55 )
  {
    if ( v47 )
    {
      v13 = sub_F5114(a2 + 23, (const char **)&off_38FBC8, (unsigned __int8 **)v45);
      v14 = v45[0];
      if ( v13 == -1 )
      {
        sub_54BA8((int)a2, (const char **)&off_38FBC8, v45[0], (int)v45[0]);
      }
      else
      {
        v15 = a2[23];
        v16 = v47;
        v45[0] = v46;
        a2[23] = v15 + v46 - v14;
        ((void (__fastcall *)(int))loc_19CEE4)(v16);
        sub_F73F8(a2, v45[0]);
      }
    }
    else
    {
      sub_F73F8(a2, v45[0]);
    }
    goto LABEL_13;
  }
  v9 = v46;
  v10 = a2[23];
  v11 = v45[0];
  if ( *v46 )
  {
    a2[23] = v46 - v45[0] + v10;
    v45[0] = v9;
    if ( sub_F5114(a2 + 23, (const char **)&off_3C1CA4, (unsigned __int8 **)v45) == -1 )
    {
      sub_54BA8((int)a2, (const char **)&off_3C1CA4, v45[0], (int)v45[0]);
    }
    else
    {
      v12 = sub_F549C((int)a2, v45[0]);
      sub_F6E70(a2, v45[0], (int)v12);
    }
    goto LABEL_13;
  }
  v19 = v52;
  v20 = off_46D5A4[0];
  v21 = v47;
  v45[0] = v52;
  s = v52;
  a2[23] = v52 - v11 + v10;
  v17 = (unsigned __int8)*v19;
  v22 = v54;
  if ( v17 != 45 )
  {
LABEL_14:
    v18 = v17 == 0;
    if ( v17 )
      v18 = v17 == 45;
    if ( !v18 )
      goto LABEL_20;
    if ( a2[17] != a2[18] )
      goto LABEL_19;
LABEL_45:
    a2[23] = v6;
    v45[0] = v3;
    if ( v5 == -1 )
    {
      sub_54BA8((int)a2, (const char **)off_38FBB8, v3, (int)v3);
      v3 = v45[0];
    }
    sub_54BA8((int)a2, (const char **)&off_38FBC8, v3, (int)v3);
    goto LABEL_20;
  }
  v44 = sub_F5114(a2 + 23, (const char **)&off_38FBC8, (unsigned __int8 **)&s);
  if ( v44 == -1 )
  {
    sub_54BA8((int)a2, (const char **)&off_38FBC8, s, (int)s);
LABEL_13:
    v17 = (unsigned __int8)*v45[0];
    goto LABEL_14;
  }
  v23 = v7 == 0;
  if ( v7 )
    v23 = v22 == 0;
  if ( !v23 )
  {
    if ( *(_BYTE *)(v22 + 1) )
    {
      if ( *(_BYTE *)(v22 + 1) == 32 )
      {
        a2[23] += strlen(s);
        sub_54BA8((int)a2, (const char **)&off_3C1CA4, "", (int)"");
        sub_54BA8((int)a2, (const char **)&off_38FBC8, "", (int)"");
      }
    }
    else
    {
      ptr = (void *)sub_32727C(s);
      sub_F6CB8(a2, &ptr, 0, 0, 0);
      if ( ptr )
        free(ptr);
    }
    goto LABEL_13;
  }
  v31 = s;
  v32 = (char **)((int (__fastcall *)(int))loc_19CEE4)(v21);
  switch ( v44 )
  {
    case 0:
      v33 = *v32;
      if ( !*v32 )
        v33 = "";
      sub_220FAC((int)&v50, v33);
      sub_F6DFC(a2, (void ***)&v50);
      v34 = (void **)v50;
      v35 = v51;
      if ( v50 != v51 )
      {
        do
        {
          v37 = *v34++;
          v36 = v37;
          if ( v37 )
            free(v36);
        }
        while ( v35 != v34 );
      }
      if ( v50 )
        sub_339E8C(v50);
      goto LABEL_61;
    case 1:
      v40 = v32[1];
      if ( !v40 )
        v40 = "";
      sub_198ECC(a2, v40, v32[2], *v32);
      goto LABEL_61;
    case 2:
      goto LABEL_67;
    case 3:
      goto LABEL_61;
    case 4:
      v41 = v32[3];
      if ( !v41 )
        v41 = "";
      sub_199164(a2, v20, *v32, v32[1], v32[2], v41);
LABEL_61:
      if ( sub_F5508((int)a2, v31) )
      {
LABEL_67:
        sub_F5638((int)a2);
        a2[23] += strlen(v31);
        sub_54BA8((int)a2, (const char **)&off_38FBC8, "", (int)"");
        sub_54BA8((int)a2, (const char **)&off_3C1CA4, "", (int)"");
        goto LABEL_13;
      }
      if ( a2[17] != a2[18] )
      {
        v38 = (unsigned __int8)*v45[0];
        v39 = v38 == 45;
        if ( v38 != 45 )
          v39 = v38 == 0;
        if ( v39 )
        {
LABEL_19:
          if ( v6 != a2[23] )
            goto LABEL_20;
          goto LABEL_45;
        }
        goto LABEL_20;
      }
      v25 = strlen(v31);
      if ( !v25 )
        goto LABEL_41;
      v26 = &v31[v25];
      if ( v31[v25 - 1] == 32 )
      {
        a2[23] += v25;
        sub_54BA8((int)a2, (const char **)&off_3C1CA4, &v31[v25], (int)&v31[v25]);
        sub_54BA8((int)a2, (const char **)&off_38FBC8, v26, (int)v26);
        goto LABEL_13;
      }
      if ( v31 >= v26 )
        goto LABEL_40;
      if ( v31[v25] == 32 )
        goto LABEL_77;
      v27 = v26 - 1;
      while ( 1 )
      {
        v26 = v27;
        if ( v27 == v31 )
          break;
        v28 = (unsigned __int8)*v27--;
        if ( v28 == 32 )
          goto LABEL_77;
      }
LABEL_40:
      if ( v31 != v26 )
      {
LABEL_77:
        v42 = (char *)sub_93634(v26);
        a2[23] += v42 - v31;
        sub_54BA8((int)a2, (const char **)&off_3C1CA4, v42, (int)v42);
        goto LABEL_13;
      }
LABEL_41:
      v29 = (unsigned __int8)*v45[0];
      v30 = v29 == 0;
      if ( *v45[0] )
        v30 = v29 == 45;
      if ( v30 )
        goto LABEL_45;
LABEL_20:
      if ( v47 )
        ((void (__fastcall *)(int *))loc_19D17C)(&v47);
      return;
    default:
      v43 = sub_94728(
              (int)"completer.c",
              666,
              "%s: %s",
              "void collect_explicit_location_matches(completion_tracker&, event_location*, explicit_location_match_type,"
              " const char*, const language_defn*)",
              "unhandled explicit_location_match_type");
      if ( v47 )
        v43 = ((int (__fastcall *)(int *))loc_19D17C)(&v47);
      sub_339024(v43);
  }
}
