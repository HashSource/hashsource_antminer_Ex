int __fastcall get_chip_ft_correspond(_DWORD *a1, _DWORD *a2)
{
  if ( opt_algo == 11 )
    *a1 = &off_5994B4;
  else
    *a1 = &off_5995E0;
  *a2 = 25;
  return 0;
}
