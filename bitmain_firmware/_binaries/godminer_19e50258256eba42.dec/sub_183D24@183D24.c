int __fastcall sub_183D24(_DWORD *a1, _DWORD *a2)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r3
  _DWORD v16[8]; // [sp+8h] [bp-54h] BYREF
  _DWORD v17[8]; // [sp+28h] [bp-34h] BYREF
  _DWORD *v18; // [sp+48h] [bp-14h]
  _DWORD *v19; // [sp+4Ch] [bp-10h]
  int i; // [sp+50h] [bp-Ch]
  unsigned __int8 v21; // [sp+57h] [bp-5h]

  v21 = 1;
  v2 = a1[1];
  v3 = a1[2];
  v4 = a1[3];
  v17[0] = *a1;
  v17[1] = v2;
  v17[2] = v3;
  v17[3] = v4;
  v5 = a1[5];
  v6 = a1[6];
  v7 = a1[7];
  v17[4] = a1[4];
  v17[5] = v5;
  v17[6] = v6;
  v17[7] = v7;
  v8 = a2[1];
  v9 = a2[2];
  v10 = a2[3];
  v16[0] = *a2;
  v16[1] = v8;
  v16[2] = v9;
  v16[3] = v10;
  v11 = a2[5];
  v12 = a2[6];
  v13 = a2[7];
  v16[4] = a2[4];
  v16[5] = v11;
  v16[6] = v12;
  v16[7] = v13;
  sub_183C88((char *)v17, 32);
  sub_183C88((char *)v16, 32);
  v19 = v17;
  v18 = v16;
  for ( i = 7; i >= 0; --i )
  {
    if ( v19[i] > v18[i] )
      return 0;
    if ( v19[i] < v18[i] )
      return 1;
  }
  return v21;
}
