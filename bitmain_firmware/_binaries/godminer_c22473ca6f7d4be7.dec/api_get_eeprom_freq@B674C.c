int __fastcall api_get_eeprom_freq(int a1)
{
  int v1; // r3
  int v3; // [sp+4h] [bp-8h] BYREF

  LOWORD(v1) = -15012;
  HIWORD(v1) = (unsigned int)&unk_16B370 >> 16;
  v3 = 0;
  eeprom_get_freq(*(_DWORD *)(v1 + 4 * a1 + 8), &v3);
  return v3;
}
