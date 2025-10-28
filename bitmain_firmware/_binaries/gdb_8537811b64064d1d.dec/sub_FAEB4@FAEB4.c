int __fastcall sub_FAEB4(int a1)
{
  int result; // r0

  if ( !dword_47ACBC )
    return (*(int (**)(void))(*(_DWORD *)a1 + 408))();
  if ( !((int (*)(void))loc_16C3D4)() )
    return (*(int (**)(void))(*(_DWORD *)a1 + 408))();
  result = ((int (__fastcall *)(int, int, int))loc_16C420)(dword_47ACBC, a1, dword_47ACB8);
  if ( !result )
    return (*(int (**)(void))(*(_DWORD *)a1 + 408))();
  return result;
}
