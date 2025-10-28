int __fastcall sub_566A8(int a1)
{
  int v1; // r5
  int v3; // r7
  _DWORD *v4; // r0
  int v5; // r5
  int v6; // r6
  int result; // r0
  int v8; // r4
  int v9; // r1

  v1 = *(_DWORD *)(a1 + 16);
  v3 = dword_487668;
  v4 = (_DWORD *)sub_242FB4(a1);
  v5 = sub_F0064(v1, *v4);
  v6 = *(_DWORD *)sub_242FB4(v5);
  if ( v6 == v5 )
  {
    result = sub_154844(1);
    *(_DWORD *)(v3 + 24) = sub_1545A0;
    if ( v6 )
    {
      v8 = *(_DWORD *)(a1 + 16);
      v9 = *(_DWORD *)sub_242FB4(result);
      return sub_F0064(v8, v9);
    }
  }
  else
  {
    sub_F0064(*(_DWORD *)(a1 + 16), v5);
    result = sub_154844(1);
    *(_DWORD *)(v3 + 24) = 1394080;
  }
  return result;
}
