void __fastcall sub_346AE0(int a1, int a2)
{
  _DWORD *v4; // r0
  _BYTE v5[8]; // [sp+0h] [bp-8h] BYREF

  sub_346740((int)v5, "");
  ITM_memcpyRnWt(a1, v5, 8);
  v4 = (_DWORD *)sub_346AD8(a1);
  sub_346A54(v4, a2);
  std::logic_error::~logic_error((std::logic_error *)v5);
}
