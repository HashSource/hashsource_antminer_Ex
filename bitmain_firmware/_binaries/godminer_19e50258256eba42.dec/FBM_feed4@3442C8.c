int __fastcall FBM_feed4(unsigned int *a1, int a2, int a3, int a4, int *a5, int *a6)
{
  int v8; // r8
  unsigned int *v9; // r5
  int v10; // r1
  unsigned int v11; // r3
  int v12; // r6
  int v13; // r4
  unsigned int v14; // r1
  int v15; // r4
  int result; // r0
  int v17; // r4
  int *v18; // r3
  int v19; // r4
  int *v20; // r3
  int v21; // r4
  int *v22; // r2
  int *v23; // r3
  int v24; // t1
  int *v25; // r1
  int *v26; // r2
  int v27; // t1
  int v28; // r4
  unsigned int v29; // r3
  int v30; // [sp+4h] [bp-38h]
  int v32; // [sp+24h] [bp-18h]
  int v33; // [sp+28h] [bp-14h]
  int v35; // [sp+34h] [bp-8h] BYREF

  v8 = 1;
  v9 = a1;
  v33 = -1;
  v35 = 0;
  v32 = -1;
  while ( 1 )
  {
    v10 = (v8 - 1) % 5;
    if ( v10 != 4 )
    {
      v11 = *v9;
      if ( *v9 )
      {
        v12 = 32 * v10;
        v13 = 0;
        while ( 1 )
        {
          if ( ((v11 >> v13) & 1) != 0 )
          {
            v30 = v13 + v12;
            ++v13;
            FBM_kit(a2, a3, a4, &v35, (v8 - 1) / 5, v30);
            if ( v13 == 32 )
              goto LABEL_9;
          }
          else if ( ++v13 == 32 )
          {
            goto LABEL_9;
          }
          v11 = *v9;
        }
      }
      goto LABEL_9;
    }
    if ( v8 != 5 )
      break;
    v14 = *v9;
    v29 = a1[4];
    v32 = HIWORD(v29) & 1;
    v33 = (unsigned __int16)v29 >> 4;
    if ( *v9 << 28 )
      goto LABEL_13;
LABEL_10:
    ++v8;
    ++v9;
  }
  v14 = *v9;
  if ( !(*v9 << 28) )
    goto LABEL_9;
LABEL_13:
  v15 = 0;
  if ( (v14 & 1) != 0 )
    goto LABEL_16;
  while ( ++v15 != 4 )
  {
    if ( ((*v9 >> v15) & 1) != 0 )
LABEL_16:
      FBM_kit(a2, a3, a4, &v35, (v8 - 1) / 5, v15 + 128);
  }
LABEL_9:
  if ( v8 != 10320 )
    goto LABEL_10;
  result = v35;
  v17 = (v33 + (v32 << 12)) << 15;
  if ( (unsigned int)(v35 - 1) <= 0x270E )
  {
    FBM_analysis(a2, a3, a4, &v35, 2048, 128, (int)a5, v32, v33);
    result = v35;
    if ( v35 )
    {
      v22 = a6;
      v23 = a5 - 1;
      do
      {
        v24 = v23[1];
        ++v23;
        *v22++ = v24;
      }
      while ( a5 + 31 != v23 );
    }
    else
    {
      v25 = a6;
      v26 = a5 - 1;
      do
      {
        v27 = v26[1];
        ++v26;
        v28 = v27 + 0x20000000;
        if ( v27 )
          *v25 = v28;
        else
          *v25 = 0;
        ++v25;
      }
      while ( a5 + 31 != v26 );
    }
  }
  else if ( v35 > 9999 )
  {
    v20 = a6;
    v21 = v17 + 1342177280;
    *a5 = v21;
    *a6 = v21;
    do
    {
      v20[1] = 0;
      ++v20;
    }
    while ( v20 != a6 + 31 );
  }
  else if ( !v35 )
  {
    v18 = a6;
    v19 = v17 + 805306368;
    *a5 = v19;
    *a6 = v19;
    do
    {
      v18[1] = 0;
      ++v18;
    }
    while ( v18 != a6 + 31 );
  }
  return result;
}
