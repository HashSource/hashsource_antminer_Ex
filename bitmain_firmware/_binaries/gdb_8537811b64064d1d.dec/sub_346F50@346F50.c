void __fastcall sub_346F50(int a1, int a2)
{
  _DWORD *v4; // r0
  _DWORD v5[2]; // [sp+0h] [bp-8h] BYREF

  sub_346838(v5, "");
  ITM_memcpyRnWt(a1, v5, 8);
  v4 = (_DWORD *)sub_346ADC(a1);
  sub_346A54(v4, a2);
  std::range_error::~range_error((std::range_error *)v5);
}
