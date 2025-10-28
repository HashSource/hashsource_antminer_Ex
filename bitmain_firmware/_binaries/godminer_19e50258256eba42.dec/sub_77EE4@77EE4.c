int __fastcall sub_77EE4(int a1, int a2, int a3, int a4)
{
  int v5; // [sp+14h] [bp-8h]

  v5 = 0;
  if ( a3 >= a4 || dword_598AC0 > 120 )
    dword_598AC0 = 0;
  if ( a3 < a4 && dword_598AC0 && a2 )
  {
    v5 = 10 * (20 * (a4 - a3) / 100);
    ++dword_598AC0;
  }
  if ( a2 <= 0 && dword_598AC0 )
  {
    v5 = 20;
    ++dword_598AC0;
  }
  return v5;
}
