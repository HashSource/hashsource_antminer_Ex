int __fastcall sub_15AED0(int a1, int a2)
{
  int v2; // r3
  __int64 v3; // r0

  v2 = **(char **)(a2 + 24);
  if ( v2 == 1 || (unsigned __int8)(v2 - 18) <= 1u )
  {
    sub_170068(a2);
    JUMPOUT(0x1688D4);
  }
  v3 = sub_94728((int)"findvar.c", 157, "extract_typed_address: type is not a pointer or reference");
  return sub_15AF2C(v3, HIDWORD(v3));
}
