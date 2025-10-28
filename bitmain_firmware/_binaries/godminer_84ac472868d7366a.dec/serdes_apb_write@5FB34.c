int __fastcall serdes_apb_write(int a1, int a2, unsigned __int8 a3, int a4, int a5)
{
  sub_5C2A0(a1, a3, 144, a5);
  sub_5C2A0(a1, a3, 145, a4 | 0x80000000);
  return 0;
}
