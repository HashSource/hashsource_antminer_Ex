unsigned int __fastcall sub_3583C(_DWORD *a1, int a2)
{
  _DWORD *v2; // r7
  unsigned int v5; // r4
  bool v6; // cc
  int v7; // r3
  int v8; // r4
  bool v9; // zf
  _BOOL4 v10; // r2
  bool v11; // cc
  int v12; // r0
  const char *v13; // r4
  int v15; // r1
  int v16; // r0
  unsigned int v17; // r4
  int v18; // r0
  bool v19; // zf
  unsigned int v20; // r0
  bool v21; // zf
  __int64 v22; // r2
  char *v23; // r3
  int v24; // r1
  int v25; // r3
  int v26; // r2
  int v27; // r8
  unsigned int v28; // r3
  unsigned int v29; // r4
  bool v30; // cc
  unsigned int v31; // r0
  _BYTE *v32; // r8
  unsigned __int8 *i; // r4
  int v34; // r3
  unsigned int v35; // r3
  int v36; // r0
  int v37; // r11
  int v38; // r0
  const char *v39; // r7
  int *v40; // r4
  __int64 v41; // r0
  unsigned int v42; // r1
  int v43; // r2
  const char *v44; // r3
  const char *v45; // r3
  char arg[4]; // [sp+0h] [bp-1Ch]
  int v47; // [sp+Ch] [bp-10h]
  __int64 endptr; // [sp+10h] [bp-Ch] BYREF

  v2 = a1 + 10;
  strbuffer_clear(a1 + 10);
  if ( a1[15] == 256 )
  {
    jsonp_free(a1[16]);
    a1[16] = 0;
    a1[17] = 0;
  }
  do
  {
    v5 = a1[5];
    if ( !v5 )
      v5 = sub_3567C((int)a1, a2);
    v6 = v5 > 0x20;
    if ( v5 != 32 )
      v6 = v5 - 9 > 1;
    v7 = !v6;
  }
  while ( !v6 || v5 == 13 );
  if ( v5 == -1 )
  {
    a1[15] = v7;
    return v7;
  }
  if ( v5 == -2 )
    goto LABEL_37;
  strbuffer_append_byte(v2, (unsigned __int8)v5);
  if ( (((v5 & 0xFFFFFFDF) - 91) & 0xFFFFFFFD) == 0 )
    goto LABEL_40;
  v9 = v5 == 44;
  if ( v5 != 44 )
    v9 = v5 == 58;
  v10 = v9;
  if ( v9 )
    goto LABEL_40;
  if ( v5 != 34 )
  {
    v11 = v5 > 0x2D;
    if ( v5 != 45 )
      v11 = v5 - 48 > 9;
    if ( !v11 )
    {
      a1[15] = -1;
      if ( v5 == 45 )
      {
        v31 = sub_357E4((int)a1, a2);
        if ( v31 == 48 )
        {
LABEL_60:
          v20 = sub_357E4((int)a1, a2);
          if ( v20 - 48 <= 9 )
          {
LABEL_61:
            sub_35824(a1, v20);
            return a1[15];
          }
LABEL_63:
          if ( (a1[13] & 8) == 0 )
          {
            v21 = (v20 & 0xFFFFFFDF) == 69;
            if ( (v20 & 0xFFFFFFDF) != 0x45 )
              v21 = v20 == 46;
            if ( !v21 )
            {
              if ( v20 + 2 > 1 )
                sub_35824(a1, v20);
              v39 = (const char *)strbuffer_value(v2);
              v40 = _errno_location();
              *v40 = 0;
              v41 = strtoll(v39, (char **)&endptr, 10);
              if ( *v40 == 34 )
              {
                if ( v41 >= 0 )
                  LOWORD(v45) = 11128;
                else
                  LOWORD(v45) = 11100;
                HIWORD(v45) = 19;
                sub_35484(a2, a1, 15, v45);
                return a1[15];
              }
              else
              {
                v8 = 257;
                *((_QWORD *)a1 + 8) = v41;
                a1[15] = 257;
              }
              return v8;
            }
          }
          if ( v20 == 46 )
          {
            v42 = a1[5];
            if ( !v42 )
              v42 = sub_3567C((int)a1, a2);
            if ( v42 - 48 > 9 )
            {
              if ( v42 < 0xFFFFFFFE )
              {
                sub_35620(a1, v42);
                return a1[15];
              }
              return a1[15];
            }
            strbuffer_append_byte(v2, (unsigned __int8)v42);
            do
              v20 = sub_357E4((int)a1, a2);
            while ( v20 - 48 <= 9 );
          }
          if ( (v20 & 0xFFFFFFDF) != 0x45 )
          {
LABEL_70:
            if ( v20 + 2 > 1 )
              sub_35824(a1, v20);
            if ( !jsonp_strtod(v2, &endptr) )
            {
              v22 = endptr;
              v8 = 258;
              a1[15] = 258;
              *((_QWORD *)a1 + 8) = v22;
              return v8;
            }
            sub_35484(a2, a1, 15, "real number overflow");
            return a1[15];
          }
          v20 = sub_357E4((int)a1, a2);
          if ( ((v20 - 43) & 0xFFFFFFFD) == 0 )
            v20 = sub_357E4((int)a1, a2);
          if ( v20 - 48 <= 9 )
          {
            do
              v20 = sub_357E4((int)a1, a2);
            while ( v20 - 48 <= 9 );
            goto LABEL_70;
          }
          if ( v20 < 0xFFFFFFFE )
            goto LABEL_61;
          return a1[15];
        }
        if ( v31 - 48 > 9 )
        {
          if ( v31 < 0xFFFFFFFE )
            sub_35824(a1, v31);
          return a1[15];
        }
      }
      else if ( v5 == 48 )
      {
        goto LABEL_60;
      }
      do
        v20 = sub_357E4((int)a1, a2);
      while ( v20 - 48 <= 9 );
      goto LABEL_63;
    }
    if ( (v5 & 0xFFFFFFDF) - 65 <= 0x19 )
    {
      do
        v12 = sub_357E4((int)a1, a2);
      while ( (v12 & 0xFFFFFFDF) - 65 <= 0x19 );
      if ( (unsigned int)(v12 + 2) > 1 )
        sub_35824(a1, v12);
      v13 = (const char *)strbuffer_value(v2);
      if ( !strcmp(v13, "true") )
      {
        v8 = 259;
        a1[15] = 259;
        return v8;
      }
      if ( strcmp(v13, "false") )
      {
        if ( !strcmp(v13, "null") )
        {
          v8 = 261;
          a1[15] = 261;
          return v8;
        }
        goto LABEL_37;
      }
      v5 = 260;
LABEL_40:
      a1[15] = v5;
      return v5;
    }
    v23 = (char *)a1 + a1[4];
    v24 = (unsigned __int8)v23[8];
    if ( v23[8] )
    {
      do
      {
        strbuffer_append_byte(v2, v24);
        v25 = a1[4] + 1;
        v26 = a1[9] + 1;
        a1[4] = v25;
        a1[9] = v26;
        v24 = *((unsigned __int8 *)a1 + v25 + 8);
      }
      while ( *((_BYTE *)a1 + v25 + 8) );
    }
LABEL_37:
    v8 = -1;
    a1[15] = -1;
    return v8;
  }
  a1[16] = v10;
  a1[15] = -1;
LABEL_42:
  v15 = a2;
  v16 = (int)a1;
  while ( 1 )
  {
    v17 = sub_357E4(v16, v15);
LABEL_44:
    if ( v17 == 34 )
    {
      v32 = (_BYTE *)jsonp_malloc(a1[11] + 1);
      if ( !v32 )
        goto LABEL_57;
      a1[16] = v32;
      for ( i = (unsigned __int8 *)(strbuffer_value(v2) + 1); ; i += 2 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v34 = *i;
            if ( v34 == 34 )
            {
              *v32 = 0;
              v8 = 256;
              v43 = a1[16];
              a1[15] = 256;
              a1[17] = &v32[-v43];
              return v8;
            }
            if ( v34 == 92 )
              break;
            *v32 = v34;
            ++i;
            ++v32;
          }
          v35 = i[1];
          if ( v35 != 117 )
            break;
          v36 = sub_35378((int)(i + 1));
          v37 = v36;
          if ( v36 < 0 )
          {
            LOWORD(v44) = (unsigned __int16)"invalid Unicode escape '%.6s'";
            *(_DWORD *)arg = i;
LABEL_146:
            HIWORD(v44) = (unsigned int)"invalid Unicode escape '%.6s'" >> 16;
            sub_35484(a2, a1, 8, v44, *(_DWORD *)arg);
            goto LABEL_57;
          }
          v47 = v36 - 55296;
          if ( (unsigned int)(v36 - 55296) >= 0x400 )
          {
            if ( (unsigned int)(v36 - 56320) < 0x400 )
              goto LABEL_153;
            i += 6;
          }
          else
          {
            if ( i[6] != 92 || i[7] != 117 )
            {
LABEL_153:
              sub_35484(a2, a1, 8, "invalid Unicode '\\u%04X'", v36);
              goto LABEL_57;
            }
            v38 = sub_35378((int)(i + 7));
            if ( v38 < 0 )
            {
              LOWORD(v44) = 11008;
              *(_DWORD *)arg = i + 6;
              goto LABEL_146;
            }
            i += 12;
            if ( (unsigned int)(v38 - 56320) >= 0x400 )
            {
              sub_35484(a2, a1, 8, "invalid Unicode '\\u%04X\\u%04X'", v37, v38);
              goto LABEL_57;
            }
            v37 = v38 - 56320 + (v47 << 10) + 0x10000;
          }
          utf8_encode(v37, v32, &endptr);
          v32 += endptr;
        }
        if ( v35 == 98 )
        {
          *v32 = 8;
          goto LABEL_109;
        }
        if ( v35 <= 0x62 )
        {
          if ( v35 == 47 || v35 == 92 || v35 == 34 )
            goto LABEL_108;
        }
        else
        {
          if ( v35 == 110 )
          {
            *v32 = 10;
            goto LABEL_109;
          }
          if ( v35 <= 0x6E )
          {
            if ( v35 == 102 )
              *v32 = 12;
          }
          else
          {
            if ( v35 == 114 )
            {
              *v32 = 13;
              goto LABEL_109;
            }
            if ( v35 == 116 )
            {
              LOBYTE(v35) = 9;
LABEL_108:
              *v32 = v35;
            }
          }
        }
LABEL_109:
        ++v32;
      }
    }
    if ( v17 == -2 )
      goto LABEL_57;
    if ( v17 == -1 )
    {
      sub_35484(a2, a1, 6, "premature end of input");
      goto LABEL_57;
    }
    if ( v17 <= 0x1F )
      break;
    v15 = a2;
    v16 = (int)a1;
    if ( v17 == 92 )
    {
      v18 = sub_357E4((int)a1, a2);
      if ( v18 == 117 )
      {
        v27 = 4;
        v17 = sub_357E4((int)a1, a2);
        while ( 1 )
        {
          v28 = v17 & 0xFFFFFFDF;
          v29 = v17 - 48;
          v28 -= 65;
          v30 = v28 > 5;
          if ( v28 > 5 )
            v30 = v29 > 9;
          if ( v30 )
            break;
          --v27;
          v17 = sub_357E4((int)a1, a2);
          if ( !v27 )
            goto LABEL_44;
        }
LABEL_56:
        sub_35484(a2, a1, 8, "invalid escape");
        goto LABEL_57;
      }
      v19 = v18 == 92;
      if ( v18 != 92 )
        v19 = (v18 & 0xFFFFFFBF) == 34;
      if ( !v19 && v18 != 47 && (v18 & 0xFFFFFFF7) != 0x66 && ((v18 - 114) & 0xFFFFFFFD) != 0 )
        goto LABEL_56;
      goto LABEL_42;
    }
  }
  sub_35824(a1, v17);
  if ( v17 == 10 )
    sub_35484(a2, a1, 8, "unexpected newline");
  else
    sub_35484(a2, a1, 8, "control character 0x%x", v17);
LABEL_57:
  jsonp_free(a1[16]);
  v8 = a1[15];
  a1[16] = 0;
  a1[17] = 0;
  return v8;
}
