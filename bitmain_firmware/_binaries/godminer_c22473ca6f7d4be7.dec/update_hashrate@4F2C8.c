_DWORD *__fastcall update_hashrate(int a1, int a2, _DWORD *a3)
{
  int v5; // r11
  float v6; // s13
  float v7; // s17
  float *v8; // r8
  int v9; // r7
  int v10; // r4
  bool v11; // cc
  int v12; // r2
  unsigned int v13; // r6
  float v14; // s14
  int v15; // r3
  float v16; // s15
  int v17; // r2
  float v18; // s15
  int v19; // r0
  int v20; // r7
  int v21; // lr
  int v22; // r7
  __int64 v23; // kr00_8
  __int64 *v24; // r0
  __int64 v25; // t1
  int v26; // lr
  float v27; // s13
  float v28; // s15
  int v29; // r11
  int i; // r2
  float v31; // s16
  int v32; // r4
  int v33; // r3
  int v34; // r2
  double v35; // d6
  const char *v36; // r1
  const char *v38; // r1
  int v39; // r7
  __int64 v40; // kr08_8
  float v41; // s16
  float *v42; // r4
  int v43; // r1
  char *v44; // r3
  __int64 v45; // r0
  unsigned int v46; // r3
  int v47; // r2
  float v48; // s16
  float v49; // r0
  int v50; // r0
  char v51; // r1
  int v52; // r3
  __int64 v53; // r0
  float v54; // s16
  unsigned __int64 v55; // [sp+8h] [bp-2Ch]
  int v57; // [sp+18h] [bp-1Ch]
  int v58; // [sp+1Ch] [bp-18h]
  int v59; // [sp+20h] [bp-14h]
  int v60; // [sp+20h] [bp-14h]
  int v61; // [sp+24h] [bp-10h]
  double v62; // [sp+28h] [bp-Ch] BYREF

  (*(void (__fastcall **)(int, double *))(a1 + 88))(a1, &v62);
  v5 = *(_DWORD *)(a1 + 136);
  *(double *)(a2 + 48) = v62;
  if ( v5 > 4 )
    return a3;
  v57 = 16 * v5;
  if ( !*((_BYTE *)&unk_167988 + v5) )
  {
    clock_gettime(1, (struct timespec *)&unk_16798C + 2 * v5);
    clock_gettime(1, (struct timespec *)&unk_1679CC + 2 * v5);
    clock_gettime(1, (struct timespec *)&unk_167A0C + 2 * v5);
    *((_QWORD *)&unk_167988 + v5 + 25) = 0;
    *((_BYTE *)&unk_167988 + v5) = 1;
  }
  if ( *(_QWORD *)(a1 + 256) )
  {
    v58 = 16 * v5 + 8;
    clock_gettime(1, (struct timespec *)((char *)&unk_16798C + v58));
    v6 = (float)(1000LL * (*((_DWORD *)&unk_167988 + 4 * v5 + 3) - *((_DWORD *)&unk_167988 + 4 * v5 + 1))
               + (*((_DWORD *)&unk_167988 + 4 * v5 + 4) - *((_DWORD *)&unk_167988 + 4 * v5 + 2)) / 1000000);
    v7 = v6 / 1000.0;
    if ( (float)(v6 / 1000.0) >= 5.0 )
    {
      LOWORD(v38) = -3316;
      HIWORD(v38) = (unsigned int)"heartbeat" >> 16;
      v39 = *(_DWORD *)(a1 + 260);
      v60 = *(_DWORD *)(a1 + 256);
      v61 = *(_DWORD *)(a1 + 188);
      v40 = *(_QWORD *)(a1 + 256) - *((_QWORD *)&unk_167988 + v5 + 25);
      if ( !strcmp((const char *)v61, v38) || *(_BYTE *)v61 == 97 && *(_BYTE *)(v61 + 1) == 101 && !*(_BYTE *)(v61 + 2) )
      {
        v41 = (float)(COERCE_FLOAT(sub_12D288(v40)) / v7) * (float)*(unsigned int *)(a1 + 244);
      }
      else
      {
        v50 = *(_DWORD *)(a1 + 244);
        v51 = 32 - v50;
        v52 = 1 << (v50 - 32);
        LODWORD(v53) = 1 << v50;
        HIDWORD(v53) = v52 | (1u >> v51);
        v54 = COERCE_FLOAT(sub_12D288(v53));
        v41 = v54 * (float)(COERCE_FLOAT(sub_12D288(v40)) / v7);
      }
      v8 = flt_167A70;
      v42 = &flt_167A70[724 * v5];
      clock_gettime(1, (struct timespec *)&unk_16798C + 2 * v5);
      v43 = *((_DWORD *)v42 + 720);
      v44 = (char *)&unk_167988 + 8 * v5;
      *((_DWORD *)v44 + 51) = v39;
      *((_DWORD *)v44 + 50) = v60;
      *(float *)&v45 = v42[722];
      LODWORD(v55) = v45 + 1;
      v46 = *((_DWORD *)v42 + 723);
      v47 = (v43 + 1) % 720;
      flt_167A70[724 * v5 + v43] = v41;
      HIDWORD(v45) = v46;
      *((_DWORD *)v42 + 720) = v47;
      HIDWORD(v55) = (__PAIR64__(v46, v45) + 1) >> 32;
      v48 = v41 + (float)(COERCE_FLOAT(sub_12D288(v45)) * *(float *)(a2 + 40));
      v49 = COERCE_FLOAT(sub_12D288(v55));
      *((_QWORD *)v42 + 361) = v55;
      *(float *)(a2 + 40) = v48 / v49;
    }
    else
    {
      LOWORD(v8) = 31344;
      HIWORD(v8) = (unsigned int)&unk_166860 >> 16;
      v55 = *(_QWORD *)&v8[724 * v5 + 722];
    }
    v9 = HIDWORD(v55);
    v10 = LODWORD(v8[724 * v5 + 720]);
    if ( v55 )
    {
      v59 = LODWORD(v8[724 * v5 + 720]);
      v11 = HIDWORD(v55) != 0;
      v12 = 359;
      if ( !HIDWORD(v55) )
        v11 = (unsigned int)v55 > 0x167;
      if ( v11 )
        v6 = 360.0;
      else
        v12 = v55;
      if ( !v11 )
        v9 = v12;
      LOWORD(v13) = 23302;
      v14 = v8[724 * v5 + (v10 + 719) % 720];
      if ( v11 )
        v9 = 360;
      v15 = v10 + 719;
      HIWORD(v13) = 1456;
      v16 = v14 + 0.0;
      *(float *)(a2 + 32) = v14 + 0.0;
      if ( !v11 )
        v16 = *(float *)&v12;
      v17 = 0;
      if ( !v11 )
        v6 = (float)SLODWORD(v16);
      v18 = 0.0;
      while ( 1 )
      {
        ++v17;
        v18 = v18 + v14;
        v19 = v15 % 720;
        if ( v9 <= v17 )
          break;
        v15 = v19 + 719;
        v14 = v8[724 * v5 + v19 + 719 - 720 * ((((unsigned int)(v19 + 719) >> 4) * (unsigned __int64)v13) >> 32)];
      }
      v10 = v59;
    }
    else
    {
      v6 = 0.0;
      v18 = 0.0;
      *(float *)(a2 + 32) = 0.0 / 0.0;
    }
    v20 = *(_DWORD *)(a1 + 196);
    *(float *)(a2 + 36) = v18 / v6;
    if ( v20 <= 0 )
    {
      v23 = 0;
    }
    else
    {
      v21 = *(_DWORD *)(a1 + 264) + 16;
      v22 = v21 + 48 * v20;
      v23 = 0;
      do
      {
        v24 = (__int64 *)v21;
        do
        {
          v25 = *v24++;
          v23 += v25;
        }
        while ( v24 != (__int64 *)(v21 + 32) );
        v21 += 48;
      }
      while ( v22 != v21 );
    }
    *(_QWORD *)(a2 + 72) = v23;
    clock_gettime(1, (struct timespec *)((char *)&unk_1679CC + v58));
    if ( (float)((float)(1000LL
                       * (*(_DWORD *)((char *)&unk_167988 + v57 + 76) - *(_DWORD *)((char *)&unk_167988 + v57 + 68))
                       + (*(_DWORD *)((char *)&unk_167988 + v57 + 80) - *(_DWORD *)((char *)&unk_167988 + v57 + 72))
                       / 1000000)
               / 1000.0) < 900.0 )
      goto LABEL_41;
    if ( v55 > 0xB3 )
    {
      v27 = 180.0;
      v26 = 180;
    }
    else
    {
      v26 = v55;
      v27 = (float)(int)v55;
      if ( !(_DWORD)v55 )
      {
        v28 = 0.0;
        goto LABEL_35;
      }
    }
    v28 = 0.0;
    v29 = 724 * v5;
    for ( i = 0; i < v26; ++i )
    {
      v10 = (v10 + 719) % 720;
      v28 = v28 + v8[v29 + v10];
    }
LABEL_35:
    v31 = v28 / v27;
    v32 = *(_DWORD *)(a2 + 192);
    if ( v32 > 23 )
    {
      memcpy((void *)(a2 + 96), (const void *)(a2 + 100), 0x5Cu);
      *(float *)(a2 + 188) = v31;
    }
    else
    {
      *(float *)(a2 + 4 * v32 + 96) = v31;
    }
    v33 = *(_DWORD *)(a2 + 200);
    v34 = *(_DWORD *)(a2 + 204);
    v35 = v62 * 0.8;
    *(_DWORD *)(a2 + 192) = v32 + 1;
    *(_DWORD *)(a2 + 200) = v33 + 1;
    *(_DWORD *)(a2 + 204) = __CFADD__(v33, 1) + v34;
    if ( v31 <= v35 )
      *a3 |= 1u;
    clock_gettime(1, (struct timespec *)((char *)&unk_1679CC + v57));
LABEL_41:
    LOWORD(v36) = -8652;
    HIWORD(v36) = ((unsigned int)&loc_12D2D2 + 2) >> 16;
    if ( !strcmp(*(const char **)(a1 + 188), v36) )
    {
      clock_gettime(1, (struct timespec *)((char *)&unk_167A0C + v58));
      if ( (float)((float)(1000LL
                         * (*(_DWORD *)((char *)&unk_167988 + v57 + 140) - *(_DWORD *)((char *)&unk_167988 + v57 + 132))
                         + (*(_DWORD *)((char *)&unk_167988 + v57 + 144) - *(_DWORD *)((char *)&unk_167988 + v57 + 136))
                         / 1000000)
                 / 1000.0) >= 3000.0 )
      {
        (*(void (__fastcall **)(int))(a1 + 128))(a1);
        clock_gettime(1, (struct timespec *)((char *)&unk_167A0C + v57));
      }
    }
    return a3;
  }
  clock_gettime(1, (struct timespec *)&unk_16798C + 2 * v5);
  clock_gettime(1, (struct timespec *)&unk_1679CC + 2 * v5);
  clock_gettime(1, (struct timespec *)&unk_167A0C + 2 * v5);
  *((_QWORD *)&unk_167988 + v5 + 25) = 0;
  return a3;
}
