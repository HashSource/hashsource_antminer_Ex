int __fastcall sub_111998(int a1, _DWORD *a2)
{
  int v3; // r4
  int result; // r0

  v3 = sub_15DAA4(a1);
  result = v3 - sub_15DAA4(*a2) - 1;
  if ( result < -1 )
  {
    sub_94728(
      (int)"dwarf2-frame-tailcall.c",
      178,
      "%s: Assertion `%s' failed.",
      "int existing_next_levels(frame_info*, tailcall_cache*)",
      "retval >= -1");
    JUMPOUT(0x1119F8);
  }
  return result;
}
