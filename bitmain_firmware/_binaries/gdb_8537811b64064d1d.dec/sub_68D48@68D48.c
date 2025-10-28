int __fastcall sub_68D48(int a1, const char *a2, int a3)
{
  int v6; // r5
  __int64 v8; // r0

  v6 = *(_DWORD *)(*(_DWORD *)(a1 + 36) - 4);
  if ( !*(_BYTE *)(a1 + 24) )
    sub_68C0C(a1);
  *(_BYTE *)(a1 + 24) = 1;
  if ( a2 )
    sub_2594D8(v6, "%s=", a2);
  if ( !a3 )
    return sub_25933C(123, v6);
  if ( a3 == 1 )
    return sub_25933C(91, v6);
  v8 = sub_94728("mi/mi-out.c", 213, "bad switch");
  return sub_68DE0(v8, HIDWORD(v8));
}
