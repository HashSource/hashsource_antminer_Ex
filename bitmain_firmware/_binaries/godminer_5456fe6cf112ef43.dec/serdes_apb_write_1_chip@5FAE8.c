int __fastcall serdes_apb_write_1_chip(int a1, char a2, unsigned __int8 a3, int a4, int a5)
{
  sub_5C26C(a1, a2, a3, 144, a5);
  sub_5C26C(a1, a2, a3, 145, a4 | 0x80000000);
  return 0;
}
