int __fastcall set_sensor_extern_mode_ltc(int a1)
{
  if ( !sub_19EF28(a1) )
    *(_DWORD *)(a1 + 552) = 1;
  return 0;
}
