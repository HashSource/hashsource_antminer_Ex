int __fastcall sub_23A90(char *a1, unsigned int a2, _BYTE *a3, _DWORD *a4, unsigned int a5, int a6)
{
  unsigned int v6; // lr
  unsigned int v7; // r11
  char *v8; // r3
  _BYTE *v9; // r12
  char *v10; // r1
  char *v11; // r8
  int v12; // r4
  __int16 v13; // r7
  char *v14; // r5
  unsigned int i; // r2
  unsigned int v16; // r5
  int v17; // r2
  int v18; // r3
  int v19; // r2
  char *v20; // r3
  char *v21; // lr
  unsigned int v22; // r7
  int v23; // r2
  int v24; // lr
  bool v25; // zf
  unsigned int v26; // lr
  unsigned int v27; // r2
  unsigned int v28; // r5
  bool v29; // cc
  _BYTE *v30; // lr
  unsigned int v31; // r5
  int v32; // r0
  int v34; // r3
  char *v35; // r4
  char *v36; // r7
  int v37; // lr
  int v38; // r9
  unsigned int v39; // r2
  _BYTE *v40; // r2
  char *v41; // r4
  _BYTE *v42; // r9
  int v43; // r8
  unsigned int v44; // r7
  char *v45; // lr
  char *v46; // r8
  _BYTE *v47; // r12
  char v48; // t1
  unsigned int v49; // r4
  char *v51; // [sp+8h] [bp-14h]
  unsigned int v53; // [sp+10h] [bp-Ch]

  v6 = a5;
  v7 = (unsigned int)&a1[a2 - 20];
  v8 = &a1[a2];
  v9 = a3;
  if ( a5 <= 3 )
    a2 = 4 - a5;
  v51 = v8;
  if ( a5 > 3 )
    v10 = a1;
  else
    v10 = &a1[a2];
  v11 = a1;
LABEL_7:
  v10 += ((v10 - v11) >> 5) + 1;
  if ( v7 > (unsigned int)v10 )
  {
    v12 = *(_DWORD *)v10;
    v13 = (_WORD)v10 - (_WORD)a1;
    v14 = v10;
    for ( i = 405029533 * *(_DWORD *)v10; ; i = 405029533 * *(_DWORD *)v10 )
    {
      v17 = 2 * (i >> 18);
      v18 = *(unsigned __int16 *)(a6 + v17);
      *(_WORD *)(a6 + v17) = v13;
      v19 = *(_DWORD *)&a1[v18];
      v20 = &a1[v18];
      if ( v19 != v12 )
        goto LABEL_7;
      v21 = &v11[-v6];
      v22 = v10 - v21;
      if ( v10 != v21 )
      {
        if ( v22 > 3 )
        {
          if ( v22 > 0x10 )
          {
            v40 = v9 + 1;
            if ( v22 > 0x12 )
            {
              v49 = v22 - 18;
              for ( *v9 = 0; v49 > 0xFF; ++v40 )
              {
                v49 -= 255;
                *v40 = 0;
              }
              *v40++ = v49;
            }
            else
            {
              *v9 = v22 - 3;
            }
            v41 = v21;
            v53 = 16 * (((v22 - 16) >> 4) + 1);
            v42 = &v40[v53];
            while ( 1 )
            {
              v43 = *(_DWORD *)v41;
              v9 = v40 + 16;
              v41 += 16;
              *(_DWORD *)v40 = v43;
              *((_DWORD *)v40 + 1) = *((_DWORD *)v41 - 3);
              *((_DWORD *)v40 + 2) = *((_DWORD *)v41 - 2);
              *((_DWORD *)v40 + 3) = *((_DWORD *)v41 - 1);
              if ( v40 + 16 == v42 )
                break;
              v40 += 16;
            }
            v44 = v22 - 16 * ((v22 - 16) >> 4);
            v45 = &v21[v53];
            if ( v44 != 16 )
            {
              v46 = &v45[v44 - 16];
              v47 = v40 + 15;
              do
              {
                v48 = *v45++;
                *++v47 = v48;
              }
              while ( v45 != v46 );
              v9 = &v40[v44];
            }
          }
          else
          {
            *v9 = v22 - 3;
            *(_DWORD *)(v9 + 1) = *(_DWORD *)v21;
            *(_DWORD *)(v9 + 5) = *((_DWORD *)v21 + 1);
            *(_DWORD *)(v9 + 9) = *((_DWORD *)v21 + 2);
            *(_DWORD *)(v9 + 13) = *((_DWORD *)v21 + 3);
            v9 += v22 + 1;
          }
        }
        else
        {
          *(v9 - 2) |= v22;
          *(_DWORD *)v9 = *(_DWORD *)v21;
          v9 += v22;
        }
      }
      v23 = *((_DWORD *)v10 + 1);
      v24 = *((_DWORD *)v20 + 1);
      v25 = v23 == v24;
      v26 = v24 ^ v23;
      if ( v25 )
      {
        v35 = v20 + 8;
        v36 = v10 + 12;
        do
        {
          v37 = *((_DWORD *)v36 - 1);
          v27 = v35 - v20;
          v38 = *(_DWORD *)v35;
          if ( v37 != *(_DWORD *)v35 )
            break;
          v37 = *(_DWORD *)v36;
          v27 = (unsigned int)&v35[4 - (_DWORD)v20];
          v38 = *((_DWORD *)v35 + 1);
          if ( (unsigned int)v36 >= v7 )
          {
            v10 = v36;
            goto LABEL_19;
          }
          v35 += 8;
          v36 += 8;
        }
        while ( v37 == v38 );
        v26 = v37 ^ v38;
      }
      else
      {
        v27 = 4;
      }
      v27 += __clz(__rbit32(v26)) >> 3;
      v10 += v27;
LABEL_19:
      v28 = v14 - v20;
      v29 = v27 > 8;
      if ( v27 <= 8 )
        v29 = v28 > 0x800;
      if ( !v29 )
      {
        v16 = v28 - 1;
        *v9 = (4 * v16) & 0x1C | (32 * (v27 - 1));
        v9[1] = v16 >> 3;
        v9 += 2;
        if ( v7 <= (unsigned int)v10 )
          goto LABEL_27;
        goto LABEL_10;
      }
      v30 = v9 + 1;
      if ( v28 > 0x4000 )
      {
        v31 = v28 - 0x4000;
        v34 = (v31 >> 11) & 8 | 0x10;
        if ( v27 <= 9 )
        {
          *v9 = v34 | (v27 - 2);
          goto LABEL_26;
        }
        v39 = v27 - 9;
        for ( *v9 = v34; v39 > 0xFF; ++v30 )
        {
          v39 -= 255;
          *v30 = 0;
        }
      }
      else
      {
        v31 = v28 - 1;
        if ( v27 <= 0x21 )
        {
          *v9 = (v27 - 2) | 0x20;
          goto LABEL_26;
        }
        v39 = v27 - 33;
        for ( *v9 = 32; v39 > 0xFF; ++v30 )
        {
          v39 -= 255;
          *v30 = 0;
        }
      }
      *v30++ = v39;
LABEL_26:
      *v30 = 4 * v31;
      v9 = v30 + 2;
      v30[1] = v31 >> 6;
      if ( v7 <= (unsigned int)v10 )
      {
LABEL_27:
        v32 = 0;
        goto LABEL_28;
      }
LABEL_10:
      v12 = *(_DWORD *)v10;
      v13 = (_WORD)v10 - (_WORD)a1;
      v14 = v10;
      v6 = 0;
      v11 = v10;
    }
  }
  v32 = -v6;
  v10 = v11;
LABEL_28:
  *a4 = v9 - a3;
  return v51 - &v10[v32];
}
