void __fastcall sub_346ECC(int a1, int a2)
{
  _DWORD *v4; // r6
  int v5; // r0
  _BYTE v6[12]; // [sp+0h] [bp-Ch] BYREF

  sub_346804((int)v6, "");
  ITM_memcpyRnWt(a1, v6, 8);
  v4 = (_DWORD *)sub_346ADC(a1);
  v5 = sub_346AA8(a2);
  sub_346A54(v4, v5);
  std::runtime_error::~runtime_error((std::runtime_error *)v6);
}
