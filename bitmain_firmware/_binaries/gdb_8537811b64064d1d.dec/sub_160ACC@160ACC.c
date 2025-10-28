int __fastcall sub_160ACC(int a1, int a2, int a3)
{
  void *v6; // r7
  int v7; // r4

  ((void (__fastcall *)(int, int))loc_1606DC)(a1, a3);
  v6 = sub_92E50();
  v7 = (*(int (__fastcall **)(int, int, int))(a3 + 20))(a3, a1, a2);
  sub_92E68((int)v6);
  if ( v7 )
    return 1;
  ((void (__fastcall *)(int))loc_160620)(a1);
  return 0;
}
