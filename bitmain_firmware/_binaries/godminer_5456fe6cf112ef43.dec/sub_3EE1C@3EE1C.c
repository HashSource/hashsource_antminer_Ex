int __fastcall sub_3EE1C(_DWORD *a1, _DWORD *a2)
{
  int v3; // r2
  int v4; // r9
  _DWORD *v5; // lr
  double *v6; // r5
  int v7; // r0
  _DWORD *v8; // r4
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r4
  int v17; // r0
  int v18; // r1
  int v19; // r2
  int v20; // r3
  int v21; // r1
  unsigned int v22; // s15
  int v23; // r2
  int v24; // r3
  void (__fastcall *v25)(_DWORD *, _DWORD *); // r5
  _DWORD v27[22]; // [sp+4h] [bp-60h] BYREF
  char v28; // [sp+5Ch] [bp-8h]

  v3 = *a2;
  v4 = a2[1];
  v5 = a2 + 264;
  a1[76] = 1;
  v6 = (double *)(a2 + 284);
  v8 = a2 + 2;
  v7 = a2[2];
  v27[0] = v3;
  v9 = a2[3];
  v10 = v8[2];
  v11 = v8[3];
  v27[1] = v4;
  v27[20] = 0;
  v27[4] = v7;
  v27[5] = v9;
  v27[6] = v10;
  v27[7] = v11;
  v12 = v8[4];
  v13 = v8[5];
  v14 = v8[6];
  v15 = v8[7];
  v16 = a1[34];
  v27[8] = v12;
  v27[9] = v13;
  v27[10] = v14;
  v27[11] = v15;
  v17 = v5[2];
  v18 = v5[3];
  v19 = v5[4];
  v20 = v5[5];
  v27[21] = dword_166024 | (v16 << 28);
  v27[12] = v17;
  v27[13] = v18;
  v27[14] = v19;
  v27[15] = v20;
  v21 = v5[7];
  v22 = (unsigned int)*(v6 - 1);
  v23 = v5[8];
  v24 = v5[9];
  v25 = (void (__fastcall *)(_DWORD *, _DWORD *))a1[6];
  v27[16] = v5[6];
  v27[17] = v21;
  v27[18] = v23;
  v27[19] = v24;
  v28 = v22;
  v25(a1, v27);
  return 0;
}
