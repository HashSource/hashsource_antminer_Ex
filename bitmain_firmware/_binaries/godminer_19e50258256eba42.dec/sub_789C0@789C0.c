int __fastcall sub_789C0(int a1, int a2, int a3, int a4)
{
  int v5; // [sp+14h] [bp-8h]

  v5 = 0;
  if ( a3 >= a4 || dword_598CBC > 120 )
    dword_598CBC = 0;
  if ( a3 < a4 && dword_598CBC && a2 )
  {
    v5 = 10 * (20 * (a4 - a3) / 100);
    ++dword_598CBC;
  }
  if ( a2 <= 0 && dword_598CBC )
  {
    v5 = 20;
    ++dword_598CBC;
  }
  return v5;
}
