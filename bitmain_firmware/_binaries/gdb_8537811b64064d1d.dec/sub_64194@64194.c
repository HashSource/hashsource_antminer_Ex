int __fastcall sub_64194(int a1, _DWORD *a2, unsigned int a3)
{
  _DWORD *v4; // r0

  if ( a3 > 1 )
    sub_94708("Invalid MI command");
  v4 = (_DWORD *)sub_243004(a1);
  return sub_241674(*v4, *a2, -1);
}
