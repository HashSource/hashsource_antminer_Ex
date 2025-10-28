void __fastcall sub_346DD0(int a1, int a2)
{
  _DWORD *v4; // r0
  _DWORD v5[2]; // [sp+0h] [bp-8h] BYREF

  sub_3467E0(v5, "");
  ITM_memcpyRnWt(a1, v5, 8);
  v4 = (_DWORD *)sub_346AD8(a1);
  sub_346A54(v4, a2);
  std::out_of_range::~out_of_range((std::out_of_range *)v5);
}
