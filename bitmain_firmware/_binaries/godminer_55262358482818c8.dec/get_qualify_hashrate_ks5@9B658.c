int __fastcall get_qualify_hashrate_ks5(int a1, double *a2)
{
  int v5; // r5
  double v6; // [sp+0h] [bp-8h] BYREF

  v6 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 132))(a1, &v6);
  if ( *(_BYTE *)(a1 + 304) != 75 )
    return 25;
  if ( *(_BYTE *)(a1 + 305) != 83 )
    return 25;
  if ( *(_BYTE *)(a1 + 306) != 51 )
    return 25;
  v5 = *(unsigned __int8 *)(a1 + 307);
  if ( *(_BYTE *)(a1 + 307) )
    return 25;
  api_get_eeprom_chip_bin(*(_DWORD *)(a1 + 240));
  api_get_eeprom_chip_ft(*(_DWORD *)(a1 + 240));
  *a2 = v6 * 0.980000019;
  return v5;
}
