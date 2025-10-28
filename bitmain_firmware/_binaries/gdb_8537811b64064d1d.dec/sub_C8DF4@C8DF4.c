int __fastcall sub_C8DF4(int a1, int a2)
{
  int v2; // r4
  const char *v4; // r7
  const char *v5; // r0
  int v6; // r2
  int v7; // r3
  int v9; // r0
  _DWORD v10[3]; // [sp+Ch] [bp-20h] BYREF
  char v11; // [sp+18h] [bp-14h] BYREF

  v2 = *(_DWORD *)(a1 + 28);
  sub_256788(v10);
  v10[1] = &v11;
  v10[0] = &off_3F294C;
  v10[2] = 0;
  v11 = 0;
  if ( !v2 )
  {
    sub_94728(
      (int)"breakpoint.c",
      9831,
      "%s: Assertion `%s' failed.",
      "void print_one_detail_ranged_breakpoint(const breakpoint*, ui_out*)",
      "bl");
    v9 = sub_2564A0(v10);
    sub_339024(v9);
  }
  sub_2573A8(a2, "\taddress range: ", &off_3F294C, *(_DWORD *)(v2 + 56));
  v4 = (const char *)sub_25ACDC(*(_DWORD *)(v2 + 44));
  v5 = (const char *)sub_25ACDC(*(_DWORD *)(v2 + 44));
  sub_2567B4(v10, "[%s, %s]", v4, v5);
  sub_257684(a2, "addr", v10);
  sub_2573A8(a2, &word_356660, v6, v7);
  return sub_2564A0(v10);
}
