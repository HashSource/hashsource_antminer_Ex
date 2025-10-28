int __fastcall sub_14AD0(const char *a1)
{
  const char *v1; // r4
  char **v2; // r6
  size_t v3; // r7
  const char *i; // r5
  int v5; // r3
  bool v6; // zf
  const char *v7; // t1
  int v8; // r3
  const char *v9; // r2
  int v10; // t1
  bool v11; // zf
  int result; // r0
  int v13; // r3
  bool v14; // zf
  int v15; // t1
  bool v16; // zf
  int v17; // t1
  _DWORD *v18; // r5
  int v19; // t1
  _DWORD *v20; // r5
  int v21; // t1
  _DWORD *v22; // r5
  int v23; // t1
  _DWORD *v24; // r5
  int v25; // t1
  void *v26; // r0

  v1 = a1;
  if ( !a1 || !*a1 )
LABEL_39:
    sub_14610((const char *)off_430BC, -1, 1);
  while ( 1 )
  {
    v2 = &off_2F870;
    v3 = 6;
    for ( i = "LZO1-1"; ; v3 = strlen(i) )
    {
      if ( !strncasecmp(v1, i, v3) )
      {
        v5 = (unsigned __int8)v1[v3];
        v6 = v5 == 44;
        if ( v5 != 44 )
          v6 = v5 == 0;
        if ( v6 )
        {
          result = (int)sub_14378(v2[1]);
          goto LABEL_28;
        }
      }
      if ( &unk_30558 == (_UNKNOWN *)v2 )
        break;
      v7 = v2[14];
      v2 += 14;
      i = v7;
      if ( !v7 )
        break;
    }
    if ( sub_14320(v1, "all") && sub_14320(v1, "avail") )
    {
      if ( sub_14320(v1, "ALL") )
      {
        if ( sub_14320(v1, "lzo") )
        {
          if ( sub_14320(v1, "bench") )
          {
            if ( sub_14320(v1, "m1") )
            {
              if ( sub_14320(v1, "m99") )
              {
                if ( sub_14320(v1, "m999") )
                {
                  if ( sub_14320(v1, "1x999") )
                  {
                    if ( sub_14320(v1, "1y999") )
                    {
                      v8 = *(unsigned __int8 *)v1;
                      v9 = v1;
                      do
                      {
                        if ( (unsigned int)(v8 - 48) > 9 )
                        {
                          printf("%s: invalid method '%s'\n\n", (const char *)off_430BC, v1);
                          exit(1);
                        }
                        v10 = *(unsigned __int8 *)++v9;
                        v8 = v10;
                        v11 = v10 == 44;
                        if ( v10 != 44 )
                          v11 = v8 == 0;
                      }
                      while ( !v11 );
                      v26 = (void *)strtol(v1, 0, 10);
                      result = (int)sub_14378(v26);
                    }
                    else
                    {
                      result = (int)sub_14480((char *)0x265D, 9829);
                    }
                  }
                  else
                  {
                    result = (int)sub_14480((char *)0x25F9, 9729);
                  }
                }
                else
                {
                  v20 = &unk_305E0;
                  result = 902;
                  do
                  {
                    sub_14378((void *)result);
                    v21 = v20[1];
                    ++v20;
                    result = v21;
                  }
                  while ( v21 );
                }
              }
              else
              {
                v24 = &unk_305CC;
                result = 921;
                do
                {
                  sub_14378((void *)result);
                  v25 = v24[1];
                  ++v24;
                  result = v25;
                }
                while ( v25 );
              }
            }
            else
            {
              v22 = &unk_305AC;
              result = 21;
              do
              {
                sub_14378((void *)result);
                v23 = v22[1];
                ++v22;
                result = v23;
              }
              while ( v23 );
            }
          }
          else
          {
            v18 = &unk_30590;
            result = 1;
            do
            {
              sub_14378((void *)result);
              v19 = v18[1];
              ++v18;
              result = v19;
            }
            while ( v19 );
          }
        }
        else
        {
          result = (int)sub_14480((char *)1, 999);
        }
      }
      else
      {
        sub_14480((char *)1, 4999);
        sub_14480((char *)0x25F9, 9729);
        result = (int)sub_14480((char *)0x2635, 9789);
      }
    }
    else
    {
      result = (int)sub_14480((char *)1, 4999);
    }
LABEL_28:
    v13 = *(unsigned __int8 *)v1;
    v14 = v13 == 44;
    if ( v13 != 44 )
      v14 = v13 == 0;
    if ( !v14 )
    {
      do
      {
        v15 = *(unsigned __int8 *)++v1;
        v13 = v15;
        v16 = v15 == 0;
        if ( v15 )
          v16 = v13 == 44;
      }
      while ( !v16 );
    }
    if ( v13 == 44 )
    {
      do
      {
        v17 = *(unsigned __int8 *)++v1;
        v13 = v17;
      }
      while ( v17 == 44 );
    }
    if ( !v13 )
      return result;
    if ( !*v1 )
      goto LABEL_39;
  }
}
