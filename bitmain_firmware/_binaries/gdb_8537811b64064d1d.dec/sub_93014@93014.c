__int64 __fastcall sub_93014(int a1, int a2)
{
  int v4; // r0
  __int64 v5; // [sp+0h] [bp-8h] BYREF

  if ( ((int (__fastcall *)(int, int, __int64 *))loc_1DFA24)(a1, a2, &v5) != -1 )
    return v5;
  v4 = sub_92F8C(9, "Register %d is not available", a2);
  return sub_93050(v4);
}
