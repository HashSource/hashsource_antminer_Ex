_DWORD *__fastcall sub_1B0C90(_DWORD *a1, int a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(a2 + 36);
  if ( v2 && sub_2AD7D4(v2, ".gnu_debugdata") )
    sub_946D8("Cannot parse .gnu_debugdata section; LZMA support was disabled at compile time");
  *a1 = 0;
  return a1;
}
