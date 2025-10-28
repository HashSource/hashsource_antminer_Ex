int __fastcall set_sensor_extern_mode_ckb(int a1)
{
  if ( !sub_D2A3C(a1) )
    *(_DWORD *)(a1 + 552) = 1;
  return 0;
}
