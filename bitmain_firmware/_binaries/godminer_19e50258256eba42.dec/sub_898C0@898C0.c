int __fastcall sub_898C0(int a1, int a2, int a3, int a4)
{
  int v5; // [sp+14h] [bp-8h]

  v5 = 0;
  if ( a3 >= a4 || dword_5991B8 > 120 )
    dword_5991B8 = 0;
  if ( a3 < a4 && dword_5991B8 && a2 )
  {
    v5 = 10 * (20 * (a4 - a3) / 100);
    ++dword_5991B8;
  }
  if ( a2 <= 0 && dword_5991B8 )
  {
    v5 = 20;
    ++dword_5991B8;
  }
  return v5;
}
