int __fastcall sub_1D45D4(int a1, int a2, int a3, int a4)
{
  int v4; // r0

  v4 = sub_23E430(a2, a3, a4);
  if ( !v4 )
    sub_94708("No thread.");
  if ( *(_DWORD *)(v4 + 252) )
    return 2;
  else
    return 0;
}
