void __fastcall sub_5E758(int a1, int a2, int a3)
{
  int v6; // r5
  int v7; // r0
  int v8; // r0
  int v9; // r2
  void *ptr; // [sp+4h] [bp-4h] BYREF
  void *v11[2]; // [sp+8h] [bp+0h] BYREF
  _BYTE v12[16]; // [sp+10h] [bp+8h] BYREF

  v6 = *(_DWORD *)sub_243004(a1);
  v7 = sub_26FC80(a1);
  sub_257610(v6, "name", v7);
  if ( a3 )
  {
    sub_26FC88(v11, a1);
    sub_257610(v6, "exp", v11[0]);
    if ( v11[0] != v12 )
      sub_339E8C(v11[0]);
  }
  v8 = sub_271FE4(a1);
  sub_25752C(v6, "numchild", v8);
  if ( sub_5E6EC(a1, a2) )
  {
    sub_271660(v11, a1);
    sub_257610(v6, "value", v11[0]);
    if ( v11[0] != v12 )
      sub_339E8C(v11[0]);
  }
  sub_26FD94(v11, a1);
  if ( v11[1] )
    sub_257610(v6, "type", v11[0]);
  v9 = sub_26FD00(a1);
  if ( v9 > 0 )
    sub_25752C(v6, "thread-id", v9);
  if ( sub_26FD30(a1) )
    sub_25752C(v6, "frozen", 1);
  sub_26FCB0(&ptr, a1);
  if ( ptr )
    sub_257610(v6, "displayhint", ptr);
  if ( sub_26FFB4(a1) )
    sub_25752C(v6, "dynamic", 1);
  if ( ptr )
    free(ptr);
  if ( v11[0] != v12 )
    sub_339E8C(v11[0]);
}
