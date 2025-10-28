int __fastcall sub_E9510(_DWORD *a1, int a2, int a3)
{
  int v4; // r1
  int v6; // r12
  unsigned int v7; // r3
  int v8; // r5
  int result; // r0
  _DWORD *v10; // lr

  v4 = a1[17];
  v6 = a1[13];
  v7 = a1[16];
  v8 = a3 + a1[11];
  if ( *(_DWORD *)(v4 + 4 * (a2 ^ 1)) != v6 && v6 != *(_DWORD *)(v4 + 4 * (v8 ^ 1)) )
  {
    *(_DWORD *)(a1[18] + 172 * a1[14] + 4) = v7 >> 1;
    sub_E93EC(a1, 1, a2, v8);
    v4 = a1[17];
    v7 = a1[16];
  }
  result = a1[19];
  a1[16] = v7 + 2;
  *(_DWORD *)(result + 8 * v7) = *(_DWORD *)(v4 + 4 * a2);
  v10 = (_DWORD *)(result + 8 * v7 + 8);
  *v10 = *(_DWORD *)(v4 + 4 * v8);
  *(_DWORD *)(v4 + 4 * a2) = v7;
  *(_DWORD *)(result + 8 * v7 + 4) = a2;
  *(_DWORD *)(v4 + 4 * v8) = v7 + 1;
  v10[1] = v8;
  return result;
}
