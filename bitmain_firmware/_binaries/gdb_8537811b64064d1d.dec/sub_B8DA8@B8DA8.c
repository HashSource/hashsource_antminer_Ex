char *__fastcall sub_B8DA8(int a1)
{
  int v2; // r4
  int v3; // r0
  char *v4; // r2

  v2 = ((int (*)(void))loc_16661C)();
  v3 = ((int (__fastcall *)(int))loc_16661C)(a1);
  v4 = " -mcmodel=large";
  if ( v3 != 64 )
    v4 = "";
  return sub_93168("-m%d%s", v2, v4);
}
