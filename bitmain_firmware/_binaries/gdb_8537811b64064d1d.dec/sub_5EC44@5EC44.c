void __fastcall sub_5EC44(int a1, int a2, int a3)
{
  int *v5; // r0
  bool v6; // zf
  int v7; // r4
  int v8; // r6
  int v9; // r5
  void *ptr; // [sp+0h] [bp-18h] BYREF
  char v11; // [sp+8h] [bp-10h] BYREF

  v5 = (int *)sub_243004(a1);
  v6 = a3 == 2;
  v7 = *v5;
  if ( !v6 )
    sub_94708("-var-set-format: Usage: NAME FORMAT.");
  v8 = sub_26FBD4(*(char **)a2);
  v9 = sub_5E5FC(*(const char **)(a2 + 4));
  sub_2714E8(v8, v9);
  sub_257610(v7, "format", off_46DEB8[v9]);
  sub_271660(&ptr, v8);
  sub_257610(v7, "value", ptr);
  if ( ptr != &v11 )
    sub_339E8C(ptr);
}
