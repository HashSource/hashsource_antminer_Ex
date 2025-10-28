__int64 __fastcall sub_1866AC(int a1)
{
  __int64 v2; // r6
  __int64 result; // r0

  sub_23F7B0();
  sub_26BD24(a1);
  sub_26BCA8(a1);
  sub_26BC98(a1);
  v2 = sub_22FF30(&dword_4899A0, 16);
  result = sub_26BC98(a1);
  if ( *(_DWORD *)(result + 20) != v2 )
    sub_94708("Unable to read siginfo", HIDWORD(result));
  return result;
}
