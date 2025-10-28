int __fastcall sub_B8E04(int a1, int a2, int a3)
{
  int result; // r0
  int v7; // r4
  int v8; // r8
  int v9; // r0
  _BYTE v10[4]; // [sp+8h] [bp-1Ch] BYREF

  result = ((int (*)(void))loc_167390)();
  v7 = result;
  if ( result >= 0 )
  {
    result = ((int (__fastcall *)(int))loc_166EC4)(a1);
    if ( v7 < result )
    {
      ((void (__fastcall *)(int, int))loc_1DD448)(a1, v7);
      v8 = ((int (__fastcall *)(int, int))loc_1DD448)(a1, v7);
      v9 = ((int (__fastcall *)(int))loc_165BE0)(a1);
      sub_15C374(v10, v8, v9, 0, a3, 0);
      return ((int (__fastcall *)(int, int, _BYTE *))loc_1DE9F0)(a2, v7, v10);
    }
  }
  return result;
}
