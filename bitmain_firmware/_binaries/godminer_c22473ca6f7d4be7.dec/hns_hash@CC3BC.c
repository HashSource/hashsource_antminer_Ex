int __fastcall hns_hash(int a1)
{
  const char *v2; // r0
  unsigned int v3; // r3
  int v4; // r2
  _BYTE *v5; // r3
  char v6; // t1
  int v7; // r2
  _BYTE *v8; // r3
  char v9; // t1
  char *v10; // r3
  int v11; // r2
  char v12; // t1
  int v13; // r8
  int v14; // r1
  int v15; // r2
  _DWORD *v16; // r12
  __int16 v17; // r9
  int v18; // r3
  _BYTE *v19; // lr
  char v20; // r10
  char v21; // t1
  int v22; // r2
  _BYTE *v23; // r3
  char v24; // t1
  int v25; // r2
  _BYTE *v26; // r3
  char v27; // t1
  int v28; // r2
  _BYTE *v29; // r3
  char v30; // t1
  int v31; // r2
  _BYTE *v32; // r3
  char v33; // t1
  unsigned int v34; // r2
  unsigned int v35; // r3
  _DWORD v37[4]; // [sp+0h] [bp-120h] BYREF
  char v38; // [sp+10h] [bp-110h]
  char v39; // [sp+11h] [bp-10Fh]
  int v40; // [sp+12h] [bp-10Eh]
  __int16 v41; // [sp+16h] [bp-10Ah]
  _DWORD v42[3]; // [sp+18h] [bp-108h] BYREF
  int v43; // [sp+24h] [bp-FCh] BYREF
  _BYTE v44[32]; // [sp+3Bh] [bp-E5h] BYREF
  _BYTE v45[32]; // [sp+5Bh] [bp-C5h] BYREF
  _BYTE v46[32]; // [sp+7Bh] [bp-A5h] BYREF
  _BYTE v47[24]; // [sp+9Bh] [bp-85h] BYREF
  char v48; // [sp+B3h] [bp-6Dh] BYREF
  _BYTE v49[32]; // [sp+D3h] [bp-4Dh] BYREF
  _BYTE v50[29]; // [sp+F3h] [bp-2Dh] BYREF
  _BYTE v51[5]; // [sp+113h] [bp-Dh] BYREF
  unsigned int v52; // [sp+118h] [bp-8h]

  hs_header_init((int)v42);
  LOWORD(v2) = 3544;
  HIWORD(v2) = (unsigned int)"set vol %d, get vol %d" >> 16;
  v3 = bswap32(*(_DWORD *)(a1 + 4));
  v52 = bswap32(*(_DWORD *)a1);
  *(_DWORD *)&v51[1] = v3;
  printf(v2, v52, v3);
  v4 = a1 + 40;
  v5 = v50;
  do
  {
    v6 = *(_BYTE *)--v4;
    *++v5 = v6;
  }
  while ( v51 != v5 );
  v7 = a1 + 72;
  v8 = v49;
  do
  {
    v9 = *(_BYTE *)--v7;
    *++v8 = v9;
  }
  while ( v8 != v50 );
  v10 = &v48;
  v11 = a1 + 104;
  do
  {
    v12 = *(_BYTE *)--v11;
    *++v10 = v12;
  }
  while ( v49 != v10 );
  v13 = *(_DWORD *)(a1 + 120);
  v14 = *(_DWORD *)(a1 + 108);
  v15 = *(_DWORD *)(a1 + 112);
  v16 = v42;
  v17 = *(_WORD *)(a1 + 124);
  v18 = *(_DWORD *)(a1 + 116);
  v19 = v47;
  v20 = *(_BYTE *)(a1 + 250);
  v37[0] = *(_DWORD *)(a1 + 104);
  v37[1] = v14;
  v37[2] = v15;
  v37[3] = v18;
  LOBYTE(v18) = *(_BYTE *)(a1 + 251);
  v41 = v17;
  v40 = v13;
  v38 = v20;
  v39 = v18;
  do
  {
    v21 = *((_BYTE *)v16 - 1);
    v16 = (_DWORD *)((char *)v16 - 1);
    *++v19 = v21;
  }
  while ( v37 != v16 );
  v22 = a1 + 158;
  v23 = v46;
  do
  {
    v24 = *(_BYTE *)--v22;
    *++v23 = v24;
  }
  while ( v47 != v23 );
  v25 = a1 + 190;
  v26 = v45;
  do
  {
    v27 = *(_BYTE *)--v25;
    *++v26 = v27;
  }
  while ( v26 != v46 );
  v28 = a1 + 222;
  v29 = v44;
  do
  {
    v30 = *(_BYTE *)--v28;
    *++v29 = v30;
  }
  while ( v29 != v45 );
  v31 = a1 + 242;
  v32 = (char *)&v43 + 3;
  do
  {
    v33 = *(_BYTE *)--v31;
    *++v32 = v33;
  }
  while ( v44 != v32 );
  v34 = *(_DWORD *)(a1 + 246);
  v35 = *(_DWORD *)(a1 + 252);
  v43 = 0;
  v42[2] = bswap32(v34);
  v42[0] = bswap32(v35);
  return hs_header_pow(v42);
}
