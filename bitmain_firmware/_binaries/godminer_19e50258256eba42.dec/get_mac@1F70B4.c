int __fastcall get_mac(int a1)
{
  if ( a1 )
    return sub_1F6E1C("eth0", a1);
  else
    return -1;
}
