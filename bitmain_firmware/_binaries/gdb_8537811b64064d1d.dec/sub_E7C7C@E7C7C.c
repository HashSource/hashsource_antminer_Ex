void __fastcall __noreturn sub_E7C7C(int a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r0

  v6 = sub_170068(a2);
  v7 = sub_E7B1C(a2, v6, 0);
  switch ( v7 )
  {
    case 6:
      sub_25A524(117, a3);
      break;
    case 7:
      sub_25A524(85, a3);
      break;
    case 5:
      sub_25A524(76, a3);
      break;
  }
  sub_25A524(39, a3);
  (*((void (__fastcall **)(int, int, int, int))off_46D5A4[0] + 14))(a1, a2, a3, 39);
}
