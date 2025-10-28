void __fastcall sub_346CA4(int a1, int a2)
{
  _DWORD *v4; // r6
  int v5; // r0
  _DWORD v6[3]; // [sp+0h] [bp-Ch] BYREF

  sub_346798(v6, "");
  ITM_memcpyRnWt(a1, v6, 8);
  v4 = (_DWORD *)sub_346AD8(a1);
  v5 = sub_346AA8(a2);
  sub_346A54(v4, v5);
  std::invalid_argument::~invalid_argument((std::invalid_argument *)v6);
}
