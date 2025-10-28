int __fastcall lzo_getopt(_DWORD *a1, const char *a2, const char **a3, int *a4)
{
  int v4; // r8
  const char *v5; // r7
  _DWORD *v7; // r4
  int v9; // r3
  int v10; // r6
  bool v11; // zf
  int v12; // r2
  int v13; // r3
  int v14; // r9
  int v15; // r5
  _BYTE *v16; // r2
  int v17; // r3
  _BYTE *v18; // r11
  int v19; // r10
  bool v20; // zf
  char *v21; // r0
  int v22; // r8
  int v24; // r2
  int v25; // r3
  int v26; // r1
  int v27; // r0
  bool v28; // zf
  const char *v29; // r2
  int v30; // r0
  int v31; // r3
  int v32; // r0
  _BYTE **v33; // lr
  int v34; // r2
  _BYTE *v35; // r1
  _BYTE *v36; // t1
  int v37; // r3
  int v38; // r3
  int v39; // r1
  unsigned __int8 *v40; // r1
  int v41; // r0
  unsigned __int8 *v42; // lr
  unsigned __int8 *v43; // r12
  int v44; // r2
  int v45; // t1
  bool v46; // zf
  bool v47; // zf
  const char **v48; // r7
  int v49; // r9
  const char **v50; // r5
  const char *v51; // r4
  size_t v52; // r6
  const char *v53; // r2
  int v54; // r2
  const char **v55; // r1
  int v56; // r6
  int v57; // r9
  int v58; // r5
  int v59; // r3
  int v60; // r0
  int v61; // r3
  int v62; // r0
  int v63; // r2
  int *v64; // r3
  int v65; // r3
  unsigned __int8 *v66; // r3
  bool v67; // cc
  int v68; // [sp+Ch] [bp-30h]
  const char **v69; // [sp+10h] [bp-2Ch]
  char *s1; // [sp+14h] [bp-28h]
  int v71; // [sp+18h] [bp-24h]
  int v72; // [sp+1Ch] [bp-20h]
  int v73; // [sp+20h] [bp-1Ch]
  int v74; // [sp+24h] [bp-18h]
  int v75; // [sp+28h] [bp-14h]
  int v76; // [sp+2Ch] [bp-10h]
  int v77; // [sp+30h] [bp-Ch]
  unsigned __int8 *v78; // [sp+34h] [bp-8h]

  v5 = a2;
  v7 = a1;
  v9 = a1[2];
  if ( a2 )
  {
    v10 = *(unsigned __int8 *)a2;
    if ( ((v10 - 43) & 0xFD) != 0 )
    {
      v4 = 0;
    }
    else
    {
      v11 = v10 == 45;
      v10 = *((unsigned __int8 *)a2 + 1);
      if ( !v11 )
        v4 = 2;
      v5 = a2 + 1;
      if ( v11 )
        v4 = 1;
    }
    if ( v10 == 58 )
      ++v5;
    else
      v10 = a1[2];
  }
  else
  {
    v10 = a1[2];
    v4 = 0;
  }
  v12 = a1[6];
  a1[3] = 0;
  if ( v12 == -1 )
    a1[6] = v9;
  if ( a4 )
    *a4 = -1;
  if ( a1[10] )
    return -1;
  v13 = a1[11];
  v14 = a1[9];
  v15 = a1[5];
  if ( v13 )
  {
    v16 = *(_BYTE **)(v14 + 4 * v15);
    goto LABEL_18;
  }
  v30 = sub_136A8(a1[9], a1[12], a1[13], a1[5]);
  v31 = v7[8];
  v32 = v7[5] - v30;
  v7[5] = v32;
  v7[13] = v32;
  v7[12] = v32;
  if ( v4 )
  {
    v14 = v7[9];
    v15 = v32;
  }
  else
  {
    v14 = v7[9];
    if ( v32 >= v31 )
    {
      v15 = v32;
      v34 = v32;
    }
    else
    {
      v33 = (_BYTE **)(v14 + 4 * v32);
      v34 = v32;
      do
      {
        v36 = *v33++;
        v35 = v36;
        if ( *v36 == 45 && v35[1] )
        {
          v15 = v7[5];
          goto LABEL_51;
        }
        v7[5] = ++v34;
      }
      while ( v34 != v31 );
      v15 = v34;
    }
LABEL_51:
    v7[13] = v34;
  }
  if ( v15 >= v31 )
  {
    v7[5] = v32;
    v15 = v32;
    goto LABEL_85;
  }
  v16 = *(_BYTE **)(v14 + 4 * v15);
  v68 = 4 * v15;
  if ( *v16 == 45 )
  {
    if ( v16[1] == 45 )
    {
      v77 = v15 + 1;
      v7[5] = v15 + 1;
      v39 = (unsigned __int8)v16[2];
      if ( v16[2] )
      {
        s1 = v16 + 2;
        if ( v39 != 61 && v39 != 35 )
        {
          v40 = v16 + 3;
          v41 = -2 - (_DWORD)v16;
          do
          {
            v42 = &v40[v41];
            v43 = v40;
            v45 = *v40++;
            v44 = v45;
            v46 = v45 == 0;
            if ( v45 )
              v46 = v44 == 61;
          }
          while ( !v46 && v44 != 35 );
          v47 = a3 == 0;
          if ( a3 )
            v47 = v42 == 0;
          v78 = v43;
          v76 = v44;
          if ( !v47 )
          {
            if ( *a3 )
            {
              v71 = v14;
              v72 = v10;
              v48 = a3;
              v73 = v15;
              v49 = 0;
              v75 = (int)v7;
              v50 = 0;
              v51 = *a3;
              v69 = 0;
              v52 = (size_t)v42;
              v74 = v31;
              do
              {
                if ( !strncmp(s1, v51, v52) )
                {
                  v53 = v48[1];
                  if ( !v51[v52] )
                  {
                    v57 = v71;
                    v56 = v72;
                    v58 = v73;
                    v59 = v74;
                    v7 = (_DWORD *)v75;
                    goto LABEL_88;
                  }
                  v49 |= (unsigned int)v48[1] & 0x10;
                  if ( v50 )
                    v69 = v48;
                  else
                    v50 = v48;
                }
                v48 += 4;
                if ( !v48 )
                  break;
                v51 = *v48;
              }
              while ( *v48 );
              v54 = v49;
              v55 = v50;
              if ( v49 )
                v54 = 1;
              if ( !v50 )
                v54 = 1;
              v56 = v72;
              v57 = v71;
              v58 = v73;
              v59 = v74;
              v7 = (_DWORD *)v75;
              if ( v54 )
                goto LABEL_98;
              if ( v69 )
                return sub_1371C(
                         v75,
                         *(_DWORD *)(v75 + 8),
                         (int)"option '--%s' is ambiguous (could be '--%s' or '--%s')",
                         (int)s1);
              v48 = v55;
              v53 = v55[1];
LABEL_88:
              v63 = (unsigned __int8)v53 & 0x2F;
              switch ( v63 )
              {
                case 2:
                  if ( v76 )
                    v7[3] = v78 + 1;
                  break;
                case 33:
                  if ( v76 && v78[1] )
                  {
                    v66 = v78 + 1;
                    v7[3] = v78 + 1;
                  }
                  else
                  {
                    v66 = (unsigned __int8 *)v7[3];
                  }
                  if ( !v66 )
                  {
                    v29 = "option '--%s=' requires an argument";
                    v25 = (int)*v48;
                    v26 = v56;
                    v27 = (int)v7;
                    return sub_1371C(v27, v26, (int)v29, v25);
                  }
                  break;
                case 1:
                  if ( v76 )
                  {
                    v65 = (int)(v78 + 1);
                    v7[3] = v78 + 1;
                  }
                  else
                  {
                    v67 = v77 < v59;
                    if ( v77 >= v59 )
                    {
                      v65 = v7[3];
                    }
                    else
                    {
                      v65 = v68;
                      v58 += 2;
                    }
                    if ( v67 )
                    {
                      v65 = *(_DWORD *)(v57 + v65 + 4);
                      v7[5] = v58;
                      v7[3] = v65;
                    }
                  }
                  if ( !v65 )
                  {
                    v29 = "option '--%s' requires an argument";
                    v25 = (int)*v48;
                    v26 = v56;
                    v27 = (int)v7;
                    return sub_1371C(v27, v26, (int)v29, v25);
                  }
                  break;
                default:
                  if ( v76 )
                  {
                    v29 = "option '--%s' doesn't allow an argument";
                    v25 = (int)*v48;
                    v26 = v7[2];
                    v27 = (int)v7;
                    return sub_1371C(v27, v26, (int)v29, v25);
                  }
                  break;
              }
              if ( a4 )
                *a4 = ((char *)v48 - (char *)a3) >> 4;
              v64 = (int *)v48[2];
              v22 = (int)v48[3];
              if ( v64 )
              {
                *v64 = v22;
                return 0;
              }
              return v22;
            }
          }
        }
LABEL_98:
        v29 = "unrecognized option '--%s'";
        v25 = (int)s1;
        v26 = v7[2];
        v27 = (int)v7;
        return sub_1371C(v27, v26, (int)v29, v25);
      }
      ++v15;
LABEL_85:
      v60 = sub_136A8(v14, v32, v7[13], v15);
      v61 = v7[5];
      v7[10] = 1;
      v22 = -1;
      v62 = v61 - v60;
      v7[5] = v62;
      v7[13] = v62;
      v7[12] = v62;
      return v22;
    }
    if ( v16[1] )
    {
      v13 = v7[11];
LABEL_18:
      v17 = v13 + 1;
      v7[11] = v17;
      v18 = &v16[v17];
      v19 = (unsigned __int8)v16[v17];
      v20 = v19 == 58;
      if ( v19 != 58 )
        v20 = v5 == 0;
      if ( v20 || (v21 = strchr(v5, (unsigned __int8)v16[v17]), v22 = v19, !v21) )
      {
        v24 = (unsigned __int8)v18[1];
        v25 = v19;
        v26 = v7[2];
        v27 = (int)v7;
        v7[6] = v19;
        v28 = v24 == 0;
        if ( !v24 )
          v7[11] = 0;
        v29 = "invalid option '-%c'";
        if ( v28 )
          v7[5] = v15 + 1;
      }
      else
      {
        if ( v21[1] != 58 )
        {
          if ( !v18[1] )
          {
            v7[11] = (unsigned __int8)v18[1];
            v7[5] = v15 + 1;
          }
          return v22;
        }
        v37 = v15 + 1;
        v7[5] = v15 + 1;
        v7[11] = 0;
        if ( v18[1] )
        {
          v7[3] = v18 + 1;
          return v22;
        }
        if ( v21[2] == 58 )
          return v22;
        if ( v37 < v7[8] )
        {
          v38 = *(_DWORD *)(v14 + 4 * v37);
          v7[5] = v15 + 2;
          v7[3] = v38;
          return v22;
        }
        v29 = "option '-%c' requires an argument";
        v7[6] = v19;
        v25 = v19;
        v26 = v10;
        v27 = (int)v7;
      }
      return sub_1371C(v27, v26, (int)v29, v25);
    }
  }
  if ( v4 != 1 )
    goto LABEL_85;
  v7[3] = v16;
  v7[5] = v15 + 1;
  return 1;
}
