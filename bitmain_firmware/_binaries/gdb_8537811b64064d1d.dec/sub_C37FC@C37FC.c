int __fastcall sub_C37FC(int a1)
{
  int v2; // r1
  int v3; // r4
  int *v4; // r0
  int v5; // r1

  if ( !a1 )
    return 0;
  v3 = sub_15D5B4();
  if ( !v3 )
  {
    v3 = sub_15F734(0, v2);
    if ( !v3 )
      return 0;
  }
  while ( 1 )
  {
    v4 = sub_C32D0(v3, 0);
    v5 = a1;
    if ( v4 )
    {
      if ( sub_C2388((int)v4, a1) )
        break;
    }
    v3 = ((int (__fastcall *)(int, int))loc_15FAB0)(v3, v5);
    if ( !v3 )
      return 0;
  }
  return v3;
}
