int __fastcall sub_4FCC4(int a1, int a2, int a3)
{
  _DWORD *v3; // r5
  int v6; // r0
  int v7; // r1
  _DWORD *v8; // r3
  _DWORD *v9; // r2
  int v10; // r6
  int v11; // r4
  int v12; // lr
  int v13; // r12
  int v14; // r4
  int v15; // lr
  int v16; // r12
  int v17; // t1
  int v18; // r12
  int v19; // r0
  int v20; // r2
  int v21; // r0
  int v22; // r12
  int v23; // r2

  v3 = *(_DWORD **)(a1 + 1132);
  if ( v3 )
  {
    v6 = strncasecmp((const char *)(a3 + 66), *(const char **)(a1 + 1132), 0x20u);
    if ( v6 )
    {
      return sub_4FC4C(v6);
    }
    else
    {
      v7 = *(_DWORD *)(a3 + 30);
      v8 = (_DWORD *)a3;
      *(_DWORD *)(a1 + 1072) = *(_DWORD *)(a3 + 26);
      *(_DWORD *)(a1 + 1076) = v7;
      v9 = (_DWORD *)(a3 + 98);
      v10 = *(_DWORD *)(a3 + 98);
      v11 = *(_DWORD *)(a3 + 102);
      v12 = v9[2];
      v13 = v9[3];
      v3[8] = v10;
      v3[9] = v11;
      v3[10] = v12;
      v3[11] = v13;
      v14 = v9[5];
      v15 = v9[6];
      v16 = v9[7];
      v3[12] = v9[4];
      v3[13] = v14;
      v3[14] = v15;
      v3[15] = v16;
      v17 = *(_DWORD *)((char *)v8 + 34);
      v8 = (_DWORD *)((char *)v8 + 34);
      v18 = v8[1];
      v19 = v8[2];
      v20 = v8[3];
      v3[16] = v17;
      v3[17] = v18;
      v3[18] = v19;
      v3[19] = v20;
      v21 = v8[6];
      v22 = v8[5];
      v23 = v8[7];
      v3[20] = v8[4];
      v3[22] = v21;
      v3[21] = v22;
      v3[23] = v23;
      return 0;
    }
  }
  else
  {
    printf(aInvalidPointer, "work->private");
    return 0;
  }
}
