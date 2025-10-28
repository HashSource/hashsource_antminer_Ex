int __fastcall sub_7A76C(int a1, int a2, int a3, int a4)
{
  int v5; // [sp+14h] [bp-8h]

  v5 = 0;
  if ( a3 >= a4 || dword_598FB4 > 120 )
    dword_598FB4 = 0;
  if ( a3 < a4 && dword_598FB4 && a2 )
  {
    v5 = 10 * (20 * (a4 - a3 + 10) / 100);
    ++dword_598FB4;
  }
  if ( a2 <= 0 && dword_598FB4 )
  {
    v5 = 20;
    ++dword_598FB4;
  }
  return v5;
}
