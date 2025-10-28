int __fastcall lzo_adler32(unsigned int a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned int v3; // r3
  unsigned int i; // r4
  int v5; // r9
  unsigned int v6; // r12
  unsigned __int8 *v7; // r2
  int v8; // t1
  unsigned int v10; // r8
  unsigned __int8 *v11; // lr
  int v12; // r6
  int v13; // r3
  int v14; // r0
  int v15; // r12
  int v16; // r3
  int v17; // r12
  int v18; // r3
  int v19; // r12
  int v20; // r3
  int v21; // r12
  int v22; // r3
  int v23; // r12
  int v24; // r3
  int v25; // r12
  int v26; // r3
  int v27; // r12
  int v28; // r3
  int v29; // r12
  int v30; // r3
  int v31; // r12
  int v32; // r3
  int v33; // r12
  int v34; // r3
  int v35; // r12
  int v36; // r3
  int v37; // r12
  int v38; // r3
  int v39; // r0
  int v40; // r9
  unsigned int v41; // r8

  if ( !a2 )
    return 1;
  v3 = (unsigned __int16)a1;
  for ( i = HIWORD(a1); a3; i %= 0xFFF1u )
  {
    if ( a3 <= 0x15AF )
    {
      if ( a3 <= 0xF )
      {
        v6 = 0;
        goto LABEL_8;
      }
      v5 = a3;
      a3 = 0;
    }
    else
    {
      v5 = 5552;
      a3 -= 5552;
    }
    v10 = (unsigned int)(v5 - 16) >> 4;
    v11 = a2 + 16;
    do
    {
      v12 = *(v11 - 16);
      v11 += 16;
      v13 = v12 + v3;
      v14 = *(v11 - 31) + v13;
      v15 = *(v11 - 30) + v14;
      v16 = v13 + v14 + v15;
      v17 = *(v11 - 29) + v15;
      v18 = v16 + v17;
      v19 = *(v11 - 28) + v17;
      v20 = v18 + v19;
      v21 = *(v11 - 27) + v19;
      v22 = v20 + v21;
      v23 = *(v11 - 26) + v21;
      v24 = v22 + v23;
      v25 = *(v11 - 25) + v23;
      v26 = v24 + v25;
      v27 = *(v11 - 24) + v25;
      v28 = v26 + v27;
      v29 = *(v11 - 23) + v27;
      v30 = v28 + v29;
      v31 = *(v11 - 22) + v29;
      v32 = v30 + v31;
      v33 = *(v11 - 21) + v31;
      v34 = v32 + v33;
      v35 = *(v11 - 20) + v33;
      v36 = v34 + v35;
      v37 = *(v11 - 19) + v35;
      v38 = v36 + v37;
      v6 = *(v11 - 18) + v37;
      v39 = v38 + v6;
      v3 = *(v11 - 17) + v6;
      i += v39 + v3;
    }
    while ( &a2[16 * v10 + 32] != v11 );
    v40 = v5 & 0xF;
    v41 = v10 + 1;
    if ( v40 )
      v6 = a3;
    a2 += 16 * v41;
    if ( !v40 )
      goto LABEL_11;
    a3 = v40;
LABEL_8:
    v7 = &a2[a3];
    do
    {
      v8 = *a2++;
      v3 += v8;
      i += v3;
    }
    while ( a2 != v7 );
    a3 = v6;
LABEL_11:
    v3 %= 0xFFF1u;
  }
  return v3 | (i << 16);
}
