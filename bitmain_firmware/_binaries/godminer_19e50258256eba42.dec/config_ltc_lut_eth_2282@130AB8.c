int __fastcall config_ltc_lut_eth_2282(int a1, char a2, int a3)
{
  int v3; // r3
  _BYTE v8[13000]; // [sp+18h] [bp-E0FCh] BYREF
  _DWORD v9[360]; // [sp+32E0h] [bp-AE34h] BYREF
  _DWORD v10[360]; // [sp+3880h] [bp-A894h] BYREF
  _DWORD v11[72]; // [sp+3E20h] [bp-A2F4h] BYREF
  _DWORD v12[72]; // [sp+3F40h] [bp-A1D4h] BYREF
  char v13[32]; // [sp+4060h] [bp-A0B4h] BYREF
  char v14[40960]; // [sp+4080h] [bp-A094h] BYREF
  int v15; // [sp+E080h] [bp-94h]
  int i22; // [sp+E084h] [bp-90h]
  int i21; // [sp+E088h] [bp-8Ch]
  int i20; // [sp+E08Ch] [bp-88h]
  int i19; // [sp+E090h] [bp-84h]
  int i18; // [sp+E094h] [bp-80h]
  int i17; // [sp+E098h] [bp-7Ch]
  int i16; // [sp+E09Ch] [bp-78h]
  int i15; // [sp+E0A0h] [bp-74h]
  int i14; // [sp+E0A4h] [bp-70h]
  int i13; // [sp+E0A8h] [bp-6Ch]
  int i12; // [sp+E0ACh] [bp-68h]
  int i11; // [sp+E0B0h] [bp-64h]
  int i10; // [sp+E0B4h] [bp-60h]
  int i9; // [sp+E0B8h] [bp-5Ch]
  int i8; // [sp+E0BCh] [bp-58h]
  int i7; // [sp+E0C0h] [bp-54h]
  int i6; // [sp+E0C4h] [bp-50h]
  int i5; // [sp+E0C8h] [bp-4Ch]
  int i4; // [sp+E0CCh] [bp-48h]
  int i3; // [sp+E0D0h] [bp-44h]
  int i2; // [sp+E0D4h] [bp-40h]
  int i1; // [sp+E0D8h] [bp-3Ch]
  int nn; // [sp+E0DCh] [bp-38h]
  int mm; // [sp+E0E0h] [bp-34h]
  int kk; // [sp+E0E4h] [bp-30h]
  int jj; // [sp+E0E8h] [bp-2Ch]
  int ii; // [sp+E0ECh] [bp-28h]
  int n; // [sp+E0F0h] [bp-24h]
  int m; // [sp+E0F4h] [bp-20h]
  int k; // [sp+E0F8h] [bp-1Ch]
  int v46; // [sp+E0FCh] [bp-18h]
  int v47; // [sp+E100h] [bp-14h]
  int v48; // [sp+E104h] [bp-10h]
  int j; // [sp+E108h] [bp-Ch]
  int i; // [sp+E10Ch] [bp-8h]

  memset(v14, 0, sizeof(v14));
  memset(v13, 0, sizeof(v13));
  for ( i = 0; i <= 71; ++i )
  {
    for ( j = 0; j <= 39; ++j )
    {
      sprintf(v13, "%01x ", *(unsigned __int8 *)(a3 + 40 * i + j));
      strcat(v14, v13);
    }
    memset(v14, 0, sizeof(v14));
    memset(v13, 0, sizeof(v13));
  }
  v48 = 0;
  v47 = 0;
  v46 = 0;
  memset(v12, 0, sizeof(v12));
  memset(v11, 0, sizeof(v11));
  memset(v10, 0, sizeof(v10));
  memset(v9, 0, sizeof(v9));
  memset(&v8[40], 0, 12960);
  for ( k = 0; k <= 71; ++k )
  {
    for ( m = 0; m <= 39; ++m )
      v8[m] = *(_BYTE *)(a3 + 40 * k + m);
    for ( n = 0; n <= 19; ++n )
    {
      *(_BYTE *)(a3 + 40 * k + 2 * n) = v8[n];
      *(_BYTE *)(a3 + 40 * k + 2 * n + 1) = v8[n + 20];
    }
  }
  for ( ii = 0; ii <= 71; ++ii )
  {
    for ( jj = 0; jj <= 39; ++jj )
    {
      v48 += *(unsigned __int8 *)(a3 + 40 * ii + jj);
      v46 += *(unsigned __int8 *)(a3 + 40 * ii + jj);
      v3 = jj & 7;
      if ( jj <= 0 )
        v3 = -(-jj & 7);
      if ( v3 == 7 )
      {
        v10[5 * ii + jj / 8] = v46;
        v46 = 0;
      }
      v47 += *(unsigned __int8 *)(a3 + 40 * ii + jj);
    }
    v12[ii] = v47;
    v47 = 0;
  }
  for ( kk = 0; kk <= 71; ++kk )
  {
    v46 = 0;
    for ( mm = 0; mm <= kk; ++mm )
      v46 += v12[mm];
    v11[kk] = v46;
  }
  for ( nn = 0; nn <= 71; ++nn )
  {
    v46 = 0;
    for ( i1 = 0; i1 <= 5; ++i1 )
    {
      v46 += v10[5 * nn + i1];
      v9[5 * nn + i1] = v46;
    }
  }
  for ( i2 = 0; i2 <= 71; ++i2 )
  {
    for ( i3 = 0; i3 <= 4; ++i3 )
    {
      v46 = 0;
      for ( i4 = 0; i4 <= 7; ++i4 )
      {
        if ( *(_BYTE *)(a3 + 40 * i2 + 8 * i3 + i4) )
        {
          v46 += *(unsigned __int8 *)(a3 + 40 * i2 + 8 * i3 + i4);
          *(_DWORD *)&v8[160 * i2 + 1480 + 32 * i3 + 4 * i4] = v46 - 1;
        }
        else
        {
          *(_DWORD *)&v8[160 * i2 + 1480 + 32 * i3 + 4 * i4] = 8;
        }
      }
    }
  }
  for ( i5 = 0; i5 <= 71; ++i5 )
  {
    v46 = 0;
    for ( i6 = 0; i6 <= 4; ++i6 )
    {
      v46 += *(_DWORD *)&v8[160 * i5 + 1508 + 32 * i6];
      *(_DWORD *)&v8[20 * i5 + 40 + 4 * i6] = v46;
    }
  }
  for ( i7 = 0; i7 <= 71; ++i7 )
  {
    for ( i8 = 0; i8 <= 39; ++i8 )
    {
      sprintf(v13, "%01x ", *(unsigned __int8 *)(a3 + 40 * i7 + i8));
      strcat(v14, v13);
    }
    memset(v14, 0, sizeof(v14));
    memset(v13, 0, sizeof(v13));
  }
  for ( i9 = 0; i9 <= 71; ++i9 )
  {
    sprintf(v13, "[%02x] ", i9);
    strcat(v14, v13);
    if ( i9 && (i9 & 7) == 0 )
      *(_WORD *)&v14[strlen(v14)] = 10;
  }
  memset(v14, 0, sizeof(v14));
  memset(v13, 0, sizeof(v13));
  for ( i10 = 0; i10 <= 71; ++i10 )
  {
    sprintf(v13, "CV-%02d [%03x] ", i10, v11[i10]);
    strcat(v14, v13);
    if ( i10 && (i10 & 7) == 0 )
      *(_WORD *)&v14[strlen(v14)] = 10;
  }
  memset(v14, 0, sizeof(v14));
  memset(v13, 0, sizeof(v13));
  for ( i11 = 0; i11 <= 71; ++i11 )
  {
    for ( i12 = 0; i12 <= 4; ++i12 )
    {
      sprintf(v13, "GS-%02d [%02x] ", i12, v10[5 * i11 + i12]);
      strcat(v14, v13);
    }
    memset(v14, 0, sizeof(v14));
    memset(v13, 0, sizeof(v13));
  }
  memset(v14, 0, sizeof(v14));
  memset(v13, 0, sizeof(v13));
  for ( i13 = 0; i13 <= 71; ++i13 )
  {
    for ( i14 = 0; i14 <= 4; ++i14 )
    {
      sprintf(v13, "GV-%02d [%02x] ", i14, v9[5 * i13 + i14]);
      strcat(v14, v13);
    }
    memset(v14, 0, sizeof(v14));
    memset(v13, 0, sizeof(v13));
  }
  memset(v14, 0, sizeof(v14));
  memset(v13, 0, sizeof(v13));
  for ( i15 = 0; i15 <= 71; ++i15 )
  {
    for ( i16 = 0; i16 <= 4; ++i16 )
    {
      for ( i17 = 0; i17 <= 7; ++i17 )
      {
        sprintf(v13, "LS-%02d [%02x] ", i17, *(_DWORD *)&v8[160 * i15 + 1480 + 32 * i16 + 4 * i17]);
        strcat(v14, v13);
      }
      memset(v14, 0, sizeof(v14));
      memset(v13, 0, sizeof(v13));
    }
  }
  memset(v14, 0, sizeof(v14));
  memset(v13, 0, sizeof(v13));
  for ( i18 = 0; i18 <= 71; ++i18 )
  {
    for ( i19 = 0; i19 <= 4; ++i19 )
    {
      sprintf(v13, "LV-%02d [%02x] ", i19, *(_DWORD *)&v8[20 * i18 + 40 + 4 * i19]);
      strcat(v14, v13);
    }
    memset(v14, 0, sizeof(v14));
    memset(v13, 0, sizeof(v13));
  }
  sub_106C24(a1, a2, 81, v48);
  sub_106F8C(a1, a2, 79, v48);
  v15 = 0;
  for ( i20 = 0; i20 <= 35; ++i20 )
  {
    v15 = (v11[2 * i20 + 1] << 16) | v11[2 * i20];
    sub_106C24(a1, a2, i20 + 139, v15);
  }
  for ( i21 = 0; i21 <= 35; ++i21 )
  {
    v15 = (v11[2 * i21 + 1] << 16) | v11[2 * i21];
    sub_106F8C(a1, a2, i21 + 80, v15);
  }
  for ( i22 = 0; i22 <= 71; ++i22 )
  {
    v15 = (v9[5 * i22 + 3] << 24) | (v9[5 * i22 + 2] << 16) | (v9[5 * i22 + 1] << 8) | v9[5 * i22];
    sub_10702C(a1, a2, i22, 194, v15);
    v15 = (*(_DWORD *)&v8[160 * i22 + 1508] << 28)
        | (*(_DWORD *)&v8[160 * i22 + 1504] << 24)
        | (*(_DWORD *)&v8[160 * i22 + 1500] << 20)
        | (*(_DWORD *)&v8[160 * i22 + 1496] << 16)
        | (*(_DWORD *)&v8[160 * i22 + 1492] << 12)
        | (*(_DWORD *)&v8[160 * i22 + 1488] << 8)
        | (16 * *(_DWORD *)&v8[160 * i22 + 1484])
        | *(_DWORD *)&v8[160 * i22 + 1480];
    sub_10702C(a1, a2, i22, 196, v15);
    v15 = (*(_DWORD *)&v8[160 * i22 + 1540] << 28)
        | (*(_DWORD *)&v8[160 * i22 + 1536] << 24)
        | (*(_DWORD *)&v8[160 * i22 + 1532] << 20)
        | (*(_DWORD *)&v8[160 * i22 + 1528] << 16)
        | (*(_DWORD *)&v8[160 * i22 + 1524] << 12)
        | (*(_DWORD *)&v8[160 * i22 + 1520] << 8)
        | (16 * *(_DWORD *)&v8[160 * i22 + 1516])
        | *(_DWORD *)&v8[160 * i22 + 1512];
    sub_10702C(a1, a2, i22, 197, v15);
    v15 = (*(_DWORD *)&v8[160 * i22 + 1572] << 28)
        | (*(_DWORD *)&v8[160 * i22 + 1568] << 24)
        | (*(_DWORD *)&v8[160 * i22 + 1564] << 20)
        | (*(_DWORD *)&v8[160 * i22 + 1560] << 16)
        | (*(_DWORD *)&v8[160 * i22 + 1556] << 12)
        | (*(_DWORD *)&v8[160 * i22 + 1552] << 8)
        | (16 * *(_DWORD *)&v8[160 * i22 + 1548])
        | *(_DWORD *)&v8[160 * i22 + 1544];
    sub_10702C(a1, a2, i22, 198, v15);
    v15 = (*(_DWORD *)&v8[160 * i22 + 1604] << 28)
        | (*(_DWORD *)&v8[160 * i22 + 1600] << 24)
        | (*(_DWORD *)&v8[160 * i22 + 1596] << 20)
        | (*(_DWORD *)&v8[160 * i22 + 1592] << 16)
        | (*(_DWORD *)&v8[160 * i22 + 1588] << 12)
        | (*(_DWORD *)&v8[160 * i22 + 1584] << 8)
        | (16 * *(_DWORD *)&v8[160 * i22 + 1580])
        | *(_DWORD *)&v8[160 * i22 + 1576];
    sub_10702C(a1, a2, i22, 199, v15);
    v15 = (*(_DWORD *)&v8[160 * i22 + 1636] << 28)
        | (*(_DWORD *)&v8[160 * i22 + 1632] << 24)
        | (*(_DWORD *)&v8[160 * i22 + 1628] << 20)
        | (*(_DWORD *)&v8[160 * i22 + 1624] << 16)
        | (*(_DWORD *)&v8[160 * i22 + 1620] << 12)
        | (*(_DWORD *)&v8[160 * i22 + 1616] << 8)
        | (16 * *(_DWORD *)&v8[160 * i22 + 1612])
        | *(_DWORD *)&v8[160 * i22 + 1608];
    sub_10702C(a1, a2, i22, 200, v15);
  }
  return 0;
}
