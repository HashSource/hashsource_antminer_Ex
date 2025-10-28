__int64 __fastcall sub_1B41BC(int a1, unsigned int a2, _DWORD *a3)
{
  int v5; // r6
  __int64 result; // r0

  v5 = ((int (*)(void))loc_165BE0)();
  *a3 = sub_FA984(a2, 4, v5);
  result = sub_FA984(a2 + 4, 4, v5);
  a3[1] = result;
  return result;
}
