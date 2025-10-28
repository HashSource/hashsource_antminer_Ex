int __fastcall sub_1852E4(int a1)
{
  __int64 v2; // r0

  if ( !dword_48794C )
    return sub_25A440(a1, "Forward.\n");
  if ( dword_48794C == 1 )
    return sub_25A440(a1, "Reverse.\n");
  v2 = sub_94728((int)"infrun.c", 9128, "bogus execution_direction value: %d", dword_48794C);
  return sub_185334(v2, HIDWORD(v2));
}
