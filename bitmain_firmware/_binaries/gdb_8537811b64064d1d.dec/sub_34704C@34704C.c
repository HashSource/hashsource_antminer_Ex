void __fastcall sub_34704C(int a1, int a2)
{
  _DWORD *v4; // r6
  int v5; // r0
  _DWORD v6[3]; // [sp+0h] [bp-Ch] BYREF

  sub_34685C(v6, "");
  ITM_memcpyRnWt(a1, v6, 8);
  v4 = (_DWORD *)sub_346ADC(a1);
  v5 = sub_346AA8(a2);
  sub_346A54(v4, v5);
  std::overflow_error::~overflow_error((std::overflow_error *)v6);
}
