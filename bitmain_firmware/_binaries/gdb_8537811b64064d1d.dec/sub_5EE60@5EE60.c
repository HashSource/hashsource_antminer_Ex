void __fastcall sub_5EE60(int a1, char **a2, int a3)
{
  int *v5; // r0
  bool v6; // zf
  int v7; // r4
  int v8; // r0
  void *ptr; // [sp+0h] [bp-1Ch] BYREF
  char v10; // [sp+8h] [bp-14h] BYREF

  v5 = (int *)sub_243004(a1);
  v6 = a3 == 1;
  v7 = *v5;
  if ( !v6 )
    sub_94708("-var-info-type: Usage: NAME.");
  v8 = sub_26FBD4(*a2);
  sub_26FD94(&ptr, v8);
  sub_257610(v7, "type", ptr);
  if ( ptr != &v10 )
    sub_339E8C(ptr);
}
