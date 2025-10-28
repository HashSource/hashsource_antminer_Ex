int __fastcall json_number_value(double a1)
{
  if ( LODWORD(a1) && *(_DWORD *)LODWORD(a1) == 3 )
    a1 = sub_122014(*(_DWORD *)(LODWORD(a1) + 8), *(_DWORD *)(LODWORD(a1) + 12));
  return LODWORD(a1);
}
