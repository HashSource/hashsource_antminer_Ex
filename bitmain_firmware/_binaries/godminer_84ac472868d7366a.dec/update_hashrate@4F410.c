_DWORD *__fastcall update_hashrate(int a1, int a2, _DWORD *a3)
{
  int v5; // r11
  int v6; // r6
  int v7; // r1
  int v8; // r2
  __int64 v9; // r0
  float v10; // s13
  float v11; // s17
  int v12; // r7
  int v13; // r4
  bool v14; // cc
  int v15; // r2
  unsigned int v16; // r6
  float v17; // s14
  int v18; // r3
  float v19; // s15
  int v20; // r2
  float v21; // s15
  int v22; // r0
  int v23; // r7
  int v24; // lr
  int v25; // r7
  __int64 v26; // kr08_8
  __int64 *v27; // r0
  __int64 v28; // t1
  int v29; // kr00_4
  __int64 v30; // r0
  int v31; // lr
  float v32; // s13
  float v33; // s15
  int v34; // r11
  int i; // r2
  float v36; // s16
  int v37; // r4
  int v38; // r3
  int v39; // r2
  double v40; // d6
  __int64 v41; // r0
  int v43; // r7
  __int64 v44; // kr10_8
  float v45; // s16
  _DWORD *v46; // r4
  int v47; // r1
  char *v48; // r3
  unsigned int v49; // r0
  unsigned int v50; // r3
  float v51; // s16
  float v52; // r0
  float v53; // s16
  unsigned __int64 v54; // [sp+8h] [bp-2Ch]
  int v56; // [sp+18h] [bp-1Ch]
  int v57; // [sp+1Ch] [bp-18h]
  int v58; // [sp+20h] [bp-14h]
  int v59; // [sp+20h] [bp-14h]
  int v60; // [sp+24h] [bp-10h]
  double v61; // [sp+28h] [bp-Ch] BYREF

  (*(void (__fastcall **)(int, double *))(a1 + 88))(a1, &v61);
  v5 = *(_DWORD *)(a1 + 136);
  *(double *)(a2 + 48) = v61;
  if ( v5 > 4 )
    return a3;
  v56 = 16 * v5;
  if ( !*((_BYTE *)&unk_167990 + v5) )
  {
    clock_gettime(1, (struct timespec *)&unk_167994 + 2 * v5);
    clock_gettime(1, (struct timespec *)&unk_1679D4 + 2 * v5);
    clock_gettime(1, (struct timespec *)&unk_167A14 + 2 * v5);
    *((_QWORD *)&unk_167990 + v5 + 25) = 0;
    *((_BYTE *)&unk_167990 + v5) = 1;
  }
  if ( *(_QWORD *)(a1 + 256) )
  {
    v6 = 16 * v5;
    v57 = 16 * v5 + 8;
    clock_gettime(1, (struct timespec *)((char *)&unk_167994 + v57));
    v7 = *(_DWORD *)((char *)&unk_167990 + v6 + 16) - *(_DWORD *)((char *)&unk_167990 + v6 + 8);
    v8 = 1125899907 * v7;
    v9 = 1000LL * (*(_DWORD *)((char *)&unk_167990 + v6 + 12) - *(_DWORD *)((char *)&unk_167990 + v6 + 4))
       + v7 / 1000000;
    v10 = COERCE_FLOAT(((int (__fastcall *)(_DWORD, _DWORD, int))sub_12D588)(v9, HIDWORD(v9), v8));
    v11 = v10 / 1000.0;
    if ( (float)(v10 / 1000.0) >= 5.0 )
    {
      v43 = *(_DWORD *)(a1 + 260);
      v59 = *(_DWORD *)(a1 + 256);
      v60 = *(_DWORD *)(a1 + 188);
      v44 = *(_QWORD *)(a1 + 256) - *((_QWORD *)&unk_167990 + v5 + 25);
      if ( !strcmp((const char *)v60, "grin29")
        || *(_BYTE *)v60 == 97 && *(_BYTE *)(v60 + 1) == 101 && !*(_BYTE *)(v60 + 2) )
      {
        v45 = (float)(sub_12D578(v44, HIDWORD(v44)) / v11) * (float)*(unsigned int *)(a1 + 244);
      }
      else
      {
        v53 = COERCE_FLOAT(
                ((int (__fastcall *)(int, unsigned int))sub_12D578)(
                  1 << *(_DWORD *)(a1 + 244),
                  (1 << (*(_DWORD *)(a1 + 244) - 32)) | (1u >> (32 - *(_DWORD *)(a1 + 244)))));
        v45 = v53 * (float)(sub_12D578(v44, HIDWORD(v44)) / v11);
      }
      v46 = (_DWORD *)((char *)&unk_167A78 + 2896 * v5);
      clock_gettime(1, (struct timespec *)&unk_167994 + 2 * v5);
      v47 = v46[720];
      v48 = (char *)&unk_167990 + 8 * v5;
      *((_DWORD *)v48 + 51) = v43;
      *((_DWORD *)v48 + 50) = v59;
      v49 = v46[722];
      LODWORD(v54) = v49 + 1;
      v50 = v46[723];
      *((float *)&unk_167A78 + 724 * v5 + v47) = v45;
      v46[720] = (v47 + 1) % 720;
      HIDWORD(v54) = (__PAIR64__(v50, v49) + 1) >> 32;
      v51 = v45 + (float)(sub_12D578(v49, v50) * *(float *)(a2 + 40));
      v52 = sub_12D578(v54, HIDWORD(v54));
      *((_QWORD *)v46 + 361) = v54;
      *(float *)(a2 + 40) = v51 / v52;
    }
    else
    {
      v54 = *((_QWORD *)&unk_167A78 + 362 * v5 + 361);
    }
    v12 = HIDWORD(v54);
    v13 = *((_DWORD *)&unk_167A78 + 724 * v5 + 720);
    if ( v54 )
    {
      v58 = *((_DWORD *)&unk_167A78 + 724 * v5 + 720);
      v14 = HIDWORD(v54) != 0;
      v15 = 359;
      if ( !HIDWORD(v54) )
        v14 = (unsigned int)v54 > 0x167;
      if ( v14 )
        v10 = 360.0;
      else
        v15 = v54;
      if ( !v14 )
        v12 = v15;
      LOWORD(v16) = 23302;
      v17 = *((float *)&unk_167A78 + 724 * v5 + (v13 + 719) % 720);
      if ( v14 )
        v12 = 360;
      v18 = v13 + 719;
      HIWORD(v16) = 1456;
      v19 = v17 + 0.0;
      *(float *)(a2 + 32) = v17 + 0.0;
      if ( !v14 )
        v19 = *(float *)&v15;
      v20 = 0;
      if ( !v14 )
        v10 = (float)SLODWORD(v19);
      v21 = 0.0;
      while ( 1 )
      {
        ++v20;
        v21 = v21 + v17;
        v22 = v18 % 720;
        if ( v12 <= v20 )
          break;
        v18 = v22 + 719;
        v17 = *((float *)&unk_167A78
              + 724 * v5
              + v22
              + 719
              - 720 * ((((unsigned int)(v22 + 719) >> 4) * (unsigned __int64)v16) >> 32));
      }
      v13 = v58;
    }
    else
    {
      v10 = 0.0;
      v21 = 0.0;
      *(float *)(a2 + 32) = 0.0 / 0.0;
    }
    v23 = *(_DWORD *)(a1 + 196);
    *(float *)(a2 + 36) = v21 / v10;
    if ( v23 <= 0 )
    {
      v26 = 0;
    }
    else
    {
      v24 = *(_DWORD *)(a1 + 264) + 16;
      v25 = v24 + 48 * v23;
      v26 = 0;
      do
      {
        v27 = (__int64 *)v24;
        do
        {
          v28 = *v27++;
          v26 += v28;
        }
        while ( v27 != (__int64 *)(v24 + 32) );
        v24 += 48;
      }
      while ( v25 != v24 );
    }
    *(_QWORD *)(a2 + 72) = v26;
    clock_gettime(1, (struct timespec *)((char *)&unk_1679D4 + v57));
    v29 = *(_DWORD *)((char *)&unk_167990 + v56 + 80) - *(_DWORD *)((char *)&unk_167990 + v56 + 72);
    v30 = 1000LL * (*(_DWORD *)((char *)&unk_167990 + v56 + 76) - *(_DWORD *)((char *)&unk_167990 + v56 + 68))
        + v29 / 1000000;
    if ( (float)(sub_12D588(v30, HIDWORD(v30), 1125899907 * v29) / 1000.0) < 900.0 )
      goto LABEL_41;
    if ( v54 > 0xB3 )
    {
      v32 = 180.0;
      v31 = 180;
    }
    else
    {
      v31 = v54;
      v32 = (float)(int)v54;
      if ( !(_DWORD)v54 )
      {
        v33 = 0.0;
        goto LABEL_35;
      }
    }
    v33 = 0.0;
    v34 = 724 * v5;
    for ( i = 0; i < v31; ++i )
    {
      v13 = (v13 + 719) % 720;
      v33 = v33 + *((float *)&unk_167A78 + v34 + v13);
    }
LABEL_35:
    v36 = v33 / v32;
    v37 = *(_DWORD *)(a2 + 192);
    if ( v37 > 23 )
    {
      memcpy((void *)(a2 + 96), (const void *)(a2 + 100), 0x5Cu);
      *(float *)(a2 + 188) = v36;
    }
    else
    {
      *(float *)(a2 + 4 * v37 + 96) = v36;
    }
    v38 = *(_DWORD *)(a2 + 200);
    v39 = *(_DWORD *)(a2 + 204);
    v40 = v61 * 0.8;
    *(_DWORD *)(a2 + 192) = v37 + 1;
    *(_DWORD *)(a2 + 200) = v38 + 1;
    *(_DWORD *)(a2 + 204) = __CFADD__(v38, 1) + v39;
    if ( v36 <= v40 )
      *a3 |= 1u;
    clock_gettime(1, (struct timespec *)((char *)&unk_1679D4 + v56));
LABEL_41:
    if ( !strcmp(*(const char **)(a1 + 188), "dash") )
    {
      clock_gettime(1, (struct timespec *)((char *)&unk_167A14 + v57));
      v41 = 1000LL * (*(_DWORD *)((char *)&unk_167990 + v56 + 140) - *(_DWORD *)((char *)&unk_167990 + v56 + 132))
          + (*(_DWORD *)((char *)&unk_167990 + v56 + 144) - *(_DWORD *)((char *)&unk_167990 + v56 + 136)) / 1000000;
      if ( (float)(sub_12D588(v41, HIDWORD(v41), 1000) / 1000.0) >= 3000.0 )
      {
        (*(void (__fastcall **)(int))(a1 + 128))(a1);
        clock_gettime(1, (struct timespec *)((char *)&unk_167A14 + v56));
      }
    }
    return a3;
  }
  clock_gettime(1, (struct timespec *)&unk_167994 + 2 * v5);
  clock_gettime(1, (struct timespec *)&unk_1679D4 + 2 * v5);
  clock_gettime(1, (struct timespec *)&unk_167A14 + 2 * v5);
  *((_QWORD *)&unk_167990 + v5 + 25) = 0;
  return a3;
}
