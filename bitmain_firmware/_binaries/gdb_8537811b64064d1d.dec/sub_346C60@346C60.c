void __fastcall sub_346C60(int a1, int a2)
{
  _DWORD *v4; // r0
  _DWORD v5[2]; // [sp+0h] [bp-8h] BYREF

  sub_346798(v5, "");
  ITM_memcpyRnWt(a1, v5, 8);
  v4 = (_DWORD *)sub_346AD8(a1);
  sub_346A54(v4, a2);
  std::invalid_argument::~invalid_argument((std::invalid_argument *)v5);
}
