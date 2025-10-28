int __fastcall get_chip_ft_correspond(char ***a1, _DWORD *a2)
{
  char **v2; // r3

  if ( opt_algo == 11 )
    v2 = &off_171464;
  else
    v2 = &off_171590;
  *a1 = v2;
  *a2 = 25;
  return 0;
}
