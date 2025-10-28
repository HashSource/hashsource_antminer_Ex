int __fastcall sub_E9224(int a1)
{
  int result; // r0
  _DWORD s[5]; // [sp+8h] [bp-1Ch] BYREF
  int i; // [sp+1Ch] [bp-8h]

  memset(s, 0, 0x10u);
  s[2] = 131073;
  s[0] = 23130;
  BYTE1(s[3]) = 12;
  s[4] = "e 0c99d89e00007931 mixhash 4ca1c4ca4b70c5bf730abe62851882494ca1c4ca4b70c5bf730abe6285188249";
  set_misc_ctrl_dash(
    a1,
    (int)"e 0c99d89e00007931 mixhash 4ca1c4ca4b70c5bf730abe62851882494ca1c4ca4b70c5bf730abe6285188249");
  result = set_core_mode_dash(a1, 2u);
  for ( i = 0; i < *(_DWORD *)(a1 + 380); ++i )
  {
    LOBYTE(s[3]) = i;
    result = (*(int (__fastcall **)(int, _DWORD *))(a1 + 300))(a1, s);
  }
  return result;
}
