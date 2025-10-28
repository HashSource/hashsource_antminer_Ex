int __fastcall get_mac_hal(int a1)
{
  if ( a1 )
    return sub_ADC80(a1);
  else
    return -1;
}
