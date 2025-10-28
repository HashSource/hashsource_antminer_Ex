int __fastcall sub_187154(int a1)
{
  int result; // r0
  int v2; // r3

  result = sub_22EBE4(a1);
  LOWORD(v2) = (unsigned __int16)&dword_487930;
  if ( result )
  {
    HIWORD(v2) = (unsigned int)&dword_487930 >> 16;
    *(_DWORD *)(v2 + 0x5C) = *(_DWORD *)(v2 + 0x20);
    sub_94708("Cannot change this setting while the inferior is running.");
  }
  HIWORD(v2) = (unsigned int)&dword_487930 >> 16;
  *(_DWORD *)(v2 + 0x20) = *(_DWORD *)(v2 + 0x5C);
  return result;
}
