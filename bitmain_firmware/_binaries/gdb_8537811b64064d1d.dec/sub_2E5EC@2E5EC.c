int __fastcall sub_2E5EC(int a1, int a2, int a3, int a4)
{
  int v7; // r0
  int v8; // r7
  int v9; // r0
  __int64 v10; // r0
  int v11; // r3

  v7 = sub_15ECDC(a2);
  v8 = ((int (__fastcall *)(int))loc_165BE0)(v7);
  v9 = sub_15ECD4(a2, 13);
  LODWORD(v10) = sub_FA984(v9, 4, v8);
  if ( v10 == 1522778970 )
    v11 = 32;
  else
    v11 = 12;
  return sub_2E4E8(a2, a3, a4, v11);
}
