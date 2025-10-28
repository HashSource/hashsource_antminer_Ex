unsigned int __fastcall sub_A8088(__int64 a1, _DWORD *a2)
{
  unsigned int result; // r0
  char v3; // r3
  char v4; // r3
  __int64 v5; // r2
  char v6; // r3
  char v7; // r3
  int v8; // r3
  __int64 v9; // r2
  int v11[4]; // [sp+1Ch] [bp-160h] BYREF
  _DWORD v12[32]; // [sp+2Ch] [bp-150h] BYREF
  _DWORD v13[32]; // [sp+ACh] [bp-D0h] BYREF
  unsigned int v14; // [sp+12Ch] [bp-50h]
  unsigned int v15; // [sp+130h] [bp-4Ch]
  int v16; // [sp+134h] [bp-48h]
  unsigned int v17; // [sp+138h] [bp-44h]
  unsigned int v18; // [sp+13Ch] [bp-40h]
  unsigned int v19; // [sp+140h] [bp-3Ch]
  unsigned int v20; // [sp+144h] [bp-38h]
  unsigned int v21; // [sp+148h] [bp-34h]
  int v22; // [sp+14Ch] [bp-30h]
  int v23; // [sp+150h] [bp-2Ch]
  unsigned int v24; // [sp+154h] [bp-28h]
  unsigned int v25; // [sp+158h] [bp-24h]
  int v26; // [sp+15Ch] [bp-20h]
  int v27; // [sp+160h] [bp-1Ch]
  int j; // [sp+164h] [bp-18h]
  unsigned int v29; // [sp+168h] [bp-14h]
  int i; // [sp+16Ch] [bp-10h]
  int v31; // [sp+170h] [bp-Ch]
  int v32; // [sp+174h] [bp-8h]

  v32 = 0;
  v31 = 0;
  result = sub_A7E38(v11, a1, (int)v13, (int)v12);
  v27 = 18;
  for ( i = 0; i < v27; ++i )
  {
    if ( i <= 10 )
    {
      v3 = v31++;
      v23 = v12[v3 & 0x1F];
      v4 = v32++;
      v22 = v13[v4 & 0x1F];
      v21 = sub_A7D00(v11);
      v5 = 138547333LL * HIWORD(v21);
      result = (unsigned int)(HIWORD(v21) - HIDWORD(v5)) >> 1;
      v20 = HIWORD(v21) - 31 * ((result + HIDWORD(v5)) >> 4) + 1;
      if ( i > 5 )
      {
        a2[1] |= v23 << (5 * (i - 6));
        a2[3] |= v22 << (5 * (i - 6));
        a2[4] |= (v21 & 3) << (2 * i);
        a2[6] |= v20 << (5 * (i - 6));
      }
      else
      {
        *a2 |= v23 << (5 * i);
        a2[2] |= v22 << (5 * i);
        a2[4] |= (v21 & 3) << (2 * i);
        a2[5] |= v20 << (5 * i);
      }
    }
    if ( i <= 17 )
    {
      v19 = sub_A7D00(v11) % 0x3E0u;
      v18 = v19 & 0x1F;
      v29 = v19 >> 5;
      if ( v19 >> 5 >= v18 )
        ++v29;
      v17 = sub_A7D00(v11);
      v6 = v32++;
      v16 = v13[v6 & 0x1F];
      v15 = sub_A7D00(v11);
      v14 = HIWORD(v15)
          - 31
          * ((unsigned int)(((unsigned int)(HIWORD(v15) - ((138547333 * (unsigned __int64)HIWORD(v15)) >> 32)) >> 1)
                          + ((138547333 * (unsigned __int64)HIWORD(v15)) >> 32)) >> 4)
          + 1;
      if ( i > 5 )
      {
        if ( i > 11 )
        {
          a2[12] |= v18 << (5 * (i - 12));
          a2[15] |= v29 << (5 * (i - 12));
          a2[18] |= v16 << (5 * (i - 12));
          a2[9] |= v14 << (5 * (i - 12));
        }
        else
        {
          a2[11] |= v18 << (5 * (i - 6));
          a2[14] |= v29 << (5 * (i - 6));
          a2[17] |= v16 << (5 * (i - 6));
          a2[8] |= v14 << (5 * (i - 6));
        }
      }
      else
      {
        a2[10] |= v18 << (5 * i);
        a2[13] |= v29 << (5 * i);
        a2[16] |= v16 << (5 * i);
        a2[7] |= v14 << (5 * i);
      }
      if ( i > 7 )
      {
        if ( i > 15 )
        {
          result = a2[21];
          a2[21] = result | ((v17 % 0xB) << (4 * (i - 16)));
        }
        else
        {
          result = a2[20];
          a2[20] = result | ((v17 % 0xB) << (4 * (i - 8)));
        }
      }
      else
      {
        result = a2[19];
        a2[19] = result | ((v17 % 0xB) << (4 * i));
      }
      if ( i > 15 )
        a2[23] |= (v15 & 3) << (2 * (i - 16));
      else
        a2[22] |= (v15 & 3) << (2 * i);
    }
  }
  for ( j = 0; j <= 3; ++j )
  {
    if ( j )
    {
      v7 = v32++;
      v8 = v13[v7 & 0x1F];
    }
    else
    {
      v8 = 0;
    }
    v26 = v8;
    v25 = sub_A7D00(v11);
    v9 = 138547333LL * HIWORD(v25);
    result = (unsigned int)(HIWORD(v25) - HIDWORD(v9)) >> 1;
    v24 = HIWORD(v25) - 31 * ((result + HIDWORD(v9)) >> 4) + 1;
    a2[24] |= v26 << (5 * j);
    a2[25] |= (v25 & 3) << (2 * j);
    a2[26] |= v24 << (5 * j);
  }
  return result;
}
