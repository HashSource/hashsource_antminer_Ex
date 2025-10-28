int __fastcall set_sensor_extern_mode_hns(int a1)
{
  if ( !sub_15A04C(a1) )
    *(_DWORD *)(a1 + 552) = 1;
  return 0;
}
