int __fastcall sub_68FBC(int a1, int a2)
{
  bool v2; // zf
  int v5; // r1
  int result; // r0
  __int64 v7; // r0

  v2 = a2 == 0;
  v5 = *(_DWORD *)(*(_DWORD *)(a1 + 36) - 4);
  if ( v2 )
  {
    result = sub_25933C(125, v5);
    goto LABEL_4;
  }
  if ( a2 == 1 )
  {
    result = sub_25933C(93, v5);
LABEL_4:
    *(_BYTE *)(a1 + 24) = 0;
    return result;
  }
  v7 = sub_94728("mi/mi-out.c", 233, "bad switch");
  return sub_69014(v7, HIDWORD(v7));
}
