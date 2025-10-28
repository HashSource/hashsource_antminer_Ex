int __fastcall sub_280F34(int a1, int a2)
{
  if ( !dword_48AB9C )
  {
    dword_48AB9C = 1;
    sub_292720();
  }
  if ( a1 > 0 )
  {
    sub_295DE4(a1, a2);
    dword_48ABA8 += a1;
  }
  return 0;
}
