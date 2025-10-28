int __fastcall sub_1B404(int a1, int a2, int a3, int a4)
{
  int v7; // r6
  int v9; // r7
  char s[8]; // [sp+4h] [bp-8h] BYREF

  sub_93198(s, 4, "d%d", 2 * a3);
  strlen(s);
  v7 = sub_257EBC(a1, s);
  if ( ((int (__fastcall *)(int))loc_165BE0)(a1) )
    v9 = a4 + 8;
  else
    v9 = a4;
  ((void (__fastcall *)(int, int))loc_1DE334)(a2, v7);
  return ((int (__fastcall *)(int, int, int))loc_1DE334)(a2, v7 + 1, v9);
}
