int __fastcall sub_A14FC(int a1, int a2)
{
  int v3; // r6
  int v4; // r5
  __int64 v5; // r0
  __int64 v6; // r0
  int v7; // r0
  unsigned int v9; // r5
  __int64 v10; // r0

  v3 = sub_A0898(a2);
  if ( v3 == sub_26BC98(a1) )
    return a1;
  if ( *(_DWORD *)(v3 + 20) > (unsigned int)dword_477C84 )
    sub_94708("object size is larger than varsize-limit");
  if ( sub_26BF74(a1) || (v9 = *(_DWORD *)(v3 + 20), v9 > *(_DWORD *)(sub_26BC98(a1) + 20)) )
  {
    v4 = sub_26BB30(v3);
  }
  else
  {
    v10 = sub_26BBA8(v3);
    v4 = v10;
    ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, int))loc_26BDB8)(v10, HIDWORD(v10), 0, 0, a1);
  }
  ((void (__fastcall *)(int, int))loc_26C76C)(v4, a1);
  v5 = sub_26BCC8(a1);
  sub_26BCD0(v4, HIDWORD(v5), v5, HIDWORD(v5));
  v6 = sub_26BCB8(a1);
  sub_26BCC0(v4, HIDWORD(v6), v6, HIDWORD(v6));
  v7 = ((int (__fastcall *)(int))loc_26C0C4)(a1);
  sub_26C1A0(v4, v7);
  return v4;
}
