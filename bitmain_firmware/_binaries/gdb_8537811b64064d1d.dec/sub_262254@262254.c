int __fastcall sub_262254(int a1, int a2, _DWORD *a3)
{
  int v3; // r10
  int v6; // r0
  int v7; // r5
  _DWORD *v8; // r6
  int i; // r8
  int v10; // t1
  int v11; // r0
  __int64 v12; // r0
  int v13; // r0
  __int64 v14; // kr08_8
  _DWORD *v15; // r4
  __int64 v16; // kr00_8
  int v17; // t1
  _DWORD *v19; // r4
  int v20; // r9
  int v21; // t1
  int v22; // [sp+4h] [bp-28h]
  _DWORD *v24; // [sp+1Ch] [bp-10h]
  int v25; // [sp+20h] [bp-Ch]

  v3 = a2 - a1 + 1;
  v25 = a2 - a1;
  if ( v3 <= 0 )
    sub_94708("bad array bounds (%d, %d)", a1, a2);
  v6 = sub_26BD58(*a3);
  v7 = sub_170080(v6);
  if ( v3 != 1 )
  {
    v8 = a3;
    for ( i = 1; i != v3; ++i )
    {
      v10 = v8[1];
      ++v8;
      v11 = sub_26BD58(v10);
      if ( v7 != sub_170080(v11) )
        sub_94708("array elements must all be the same size");
    }
  }
  v12 = sub_26BD58(*a3);
  v13 = sub_172168((_DWORD *)v12, SHIDWORD(v12), a1, a1 >> 31, a2, a2 >> 31);
  v24 = &a3[v25];
  if ( *((_BYTE *)off_46D5A4[0] + 112) )
  {
    v19 = a3 - 1;
    v20 = sub_26BBA8(v13);
    v14 = 0;
    do
    {
      v21 = v19[1];
      ++v19;
      sub_26E864(v20, 0, v14, HIDWORD(v14), v21, v22, 0, 0, v7, 0);
      v14 += (unsigned int)v7;
    }
    while ( v19 != v24 );
  }
  else
  {
    v20 = sub_26BBA8(v13);
    v15 = a3 - 1;
    v16 = 0;
    do
    {
      v17 = v15[1];
      ++v15;
      sub_26E864(v20, 0, v16, HIDWORD(v16), v17, v22, 0, 0, v7, 0);
      v16 += (unsigned int)v7;
    }
    while ( v24 != v15 );
  }
  return v20;
}
