int __fastcall sub_E79F4(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // r6
  bool v5; // zf
  int v7; // r3
  int v8; // r5
  int v9; // r12
  int v10; // r2
  int result; // r0

  v5 = a4 == 0;
  if ( a4 )
    v4 = a2;
  v7 = a1[17];
  v8 = a3 + a1[11];
  if ( v5 )
  {
    v4 = a3 + a1[11];
    v8 = a2;
  }
  v9 = a1[16];
  if ( *(_DWORD *)(v7 + 4 * v4) != a1[13] )
  {
    *(_DWORD *)(a1[18] + 172 * a1[14] + 4) = v9;
    sub_E78D8(a1, 1, v4, v8);
    v9 = a1[16];
    v7 = a1[17];
  }
  v10 = a1[19];
  a1[16] = v9 + 1;
  result = *(_DWORD *)(v7 + 4 * v8);
  *(_DWORD *)(v10 + 8 * v9) = result;
  *(_DWORD *)(v7 + 4 * v8) = v9;
  *(_DWORD *)(v10 + 8 * v9 + 4) = v4;
  return result;
}
