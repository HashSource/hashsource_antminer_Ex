void __fastcall sub_347008(int a1, int a2)
{
  _DWORD *v4; // r0
  _DWORD v5[2]; // [sp+0h] [bp-8h] BYREF

  sub_34685C(v5, "");
  ITM_memcpyRnWt(a1, v5, 8);
  v4 = (_DWORD *)sub_346ADC(a1);
  sub_346A54(v4, a2);
  std::overflow_error::~overflow_error((std::overflow_error *)v5);
}
