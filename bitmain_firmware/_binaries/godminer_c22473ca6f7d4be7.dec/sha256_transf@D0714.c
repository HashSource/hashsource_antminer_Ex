int __fastcall sha256_transf(int result, unsigned __int8 *a2, int a3)
{
  int v3; // r3
  unsigned __int8 *v4; // r0
  int *v5; // lr
  char *v6; // r12
  int v7; // r3
  int v8; // r4
  int v9; // r1
  int v10; // t1
  unsigned int v11; // lr
  char *v12; // r3
  unsigned int v13; // t1
  int *v14; // r0
  int **v15; // r3
  int *v16; // r2
  int *v17; // t1
  int v18; // r6
  int v19; // r3
  int v20; // r4
  int v21; // r10
  int v22; // r9
  int v23; // r5
  int v24; // r8
  int v25; // r7
  int v26; // r11
  int v27; // r2
  int v28; // r12
  int v29; // r3
  int v30; // lr
  int v31; // r1
  int **v32; // r1
  int *v33; // r3
  int *v34; // t1
  bool v35; // zf
  int v36; // [sp+0h] [bp-168h]
  unsigned __int8 *v37; // [sp+4h] [bp-164h]
  int *v38; // [sp+8h] [bp-160h]
  unsigned __int8 *v39; // [sp+14h] [bp-154h]
  int *v40; // [sp+18h] [bp-150h]
  int *v41; // [sp+1Ch] [bp-14Ch] BYREF
  int v42; // [sp+20h] [bp-148h]
  int v43; // [sp+24h] [bp-144h]
  int v44; // [sp+28h] [bp-140h]
  int v45; // [sp+2Ch] [bp-13Ch]
  int v46; // [sp+30h] [bp-138h]
  int v47; // [sp+34h] [bp-134h]
  int v48; // [sp+38h] [bp-130h]
  int v49; // [sp+3Ch] [bp-12Ch] BYREF
  _DWORD v50[15]; // [sp+40h] [bp-128h] BYREF
  char v51; // [sp+7Ch] [bp-ECh] BYREF
  char v52; // [sp+100h] [bp-68h] BYREF

  if ( a3 > 0 )
  {
    LOWORD(v3) = 19612;
    HIWORD(v3) = (unsigned int)&unk_163B7C >> 16;
    v36 = v3;
    v40 = (int *)(result + 136);
    v37 = a2;
    v39 = &a2[64 * a3];
    v41 = (int *)(result + 168);
    do
    {
      v4 = v37;
      v5 = &v49;
      v6 = (char *)v50;
      do
      {
        v7 = v4[1];
        v8 = v4[2];
        v9 = v4[3];
        v10 = *v4;
        v4 += 4;
        v5[1] = (v7 << 16) | (v8 << 8) | v9 | (v10 << 24);
        ++v5;
      }
      while ( &v51 != (char *)v5 );
      do
      {
        v11 = *((_DWORD *)v6 + 14);
        v12 = v6;
        v13 = *((_DWORD *)v6 + 1);
        v6 += 4;
        *((_DWORD *)v6 + 15) = (__ROR4__(v11, 19) ^ __ROR4__(v11, 17) ^ (v11 >> 10))
                             + *((_DWORD *)v12 + 9)
                             + *(_DWORD *)v12
                             + (__ROR4__(v13, 18) ^ __ROR4__(v13, 7) ^ (v13 >> 3));
      }
      while ( &v52 != v6 );
      v14 = v41;
      v15 = &v41;
      v16 = v40;
      do
      {
        v17 = (int *)*v16++;
        v15[1] = v17;
        ++v15;
      }
      while ( v14 != v16 );
      v38 = v16;
      v18 = 0;
      v19 = v49;
      v20 = v46;
      v21 = v47;
      v22 = v48;
      v23 = v42;
      v24 = v43;
      v25 = v44;
      v26 = v45;
      while ( 1 )
      {
        v27 = (__ROR4__(v20, 11) ^ __ROR4__(v20, 6) ^ __ROR4__(v20, 25)) + (v22 & ~v20 ^ v21 & v20) + v50[v18];
        v28 = *(_DWORD *)(v36 + 4 * v18++);
        v29 = v27 + v28 + v19;
        v30 = v26 + v29;
        v31 = (__ROR4__(v23, 13) ^ __ROR4__(v23, 2) ^ __ROR4__(v23, 22)) + ((v25 ^ v24) & v23 ^ v25 & v24) + v29;
        v26 = v25;
        v19 = v22;
        if ( v18 == 64 )
          break;
        v25 = v24;
        v22 = v21;
        v24 = v23;
        v21 = v20;
        v23 = v31;
        v20 = v30;
      }
      v42 = v31;
      v32 = &v41;
      v33 = v40;
      v49 = v22;
      v46 = v30;
      v47 = v20;
      v48 = v21;
      v43 = v23;
      v44 = v24;
      v45 = v25;
      do
      {
        result = *v33;
        v34 = v32[1];
        ++v32;
        *v33++ += (int)v34;
      }
      while ( v38 != v33 );
      v35 = v39 == v37 + 64;
      v37 += 64;
    }
    while ( !v35 );
  }
  return result;
}
