_DWORD *__fastcall add_eeprom_device(int a1)
{
  int v1; // r2

  v1 = dword_C25F9C++;
  dword_C25F5C[v1] = a1;
  return dword_C25F5C;
}
