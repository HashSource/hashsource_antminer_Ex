int __fastcall sub_5474C(int a1, unsigned __int8 *a2, int a3, int a4, int *a5)
{
  int v7; // r3
  int v9; // r0
  unsigned __int8 *v11; // [sp+Ch] [bp-8h] BYREF

  v7 = *a5;
  v11 = a2;
  v9 = sub_544F0(&v11, v7, "", 1, 1);
  return ((int (__fastcall *)(int, int, int, int, int *))loc_532E4)(a1, v9, a3, a4, a5);
}
