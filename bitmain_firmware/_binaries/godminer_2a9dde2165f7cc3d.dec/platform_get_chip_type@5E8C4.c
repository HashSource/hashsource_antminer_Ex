int __fastcall platform_get_chip_type(int a1)
{
  return *(_DWORD *)(dword_18EC80 + 120 * a1 + 24);
}
