void __fastcall sub_5F1BC(int a1, int a2, int a3)
{
  int v5; // r7
  int v6; // r5
  int v7; // r1
  int v8; // r6
  void *ptr; // [sp+0h] [bp-1Ch] BYREF
  char v10; // [sp+8h] [bp-14h] BYREF

  v5 = *(_DWORD *)sub_243004(a1);
  if ( a3 != 2 )
    sub_94708("-var-assign: Usage: NAME EXPRESSION.");
  v6 = sub_26FBD4(*(char **)a2);
  if ( !sub_271678() )
    sub_94708("-var-assign: Variable object is not editable");
  v7 = *(_DWORD *)(a2 + 4);
  v8 = dword_474854;
  dword_474854 = 1;
  if ( !sub_271720(v6, v7) )
    sub_94708("-var-assign: Could not assign expression to variable object");
  sub_271660(&ptr, v6);
  sub_257610(v5, "value", ptr);
  if ( ptr != &v10 )
    sub_339E8C(ptr);
  dword_474854 = v8;
}
