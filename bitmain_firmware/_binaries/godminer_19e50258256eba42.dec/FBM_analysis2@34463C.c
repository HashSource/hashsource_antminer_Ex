int __fastcall FBM_analysis2(int a1, int a2, int a3, int *a4, int a5, int a6, int a7, int a8, int a9)
{
  int v10; // r3
  int result; // r0
  _DWORD *v12; // lr
  int v13; // r10
  int v14; // r8
  int v15; // r7
  int v16; // r6
  int v17; // r5
  int v18; // r4
  int v19; // r3
  int v20; // t1
  int v21; // r1
  int v22; // r8
  _DWORD *v23; // r11
  int v24; // r2
  int v25; // r6
  int v26; // r5
  int v27; // r1
  int v28; // r9
  int v29; // r3
  int v30; // r3
  int v31; // r10
  int v32; // r12
  int v33; // r2
  unsigned int v34; // r3
  int v35; // r9
  int v36; // r10
  int v37; // r3
  bool v38; // zf
  int v39; // r3
  int v40; // r3
  int v41; // r6
  int v42; // r11
  int v43; // r4
  _DWORD *v44; // r5
  int v45; // lr
  int v46; // r7
  int v47; // r3
  int v48; // t1
  int v49; // r1
  _DWORD *v50; // lr
  _DWORD *v51; // r2
  int v52; // r6
  int v53; // [sp+4h] [bp-38h]
  int v54; // [sp+4h] [bp-38h]
  int v55; // [sp+4h] [bp-38h]
  _DWORD *v57; // [sp+8h] [bp-34h]
  int v58; // [sp+Ch] [bp-30h]
  int v59; // [sp+10h] [bp-2Ch]
  int v60; // [sp+10h] [bp-2Ch]
  int v61; // [sp+14h] [bp-28h]
  int *v62; // [sp+1Ch] [bp-20h]
  int v63; // [sp+20h] [bp-1Ch]
  _DWORD *v65; // [sp+30h] [bp-Ch]
  _DWORD *v66; // [sp+34h] [bp-8h]
  _DWORD v67[3]; // [sp+3Ch] [bp+0h] BYREF
  char v68; // [sp+48h] [bp+Ch] BYREF

  v10 = *a4;
  result = 3;
  v67[0] = 3;
  v67[1] = 2;
  v67[2] = 1;
  if ( !v10 )
    return result;
  v65 = (_DWORD *)(a2 + 60);
  v12 = (_DWORD *)(a2 + 60);
  v13 = 0;
  v53 = 0;
  v14 = ((a9 + (a8 << 12)) << 15) + 1342177295;
  v63 = ((a9 + (a8 << 12)) << 15) + 1342177279;
  do
  {
    while ( !*v12 || a5 <= v13 )
    {
LABEL_13:
      --v14;
      --v12;
      if ( v14 == v63 )
        goto LABEL_14;
    }
    v15 = 4 * v13;
    result = a1 + 16 * v13;
    v16 = v13;
    while ( 1 )
    {
      v17 = result + 16;
      v18 = 0;
      do
      {
        while ( 1 )
        {
          v20 = *(_DWORD *)result;
          result += 4;
          v19 = v20;
          if ( v20 )
            break;
          if ( result == v17 )
            goto LABEL_11;
        }
        v21 = 0;
        do
        {
          ++v21;
          v19 &= v19 - 1;
        }
        while ( v19 );
        v18 += v21;
      }
      while ( result != v17 );
LABEL_11:
      if ( v18 > 15 )
        break;
      ++v16;
      v15 += 4;
      if ( a5 == v16 )
        goto LABEL_13;
    }
    result = (int)a4;
    *v12 = 0;
    v13 = v16 + 1;
    v51 = (_DWORD *)(4 * v15 + a1);
    *a4 -= v18;
    do
      *v51++ = 0;
    while ( (_DWORD *)(4 * v15 + 16 + a1) != v51 );
    v52 = v14 + 16 * v16;
    --v14;
    --v12;
    *(_DWORD *)(a7 + 4 * v53++) = v52;
  }
  while ( v14 != v63 );
LABEL_14:
  v58 = 0;
  v22 = v53;
  v62 = v67;
  v66 = (_DWORD *)(a3 + 60);
  do
  {
    v23 = v66;
    v59 = 15;
    v54 = a1;
    do
    {
      v24 = v58;
      if ( (v59 & 3) == 3 )
        v24 = 0;
      v58 = v24;
      if ( *v23 )
      {
        switch ( v59 )
        {
          case 4:
          case 5:
          case 6:
          case 7:
            v25 = 1023;
            v26 = 512;
            break;
          case 8:
          case 9:
          case 10:
          case 11:
            v25 = 1535;
            v26 = 1024;
            break;
          case 12:
          case 13:
          case 14:
          case 15:
            v25 = 2047;
            v26 = 1536;
            break;
          default:
            v25 = 511;
            v26 = 0;
            break;
        }
        result = v24;
        if ( v24 < a6 )
        {
          v27 = 16 * (v25 + 1 - v26);
          do
          {
            LOBYTE(v28) = result & 0x1F;
            v29 = (result + 31) & (result >> 31);
            if ( result >= 0 )
              v29 = result;
            v30 = v29 >> 5;
            if ( result <= 0 )
              v28 = -(-result & 0x1F);
            if ( v26 > v25 )
            {
              if ( *v62 > 0 )
                goto LABEL_36;
              *v23 = 0;
              v58 = result + 1;
            }
            else
            {
              v31 = 0;
              v32 = 0;
              v33 = v54 + 4 * (v30 + 4 * v26);
              do
              {
                v34 = *(_DWORD *)(v33 + v31);
                v31 += 16;
                v32 += (v34 >> v28) & 1;
              }
              while ( v27 != v31 );
              if ( *v62 > v32 )
                goto LABEL_36;
              *v23 = 0;
              v35 = 1 << v28;
              v36 = 0;
              v58 = result + 1;
              *a4 -= v32;
              do
              {
                v37 = *(_DWORD *)(v33 + v36);
                v38 = (v37 & v35) == 0;
                v39 = v37 - v35;
                if ( !v38 )
                  *(_DWORD *)(v33 + v36) = v39;
                v36 += 16;
              }
              while ( v27 != v36 );
            }
            v40 = ((a9 + (a8 << 12)) << 15) + 0x40000000 + v59 + 16 * result;
            result = a6;
            *(_DWORD *)(a7 + 4 * v22++) = v40;
LABEL_36:
            ++result;
          }
          while ( a6 > result );
        }
      }
      --v23;
      --v59;
    }
    while ( v59 != -1 );
    a1 = v54;
    v60 = ((a9 + (a8 << 12)) << 15) + 1342177295;
    v57 = v65;
    v61 = 0;
    do
    {
      if ( *v57 )
      {
        v41 = v61;
        if ( v61 < a5 )
        {
          v55 = *v62;
          do
          {
            v42 = 16 * v41;
            v43 = 0;
            v44 = (_DWORD *)(a1 + 16 * v41);
            v45 = 16 * v41 + 16;
            result = (int)v44;
            v46 = a1 + v45;
            do
            {
              while ( 1 )
              {
                v48 = *(_DWORD *)result;
                result += 4;
                v47 = v48;
                if ( v48 )
                  break;
                if ( v46 == result )
                  goto LABEL_47;
              }
              v49 = 0;
              do
              {
                ++v49;
                v47 &= v47 - 1;
              }
              while ( v47 );
              v43 += v49;
            }
            while ( v46 != result );
LABEL_47:
            if ( v43 >= v55 )
            {
              v50 = (_DWORD *)(v45 + a1);
              *v57 = 0;
              v61 = v41 + 1;
              *a4 -= v43;
              do
                *v44++ = 0;
              while ( v50 != v44 );
              v41 = a5;
              *(_DWORD *)(a7 + 4 * v22++) = v60 + v42;
            }
            ++v41;
          }
          while ( a5 > v41 );
        }
      }
      --v57;
      --v60;
    }
    while ( v60 != v63 );
    ++v62;
  }
  while ( v62 != (int *)&v68 );
  return result;
}
