bool __fastcall sub_15D52C(int a1)
{
  if ( !sub_22EB34(a1) || !sub_22EAE8() || !sub_22EA9C() )
    return 0;
  if ( sub_24B5C4() >= 0 )
    return 1;
  if ( sub_98FA0(&dword_4878EC, &dword_475848) || sub_23F1EC(dword_4878EC, dword_4878F0, dword_4878F4) )
    return 0;
  return ((int (__fastcall *)(int, int, int))loc_23F224)(dword_4878EC, dword_4878F0, dword_4878F4) == 0;
}
