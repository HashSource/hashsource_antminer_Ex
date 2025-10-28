int __fastcall api_get_eeprom_fmt_version(int a1)
{
  unsigned __int8 v2; // [sp+7h] [bp-5h] BYREF

  v2 = 0;
  sub_B5FA8(dword_16D578[a1 + 2], &v2);
  return v2;
}
