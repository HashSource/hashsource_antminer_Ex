__int64 __fastcall sub_186614(int a1, int a2)
{
  __int64 v4; // r6
  __int64 result; // r0

  sub_23F7B0();
  sub_26BD24(a2);
  sub_26BCA8(a1);
  sub_26BC98(a2);
  v4 = sub_23056C(&dword_4899A0, 16);
  result = sub_26BC98(a2);
  if ( *(_DWORD *)(result + 20) != v4 )
    sub_94708("Unable to write siginfo", HIDWORD(result));
  return result;
}
