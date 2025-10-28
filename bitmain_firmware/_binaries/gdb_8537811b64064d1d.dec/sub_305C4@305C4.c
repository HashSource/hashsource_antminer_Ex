bool __fastcall sub_305C4(int a1, const char *a2)
{
  return !strcmp(*(const char **)(a1 + 4), a2) && (*(_DWORD *)(*(_DWORD *)(a1 + 16) + 20) & 0x30) != 0;
}
