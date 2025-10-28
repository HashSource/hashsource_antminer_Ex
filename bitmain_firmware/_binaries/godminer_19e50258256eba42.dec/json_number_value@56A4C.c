int __fastcall json_number_value(double a1)
{
  __int64 v1; // r0

  if ( LODWORD(a1) && *(_DWORD *)LODWORD(a1) == 3 )
  {
    v1 = json_integer_value(SLODWORD(a1));
    LODWORD(a1) = sub_345484(v1);
  }
  else if ( LODWORD(a1) && *(_DWORD *)LODWORD(a1) == 4 )
  {
    a1 = json_real_value((const json_t *)LODWORD(a1));
  }
  return LODWORD(a1);
}
