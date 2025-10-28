int __fastcall sub_16F00(int a1, int a2, int a3, int a4)
{
  if ( a4 || a3 )
    return sub_16F80(a1);
  else
    return raise(8);
}
