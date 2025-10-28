void __fastcall __noreturn sub_FA738(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  void *v6; // r0
  void *ptr; // [sp+0h] [bp-1Ch] BYREF
  char v8; // [sp+8h] [bp-14h] BYREF

  v4 = sub_16F67C(a1);
  sub_FA684((char **)&ptr, a1, v4, a2);
  if ( a1 == -1 )
  {
    v5 = 8;
  }
  else if ( a1 == 2 )
  {
    v5 = 9;
  }
  else
  {
    v5 = 0;
  }
  sub_92F8C(v5, "%s", (const char *)ptr);
  v6 = ptr;
  if ( ptr != &v8 )
    sub_339E8C(ptr);
  sub_339024(v6);
}
