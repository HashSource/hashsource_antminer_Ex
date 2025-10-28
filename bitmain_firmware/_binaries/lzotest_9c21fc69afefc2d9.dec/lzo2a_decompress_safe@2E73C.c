int __fastcall lzo2a_decompress_safe(unsigned __int8 *a1, int a2, unsigned int a3, unsigned __int8 **a4)
{
  unsigned __int8 *v4; // r1
  unsigned __int8 *v5; // r7
  int v6; // r6
  unsigned int v7; // r4
  unsigned __int8 *v8; // lr
  int v9; // r5
  unsigned __int8 *v10; // r12
  unsigned int v11; // r4
  unsigned int v12; // r9
  int v13; // r5
  unsigned __int8 v14; // r12
  int v15; // r4
  unsigned int v16; // r4
  bool v17; // zf
  unsigned int v18; // r11
  int v19; // r12
  unsigned __int8 *v20; // r12
  _BOOL4 v21; // r5
  unsigned __int8 *v22; // r5
  unsigned __int8 *v23; // r10
  unsigned __int8 v24; // t1
  unsigned __int8 *v25; // lr
  int v27; // r9
  unsigned int v28; // t1
  unsigned int v29; // r5
  unsigned __int8 *v30; // r12
  int v31; // r5
  int v32; // r9
  int v33; // t1
  unsigned int v34; // r5
  unsigned int v35; // r5
  _BOOL4 v36; // r9
  unsigned __int8 *v37; // r9
  unsigned __int8 *v38; // r11
  unsigned __int8 v39; // t1
  int v40; // r9

  v4 = &a1[a2];
  v5 = &(*a4)[a3];
  if ( a1 < v4 )
  {
    v6 = 0;
    v7 = 0;
    v8 = (unsigned __int8 *)a3;
    while ( 1 )
    {
      v10 = a1;
      if ( !v6 )
        break;
      v12 = v7 >> 1;
      v13 = v6 - 1;
      if ( (v7 & 1) == 0 )
        goto LABEL_6;
      if ( v6 == 1 )
      {
        if ( a1 == v4 )
          goto LABEL_49;
        v15 = *a1++;
        v10 = a1;
        v16 = v15 | v12;
        v17 = (v16 & 1) == 0;
        v7 = v16 >> 1;
        if ( v17 )
        {
          v6 = 5;
          goto LABEL_17;
        }
        v6 = 7;
LABEL_28:
        if ( (unsigned int)(v4 - v10) <= 1 )
          goto LABEL_49;
        v27 = a1[1];
        v28 = *a1;
        a1 += 2;
        v29 = v28 >> 5;
        v30 = &v8[-(v28 & 0x1F | (32 * v27))];
        if ( v28 >> 5 )
        {
          if ( v30 == v8 )
          {
            *a4 = &v8[-a3];
            if ( v4 == a1 )
              return 0;
            if ( v4 > a1 )
              return -8;
            return -4;
          }
          v34 = v29 + 2;
        }
        else
        {
          if ( a1 == v4 )
            goto LABEL_49;
          v31 = 9;
          while ( 1 )
          {
            v33 = *a1++;
            v32 = v33;
            if ( v33 )
              break;
            v31 += 255;
            if ( v31 == -502 )
              goto LABEL_50;
            if ( a1 == v4 )
              goto LABEL_49;
          }
          v34 = v32 + v31;
        }
        v36 = v8 <= v30;
        if ( a3 > (unsigned int)v30 )
          v36 = 1;
        if ( v36 )
          goto LABEL_51;
        if ( v5 - v8 < v34 )
          goto LABEL_50;
        v37 = v8 - 1;
        v38 = &v30[v34];
        do
        {
          v39 = *v30++;
          *++v37 = v39;
        }
        while ( v30 != v38 );
        v8 += v34;
LABEL_9:
        if ( v4 <= a1 )
          goto LABEL_25;
      }
      else
      {
        v7 >>= 2;
        v35 = v6 - 2;
        if ( (v12 & 1) != 0 )
        {
          v6 -= 2;
          goto LABEL_28;
        }
        if ( v35 > 1 )
          goto LABEL_39;
        if ( a1 == v4 )
        {
LABEL_49:
          *a4 = &v8[-a3];
          return -4;
        }
        v40 = *a1++;
        v6 += 4;
        ++v10;
        v7 |= v40 << v35;
LABEL_17:
        v18 = (v7 & 3) + 2;
        v7 >>= 2;
        if ( v4 == v10 )
          goto LABEL_49;
        if ( v5 - v8 < v18 )
        {
LABEL_50:
          *a4 = &v8[-a3];
          return -5;
        }
        v19 = *a1++;
        v20 = &v8[~v19];
        v21 = v8 <= v20;
        if ( a3 > (unsigned int)v20 )
          v21 = 1;
        if ( v21 )
        {
LABEL_51:
          *a4 = &v8[-a3];
          return -6;
        }
        v22 = v8 - 1;
        v23 = &v20[v18];
        do
        {
          v24 = *v20++;
          *++v22 = v24;
        }
        while ( v23 != v20 );
        v8 += v18;
        if ( v4 <= a1 )
        {
LABEL_25:
          v25 = &v8[-a3];
          goto LABEL_26;
        }
      }
    }
    if ( a1 == v4 )
      goto LABEL_49;
    v9 = *a1++;
    v10 = a1;
    v11 = v9 | v7;
    v12 = v11 >> 1;
    if ( (v11 & 1) == 0 )
    {
      v13 = 7;
LABEL_6:
      if ( v4 == v10 )
        goto LABEL_49;
      if ( v5 == v8 )
        goto LABEL_50;
      v14 = *a1;
      v6 = v13;
      v7 = v12;
      ++a1;
      *v8++ = v14;
      goto LABEL_9;
    }
    v7 = v11 >> 2;
    if ( (v12 & 1) != 0 )
    {
      v6 = 6;
      goto LABEL_28;
    }
    v35 = 6;
LABEL_39:
    v6 = v35 - 2;
    goto LABEL_17;
  }
  v25 = 0;
LABEL_26:
  *a4 = v25;
  return -7;
}
