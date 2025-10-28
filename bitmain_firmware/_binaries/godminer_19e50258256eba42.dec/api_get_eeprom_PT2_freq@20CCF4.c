int __fastcall api_get_eeprom_PT2_freq(int a1)
{
  int v2; // [sp+Ch] [bp-8h] BYREF

  v2 = 0;
  eeprom_get_PT2_freq(dword_C25F5C[a1], &v2);
  return v2;
}
