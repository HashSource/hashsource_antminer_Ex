int __fastcall sub_5D458(int a1, _DWORD *a2, int a3)
{
  if ( !a3 )
    return sub_1BE5CC(0);
  if ( a3 != 1 )
    sub_94708("Usage: -info-os [INFOTYPE]");
  return sub_1BE5CC(*a2);
}
