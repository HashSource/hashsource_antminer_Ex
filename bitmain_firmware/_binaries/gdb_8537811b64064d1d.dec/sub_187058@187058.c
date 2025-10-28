int __fastcall sub_187058(int a1, _DWORD *a2)
{
  int result; // r0

  sub_C37E0(dword_4878F8, a2 + 11, a2 + 9, a2 + 10);
  a2[9] += ((int (__fastcall *)(int))loc_169700)(a1);
  result = ((int (__fastcall *)(int))loc_168F2C)(a1);
  if ( result )
  {
    result = ((int (__fastcall *)(int, _DWORD))loc_168F78)(a1, a2[9]);
    a2[9] = result;
  }
  a2[8] = 1;
  return result;
}
