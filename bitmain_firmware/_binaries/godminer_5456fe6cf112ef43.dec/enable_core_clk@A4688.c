int __fastcall enable_core_clk(int a1)
{
  _DWORD v2[5]; // [sp+0h] [bp-14h] BYREF

  v2[1] = 0;
  v2[3] = 0;
  v2[2] = 1441793;
  v2[0] = -2147483647;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v2);
}
