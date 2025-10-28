int __fastcall sub_C5ABC(int a1, _DWORD *a2)
{
  int v4; // r5
  int v5; // r6
  int result; // r0
  int v7; // r3
  int v8; // r2
  _BYTE v9[20]; // [sp+4h] [bp-50h] BYREF
  int v10; // [sp+18h] [bp-3Ch]

  v4 = *(_DWORD *)sub_243004(a1);
  v5 = *(_DWORD *)(a1 + 136);
  sub_266618(v9);
  if ( v10 )
  {
    sub_B76BC(4);
    v8 = *(_DWORD *)(a1 + 28);
    if ( v8 && !*(_BYTE *)(v8 + 37) )
      sub_257658(v4, "addr", *(_DWORD *)(v8 + 44), *(_DWORD *)(v8 + 52));
    else
      sub_257610(v4, "addr", "<PENDING>");
  }
  result = sub_B76BC(5);
  v7 = *(_DWORD *)(a1 + 28);
  if ( v7 )
    *a2 = v7;
  if ( v5 == 1 )
  {
    sub_257610(v4, "what", "exception rethrow");
    result = sub_257418(v4);
    if ( result )
      return sub_257610(v4, "catch-type", "rethrow");
  }
  else if ( v5 )
  {
    if ( v5 == 2 )
    {
      sub_257610(v4, "what", "exception catch");
      result = sub_257418(v4);
      if ( result )
        return sub_257610(v4, "catch-type", "catch");
    }
  }
  else
  {
    sub_257610(v4, "what", "exception throw");
    result = sub_257418(v4);
    if ( result )
      return sub_257610(v4, "catch-type", "throw");
  }
  return result;
}
