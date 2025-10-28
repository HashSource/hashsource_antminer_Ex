void __fastcall __noreturn sub_5ED04(int a1, int a2, int a3)
{
  int v4; // r0

  if ( a3 == 2 )
  {
    v4 = sub_26FBD4(*(char **)a2);
    if ( v4 )
      sub_26FFE8(v4, *(_DWORD *)(a2 + 4));
    sub_94708("Variable object not found");
  }
  sub_94708("Usage: NAME VISUALIZER_FUNCTION.");
}
