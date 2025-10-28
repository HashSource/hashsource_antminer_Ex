int __fastcall FBM_feed3(int a1, int a2, int a3, _DWORD *a4, _DWORD *a5, int *a6, int *a7)
{
  int v7; // r6
  int v8; // r11
  _DWORD *v9; // r7
  int v10; // r8
  int *v11; // r4
  int v12; // r9
  int v13; // r10
  unsigned __int8 v14; // r5
  bool v15; // zf
  bool v16; // zf
  int v17; // r2
  int *v18; // r3
  int v19; // r6
  int result; // r0
  int *v21; // r3
  int v22; // r4
  int *v23; // r3
  int v24; // r1
  int *v25; // r2
  int *v26; // r3
  int v27; // t1
  int *v28; // r1
  int *v29; // r2
  int v30; // t1
  int v31; // r0
  int v32; // r3
  int *v33; // r2
  int *v34; // r1
  int *v35; // r2
  int v36; // t1
  int v37; // r4
  int *v38; // r2
  int *v39; // r3
  int v40; // t1
  int v41; // [sp+18h] [bp-1Ch]
  int v45[2]; // [sp+2Ch] [bp-8h] BYREF

  v45[0] = 0;
  if ( !a1 )
  {
    v32 = 671055872;
LABEL_40:
    v33 = a7;
    *a6 = v32;
    *a7 = v32;
    do
    {
      v33[1] = 0;
      ++v33;
    }
    while ( v33 != a7 + 31 );
    return 0;
  }
  v7 = -1;
  v8 = 0;
  v9 = (_DWORD *)(a2 + 4);
  v10 = -1;
  v11 = a7 + 31;
  do
  {
    v12 = *(v9 - 1);
    v13 = *v9 >> 20;
    v41 = (*v9 >> 8) & 0xFFF;
    v14 = *v9;
    v15 = v12 == v10;
    if ( v12 == v10 )
      v15 = v13 == v7;
    if ( v15 )
    {
      FBM_kit2(a3, (int)a4, (int)a5, v45, v41, v14);
    }
    else
    {
      v16 = v10 == -1;
      if ( v10 == -1 )
        v16 = v7 == -1;
      v17 = v16;
      if ( v16 )
      {
        v7 = *v9 >> 20;
        v10 = *(v9 - 1);
        FBM_kit2(a3, (int)a4, (int)a5, v45, v41, v14);
      }
      else
      {
        if ( (unsigned int)(v45[0] - 1) <= 0x270E )
        {
          FBM_analysis2(a3, (int)a4, (int)a5, v45, 2048, 128, (int)a6, v10, v7);
          if ( v45[0] )
          {
            v25 = a7;
            v26 = a6 - 1;
            do
            {
              v27 = v26[1];
              ++v26;
              *v25++ = v27;
            }
            while ( a6 + 31 != v26 );
          }
          else
          {
            v28 = a7;
            v29 = a6 - 1;
            do
            {
              v30 = v29[1];
              ++v29;
              v31 = v30 + 0x20000000;
              if ( v30 )
                *v28 = v31;
              else
                *v28 = 0;
              ++v28;
            }
            while ( a6 + 31 != v29 );
          }
        }
        else if ( v45[0] <= 9999 )
        {
          if ( !v45[0] )
          {
            v23 = a7;
            v24 = (v7 + ((v10 + 4) << 12)) << 15;
            *a6 = v24;
            *a7 = v24;
            do
            {
              v23[1] = 0;
              ++v23;
            }
            while ( v23 != v11 );
          }
        }
        else
        {
          v18 = a7;
          v19 = (v7 + ((v10 + 10) << 12)) << 15;
          *a6 = v19;
          *a7 = v19;
          do
          {
            v18[1] = v17;
            ++v18;
          }
          while ( v18 != v11 );
        }
        v7 = v13;
        initialization2(a3, 2048, 4, 16, 16, a4, a5, a6);
        v10 = v12;
        FBM_kit2(a3, (int)a4, (int)a5, v45, v41, v14);
      }
    }
    ++v8;
    v9 += 2;
  }
  while ( a1 != v8 );
  result = v45[0];
  if ( (unsigned int)(v45[0] - 1) > 0x270E )
  {
    if ( v45[0] > 9999 )
    {
      v21 = a7;
      v22 = (v7 + ((v10 + 10) << 12)) << 15;
      *a6 = v22;
      *a7 = v22;
      do
      {
        v21[1] = 0;
        ++v21;
      }
      while ( v21 != a7 + 31 );
      return result;
    }
    if ( v45[0] )
      return result;
    v32 = (v7 + ((v10 + 6) << 12)) << 15;
    goto LABEL_40;
  }
  FBM_analysis2(a3, (int)a4, (int)a5, v45, 2048, 128, (int)a6, v10, v7);
  result = v45[0];
  if ( v45[0] )
  {
    v38 = a7;
    v39 = a6 - 1;
    do
    {
      v40 = v39[1];
      ++v39;
      *v38++ = v40;
    }
    while ( a6 + 31 != v39 );
  }
  else
  {
    v34 = a7;
    v35 = a6 - 1;
    do
    {
      v36 = v35[1];
      ++v35;
      v37 = v36 + 0x20000000;
      if ( v36 )
        *v34 = v37;
      else
        *v34 = 0;
      ++v34;
    }
    while ( a6 + 31 != v35 );
  }
  return result;
}
