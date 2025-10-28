int __fastcall sub_19E98(int a1, int a2)
{
  int result; // r0

  result = sub_163EA0();
  if ( result )
    return sub_2594D8(a2, "arm_dump_tdep: Lowest pc = 0x%lx", *(_DWORD *)(result + 36));
  return result;
}
