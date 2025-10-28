int __fastcall sub_20674C(int a1, int a2)
{
  int v4; // r0
  int v5; // r3

  v4 = sub_1B7278(a1);
  v5 = ((int (__fastcall *)(int, _DWORD, int))loc_166554)(v4, 0, a2);
  if ( !v5 )
    JUMPOUT(0x173508);
  return sub_173610(a1, a2, 0, v5);
}
