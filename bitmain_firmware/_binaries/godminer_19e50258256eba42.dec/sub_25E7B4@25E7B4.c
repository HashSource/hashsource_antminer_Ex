int *__fastcall sub_25E7B4(int *result, _DWORD *a2)
{
  unsigned int i; // [sp+Ch] [bp-48h]
  int v3; // [sp+10h] [bp-44h]
  int v4; // [sp+10h] [bp-44h]
  int v5; // [sp+14h] [bp-40h]
  int v6; // [sp+14h] [bp-40h]
  int v7; // [sp+18h] [bp-3Ch]
  int v8; // [sp+18h] [bp-3Ch]
  int v9; // [sp+1Ch] [bp-38h]
  int v10; // [sp+1Ch] [bp-38h]
  int v11; // [sp+20h] [bp-34h]
  int v12; // [sp+20h] [bp-34h]
  int v13; // [sp+24h] [bp-30h]
  int v14; // [sp+24h] [bp-30h]
  int v15; // [sp+28h] [bp-2Ch]
  int v16; // [sp+28h] [bp-2Ch]
  int v17; // [sp+2Ch] [bp-28h]
  int v18; // [sp+2Ch] [bp-28h]
  int v19; // [sp+30h] [bp-24h]
  int v20; // [sp+30h] [bp-24h]
  int v21; // [sp+34h] [bp-20h]
  int v22; // [sp+34h] [bp-20h]
  int v23; // [sp+38h] [bp-1Ch]
  int v24; // [sp+38h] [bp-1Ch]
  int v25; // [sp+3Ch] [bp-18h]
  int v26; // [sp+3Ch] [bp-18h]
  int v27; // [sp+40h] [bp-14h]
  int v28; // [sp+40h] [bp-14h]
  int v29; // [sp+44h] [bp-10h]
  int v30; // [sp+44h] [bp-10h]
  int v31; // [sp+48h] [bp-Ch]
  int v32; // [sp+48h] [bp-Ch]
  int v33; // [sp+4Ch] [bp-8h]
  int v34; // [sp+4Ch] [bp-8h]

  *result ^= *a2;
  v33 = *result;
  result[1] ^= a2[1];
  v31 = result[1];
  result[2] ^= a2[2];
  v29 = result[2];
  result[3] ^= a2[3];
  v27 = result[3];
  result[4] ^= a2[4];
  v25 = result[4];
  result[5] ^= a2[5];
  v23 = result[5];
  result[6] ^= a2[6];
  v21 = result[6];
  result[7] ^= a2[7];
  v19 = result[7];
  result[8] ^= a2[8];
  v17 = result[8];
  result[9] ^= a2[9];
  v15 = result[9];
  result[10] ^= a2[10];
  v13 = result[10];
  result[11] ^= a2[11];
  v11 = result[11];
  result[12] ^= a2[12];
  v9 = result[12];
  result[13] ^= a2[13];
  v7 = result[13];
  result[14] ^= a2[14];
  v5 = result[14];
  result[15] ^= a2[15];
  v3 = result[15];
  for ( i = 0; i <= 7; i += 2 )
  {
    v26 = __ROR4__(v33 + v9, 25) ^ v25;
    v16 = __ROR4__(v23 + v31, 25) ^ v15;
    v6 = __ROR4__(v13 + v21, 25) ^ v5;
    v28 = __ROR4__(v3 + v11, 25) ^ v27;
    v18 = __ROR4__(v26 + v33, 23) ^ v17;
    v8 = __ROR4__(v16 + v23, 23) ^ v7;
    v30 = __ROR4__(v6 + v13, 23) ^ v29;
    v20 = __ROR4__(v28 + v3, 23) ^ v19;
    v10 = __ROR4__(v18 + v26, 19) ^ v9;
    v32 = __ROR4__(v8 + v16, 19) ^ v31;
    v22 = __ROR4__(v30 + v6, 19) ^ v21;
    v12 = __ROR4__(v20 + v28, 19) ^ v11;
    v34 = __ROR4__(v10 + v18, 14) ^ v33;
    v24 = __ROR4__(v32 + v8, 14) ^ v23;
    v14 = __ROR4__(v22 + v30, 14) ^ v13;
    v4 = __ROR4__(v12 + v20, 14) ^ v3;
    v31 = __ROR4__(v34 + v28, 25) ^ v32;
    v21 = __ROR4__(v24 + v26, 25) ^ v22;
    v11 = __ROR4__(v14 + v16, 25) ^ v12;
    v9 = __ROR4__(v4 + v6, 25) ^ v10;
    v29 = __ROR4__(v31 + v34, 23) ^ v30;
    v19 = __ROR4__(v21 + v24, 23) ^ v20;
    v17 = __ROR4__(v11 + v14, 23) ^ v18;
    v7 = __ROR4__(v9 + v4, 23) ^ v8;
    v27 = __ROR4__(v29 + v31, 19) ^ v28;
    v25 = __ROR4__(v19 + v21, 19) ^ v26;
    v15 = __ROR4__(v17 + v11, 19) ^ v16;
    v5 = __ROR4__(v7 + v9, 19) ^ v6;
    v33 = __ROR4__(v27 + v29, 14) ^ v34;
    v23 = __ROR4__(v25 + v19, 14) ^ v24;
    v13 = __ROR4__(v15 + v17, 14) ^ v14;
    v3 = __ROR4__(v5 + v7, 14) ^ v4;
  }
  *result += v33;
  result[1] += v31;
  result[2] += v29;
  result[3] += v27;
  result[4] += v25;
  result[5] += v23;
  result[6] += v21;
  result[7] += v19;
  result[8] += v17;
  result[9] += v15;
  result[10] += v13;
  result[11] += v11;
  result[12] += v9;
  result[13] += v7;
  result[14] += v5;
  result[15] += v3;
  return result;
}
