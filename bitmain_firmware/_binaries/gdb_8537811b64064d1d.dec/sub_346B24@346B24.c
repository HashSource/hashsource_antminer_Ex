void __fastcall sub_346B24(int a1, int a2)
{
  _DWORD *v4; // r6
  int v5; // r0
  _BYTE v6[12]; // [sp+0h] [bp-Ch] BYREF

  sub_346740((int)v6, "");
  ITM_memcpyRnWt(a1, v6, 8);
  v4 = (_DWORD *)sub_346AD8(a1);
  v5 = sub_346AA8(a2);
  sub_346A54(v4, v5);
  std::logic_error::~logic_error((std::logic_error *)v6);
}
